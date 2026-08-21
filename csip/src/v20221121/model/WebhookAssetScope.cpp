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

#include <tencentcloud/csip/v20221121/model/WebhookAssetScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

WebhookAssetScope::WebhookAssetScope() :
    m_assetRangeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_excludedInstanceIdsHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_cloudTagsHasBeenSet(false)
{
}

CoreInternalOutcome WebhookAssetScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetRange") && !value["AssetRange"].IsNull())
    {
        if (!value["AssetRange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookAssetScope.AssetRange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetRange = value["AssetRange"].GetInt64();
        m_assetRangeHasBeenSet = true;
    }

    if (value.HasMember("InstanceIds") && !value["InstanceIds"].IsNull())
    {
        if (!value["InstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookAssetScope.InstanceIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `WebhookAssetScope.ExcludedInstanceIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `WebhookAssetScope.TagIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `WebhookAssetScope.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cloudTags.push_back((*itr).GetString());
        }
        m_cloudTagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebhookAssetScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

}


int64_t WebhookAssetScope::GetAssetRange() const
{
    return m_assetRange;
}

void WebhookAssetScope::SetAssetRange(const int64_t& _assetRange)
{
    m_assetRange = _assetRange;
    m_assetRangeHasBeenSet = true;
}

bool WebhookAssetScope::AssetRangeHasBeenSet() const
{
    return m_assetRangeHasBeenSet;
}

vector<string> WebhookAssetScope::GetInstanceIds() const
{
    return m_instanceIds;
}

void WebhookAssetScope::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool WebhookAssetScope::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> WebhookAssetScope::GetExcludedInstanceIds() const
{
    return m_excludedInstanceIds;
}

void WebhookAssetScope::SetExcludedInstanceIds(const vector<string>& _excludedInstanceIds)
{
    m_excludedInstanceIds = _excludedInstanceIds;
    m_excludedInstanceIdsHasBeenSet = true;
}

bool WebhookAssetScope::ExcludedInstanceIdsHasBeenSet() const
{
    return m_excludedInstanceIdsHasBeenSet;
}

vector<int64_t> WebhookAssetScope::GetTagIds() const
{
    return m_tagIds;
}

void WebhookAssetScope::SetTagIds(const vector<int64_t>& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool WebhookAssetScope::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

vector<string> WebhookAssetScope::GetCloudTags() const
{
    return m_cloudTags;
}

void WebhookAssetScope::SetCloudTags(const vector<string>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool WebhookAssetScope::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

