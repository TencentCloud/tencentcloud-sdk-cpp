/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/vpc/v20170312/model/DeleteVpcPeeringConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DeleteVpcPeeringConnectionRequest::DeleteVpcPeeringConnectionRequest() :
    m_peeringConnectionIdHasBeenSet(false)
{
}

string DeleteVpcPeeringConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_peeringConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeeringConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peeringConnectionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteVpcPeeringConnectionRequest::GetPeeringConnectionId() const
{
    return m_peeringConnectionId;
}

void DeleteVpcPeeringConnectionRequest::SetPeeringConnectionId(const string& _peeringConnectionId)
{
    m_peeringConnectionId = _peeringConnectionId;
    m_peeringConnectionIdHasBeenSet = true;
}

bool DeleteVpcPeeringConnectionRequest::PeeringConnectionIdHasBeenSet() const
{
    return m_peeringConnectionIdHasBeenSet;
}


