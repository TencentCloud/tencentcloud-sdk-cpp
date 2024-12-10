/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/tse/v20201207/model/DeleteNativeGatewayServiceSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DeleteNativeGatewayServiceSourceRequest::DeleteNativeGatewayServiceSourceRequest() :
    m_gatewayIDHasBeenSet(false),
    m_sourceIDHasBeenSet(false)
{
}

string DeleteNativeGatewayServiceSourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayID.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteNativeGatewayServiceSourceRequest::GetGatewayID() const
{
    return m_gatewayID;
}

void DeleteNativeGatewayServiceSourceRequest::SetGatewayID(const string& _gatewayID)
{
    m_gatewayID = _gatewayID;
    m_gatewayIDHasBeenSet = true;
}

bool DeleteNativeGatewayServiceSourceRequest::GatewayIDHasBeenSet() const
{
    return m_gatewayIDHasBeenSet;
}

string DeleteNativeGatewayServiceSourceRequest::GetSourceID() const
{
    return m_sourceID;
}

void DeleteNativeGatewayServiceSourceRequest::SetSourceID(const string& _sourceID)
{
    m_sourceID = _sourceID;
    m_sourceIDHasBeenSet = true;
}

bool DeleteNativeGatewayServiceSourceRequest::SourceIDHasBeenSet() const
{
    return m_sourceIDHasBeenSet;
}


