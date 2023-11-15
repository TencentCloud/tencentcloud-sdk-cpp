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

#include <tencentcloud/apigateway/v20180808/model/UsagePlanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UsagePlanInfo::UsagePlanInfo() :
    m_usagePlanIdHasBeenSet(false),
    m_usagePlanNameHasBeenSet(false),
    m_usagePlanDescHasBeenSet(false),
    m_maxRequestNumPreSecHasBeenSet(false),
    m_maxRequestNumHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_bindSecretIdTotalCountHasBeenSet(false),
    m_bindSecretIdsHasBeenSet(false),
    m_bindEnvironmentTotalCountHasBeenSet(false),
    m_bindEnvironmentsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome UsagePlanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsagePlanId") && !value["UsagePlanId"].IsNull())
    {
        if (!value["UsagePlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.UsagePlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanId = string(value["UsagePlanId"].GetString());
        m_usagePlanIdHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanName") && !value["UsagePlanName"].IsNull())
    {
        if (!value["UsagePlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.UsagePlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanName = string(value["UsagePlanName"].GetString());
        m_usagePlanNameHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanDesc") && !value["UsagePlanDesc"].IsNull())
    {
        if (!value["UsagePlanDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.UsagePlanDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanDesc = string(value["UsagePlanDesc"].GetString());
        m_usagePlanDescHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestNumPreSec") && !value["MaxRequestNumPreSec"].IsNull())
    {
        if (!value["MaxRequestNumPreSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.MaxRequestNumPreSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNumPreSec = value["MaxRequestNumPreSec"].GetInt64();
        m_maxRequestNumPreSecHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestNum") && !value["MaxRequestNum"].IsNull())
    {
        if (!value["MaxRequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.MaxRequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNum = value["MaxRequestNum"].GetInt64();
        m_maxRequestNumHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("BindSecretIdTotalCount") && !value["BindSecretIdTotalCount"].IsNull())
    {
        if (!value["BindSecretIdTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.BindSecretIdTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindSecretIdTotalCount = value["BindSecretIdTotalCount"].GetInt64();
        m_bindSecretIdTotalCountHasBeenSet = true;
    }

    if (value.HasMember("BindSecretIds") && !value["BindSecretIds"].IsNull())
    {
        if (!value["BindSecretIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.BindSecretIds` is not array type"));

        const rapidjson::Value &tmpValue = value["BindSecretIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bindSecretIds.push_back((*itr).GetString());
        }
        m_bindSecretIdsHasBeenSet = true;
    }

    if (value.HasMember("BindEnvironmentTotalCount") && !value["BindEnvironmentTotalCount"].IsNull())
    {
        if (!value["BindEnvironmentTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.BindEnvironmentTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindEnvironmentTotalCount = value["BindEnvironmentTotalCount"].GetInt64();
        m_bindEnvironmentTotalCountHasBeenSet = true;
    }

    if (value.HasMember("BindEnvironments") && !value["BindEnvironments"].IsNull())
    {
        if (!value["BindEnvironments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.BindEnvironments` is not array type"));

        const rapidjson::Value &tmpValue = value["BindEnvironments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsagePlanBindEnvironment item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindEnvironments.push_back(item);
        }
        m_bindEnvironmentsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsagePlanInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsagePlanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usagePlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usagePlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usagePlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usagePlanDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRequestNumPreSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestNumPreSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestNumPreSec, allocator);
    }

    if (m_maxRequestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestNum, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bindSecretIdTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindSecretIdTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindSecretIdTotalCount, allocator);
    }

    if (m_bindSecretIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindSecretIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindSecretIds.begin(); itr != m_bindSecretIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bindEnvironmentTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindEnvironmentTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindEnvironmentTotalCount, allocator);
    }

    if (m_bindEnvironmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindEnvironments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindEnvironments.begin(); itr != m_bindEnvironments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string UsagePlanInfo::GetUsagePlanId() const
{
    return m_usagePlanId;
}

void UsagePlanInfo::SetUsagePlanId(const string& _usagePlanId)
{
    m_usagePlanId = _usagePlanId;
    m_usagePlanIdHasBeenSet = true;
}

bool UsagePlanInfo::UsagePlanIdHasBeenSet() const
{
    return m_usagePlanIdHasBeenSet;
}

string UsagePlanInfo::GetUsagePlanName() const
{
    return m_usagePlanName;
}

void UsagePlanInfo::SetUsagePlanName(const string& _usagePlanName)
{
    m_usagePlanName = _usagePlanName;
    m_usagePlanNameHasBeenSet = true;
}

bool UsagePlanInfo::UsagePlanNameHasBeenSet() const
{
    return m_usagePlanNameHasBeenSet;
}

string UsagePlanInfo::GetUsagePlanDesc() const
{
    return m_usagePlanDesc;
}

void UsagePlanInfo::SetUsagePlanDesc(const string& _usagePlanDesc)
{
    m_usagePlanDesc = _usagePlanDesc;
    m_usagePlanDescHasBeenSet = true;
}

bool UsagePlanInfo::UsagePlanDescHasBeenSet() const
{
    return m_usagePlanDescHasBeenSet;
}

int64_t UsagePlanInfo::GetMaxRequestNumPreSec() const
{
    return m_maxRequestNumPreSec;
}

void UsagePlanInfo::SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec)
{
    m_maxRequestNumPreSec = _maxRequestNumPreSec;
    m_maxRequestNumPreSecHasBeenSet = true;
}

bool UsagePlanInfo::MaxRequestNumPreSecHasBeenSet() const
{
    return m_maxRequestNumPreSecHasBeenSet;
}

int64_t UsagePlanInfo::GetMaxRequestNum() const
{
    return m_maxRequestNum;
}

void UsagePlanInfo::SetMaxRequestNum(const int64_t& _maxRequestNum)
{
    m_maxRequestNum = _maxRequestNum;
    m_maxRequestNumHasBeenSet = true;
}

bool UsagePlanInfo::MaxRequestNumHasBeenSet() const
{
    return m_maxRequestNumHasBeenSet;
}

string UsagePlanInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void UsagePlanInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool UsagePlanInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string UsagePlanInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void UsagePlanInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool UsagePlanInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

int64_t UsagePlanInfo::GetBindSecretIdTotalCount() const
{
    return m_bindSecretIdTotalCount;
}

void UsagePlanInfo::SetBindSecretIdTotalCount(const int64_t& _bindSecretIdTotalCount)
{
    m_bindSecretIdTotalCount = _bindSecretIdTotalCount;
    m_bindSecretIdTotalCountHasBeenSet = true;
}

bool UsagePlanInfo::BindSecretIdTotalCountHasBeenSet() const
{
    return m_bindSecretIdTotalCountHasBeenSet;
}

vector<string> UsagePlanInfo::GetBindSecretIds() const
{
    return m_bindSecretIds;
}

void UsagePlanInfo::SetBindSecretIds(const vector<string>& _bindSecretIds)
{
    m_bindSecretIds = _bindSecretIds;
    m_bindSecretIdsHasBeenSet = true;
}

bool UsagePlanInfo::BindSecretIdsHasBeenSet() const
{
    return m_bindSecretIdsHasBeenSet;
}

int64_t UsagePlanInfo::GetBindEnvironmentTotalCount() const
{
    return m_bindEnvironmentTotalCount;
}

void UsagePlanInfo::SetBindEnvironmentTotalCount(const int64_t& _bindEnvironmentTotalCount)
{
    m_bindEnvironmentTotalCount = _bindEnvironmentTotalCount;
    m_bindEnvironmentTotalCountHasBeenSet = true;
}

bool UsagePlanInfo::BindEnvironmentTotalCountHasBeenSet() const
{
    return m_bindEnvironmentTotalCountHasBeenSet;
}

vector<UsagePlanBindEnvironment> UsagePlanInfo::GetBindEnvironments() const
{
    return m_bindEnvironments;
}

void UsagePlanInfo::SetBindEnvironments(const vector<UsagePlanBindEnvironment>& _bindEnvironments)
{
    m_bindEnvironments = _bindEnvironments;
    m_bindEnvironmentsHasBeenSet = true;
}

bool UsagePlanInfo::BindEnvironmentsHasBeenSet() const
{
    return m_bindEnvironmentsHasBeenSet;
}

vector<Tag> UsagePlanInfo::GetTags() const
{
    return m_tags;
}

void UsagePlanInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool UsagePlanInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

