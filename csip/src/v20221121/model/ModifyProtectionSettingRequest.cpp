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

#include <tencentcloud/csip/v20221121/model/ModifyProtectionSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyProtectionSettingRequest::ModifyProtectionSettingRequest() :
    m_assetTypeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_isALLHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ModifyProtectionSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_config.begin(); itr != m_config.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isALLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsALL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isALL, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
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


string ModifyProtectionSettingRequest::GetAssetType() const
{
    return m_assetType;
}

void ModifyProtectionSettingRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ModifyProtectionSettingRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

vector<ModifyProtectionSetting> ModifyProtectionSettingRequest::GetConfig() const
{
    return m_config;
}

void ModifyProtectionSettingRequest::SetConfig(const vector<ModifyProtectionSetting>& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyProtectionSettingRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool ModifyProtectionSettingRequest::GetIsALL() const
{
    return m_isALL;
}

void ModifyProtectionSettingRequest::SetIsALL(const bool& _isALL)
{
    m_isALL = _isALL;
    m_isALLHasBeenSet = true;
}

bool ModifyProtectionSettingRequest::IsALLHasBeenSet() const
{
    return m_isALLHasBeenSet;
}

vector<Filters> ModifyProtectionSettingRequest::GetFilters() const
{
    return m_filters;
}

void ModifyProtectionSettingRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ModifyProtectionSettingRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


