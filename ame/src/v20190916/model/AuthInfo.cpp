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

#include <tencentcloud/ame/v20190916/model/AuthInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

AuthInfo::AuthInfo() :
    m_subjectNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_appSceneHasBeenSet(false),
    m_appRegionHasBeenSet(false),
    m_authPeriodHasBeenSet(false),
    m_commercializationHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome AuthInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubjectName") && !value["SubjectName"].IsNull())
    {
        if (!value["SubjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfo.SubjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subjectName = string(value["SubjectName"].GetString());
        m_subjectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("AppScene") && !value["AppScene"].IsNull())
    {
        if (!value["AppScene"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfo.AppScene` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appScene = value["AppScene"].GetInt64();
        m_appSceneHasBeenSet = true;
    }

    if (value.HasMember("AppRegion") && !value["AppRegion"].IsNull())
    {
        if (!value["AppRegion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfo.AppRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appRegion = value["AppRegion"].GetInt64();
        m_appRegionHasBeenSet = true;
    }

    if (value.HasMember("AuthPeriod") && !value["AuthPeriod"].IsNull())
    {
        if (!value["AuthPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfo.AuthPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authPeriod = value["AuthPeriod"].GetInt64();
        m_authPeriodHasBeenSet = true;
    }

    if (value.HasMember("Commercialization") && !value["Commercialization"].IsNull())
    {
        if (!value["Commercialization"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfo.Commercialization` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commercialization = value["Commercialization"].GetInt64();
        m_commercializationHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfo.Platform` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platform = value["Platform"].GetInt64();
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_appSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appScene, allocator);
    }

    if (m_appRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appRegion, allocator);
    }

    if (m_authPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authPeriod, allocator);
    }

    if (m_commercializationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commercialization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commercialization, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platform, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


string AuthInfo::GetSubjectName() const
{
    return m_subjectName;
}

void AuthInfo::SetSubjectName(const string& _subjectName)
{
    m_subjectName = _subjectName;
    m_subjectNameHasBeenSet = true;
}

bool AuthInfo::SubjectNameHasBeenSet() const
{
    return m_subjectNameHasBeenSet;
}

string AuthInfo::GetProjectName() const
{
    return m_projectName;
}

void AuthInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool AuthInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t AuthInfo::GetAppScene() const
{
    return m_appScene;
}

void AuthInfo::SetAppScene(const int64_t& _appScene)
{
    m_appScene = _appScene;
    m_appSceneHasBeenSet = true;
}

bool AuthInfo::AppSceneHasBeenSet() const
{
    return m_appSceneHasBeenSet;
}

int64_t AuthInfo::GetAppRegion() const
{
    return m_appRegion;
}

void AuthInfo::SetAppRegion(const int64_t& _appRegion)
{
    m_appRegion = _appRegion;
    m_appRegionHasBeenSet = true;
}

bool AuthInfo::AppRegionHasBeenSet() const
{
    return m_appRegionHasBeenSet;
}

int64_t AuthInfo::GetAuthPeriod() const
{
    return m_authPeriod;
}

void AuthInfo::SetAuthPeriod(const int64_t& _authPeriod)
{
    m_authPeriod = _authPeriod;
    m_authPeriodHasBeenSet = true;
}

bool AuthInfo::AuthPeriodHasBeenSet() const
{
    return m_authPeriodHasBeenSet;
}

int64_t AuthInfo::GetCommercialization() const
{
    return m_commercialization;
}

void AuthInfo::SetCommercialization(const int64_t& _commercialization)
{
    m_commercialization = _commercialization;
    m_commercializationHasBeenSet = true;
}

bool AuthInfo::CommercializationHasBeenSet() const
{
    return m_commercializationHasBeenSet;
}

int64_t AuthInfo::GetPlatform() const
{
    return m_platform;
}

void AuthInfo::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool AuthInfo::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string AuthInfo::GetId() const
{
    return m_id;
}

void AuthInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AuthInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

