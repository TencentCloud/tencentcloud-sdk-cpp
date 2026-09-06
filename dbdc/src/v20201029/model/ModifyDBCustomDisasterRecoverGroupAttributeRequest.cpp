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

#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomDisasterRecoverGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

ModifyDBCustomDisasterRecoverGroupAttributeRequest::ModifyDBCustomDisasterRecoverGroupAttributeRequest() :
    m_disasterRecoverGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_affinityHasBeenSet(false)
{
}

string ModifyDBCustomDisasterRecoverGroupAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_disasterRecoverGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_disasterRecoverGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_affinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Affinity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_affinity, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBCustomDisasterRecoverGroupAttributeRequest::GetDisasterRecoverGroupId() const
{
    return m_disasterRecoverGroupId;
}

void ModifyDBCustomDisasterRecoverGroupAttributeRequest::SetDisasterRecoverGroupId(const string& _disasterRecoverGroupId)
{
    m_disasterRecoverGroupId = _disasterRecoverGroupId;
    m_disasterRecoverGroupIdHasBeenSet = true;
}

bool ModifyDBCustomDisasterRecoverGroupAttributeRequest::DisasterRecoverGroupIdHasBeenSet() const
{
    return m_disasterRecoverGroupIdHasBeenSet;
}

string ModifyDBCustomDisasterRecoverGroupAttributeRequest::GetName() const
{
    return m_name;
}

void ModifyDBCustomDisasterRecoverGroupAttributeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDBCustomDisasterRecoverGroupAttributeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyDBCustomDisasterRecoverGroupAttributeRequest::GetAffinity() const
{
    return m_affinity;
}

void ModifyDBCustomDisasterRecoverGroupAttributeRequest::SetAffinity(const int64_t& _affinity)
{
    m_affinity = _affinity;
    m_affinityHasBeenSet = true;
}

bool ModifyDBCustomDisasterRecoverGroupAttributeRequest::AffinityHasBeenSet() const
{
    return m_affinityHasBeenSet;
}


