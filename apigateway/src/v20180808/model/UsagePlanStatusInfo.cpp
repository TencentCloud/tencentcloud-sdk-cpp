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

#include <tencentcloud/apigateway/v20180808/model/UsagePlanStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UsagePlanStatusInfo::UsagePlanStatusInfo() :
    m_usagePlanIdHasBeenSet(false),
    m_usagePlanNameHasBeenSet(false),
    m_usagePlanDescHasBeenSet(false),
    m_maxRequestNumPreSecHasBeenSet(false),
    m_maxRequestNumHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome UsagePlanStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsagePlanId") && !value["UsagePlanId"].IsNull())
    {
        if (!value["UsagePlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanStatusInfo.UsagePlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanId = string(value["UsagePlanId"].GetString());
        m_usagePlanIdHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanName") && !value["UsagePlanName"].IsNull())
    {
        if (!value["UsagePlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanStatusInfo.UsagePlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanName = string(value["UsagePlanName"].GetString());
        m_usagePlanNameHasBeenSet = true;
    }

    if (value.HasMember("UsagePlanDesc") && !value["UsagePlanDesc"].IsNull())
    {
        if (!value["UsagePlanDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanStatusInfo.UsagePlanDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usagePlanDesc = string(value["UsagePlanDesc"].GetString());
        m_usagePlanDescHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestNumPreSec") && !value["MaxRequestNumPreSec"].IsNull())
    {
        if (!value["MaxRequestNumPreSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanStatusInfo.MaxRequestNumPreSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNumPreSec = value["MaxRequestNumPreSec"].GetInt64();
        m_maxRequestNumPreSecHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestNum") && !value["MaxRequestNum"].IsNull())
    {
        if (!value["MaxRequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanStatusInfo.MaxRequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNum = value["MaxRequestNum"].GetInt64();
        m_maxRequestNumHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanStatusInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanStatusInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsagePlanStatusInfo.Tags` is not array type"));

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

void UsagePlanStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string UsagePlanStatusInfo::GetUsagePlanId() const
{
    return m_usagePlanId;
}

void UsagePlanStatusInfo::SetUsagePlanId(const string& _usagePlanId)
{
    m_usagePlanId = _usagePlanId;
    m_usagePlanIdHasBeenSet = true;
}

bool UsagePlanStatusInfo::UsagePlanIdHasBeenSet() const
{
    return m_usagePlanIdHasBeenSet;
}

string UsagePlanStatusInfo::GetUsagePlanName() const
{
    return m_usagePlanName;
}

void UsagePlanStatusInfo::SetUsagePlanName(const string& _usagePlanName)
{
    m_usagePlanName = _usagePlanName;
    m_usagePlanNameHasBeenSet = true;
}

bool UsagePlanStatusInfo::UsagePlanNameHasBeenSet() const
{
    return m_usagePlanNameHasBeenSet;
}

string UsagePlanStatusInfo::GetUsagePlanDesc() const
{
    return m_usagePlanDesc;
}

void UsagePlanStatusInfo::SetUsagePlanDesc(const string& _usagePlanDesc)
{
    m_usagePlanDesc = _usagePlanDesc;
    m_usagePlanDescHasBeenSet = true;
}

bool UsagePlanStatusInfo::UsagePlanDescHasBeenSet() const
{
    return m_usagePlanDescHasBeenSet;
}

int64_t UsagePlanStatusInfo::GetMaxRequestNumPreSec() const
{
    return m_maxRequestNumPreSec;
}

void UsagePlanStatusInfo::SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec)
{
    m_maxRequestNumPreSec = _maxRequestNumPreSec;
    m_maxRequestNumPreSecHasBeenSet = true;
}

bool UsagePlanStatusInfo::MaxRequestNumPreSecHasBeenSet() const
{
    return m_maxRequestNumPreSecHasBeenSet;
}

int64_t UsagePlanStatusInfo::GetMaxRequestNum() const
{
    return m_maxRequestNum;
}

void UsagePlanStatusInfo::SetMaxRequestNum(const int64_t& _maxRequestNum)
{
    m_maxRequestNum = _maxRequestNum;
    m_maxRequestNumHasBeenSet = true;
}

bool UsagePlanStatusInfo::MaxRequestNumHasBeenSet() const
{
    return m_maxRequestNumHasBeenSet;
}

string UsagePlanStatusInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void UsagePlanStatusInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool UsagePlanStatusInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string UsagePlanStatusInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void UsagePlanStatusInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool UsagePlanStatusInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

vector<Tag> UsagePlanStatusInfo::GetTags() const
{
    return m_tags;
}

void UsagePlanStatusInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool UsagePlanStatusInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

