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

#include <tencentcloud/ic/v20190307/model/AppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

AppInfo::AppInfo() :
    m_sdkappidHasBeenSet(false),
    m_appkeyHasBeenSet(false),
    m_cloudAppidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome AppInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sdkappid") && !value["Sdkappid"].IsNull())
    {
        if (!value["Sdkappid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.Sdkappid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkappid = string(value["Sdkappid"].GetString());
        m_sdkappidHasBeenSet = true;
    }

    if (value.HasMember("Appkey") && !value["Appkey"].IsNull())
    {
        if (!value["Appkey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.Appkey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appkey = string(value["Appkey"].GetString());
        m_appkeyHasBeenSet = true;
    }

    if (value.HasMember("CloudAppid") && !value["CloudAppid"].IsNull())
    {
        if (!value["CloudAppid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.CloudAppid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAppid = string(value["CloudAppid"].GetString());
        m_cloudAppidHasBeenSet = true;
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

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.BizType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = value["BizType"].GetInt64();
        m_bizTypeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkappidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sdkappid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkappid.c_str(), allocator).Move(), allocator);
    }

    if (m_appkeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appkey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appkey.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizType, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


string AppInfo::GetSdkappid() const
{
    return m_sdkappid;
}

void AppInfo::SetSdkappid(const string& _sdkappid)
{
    m_sdkappid = _sdkappid;
    m_sdkappidHasBeenSet = true;
}

bool AppInfo::SdkappidHasBeenSet() const
{
    return m_sdkappidHasBeenSet;
}

string AppInfo::GetAppkey() const
{
    return m_appkey;
}

void AppInfo::SetAppkey(const string& _appkey)
{
    m_appkey = _appkey;
    m_appkeyHasBeenSet = true;
}

bool AppInfo::AppkeyHasBeenSet() const
{
    return m_appkeyHasBeenSet;
}

string AppInfo::GetCloudAppid() const
{
    return m_cloudAppid;
}

void AppInfo::SetCloudAppid(const string& _cloudAppid)
{
    m_cloudAppid = _cloudAppid;
    m_cloudAppidHasBeenSet = true;
}

bool AppInfo::CloudAppidHasBeenSet() const
{
    return m_cloudAppidHasBeenSet;
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

string AppInfo::GetDescription() const
{
    return m_description;
}

void AppInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AppInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AppInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void AppInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AppInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t AppInfo::GetBizType() const
{
    return m_bizType;
}

void AppInfo::SetBizType(const int64_t& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool AppInfo::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string AppInfo::GetUin() const
{
    return m_uin;
}

void AppInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AppInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

