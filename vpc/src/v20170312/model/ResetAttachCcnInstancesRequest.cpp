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

#include <tencentcloud/vpc/v20170312/model/ResetAttachCcnInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ResetAttachCcnInstancesRequest::ResetAttachCcnInstancesRequest() :
    m_ccnIdHasBeenSet(false),
    m_ccnUinHasBeenSet(false),
    m_instancesHasBeenSet(false)
{
}

string ResetAttachCcnInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnUin.c_str(), allocator).Move(), allocator);
    }

    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
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


string ResetAttachCcnInstancesRequest::GetCcnId() const
{
    return m_ccnId;
}

void ResetAttachCcnInstancesRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool ResetAttachCcnInstancesRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string ResetAttachCcnInstancesRequest::GetCcnUin() const
{
    return m_ccnUin;
}

void ResetAttachCcnInstancesRequest::SetCcnUin(const string& _ccnUin)
{
    m_ccnUin = _ccnUin;
    m_ccnUinHasBeenSet = true;
}

bool ResetAttachCcnInstancesRequest::CcnUinHasBeenSet() const
{
    return m_ccnUinHasBeenSet;
}

vector<CcnInstance> ResetAttachCcnInstancesRequest::GetInstances() const
{
    return m_instances;
}

void ResetAttachCcnInstancesRequest::SetInstances(const vector<CcnInstance>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool ResetAttachCcnInstancesRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}


