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

#include <tencentcloud/cdwdoris/v20211228/model/ZoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ZoneInfo::ZoneInfo() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_mainHasBeenSet(false),
    m_containerEnabledHasBeenSet(false)
{
}

CoreInternalOutcome ZoneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.Encrypt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = value["Encrypt"].GetInt64();
        m_encryptHasBeenSet = true;
    }

    if (value.HasMember("Main") && !value["Main"].IsNull())
    {
        if (!value["Main"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.Main` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_main = value["Main"].GetBool();
        m_mainHasBeenSet = true;
    }

    if (value.HasMember("ContainerEnabled") && !value["ContainerEnabled"].IsNull())
    {
        if (!value["ContainerEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneInfo.ContainerEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerEnabled = value["ContainerEnabled"].GetInt64();
        m_containerEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_mainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Main";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_main, allocator);
    }

    if (m_containerEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerEnabled, allocator);
    }

}


string ZoneInfo::GetName() const
{
    return m_name;
}

void ZoneInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ZoneInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ZoneInfo::GetDesc() const
{
    return m_desc;
}

void ZoneInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ZoneInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t ZoneInfo::GetZoneId() const
{
    return m_zoneId;
}

void ZoneInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t ZoneInfo::GetEncrypt() const
{
    return m_encrypt;
}

void ZoneInfo::SetEncrypt(const int64_t& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool ZoneInfo::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

bool ZoneInfo::GetMain() const
{
    return m_main;
}

void ZoneInfo::SetMain(const bool& _main)
{
    m_main = _main;
    m_mainHasBeenSet = true;
}

bool ZoneInfo::MainHasBeenSet() const
{
    return m_mainHasBeenSet;
}

int64_t ZoneInfo::GetContainerEnabled() const
{
    return m_containerEnabled;
}

void ZoneInfo::SetContainerEnabled(const int64_t& _containerEnabled)
{
    m_containerEnabled = _containerEnabled;
    m_containerEnabledHasBeenSet = true;
}

bool ZoneInfo::ContainerEnabledHasBeenSet() const
{
    return m_containerEnabledHasBeenSet;
}

