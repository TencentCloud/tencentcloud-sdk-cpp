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

#include <tencentcloud/adp/v20260520/model/SearchResourceStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SearchResourceStatusInfo::SearchResourceStatusInfo() :
    m_resourceStatusHasBeenSet(false)
{
}

CoreInternalOutcome SearchResourceStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResourceStatusInfo.ResourceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = value["ResourceStatus"].GetInt64();
        m_resourceStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchResourceStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceStatus, allocator);
    }

}


int64_t SearchResourceStatusInfo::GetResourceStatus() const
{
    return m_resourceStatus;
}

void SearchResourceStatusInfo::SetResourceStatus(const int64_t& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool SearchResourceStatusInfo::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

