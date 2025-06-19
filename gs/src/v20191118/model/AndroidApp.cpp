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

#include <tencentcloud/gs/v20191118/model/AndroidApp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidApp::AndroidApp() :
    m_androidAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_androidAppVersionInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_appModeHasBeenSet(false),
    m_updateStateHasBeenSet(false)
{
}

CoreInternalOutcome AndroidApp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidAppId") && !value["AndroidAppId"].IsNull())
    {
        if (!value["AndroidAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidApp.AndroidAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppId = string(value["AndroidAppId"].GetString());
        m_androidAppIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidApp.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidApp.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AndroidAppVersionInfo") && !value["AndroidAppVersionInfo"].IsNull())
    {
        if (!value["AndroidAppVersionInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AndroidApp.AndroidAppVersionInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["AndroidAppVersionInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AndroidAppVersionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_androidAppVersionInfo.push_back(item);
        }
        m_androidAppVersionInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidApp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidApp.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("AppMode") && !value["AppMode"].IsNull())
    {
        if (!value["AppMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidApp.AppMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appMode = string(value["AppMode"].GetString());
        m_appModeHasBeenSet = true;
    }

    if (value.HasMember("UpdateState") && !value["UpdateState"].IsNull())
    {
        if (!value["UpdateState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidApp.UpdateState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateState = string(value["UpdateState"].GetString());
        m_updateStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidApp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppVersionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppVersionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_androidAppVersionInfo.begin(); itr != m_androidAppVersionInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_appModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appMode.c_str(), allocator).Move(), allocator);
    }

    if (m_updateStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateState.c_str(), allocator).Move(), allocator);
    }

}


string AndroidApp::GetAndroidAppId() const
{
    return m_androidAppId;
}

void AndroidApp::SetAndroidAppId(const string& _androidAppId)
{
    m_androidAppId = _androidAppId;
    m_androidAppIdHasBeenSet = true;
}

bool AndroidApp::AndroidAppIdHasBeenSet() const
{
    return m_androidAppIdHasBeenSet;
}

string AndroidApp::GetName() const
{
    return m_name;
}

void AndroidApp::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AndroidApp::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AndroidApp::GetState() const
{
    return m_state;
}

void AndroidApp::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AndroidApp::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<AndroidAppVersionInfo> AndroidApp::GetAndroidAppVersionInfo() const
{
    return m_androidAppVersionInfo;
}

void AndroidApp::SetAndroidAppVersionInfo(const vector<AndroidAppVersionInfo>& _androidAppVersionInfo)
{
    m_androidAppVersionInfo = _androidAppVersionInfo;
    m_androidAppVersionInfoHasBeenSet = true;
}

bool AndroidApp::AndroidAppVersionInfoHasBeenSet() const
{
    return m_androidAppVersionInfoHasBeenSet;
}

string AndroidApp::GetCreateTime() const
{
    return m_createTime;
}

void AndroidApp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AndroidApp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AndroidApp::GetUserId() const
{
    return m_userId;
}

void AndroidApp::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool AndroidApp::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string AndroidApp::GetAppMode() const
{
    return m_appMode;
}

void AndroidApp::SetAppMode(const string& _appMode)
{
    m_appMode = _appMode;
    m_appModeHasBeenSet = true;
}

bool AndroidApp::AppModeHasBeenSet() const
{
    return m_appModeHasBeenSet;
}

string AndroidApp::GetUpdateState() const
{
    return m_updateState;
}

void AndroidApp::SetUpdateState(const string& _updateState)
{
    m_updateState = _updateState;
    m_updateStateHasBeenSet = true;
}

bool AndroidApp::UpdateStateHasBeenSet() const
{
    return m_updateStateHasBeenSet;
}

