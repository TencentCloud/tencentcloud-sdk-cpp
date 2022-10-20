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

#include <tencentcloud/tcss/v20201101/model/ScanIgnoreVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ScanIgnoreVul::ScanIgnoreVul() :
    m_vulNameHasBeenSet(false),
    m_cVEIDHasBeenSet(false),
    m_pocIDHasBeenSet(false),
    m_registryImageCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isIgnoreAllHasBeenSet(false),
    m_localImageCountHasBeenSet(false)
{
}

CoreInternalOutcome ScanIgnoreVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIgnoreVul.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIgnoreVul.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIgnoreVul.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }

    if (value.HasMember("RegistryImageCount") && !value["RegistryImageCount"].IsNull())
    {
        if (!value["RegistryImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIgnoreVul.RegistryImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryImageCount = value["RegistryImageCount"].GetInt64();
        m_registryImageCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIgnoreVul.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsIgnoreAll") && !value["IsIgnoreAll"].IsNull())
    {
        if (!value["IsIgnoreAll"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIgnoreVul.IsIgnoreAll` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnoreAll = value["IsIgnoreAll"].GetInt64();
        m_isIgnoreAllHasBeenSet = true;
    }

    if (value.HasMember("LocalImageCount") && !value["LocalImageCount"].IsNull())
    {
        if (!value["LocalImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIgnoreVul.LocalImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localImageCount = value["LocalImageCount"].GetInt64();
        m_localImageCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanIgnoreVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

    if (m_pocIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocID.c_str(), allocator).Move(), allocator);
    }

    if (m_registryImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryImageCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isIgnoreAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnoreAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnoreAll, allocator);
    }

    if (m_localImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localImageCount, allocator);
    }

}


string ScanIgnoreVul::GetVulName() const
{
    return m_vulName;
}

void ScanIgnoreVul::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool ScanIgnoreVul::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string ScanIgnoreVul::GetCVEID() const
{
    return m_cVEID;
}

void ScanIgnoreVul::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool ScanIgnoreVul::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string ScanIgnoreVul::GetPocID() const
{
    return m_pocID;
}

void ScanIgnoreVul::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool ScanIgnoreVul::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

int64_t ScanIgnoreVul::GetRegistryImageCount() const
{
    return m_registryImageCount;
}

void ScanIgnoreVul::SetRegistryImageCount(const int64_t& _registryImageCount)
{
    m_registryImageCount = _registryImageCount;
    m_registryImageCountHasBeenSet = true;
}

bool ScanIgnoreVul::RegistryImageCountHasBeenSet() const
{
    return m_registryImageCountHasBeenSet;
}

string ScanIgnoreVul::GetUpdateTime() const
{
    return m_updateTime;
}

void ScanIgnoreVul::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ScanIgnoreVul::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ScanIgnoreVul::GetIsIgnoreAll() const
{
    return m_isIgnoreAll;
}

void ScanIgnoreVul::SetIsIgnoreAll(const int64_t& _isIgnoreAll)
{
    m_isIgnoreAll = _isIgnoreAll;
    m_isIgnoreAllHasBeenSet = true;
}

bool ScanIgnoreVul::IsIgnoreAllHasBeenSet() const
{
    return m_isIgnoreAllHasBeenSet;
}

int64_t ScanIgnoreVul::GetLocalImageCount() const
{
    return m_localImageCount;
}

void ScanIgnoreVul::SetLocalImageCount(const int64_t& _localImageCount)
{
    m_localImageCount = _localImageCount;
    m_localImageCountHasBeenSet = true;
}

bool ScanIgnoreVul::LocalImageCountHasBeenSet() const
{
    return m_localImageCountHasBeenSet;
}

