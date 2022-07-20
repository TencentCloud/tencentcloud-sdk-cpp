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

#include <tencentcloud/dlc/v20210125/model/ViewBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ViewBaseInfo::ViewBaseInfo() :
    m_databaseNameHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_userAliasHasBeenSet(false),
    m_userSubUinHasBeenSet(false)
{
}

CoreInternalOutcome ViewBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewBaseInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewBaseInfo.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (value.HasMember("UserAlias") && !value["UserAlias"].IsNull())
    {
        if (!value["UserAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewBaseInfo.UserAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAlias = string(value["UserAlias"].GetString());
        m_userAliasHasBeenSet = true;
    }

    if (value.HasMember("UserSubUin") && !value["UserSubUin"].IsNull())
    {
        if (!value["UserSubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewBaseInfo.UserSubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSubUin = string(value["UserSubUin"].GetString());
        m_userSubUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViewBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSubUin.c_str(), allocator).Move(), allocator);
    }

}


string ViewBaseInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void ViewBaseInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool ViewBaseInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string ViewBaseInfo::GetViewName() const
{
    return m_viewName;
}

void ViewBaseInfo::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool ViewBaseInfo::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string ViewBaseInfo::GetUserAlias() const
{
    return m_userAlias;
}

void ViewBaseInfo::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool ViewBaseInfo::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}

string ViewBaseInfo::GetUserSubUin() const
{
    return m_userSubUin;
}

void ViewBaseInfo::SetUserSubUin(const string& _userSubUin)
{
    m_userSubUin = _userSubUin;
    m_userSubUinHasBeenSet = true;
}

bool ViewBaseInfo::UserSubUinHasBeenSet() const
{
    return m_userSubUinHasBeenSet;
}

