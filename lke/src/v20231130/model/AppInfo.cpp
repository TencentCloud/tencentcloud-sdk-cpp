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

#include <tencentcloud/lke/v20231130/model/AppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AppInfo::AppInfo() :
    m_appTypeHasBeenSet(false),
    m_appTypeDescHasBeenSet(false),
    m_appBizIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_descHasBeenSet(false),
    m_appStatusHasBeenSet(false),
    m_appStatusDescHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelAliasNameHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_thoughtModelAliasNameHasBeenSet(false)
{
}

CoreInternalOutcome AppInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appType = string(value["AppType"].GetString());
        m_appTypeHasBeenSet = true;
    }

    if (value.HasMember("AppTypeDesc") && !value["AppTypeDesc"].IsNull())
    {
        if (!value["AppTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appTypeDesc = string(value["AppTypeDesc"].GetString());
        m_appTypeDescHasBeenSet = true;
    }

    if (value.HasMember("AppBizId") && !value["AppBizId"].IsNull())
    {
        if (!value["AppBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appBizId = string(value["AppBizId"].GetString());
        m_appBizIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("AppStatus") && !value["AppStatus"].IsNull())
    {
        if (!value["AppStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appStatus = value["AppStatus"].GetUint64();
        m_appStatusHasBeenSet = true;
    }

    if (value.HasMember("AppStatusDesc") && !value["AppStatusDesc"].IsNull())
    {
        if (!value["AppStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.AppStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appStatusDesc = string(value["AppStatusDesc"].GetString());
        m_appStatusDescHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelAliasName") && !value["ModelAliasName"].IsNull())
    {
        if (!value["ModelAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.ModelAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelAliasName = string(value["ModelAliasName"].GetString());
        m_modelAliasNameHasBeenSet = true;
    }

    if (value.HasMember("Pattern") && !value["Pattern"].IsNull())
    {
        if (!value["Pattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(value["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }

    if (value.HasMember("ThoughtModelAliasName") && !value["ThoughtModelAliasName"].IsNull())
    {
        if (!value["ThoughtModelAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.ThoughtModelAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thoughtModelAliasName = string(value["ThoughtModelAliasName"].GetString());
        m_thoughtModelAliasNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_appStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appStatus, allocator);
    }

    if (m_appStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelAliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_thoughtModelAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThoughtModelAliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thoughtModelAliasName.c_str(), allocator).Move(), allocator);
    }

}


string AppInfo::GetAppType() const
{
    return m_appType;
}

void AppInfo::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool AppInfo::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string AppInfo::GetAppTypeDesc() const
{
    return m_appTypeDesc;
}

void AppInfo::SetAppTypeDesc(const string& _appTypeDesc)
{
    m_appTypeDesc = _appTypeDesc;
    m_appTypeDescHasBeenSet = true;
}

bool AppInfo::AppTypeDescHasBeenSet() const
{
    return m_appTypeDescHasBeenSet;
}

string AppInfo::GetAppBizId() const
{
    return m_appBizId;
}

void AppInfo::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool AppInfo::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string AppInfo::GetName() const
{
    return m_name;
}

void AppInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AppInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AppInfo::GetAvatar() const
{
    return m_avatar;
}

void AppInfo::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool AppInfo::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string AppInfo::GetDesc() const
{
    return m_desc;
}

void AppInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AppInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

uint64_t AppInfo::GetAppStatus() const
{
    return m_appStatus;
}

void AppInfo::SetAppStatus(const uint64_t& _appStatus)
{
    m_appStatus = _appStatus;
    m_appStatusHasBeenSet = true;
}

bool AppInfo::AppStatusHasBeenSet() const
{
    return m_appStatusHasBeenSet;
}

string AppInfo::GetAppStatusDesc() const
{
    return m_appStatusDesc;
}

void AppInfo::SetAppStatusDesc(const string& _appStatusDesc)
{
    m_appStatusDesc = _appStatusDesc;
    m_appStatusDescHasBeenSet = true;
}

bool AppInfo::AppStatusDescHasBeenSet() const
{
    return m_appStatusDescHasBeenSet;
}

string AppInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AppInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AppInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AppInfo::GetOperator() const
{
    return m_operator;
}

void AppInfo::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AppInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string AppInfo::GetModelName() const
{
    return m_modelName;
}

void AppInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool AppInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string AppInfo::GetModelAliasName() const
{
    return m_modelAliasName;
}

void AppInfo::SetModelAliasName(const string& _modelAliasName)
{
    m_modelAliasName = _modelAliasName;
    m_modelAliasNameHasBeenSet = true;
}

bool AppInfo::ModelAliasNameHasBeenSet() const
{
    return m_modelAliasNameHasBeenSet;
}

string AppInfo::GetPattern() const
{
    return m_pattern;
}

void AppInfo::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool AppInfo::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

string AppInfo::GetThoughtModelAliasName() const
{
    return m_thoughtModelAliasName;
}

void AppInfo::SetThoughtModelAliasName(const string& _thoughtModelAliasName)
{
    m_thoughtModelAliasName = _thoughtModelAliasName;
    m_thoughtModelAliasNameHasBeenSet = true;
}

bool AppInfo::ThoughtModelAliasNameHasBeenSet() const
{
    return m_thoughtModelAliasNameHasBeenSet;
}

