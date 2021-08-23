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

#include <tencentcloud/dayu/v20180709/model/WaterPrintKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

WaterPrintKey::WaterPrintKey() :
    m_keyIdHasBeenSet(false),
    m_keyContentHasBeenSet(false),
    m_keyVersionHasBeenSet(false),
    m_openStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome WaterPrintKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintKey.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("KeyContent") && !value["KeyContent"].IsNull())
    {
        if (!value["KeyContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintKey.KeyContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyContent = string(value["KeyContent"].GetString());
        m_keyContentHasBeenSet = true;
    }

    if (value.HasMember("KeyVersion") && !value["KeyVersion"].IsNull())
    {
        if (!value["KeyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintKey.KeyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyVersion = string(value["KeyVersion"].GetString());
        m_keyVersionHasBeenSet = true;
    }

    if (value.HasMember("OpenStatus") && !value["OpenStatus"].IsNull())
    {
        if (!value["OpenStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintKey.OpenStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openStatus = value["OpenStatus"].GetUint64();
        m_openStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintKey.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaterPrintKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyContent.c_str(), allocator).Move(), allocator);
    }

    if (m_keyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_openStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string WaterPrintKey::GetKeyId() const
{
    return m_keyId;
}

void WaterPrintKey::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool WaterPrintKey::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string WaterPrintKey::GetKeyContent() const
{
    return m_keyContent;
}

void WaterPrintKey::SetKeyContent(const string& _keyContent)
{
    m_keyContent = _keyContent;
    m_keyContentHasBeenSet = true;
}

bool WaterPrintKey::KeyContentHasBeenSet() const
{
    return m_keyContentHasBeenSet;
}

string WaterPrintKey::GetKeyVersion() const
{
    return m_keyVersion;
}

void WaterPrintKey::SetKeyVersion(const string& _keyVersion)
{
    m_keyVersion = _keyVersion;
    m_keyVersionHasBeenSet = true;
}

bool WaterPrintKey::KeyVersionHasBeenSet() const
{
    return m_keyVersionHasBeenSet;
}

uint64_t WaterPrintKey::GetOpenStatus() const
{
    return m_openStatus;
}

void WaterPrintKey::SetOpenStatus(const uint64_t& _openStatus)
{
    m_openStatus = _openStatus;
    m_openStatusHasBeenSet = true;
}

bool WaterPrintKey::OpenStatusHasBeenSet() const
{
    return m_openStatusHasBeenSet;
}

string WaterPrintKey::GetCreateTime() const
{
    return m_createTime;
}

void WaterPrintKey::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WaterPrintKey::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

