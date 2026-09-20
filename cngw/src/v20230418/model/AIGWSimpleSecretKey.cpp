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

#include <tencentcloud/cngw/v20230418/model/AIGWSimpleSecretKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWSimpleSecretKey::AIGWSimpleSecretKey() :
    m_secretKeyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_secretTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome AIGWSimpleSecretKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretKeyId") && !value["SecretKeyId"].IsNull())
    {
        if (!value["SecretKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWSimpleSecretKey.SecretKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKeyId = string(value["SecretKeyId"].GetString());
        m_secretKeyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWSimpleSecretKey.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWSimpleSecretKey.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SecretType") && !value["SecretType"].IsNull())
    {
        if (!value["SecretType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWSimpleSecretKey.SecretType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretType = string(value["SecretType"].GetString());
        m_secretTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWSimpleSecretKey.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWSimpleSecretKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_secretTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string AIGWSimpleSecretKey::GetSecretKeyId() const
{
    return m_secretKeyId;
}

void AIGWSimpleSecretKey::SetSecretKeyId(const string& _secretKeyId)
{
    m_secretKeyId = _secretKeyId;
    m_secretKeyIdHasBeenSet = true;
}

bool AIGWSimpleSecretKey::SecretKeyIdHasBeenSet() const
{
    return m_secretKeyIdHasBeenSet;
}

string AIGWSimpleSecretKey::GetName() const
{
    return m_name;
}

void AIGWSimpleSecretKey::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AIGWSimpleSecretKey::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AIGWSimpleSecretKey::GetStatus() const
{
    return m_status;
}

void AIGWSimpleSecretKey::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AIGWSimpleSecretKey::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AIGWSimpleSecretKey::GetSecretType() const
{
    return m_secretType;
}

void AIGWSimpleSecretKey::SetSecretType(const string& _secretType)
{
    m_secretType = _secretType;
    m_secretTypeHasBeenSet = true;
}

bool AIGWSimpleSecretKey::SecretTypeHasBeenSet() const
{
    return m_secretTypeHasBeenSet;
}

string AIGWSimpleSecretKey::GetCreateTime() const
{
    return m_createTime;
}

void AIGWSimpleSecretKey::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AIGWSimpleSecretKey::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

