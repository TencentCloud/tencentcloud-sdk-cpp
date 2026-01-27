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

#include <tencentcloud/tcr/v20190924/model/RetentionRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

RetentionRuleItem::RetentionRuleItem() :
    m_retentionPolicyHasBeenSet(false),
    m_tagFilterHasBeenSet(false),
    m_repositoryFilterHasBeenSet(false)
{
}

CoreInternalOutcome RetentionRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RetentionPolicy") && !value["RetentionPolicy"].IsNull())
    {
        if (!value["RetentionPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionRuleItem.RetentionPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_retentionPolicy.Deserialize(value["RetentionPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_retentionPolicyHasBeenSet = true;
    }

    if (value.HasMember("TagFilter") && !value["TagFilter"].IsNull())
    {
        if (!value["TagFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionRuleItem.TagFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagFilter.Deserialize(value["TagFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagFilterHasBeenSet = true;
    }

    if (value.HasMember("RepositoryFilter") && !value["RepositoryFilter"].IsNull())
    {
        if (!value["RepositoryFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionRuleItem.RepositoryFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_repositoryFilter.Deserialize(value["RepositoryFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_repositoryFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetentionRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retentionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_retentionPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_repositoryFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_repositoryFilter.ToJsonObject(value[key.c_str()], allocator);
    }

}


RetentionRule RetentionRuleItem::GetRetentionPolicy() const
{
    return m_retentionPolicy;
}

void RetentionRuleItem::SetRetentionPolicy(const RetentionRule& _retentionPolicy)
{
    m_retentionPolicy = _retentionPolicy;
    m_retentionPolicyHasBeenSet = true;
}

bool RetentionRuleItem::RetentionPolicyHasBeenSet() const
{
    return m_retentionPolicyHasBeenSet;
}

FilterSelector RetentionRuleItem::GetTagFilter() const
{
    return m_tagFilter;
}

void RetentionRuleItem::SetTagFilter(const FilterSelector& _tagFilter)
{
    m_tagFilter = _tagFilter;
    m_tagFilterHasBeenSet = true;
}

bool RetentionRuleItem::TagFilterHasBeenSet() const
{
    return m_tagFilterHasBeenSet;
}

FilterSelector RetentionRuleItem::GetRepositoryFilter() const
{
    return m_repositoryFilter;
}

void RetentionRuleItem::SetRepositoryFilter(const FilterSelector& _repositoryFilter)
{
    m_repositoryFilter = _repositoryFilter;
    m_repositoryFilterHasBeenSet = true;
}

bool RetentionRuleItem::RepositoryFilterHasBeenSet() const
{
    return m_repositoryFilterHasBeenSet;
}

