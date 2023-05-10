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

#include <tencentcloud/vod/v20180717/model/HeadTailTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

HeadTailTemplate::HeadTailTemplate() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_headCandidateSetHasBeenSet(false),
    m_tailCandidateSetHasBeenSet(false),
    m_fillTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome HeadTailTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HeadTailTemplate.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadTailTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadTailTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("HeadCandidateSet") && !value["HeadCandidateSet"].IsNull())
    {
        if (!value["HeadCandidateSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HeadTailTemplate.HeadCandidateSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HeadCandidateSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headCandidateSet.push_back((*itr).GetString());
        }
        m_headCandidateSetHasBeenSet = true;
    }

    if (value.HasMember("TailCandidateSet") && !value["TailCandidateSet"].IsNull())
    {
        if (!value["TailCandidateSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HeadTailTemplate.TailCandidateSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TailCandidateSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tailCandidateSet.push_back((*itr).GetString());
        }
        m_tailCandidateSetHasBeenSet = true;
    }

    if (value.HasMember("FillType") && !value["FillType"].IsNull())
    {
        if (!value["FillType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadTailTemplate.FillType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fillType = string(value["FillType"].GetString());
        m_fillTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadTailTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadTailTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HeadTailTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_headCandidateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadCandidateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headCandidateSet.begin(); itr != m_headCandidateSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tailCandidateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TailCandidateSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tailCandidateSet.begin(); itr != m_tailCandidateSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fillType.c_str(), allocator).Move(), allocator);
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


int64_t HeadTailTemplate::GetDefinition() const
{
    return m_definition;
}

void HeadTailTemplate::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool HeadTailTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string HeadTailTemplate::GetName() const
{
    return m_name;
}

void HeadTailTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HeadTailTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string HeadTailTemplate::GetComment() const
{
    return m_comment;
}

void HeadTailTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool HeadTailTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<string> HeadTailTemplate::GetHeadCandidateSet() const
{
    return m_headCandidateSet;
}

void HeadTailTemplate::SetHeadCandidateSet(const vector<string>& _headCandidateSet)
{
    m_headCandidateSet = _headCandidateSet;
    m_headCandidateSetHasBeenSet = true;
}

bool HeadTailTemplate::HeadCandidateSetHasBeenSet() const
{
    return m_headCandidateSetHasBeenSet;
}

vector<string> HeadTailTemplate::GetTailCandidateSet() const
{
    return m_tailCandidateSet;
}

void HeadTailTemplate::SetTailCandidateSet(const vector<string>& _tailCandidateSet)
{
    m_tailCandidateSet = _tailCandidateSet;
    m_tailCandidateSetHasBeenSet = true;
}

bool HeadTailTemplate::TailCandidateSetHasBeenSet() const
{
    return m_tailCandidateSetHasBeenSet;
}

string HeadTailTemplate::GetFillType() const
{
    return m_fillType;
}

void HeadTailTemplate::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool HeadTailTemplate::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

string HeadTailTemplate::GetCreateTime() const
{
    return m_createTime;
}

void HeadTailTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HeadTailTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HeadTailTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void HeadTailTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool HeadTailTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

