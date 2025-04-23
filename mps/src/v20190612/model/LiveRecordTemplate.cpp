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

#include <tencentcloud/mps/v20190612/model/LiveRecordTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveRecordTemplate::LiveRecordTemplate() :
    m_definitionHasBeenSet(false),
    m_hLSConfigureHasBeenSet(false),
    m_mP4ConfigureHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveRecordTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTemplate.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("HLSConfigure") && !value["HLSConfigure"].IsNull())
    {
        if (!value["HLSConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTemplate.HLSConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hLSConfigure.Deserialize(value["HLSConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hLSConfigureHasBeenSet = true;
    }

    if (value.HasMember("MP4Configure") && !value["MP4Configure"].IsNull())
    {
        if (!value["MP4Configure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTemplate.MP4Configure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mP4Configure.Deserialize(value["MP4Configure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mP4ConfigureHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveRecordTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_hLSConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HLSConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hLSConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mP4ConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MP4Configure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mP4Configure.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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


int64_t LiveRecordTemplate::GetDefinition() const
{
    return m_definition;
}

void LiveRecordTemplate::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool LiveRecordTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

HLSConfigureInfo LiveRecordTemplate::GetHLSConfigure() const
{
    return m_hLSConfigure;
}

void LiveRecordTemplate::SetHLSConfigure(const HLSConfigureInfo& _hLSConfigure)
{
    m_hLSConfigure = _hLSConfigure;
    m_hLSConfigureHasBeenSet = true;
}

bool LiveRecordTemplate::HLSConfigureHasBeenSet() const
{
    return m_hLSConfigureHasBeenSet;
}

MP4ConfigureInfo LiveRecordTemplate::GetMP4Configure() const
{
    return m_mP4Configure;
}

void LiveRecordTemplate::SetMP4Configure(const MP4ConfigureInfo& _mP4Configure)
{
    m_mP4Configure = _mP4Configure;
    m_mP4ConfigureHasBeenSet = true;
}

bool LiveRecordTemplate::MP4ConfigureHasBeenSet() const
{
    return m_mP4ConfigureHasBeenSet;
}

string LiveRecordTemplate::GetName() const
{
    return m_name;
}

void LiveRecordTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LiveRecordTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LiveRecordTemplate::GetComment() const
{
    return m_comment;
}

void LiveRecordTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool LiveRecordTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string LiveRecordTemplate::GetType() const
{
    return m_type;
}

void LiveRecordTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LiveRecordTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string LiveRecordTemplate::GetCreateTime() const
{
    return m_createTime;
}

void LiveRecordTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LiveRecordTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LiveRecordTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void LiveRecordTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LiveRecordTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

