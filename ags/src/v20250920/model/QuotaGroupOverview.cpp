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

#include <tencentcloud/ags/v20250920/model/QuotaGroupOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

QuotaGroupOverview::QuotaGroupOverview() :
    m_tagHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome QuotaGroupOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaGroupOverview.Tag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tag.Deserialize(value["Tag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaGroupOverview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaGroupOverview.Quota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quota.Deserialize(value["Quota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quotaHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaGroupOverview.Usage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usage.Deserialize(value["Usage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaGroupOverview.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaGroupOverview.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuotaGroupOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tag.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


Tag QuotaGroupOverview::GetTag() const
{
    return m_tag;
}

void QuotaGroupOverview::SetTag(const Tag& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool QuotaGroupOverview::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string QuotaGroupOverview::GetName() const
{
    return m_name;
}

void QuotaGroupOverview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QuotaGroupOverview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

QuotaResourceInfo QuotaGroupOverview::GetQuota() const
{
    return m_quota;
}

void QuotaGroupOverview::SetQuota(const QuotaResourceInfo& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool QuotaGroupOverview::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

QuotaResourceInfo QuotaGroupOverview::GetUsage() const
{
    return m_usage;
}

void QuotaGroupOverview::SetUsage(const QuotaResourceInfo& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool QuotaGroupOverview::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string QuotaGroupOverview::GetCreateTime() const
{
    return m_createTime;
}

void QuotaGroupOverview::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool QuotaGroupOverview::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string QuotaGroupOverview::GetUpdateTime() const
{
    return m_updateTime;
}

void QuotaGroupOverview::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool QuotaGroupOverview::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

