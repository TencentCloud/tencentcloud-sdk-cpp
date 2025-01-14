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

#include <tencentcloud/mps/v20190612/model/DisassociateSecurityGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DisassociateSecurityGroupRequest::DisassociateSecurityGroupRequest() :
    m_idHasBeenSet(false),
    m_unattachInOutInfosHasBeenSet(false)
{
}

string DisassociateSecurityGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_unattachInOutInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnattachInOutInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unattachInOutInfos.begin(); itr != m_unattachInOutInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DisassociateSecurityGroupRequest::GetId() const
{
    return m_id;
}

void DisassociateSecurityGroupRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisassociateSecurityGroupRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<UnattachSecurityGroupInOutInfo> DisassociateSecurityGroupRequest::GetUnattachInOutInfos() const
{
    return m_unattachInOutInfos;
}

void DisassociateSecurityGroupRequest::SetUnattachInOutInfos(const vector<UnattachSecurityGroupInOutInfo>& _unattachInOutInfos)
{
    m_unattachInOutInfos = _unattachInOutInfos;
    m_unattachInOutInfosHasBeenSet = true;
}

bool DisassociateSecurityGroupRequest::UnattachInOutInfosHasBeenSet() const
{
    return m_unattachInOutInfosHasBeenSet;
}


