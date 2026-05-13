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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyCount::DspmIdentifyCount() :
    m_identifyTypeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCount.IdentifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetInt64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyCount.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyType, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


int64_t DspmIdentifyCount::GetIdentifyType() const
{
    return m_identifyType;
}

void DspmIdentifyCount::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool DspmIdentifyCount::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

int64_t DspmIdentifyCount::GetCount() const
{
    return m_count;
}

void DspmIdentifyCount::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DspmIdentifyCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

