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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyAssetStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyAssetStatistic::DspmIdentifyAssetStatistic() :
    m_managerCountHasBeenSet(false),
    m_memberCountHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyAssetStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ManagerCount") && !value["ManagerCount"].IsNull())
    {
        if (!value["ManagerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyAssetStatistic.ManagerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_managerCount = value["ManagerCount"].GetInt64();
        m_managerCountHasBeenSet = true;
    }

    if (value.HasMember("MemberCount") && !value["MemberCount"].IsNull())
    {
        if (!value["MemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyAssetStatistic.MemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberCount = value["MemberCount"].GetInt64();
        m_memberCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyAssetStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_managerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_managerCount, allocator);
    }

    if (m_memberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberCount, allocator);
    }

}


int64_t DspmIdentifyAssetStatistic::GetManagerCount() const
{
    return m_managerCount;
}

void DspmIdentifyAssetStatistic::SetManagerCount(const int64_t& _managerCount)
{
    m_managerCount = _managerCount;
    m_managerCountHasBeenSet = true;
}

bool DspmIdentifyAssetStatistic::ManagerCountHasBeenSet() const
{
    return m_managerCountHasBeenSet;
}

int64_t DspmIdentifyAssetStatistic::GetMemberCount() const
{
    return m_memberCount;
}

void DspmIdentifyAssetStatistic::SetMemberCount(const int64_t& _memberCount)
{
    m_memberCount = _memberCount;
    m_memberCountHasBeenSet = true;
}

bool DspmIdentifyAssetStatistic::MemberCountHasBeenSet() const
{
    return m_memberCountHasBeenSet;
}

