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

#include <tencentcloud/iotexplorer/v20190423/model/AuthMiniProgramAppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

AuthMiniProgramAppInfo::AuthMiniProgramAppInfo() :
    m_miniProgramAppIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_miniProgramNameHasBeenSet(false),
    m_licenseNumHasBeenSet(false),
    m_iotAppIdHasBeenSet(false),
    m_iotAppNameHasBeenSet(false)
{
}

CoreInternalOutcome AuthMiniProgramAppInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MiniProgramAppId") && !value["MiniProgramAppId"].IsNull())
    {
        if (!value["MiniProgramAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthMiniProgramAppInfo.MiniProgramAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniProgramAppId = string(value["MiniProgramAppId"].GetString());
        m_miniProgramAppIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthMiniProgramAppInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MiniProgramName") && !value["MiniProgramName"].IsNull())
    {
        if (!value["MiniProgramName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthMiniProgramAppInfo.MiniProgramName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniProgramName = string(value["MiniProgramName"].GetString());
        m_miniProgramNameHasBeenSet = true;
    }

    if (value.HasMember("LicenseNum") && !value["LicenseNum"].IsNull())
    {
        if (!value["LicenseNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthMiniProgramAppInfo.LicenseNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNum = value["LicenseNum"].GetInt64();
        m_licenseNumHasBeenSet = true;
    }

    if (value.HasMember("IotAppId") && !value["IotAppId"].IsNull())
    {
        if (!value["IotAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthMiniProgramAppInfo.IotAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iotAppId = string(value["IotAppId"].GetString());
        m_iotAppIdHasBeenSet = true;
    }

    if (value.HasMember("IotAppName") && !value["IotAppName"].IsNull())
    {
        if (!value["IotAppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthMiniProgramAppInfo.IotAppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iotAppName = string(value["IotAppName"].GetString());
        m_iotAppNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthMiniProgramAppInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_miniProgramAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniProgramAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_miniProgramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniProgramName.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseNum, allocator);
    }

    if (m_iotAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iotAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_iotAppNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotAppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iotAppName.c_str(), allocator).Move(), allocator);
    }

}


string AuthMiniProgramAppInfo::GetMiniProgramAppId() const
{
    return m_miniProgramAppId;
}

void AuthMiniProgramAppInfo::SetMiniProgramAppId(const string& _miniProgramAppId)
{
    m_miniProgramAppId = _miniProgramAppId;
    m_miniProgramAppIdHasBeenSet = true;
}

bool AuthMiniProgramAppInfo::MiniProgramAppIdHasBeenSet() const
{
    return m_miniProgramAppIdHasBeenSet;
}

int64_t AuthMiniProgramAppInfo::GetCreateTime() const
{
    return m_createTime;
}

void AuthMiniProgramAppInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AuthMiniProgramAppInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AuthMiniProgramAppInfo::GetMiniProgramName() const
{
    return m_miniProgramName;
}

void AuthMiniProgramAppInfo::SetMiniProgramName(const string& _miniProgramName)
{
    m_miniProgramName = _miniProgramName;
    m_miniProgramNameHasBeenSet = true;
}

bool AuthMiniProgramAppInfo::MiniProgramNameHasBeenSet() const
{
    return m_miniProgramNameHasBeenSet;
}

int64_t AuthMiniProgramAppInfo::GetLicenseNum() const
{
    return m_licenseNum;
}

void AuthMiniProgramAppInfo::SetLicenseNum(const int64_t& _licenseNum)
{
    m_licenseNum = _licenseNum;
    m_licenseNumHasBeenSet = true;
}

bool AuthMiniProgramAppInfo::LicenseNumHasBeenSet() const
{
    return m_licenseNumHasBeenSet;
}

string AuthMiniProgramAppInfo::GetIotAppId() const
{
    return m_iotAppId;
}

void AuthMiniProgramAppInfo::SetIotAppId(const string& _iotAppId)
{
    m_iotAppId = _iotAppId;
    m_iotAppIdHasBeenSet = true;
}

bool AuthMiniProgramAppInfo::IotAppIdHasBeenSet() const
{
    return m_iotAppIdHasBeenSet;
}

string AuthMiniProgramAppInfo::GetIotAppName() const
{
    return m_iotAppName;
}

void AuthMiniProgramAppInfo::SetIotAppName(const string& _iotAppName)
{
    m_iotAppName = _iotAppName;
    m_iotAppNameHasBeenSet = true;
}

bool AuthMiniProgramAppInfo::IotAppNameHasBeenSet() const
{
    return m_iotAppNameHasBeenSet;
}

