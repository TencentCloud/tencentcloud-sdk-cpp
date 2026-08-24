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

#include <tencentcloud/bdrc/v20260330/model/DrilledResourceStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DrilledResourceStatus::DrilledResourceStatus() :
    m_resourceStatusHasBeenSet(false),
    m_resourceCountHasBeenSet(false)
{
}

CoreInternalOutcome DrilledResourceStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrilledResourceStatus.ResourceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = string(value["ResourceStatus"].GetString());
        m_resourceStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceCount") && !value["ResourceCount"].IsNull())
    {
        if (!value["ResourceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DrilledResourceStatus.ResourceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCount = value["ResourceCount"].GetUint64();
        m_resourceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrilledResourceStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceCount, allocator);
    }

}


string DrilledResourceStatus::GetResourceStatus() const
{
    return m_resourceStatus;
}

void DrilledResourceStatus::SetResourceStatus(const string& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool DrilledResourceStatus::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

uint64_t DrilledResourceStatus::GetResourceCount() const
{
    return m_resourceCount;
}

void DrilledResourceStatus::SetResourceCount(const uint64_t& _resourceCount)
{
    m_resourceCount = _resourceCount;
    m_resourceCountHasBeenSet = true;
}

bool DrilledResourceStatus::ResourceCountHasBeenSet() const
{
    return m_resourceCountHasBeenSet;
}

