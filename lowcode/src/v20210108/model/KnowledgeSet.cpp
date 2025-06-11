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

#include <tencentcloud/lowcode/v20210108/model/KnowledgeSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

KnowledgeSet::KnowledgeSet() :
    m_nameHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descHasBeenSet(false),
    m_activeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_metaHasBeenSet(false),
    m_totalSizeHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSet.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSet.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSet.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Active") && !value["Active"].IsNull())
    {
        if (!value["Active"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSet.Active` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_active = string(value["Active"].GetString());
        m_activeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSet.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSet.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Meta") && !value["Meta"].IsNull())
    {
        if (!value["Meta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSet.Meta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_meta = string(value["Meta"].GetString());
        m_metaHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSet.TotalSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = string(value["TotalSize"].GetString());
        m_totalSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_activeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Active";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_active.c_str(), allocator).Move(), allocator);
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

    if (m_metaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Meta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_meta.c_str(), allocator).Move(), allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalSize.c_str(), allocator).Move(), allocator);
    }

}


string KnowledgeSet::GetName() const
{
    return m_name;
}

void KnowledgeSet::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KnowledgeSet::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string KnowledgeSet::GetTitle() const
{
    return m_title;
}

void KnowledgeSet::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool KnowledgeSet::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string KnowledgeSet::GetDesc() const
{
    return m_desc;
}

void KnowledgeSet::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool KnowledgeSet::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string KnowledgeSet::GetActive() const
{
    return m_active;
}

void KnowledgeSet::SetActive(const string& _active)
{
    m_active = _active;
    m_activeHasBeenSet = true;
}

bool KnowledgeSet::ActiveHasBeenSet() const
{
    return m_activeHasBeenSet;
}

string KnowledgeSet::GetCreateTime() const
{
    return m_createTime;
}

void KnowledgeSet::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KnowledgeSet::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string KnowledgeSet::GetUpdateTime() const
{
    return m_updateTime;
}

void KnowledgeSet::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool KnowledgeSet::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string KnowledgeSet::GetMeta() const
{
    return m_meta;
}

void KnowledgeSet::SetMeta(const string& _meta)
{
    m_meta = _meta;
    m_metaHasBeenSet = true;
}

bool KnowledgeSet::MetaHasBeenSet() const
{
    return m_metaHasBeenSet;
}

string KnowledgeSet::GetTotalSize() const
{
    return m_totalSize;
}

void KnowledgeSet::SetTotalSize(const string& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool KnowledgeSet::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

