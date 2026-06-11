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

#include <tencentcloud/csip/v20221121/model/CICDToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CICDToken::CICDToken() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_fileCntHasBeenSet(false),
    m_lastScanStatusHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false)
{
}

CoreInternalOutcome CICDToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CICDToken.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CICDToken.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CICDToken.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CICDToken.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CICDToken.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("FileCnt") && !value["FileCnt"].IsNull())
    {
        if (!value["FileCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CICDToken.FileCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileCnt = value["FileCnt"].GetUint64();
        m_fileCntHasBeenSet = true;
    }

    if (value.HasMember("LastScanStatus") && !value["LastScanStatus"].IsNull())
    {
        if (!value["LastScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CICDToken.LastScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanStatus = string(value["LastScanStatus"].GetString());
        m_lastScanStatusHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CICDToken.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CICDToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_fileCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileCnt, allocator);
    }

    if (m_lastScanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CICDToken::GetId() const
{
    return m_id;
}

void CICDToken::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CICDToken::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t CICDToken::GetAppId() const
{
    return m_appId;
}

void CICDToken::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CICDToken::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CICDToken::GetName() const
{
    return m_name;
}

void CICDToken::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CICDToken::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CICDToken::GetToken() const
{
    return m_token;
}

void CICDToken::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool CICDToken::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

uint64_t CICDToken::GetPeriod() const
{
    return m_period;
}

void CICDToken::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CICDToken::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t CICDToken::GetFileCnt() const
{
    return m_fileCnt;
}

void CICDToken::SetFileCnt(const uint64_t& _fileCnt)
{
    m_fileCnt = _fileCnt;
    m_fileCntHasBeenSet = true;
}

bool CICDToken::FileCntHasBeenSet() const
{
    return m_fileCntHasBeenSet;
}

string CICDToken::GetLastScanStatus() const
{
    return m_lastScanStatus;
}

void CICDToken::SetLastScanStatus(const string& _lastScanStatus)
{
    m_lastScanStatus = _lastScanStatus;
    m_lastScanStatusHasBeenSet = true;
}

bool CICDToken::LastScanStatusHasBeenSet() const
{
    return m_lastScanStatusHasBeenSet;
}

string CICDToken::GetLastScanTime() const
{
    return m_lastScanTime;
}

void CICDToken::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool CICDToken::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

