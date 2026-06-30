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

#include <tencentcloud/csip/v20221121/model/NotifyAssetConfigItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

NotifyAssetConfigItem::NotifyAssetConfigItem() :
    m_moduleHasBeenSet(false),
    m_subModuleHasBeenSet(false),
    m_assetRangeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_excludedInstanceIdsHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome NotifyAssetConfigItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotifyAssetConfigItem.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("SubModule") && !value["SubModule"].IsNull())
    {
        if (!value["SubModule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotifyAssetConfigItem.SubModule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subModule = string(value["SubModule"].GetString());
        m_subModuleHasBeenSet = true;
    }

    if (value.HasMember("AssetRange") && !value["AssetRange"].IsNull())
    {
        if (!value["AssetRange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotifyAssetConfigItem.AssetRange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetRange = value["AssetRange"].GetInt64();
        m_assetRangeHasBeenSet = true;
    }

    if (value.HasMember("InstanceIds") && !value["InstanceIds"].IsNull())
    {
        if (!value["InstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotifyAssetConfigItem.InstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIds.push_back((*itr).GetString());
        }
        m_instanceIdsHasBeenSet = true;
    }

    if (value.HasMember("ExcludedInstanceIds") && !value["ExcludedInstanceIds"].IsNull())
    {
        if (!value["ExcludedInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotifyAssetConfigItem.ExcludedInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludedInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludedInstanceIds.push_back((*itr).GetString());
        }
        m_excludedInstanceIdsHasBeenSet = true;
    }

    if (value.HasMember("TagIds") && !value["TagIds"].IsNull())
    {
        if (!value["TagIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotifyAssetConfigItem.TagIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TagIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagIds.push_back((*itr).GetInt64());
        }
        m_tagIdsHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotifyAssetConfigItem.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cloudTags.push_back((*itr).GetString());
        }
        m_cloudTagsHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotifyAssetConfigItem.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotifyAssetConfigItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_subModuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubModule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subModule.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetRange, allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludedInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludedInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludedInstanceIds.begin(); itr != m_excludedInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_cloudTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cloudTags.begin(); itr != m_cloudTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


string NotifyAssetConfigItem::GetModule() const
{
    return m_module;
}

void NotifyAssetConfigItem::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool NotifyAssetConfigItem::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string NotifyAssetConfigItem::GetSubModule() const
{
    return m_subModule;
}

void NotifyAssetConfigItem::SetSubModule(const string& _subModule)
{
    m_subModule = _subModule;
    m_subModuleHasBeenSet = true;
}

bool NotifyAssetConfigItem::SubModuleHasBeenSet() const
{
    return m_subModuleHasBeenSet;
}

int64_t NotifyAssetConfigItem::GetAssetRange() const
{
    return m_assetRange;
}

void NotifyAssetConfigItem::SetAssetRange(const int64_t& _assetRange)
{
    m_assetRange = _assetRange;
    m_assetRangeHasBeenSet = true;
}

bool NotifyAssetConfigItem::AssetRangeHasBeenSet() const
{
    return m_assetRangeHasBeenSet;
}

vector<string> NotifyAssetConfigItem::GetInstanceIds() const
{
    return m_instanceIds;
}

void NotifyAssetConfigItem::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool NotifyAssetConfigItem::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> NotifyAssetConfigItem::GetExcludedInstanceIds() const
{
    return m_excludedInstanceIds;
}

void NotifyAssetConfigItem::SetExcludedInstanceIds(const vector<string>& _excludedInstanceIds)
{
    m_excludedInstanceIds = _excludedInstanceIds;
    m_excludedInstanceIdsHasBeenSet = true;
}

bool NotifyAssetConfigItem::ExcludedInstanceIdsHasBeenSet() const
{
    return m_excludedInstanceIdsHasBeenSet;
}

vector<int64_t> NotifyAssetConfigItem::GetTagIds() const
{
    return m_tagIds;
}

void NotifyAssetConfigItem::SetTagIds(const vector<int64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool NotifyAssetConfigItem::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

vector<string> NotifyAssetConfigItem::GetCloudTags() const
{
    return m_cloudTags;
}

void NotifyAssetConfigItem::SetCloudTags(const vector<string>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool NotifyAssetConfigItem::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

int64_t NotifyAssetConfigItem::GetTotalCount() const
{
    return m_totalCount;
}

void NotifyAssetConfigItem::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool NotifyAssetConfigItem::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

