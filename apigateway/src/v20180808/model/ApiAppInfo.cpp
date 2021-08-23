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

#include <tencentcloud/apigateway/v20180808/model/ApiAppInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ApiAppInfo::ApiAppInfo() :
    m_apiAppNameHasBeenSet(false),
    m_apiAppIdHasBeenSet(false),
    m_apiAppSecretHasBeenSet(false),
    m_apiAppDescHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_apiAppKeyHasBeenSet(false)
{
}

CoreInternalOutcome ApiAppInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiAppName") && !value["ApiAppName"].IsNull())
    {
        if (!value["ApiAppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppInfo.ApiAppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAppName = string(value["ApiAppName"].GetString());
        m_apiAppNameHasBeenSet = true;
    }

    if (value.HasMember("ApiAppId") && !value["ApiAppId"].IsNull())
    {
        if (!value["ApiAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppInfo.ApiAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAppId = string(value["ApiAppId"].GetString());
        m_apiAppIdHasBeenSet = true;
    }

    if (value.HasMember("ApiAppSecret") && !value["ApiAppSecret"].IsNull())
    {
        if (!value["ApiAppSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppInfo.ApiAppSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAppSecret = string(value["ApiAppSecret"].GetString());
        m_apiAppSecretHasBeenSet = true;
    }

    if (value.HasMember("ApiAppDesc") && !value["ApiAppDesc"].IsNull())
    {
        if (!value["ApiAppDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppInfo.ApiAppDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAppDesc = string(value["ApiAppDesc"].GetString());
        m_apiAppDescHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("ApiAppKey") && !value["ApiAppKey"].IsNull())
    {
        if (!value["ApiAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAppInfo.ApiAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiAppKey = string(value["ApiAppKey"].GetString());
        m_apiAppKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiAppInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiAppNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiAppName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAppSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiAppSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAppDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiAppDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiAppKey.c_str(), allocator).Move(), allocator);
    }

}


string ApiAppInfo::GetApiAppName() const
{
    return m_apiAppName;
}

void ApiAppInfo::SetApiAppName(const string& _apiAppName)
{
    m_apiAppName = _apiAppName;
    m_apiAppNameHasBeenSet = true;
}

bool ApiAppInfo::ApiAppNameHasBeenSet() const
{
    return m_apiAppNameHasBeenSet;
}

string ApiAppInfo::GetApiAppId() const
{
    return m_apiAppId;
}

void ApiAppInfo::SetApiAppId(const string& _apiAppId)
{
    m_apiAppId = _apiAppId;
    m_apiAppIdHasBeenSet = true;
}

bool ApiAppInfo::ApiAppIdHasBeenSet() const
{
    return m_apiAppIdHasBeenSet;
}

string ApiAppInfo::GetApiAppSecret() const
{
    return m_apiAppSecret;
}

void ApiAppInfo::SetApiAppSecret(const string& _apiAppSecret)
{
    m_apiAppSecret = _apiAppSecret;
    m_apiAppSecretHasBeenSet = true;
}

bool ApiAppInfo::ApiAppSecretHasBeenSet() const
{
    return m_apiAppSecretHasBeenSet;
}

string ApiAppInfo::GetApiAppDesc() const
{
    return m_apiAppDesc;
}

void ApiAppInfo::SetApiAppDesc(const string& _apiAppDesc)
{
    m_apiAppDesc = _apiAppDesc;
    m_apiAppDescHasBeenSet = true;
}

bool ApiAppInfo::ApiAppDescHasBeenSet() const
{
    return m_apiAppDescHasBeenSet;
}

string ApiAppInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void ApiAppInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ApiAppInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ApiAppInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ApiAppInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ApiAppInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string ApiAppInfo::GetApiAppKey() const
{
    return m_apiAppKey;
}

void ApiAppInfo::SetApiAppKey(const string& _apiAppKey)
{
    m_apiAppKey = _apiAppKey;
    m_apiAppKeyHasBeenSet = true;
}

bool ApiAppInfo::ApiAppKeyHasBeenSet() const
{
    return m_apiAppKeyHasBeenSet;
}

