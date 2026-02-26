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

#include <tencentcloud/monitor/v20230616/model/NoticeContentTmpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

NoticeContentTmpl::NoticeContentTmpl() :
    m_tmplIDHasBeenSet(false),
    m_tmplNameHasBeenSet(false),
    m_tmplContentsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_lastModifierHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_tmplLanguageHasBeenSet(false)
{
}

CoreInternalOutcome NoticeContentTmpl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TmplID") && !value["TmplID"].IsNull())
    {
        if (!value["TmplID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmpl.TmplID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmplID = string(value["TmplID"].GetString());
        m_tmplIDHasBeenSet = true;
    }

    if (value.HasMember("TmplName") && !value["TmplName"].IsNull())
    {
        if (!value["TmplName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmpl.TmplName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmplName = string(value["TmplName"].GetString());
        m_tmplNameHasBeenSet = true;
    }

    if (value.HasMember("TmplContents") && !value["TmplContents"].IsNull())
    {
        if (!value["TmplContents"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmpl.TmplContents` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tmplContents.Deserialize(value["TmplContents"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tmplContentsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmpl.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmpl.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifier") && !value["LastModifier"].IsNull())
    {
        if (!value["LastModifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmpl.LastModifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifier = string(value["LastModifier"].GetString());
        m_lastModifierHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmpl.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmpl.MonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = string(value["MonitorType"].GetString());
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("TmplLanguage") && !value["TmplLanguage"].IsNull())
    {
        if (!value["TmplLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmpl.TmplLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmplLanguage = string(value["TmplLanguage"].GetString());
        m_tmplLanguageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeContentTmpl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tmplIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmplID.c_str(), allocator).Move(), allocator);
    }

    if (m_tmplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmplName.c_str(), allocator).Move(), allocator);
    }

    if (m_tmplContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplContents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tmplContents.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_lastModifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifier.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_tmplLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmplLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmplLanguage.c_str(), allocator).Move(), allocator);
    }

}


string NoticeContentTmpl::GetTmplID() const
{
    return m_tmplID;
}

void NoticeContentTmpl::SetTmplID(const string& _tmplID)
{
    m_tmplID = _tmplID;
    m_tmplIDHasBeenSet = true;
}

bool NoticeContentTmpl::TmplIDHasBeenSet() const
{
    return m_tmplIDHasBeenSet;
}

string NoticeContentTmpl::GetTmplName() const
{
    return m_tmplName;
}

void NoticeContentTmpl::SetTmplName(const string& _tmplName)
{
    m_tmplName = _tmplName;
    m_tmplNameHasBeenSet = true;
}

bool NoticeContentTmpl::TmplNameHasBeenSet() const
{
    return m_tmplNameHasBeenSet;
}

NoticeContentTmplItem NoticeContentTmpl::GetTmplContents() const
{
    return m_tmplContents;
}

void NoticeContentTmpl::SetTmplContents(const NoticeContentTmplItem& _tmplContents)
{
    m_tmplContents = _tmplContents;
    m_tmplContentsHasBeenSet = true;
}

bool NoticeContentTmpl::TmplContentsHasBeenSet() const
{
    return m_tmplContentsHasBeenSet;
}

int64_t NoticeContentTmpl::GetCreateTime() const
{
    return m_createTime;
}

void NoticeContentTmpl::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NoticeContentTmpl::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t NoticeContentTmpl::GetUpdateTime() const
{
    return m_updateTime;
}

void NoticeContentTmpl::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NoticeContentTmpl::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string NoticeContentTmpl::GetLastModifier() const
{
    return m_lastModifier;
}

void NoticeContentTmpl::SetLastModifier(const string& _lastModifier)
{
    m_lastModifier = _lastModifier;
    m_lastModifierHasBeenSet = true;
}

bool NoticeContentTmpl::LastModifierHasBeenSet() const
{
    return m_lastModifierHasBeenSet;
}

string NoticeContentTmpl::GetCreator() const
{
    return m_creator;
}

void NoticeContentTmpl::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool NoticeContentTmpl::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string NoticeContentTmpl::GetMonitorType() const
{
    return m_monitorType;
}

void NoticeContentTmpl::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool NoticeContentTmpl::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string NoticeContentTmpl::GetTmplLanguage() const
{
    return m_tmplLanguage;
}

void NoticeContentTmpl::SetTmplLanguage(const string& _tmplLanguage)
{
    m_tmplLanguage = _tmplLanguage;
    m_tmplLanguageHasBeenSet = true;
}

bool NoticeContentTmpl::TmplLanguageHasBeenSet() const
{
    return m_tmplLanguageHasBeenSet;
}

