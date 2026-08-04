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

#include <tencentcloud/mqtt/v20240516/model/BlockRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

BlockRuleItem::BlockRuleItem() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_includeHasBeenSet(false),
    m_excludesHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome BlockRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockRuleItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockRuleItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockRuleItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Include") && !value["Include"].IsNull())
    {
        if (!value["Include"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlockRuleItem.Include` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_include = string(value["Include"].GetString());
        m_includeHasBeenSet = true;
    }

    if (value.HasMember("Excludes") && !value["Excludes"].IsNull())
    {
        if (!value["Excludes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BlockRuleItem.Excludes` is not array type"));

        const rapidjson::Value &tmpValue = value["Excludes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludes.push_back((*itr).GetString());
        }
        m_excludesHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockRuleItem.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockRuleItem.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockRuleItem.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlockRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_includeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Include";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_include.c_str(), allocator).Move(), allocator);
    }

    if (m_excludesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Excludes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludes.begin(); itr != m_excludes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string BlockRuleItem::GetName() const
{
    return m_name;
}

void BlockRuleItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BlockRuleItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t BlockRuleItem::GetType() const
{
    return m_type;
}

void BlockRuleItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BlockRuleItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BlockRuleItem::GetRemark() const
{
    return m_remark;
}

void BlockRuleItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool BlockRuleItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string BlockRuleItem::GetInclude() const
{
    return m_include;
}

void BlockRuleItem::SetInclude(const string& _include)
{
    m_include = _include;
    m_includeHasBeenSet = true;
}

bool BlockRuleItem::IncludeHasBeenSet() const
{
    return m_includeHasBeenSet;
}

vector<string> BlockRuleItem::GetExcludes() const
{
    return m_excludes;
}

void BlockRuleItem::SetExcludes(const vector<string>& _excludes)
{
    m_excludes = _excludes;
    m_excludesHasBeenSet = true;
}

bool BlockRuleItem::ExcludesHasBeenSet() const
{
    return m_excludesHasBeenSet;
}

int64_t BlockRuleItem::GetExpireTime() const
{
    return m_expireTime;
}

void BlockRuleItem::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool BlockRuleItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t BlockRuleItem::GetUpdateTime() const
{
    return m_updateTime;
}

void BlockRuleItem::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BlockRuleItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t BlockRuleItem::GetCreateTime() const
{
    return m_createTime;
}

void BlockRuleItem::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BlockRuleItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

