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

#include <tencentcloud/csip/v20221121/model/EdrAlertCategoryCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EdrAlertCategoryCount::EdrAlertCategoryCount() :
    m_alertCategoryHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome EdrAlertCategoryCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlertCategory") && !value["AlertCategory"].IsNull())
    {
        if (!value["AlertCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertCategoryCount.AlertCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertCategory = string(value["AlertCategory"].GetString());
        m_alertCategoryHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertCategoryCount.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdrAlertCategoryCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alertCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string EdrAlertCategoryCount::GetAlertCategory() const
{
    return m_alertCategory;
}

void EdrAlertCategoryCount::SetAlertCategory(const string& _alertCategory)
{
    m_alertCategory = _alertCategory;
    m_alertCategoryHasBeenSet = true;
}

bool EdrAlertCategoryCount::AlertCategoryHasBeenSet() const
{
    return m_alertCategoryHasBeenSet;
}

int64_t EdrAlertCategoryCount::GetCount() const
{
    return m_count;
}

void EdrAlertCategoryCount::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool EdrAlertCategoryCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

