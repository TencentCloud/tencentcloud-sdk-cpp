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

#include <tencentcloud/mrs/v20200910/model/EyeItemsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

EyeItemsInfo::EyeItemsInfo() :
    m_eyeItemsHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome EyeItemsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EyeItems") && !value["EyeItems"].IsNull())
    {
        if (!value["EyeItems"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeItemsInfo.EyeItems` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eyeItems.Deserialize(value["EyeItems"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyeItemsHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EyeItemsInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EyeItemsInfo.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EyeItemsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eyeItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyeItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eyeItems.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


EyeItem EyeItemsInfo::GetEyeItems() const
{
    return m_eyeItems;
}

void EyeItemsInfo::SetEyeItems(const EyeItem& _eyeItems)
{
    m_eyeItems = _eyeItems;
    m_eyeItemsHasBeenSet = true;
}

bool EyeItemsInfo::EyeItemsHasBeenSet() const
{
    return m_eyeItemsHasBeenSet;
}

string EyeItemsInfo::GetVersion() const
{
    return m_version;
}

void EyeItemsInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool EyeItemsInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t EyeItemsInfo::GetPage() const
{
    return m_page;
}

void EyeItemsInfo::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool EyeItemsInfo::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

