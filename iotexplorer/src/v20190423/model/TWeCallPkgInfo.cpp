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

#include <tencentcloud/iotexplorer/v20190423/model/TWeCallPkgInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TWeCallPkgInfo::TWeCallPkgInfo() :
    m_pkgIdHasBeenSet(false),
    m_pkgTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_licenseUsedNumHasBeenSet(false),
    m_licenseTotalNumHasBeenSet(false)
{
}

CoreInternalOutcome TWeCallPkgInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallPkgInfo.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("PkgType") && !value["PkgType"].IsNull())
    {
        if (!value["PkgType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallPkgInfo.PkgType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pkgType = value["PkgType"].GetInt64();
        m_pkgTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallPkgInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallPkgInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallPkgInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LicenseUsedNum") && !value["LicenseUsedNum"].IsNull())
    {
        if (!value["LicenseUsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallPkgInfo.LicenseUsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseUsedNum = value["LicenseUsedNum"].GetInt64();
        m_licenseUsedNumHasBeenSet = true;
    }

    if (value.HasMember("LicenseTotalNum") && !value["LicenseTotalNum"].IsNull())
    {
        if (!value["LicenseTotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallPkgInfo.LicenseTotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseTotalNum = value["LicenseTotalNum"].GetInt64();
        m_licenseTotalNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TWeCallPkgInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pkgType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_licenseUsedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseUsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseUsedNum, allocator);
    }

    if (m_licenseTotalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseTotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseTotalNum, allocator);
    }

}


string TWeCallPkgInfo::GetPkgId() const
{
    return m_pkgId;
}

void TWeCallPkgInfo::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool TWeCallPkgInfo::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

int64_t TWeCallPkgInfo::GetPkgType() const
{
    return m_pkgType;
}

void TWeCallPkgInfo::SetPkgType(const int64_t& _pkgType)
{
    m_pkgType = _pkgType;
    m_pkgTypeHasBeenSet = true;
}

bool TWeCallPkgInfo::PkgTypeHasBeenSet() const
{
    return m_pkgTypeHasBeenSet;
}

int64_t TWeCallPkgInfo::GetCreateTime() const
{
    return m_createTime;
}

void TWeCallPkgInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TWeCallPkgInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TWeCallPkgInfo::GetExpireTime() const
{
    return m_expireTime;
}

void TWeCallPkgInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool TWeCallPkgInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t TWeCallPkgInfo::GetStatus() const
{
    return m_status;
}

void TWeCallPkgInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TWeCallPkgInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t TWeCallPkgInfo::GetLicenseUsedNum() const
{
    return m_licenseUsedNum;
}

void TWeCallPkgInfo::SetLicenseUsedNum(const int64_t& _licenseUsedNum)
{
    m_licenseUsedNum = _licenseUsedNum;
    m_licenseUsedNumHasBeenSet = true;
}

bool TWeCallPkgInfo::LicenseUsedNumHasBeenSet() const
{
    return m_licenseUsedNumHasBeenSet;
}

int64_t TWeCallPkgInfo::GetLicenseTotalNum() const
{
    return m_licenseTotalNum;
}

void TWeCallPkgInfo::SetLicenseTotalNum(const int64_t& _licenseTotalNum)
{
    m_licenseTotalNum = _licenseTotalNum;
    m_licenseTotalNumHasBeenSet = true;
}

bool TWeCallPkgInfo::LicenseTotalNumHasBeenSet() const
{
    return m_licenseTotalNumHasBeenSet;
}

