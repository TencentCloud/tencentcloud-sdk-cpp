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

#include <tencentcloud/adp/v20260520/model/ReferenceAppDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ReferenceAppDetail::ReferenceAppDetail() :
    m_nameHasBeenSet(false),
    m_appModeHasBeenSet(false),
    m_mainAgentNameHasBeenSet(false),
    m_subAgentNameListHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReferenceAppDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceAppDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AppMode") && !value["AppMode"].IsNull())
    {
        if (!value["AppMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceAppDetail.AppMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appMode = value["AppMode"].GetInt64();
        m_appModeHasBeenSet = true;
    }

    if (value.HasMember("MainAgentName") && !value["MainAgentName"].IsNull())
    {
        if (!value["MainAgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceAppDetail.MainAgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainAgentName = string(value["MainAgentName"].GetString());
        m_mainAgentNameHasBeenSet = true;
    }

    if (value.HasMember("SubAgentNameList") && !value["SubAgentNameList"].IsNull())
    {
        if (!value["SubAgentNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReferenceAppDetail.SubAgentNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubAgentNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subAgentNameList.push_back((*itr).GetString());
        }
        m_subAgentNameListHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceAppDetail.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceAppDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReferenceAppDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_appModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appMode, allocator);
    }

    if (m_mainAgentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainAgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainAgentName.c_str(), allocator).Move(), allocator);
    }

    if (m_subAgentNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAgentNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subAgentNameList.begin(); itr != m_subAgentNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string ReferenceAppDetail::GetName() const
{
    return m_name;
}

void ReferenceAppDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReferenceAppDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ReferenceAppDetail::GetAppMode() const
{
    return m_appMode;
}

void ReferenceAppDetail::SetAppMode(const int64_t& _appMode)
{
    m_appMode = _appMode;
    m_appModeHasBeenSet = true;
}

bool ReferenceAppDetail::AppModeHasBeenSet() const
{
    return m_appModeHasBeenSet;
}

string ReferenceAppDetail::GetMainAgentName() const
{
    return m_mainAgentName;
}

void ReferenceAppDetail::SetMainAgentName(const string& _mainAgentName)
{
    m_mainAgentName = _mainAgentName;
    m_mainAgentNameHasBeenSet = true;
}

bool ReferenceAppDetail::MainAgentNameHasBeenSet() const
{
    return m_mainAgentNameHasBeenSet;
}

vector<string> ReferenceAppDetail::GetSubAgentNameList() const
{
    return m_subAgentNameList;
}

void ReferenceAppDetail::SetSubAgentNameList(const vector<string>& _subAgentNameList)
{
    m_subAgentNameList = _subAgentNameList;
    m_subAgentNameListHasBeenSet = true;
}

bool ReferenceAppDetail::SubAgentNameListHasBeenSet() const
{
    return m_subAgentNameListHasBeenSet;
}

string ReferenceAppDetail::GetCreator() const
{
    return m_creator;
}

void ReferenceAppDetail::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool ReferenceAppDetail::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string ReferenceAppDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void ReferenceAppDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ReferenceAppDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

