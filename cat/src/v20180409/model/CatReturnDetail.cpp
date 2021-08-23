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

#include <tencentcloud/cat/v20180409/model/CatReturnDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

CatReturnDetail::CatReturnDetail() :
    m_ispNameHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_provinceNameHasBeenSet(false),
    m_mapKeyHasBeenSet(false),
    m_serverIpHasBeenSet(false),
    m_resultCountHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_errorReasonHasBeenSet(false)
{
}

CoreInternalOutcome CatReturnDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IspName") && !value["IspName"].IsNull())
    {
        if (!value["IspName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatReturnDetail.IspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispName = string(value["IspName"].GetString());
        m_ispNameHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatReturnDetail.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("ProvinceName") && !value["ProvinceName"].IsNull())
    {
        if (!value["ProvinceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatReturnDetail.ProvinceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceName = string(value["ProvinceName"].GetString());
        m_provinceNameHasBeenSet = true;
    }

    if (value.HasMember("MapKey") && !value["MapKey"].IsNull())
    {
        if (!value["MapKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatReturnDetail.MapKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mapKey = string(value["MapKey"].GetString());
        m_mapKeyHasBeenSet = true;
    }

    if (value.HasMember("ServerIp") && !value["ServerIp"].IsNull())
    {
        if (!value["ServerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatReturnDetail.ServerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverIp = string(value["ServerIp"].GetString());
        m_serverIpHasBeenSet = true;
    }

    if (value.HasMember("ResultCount") && !value["ResultCount"].IsNull())
    {
        if (!value["ResultCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatReturnDetail.ResultCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCount = value["ResultCount"].GetUint64();
        m_resultCountHasBeenSet = true;
    }

    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CatReturnDetail.ResultCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = value["ResultCode"].GetUint64();
        m_resultCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorReason") && !value["ErrorReason"].IsNull())
    {
        if (!value["ErrorReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CatReturnDetail.ErrorReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorReason = string(value["ErrorReason"].GetString());
        m_errorReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CatReturnDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ispNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispName.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceName.c_str(), allocator).Move(), allocator);
    }

    if (m_mapKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mapKey.c_str(), allocator).Move(), allocator);
    }

    if (m_serverIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverIp.c_str(), allocator).Move(), allocator);
    }

    if (m_resultCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCount, allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCode, allocator);
    }

    if (m_errorReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorReason.c_str(), allocator).Move(), allocator);
    }

}


string CatReturnDetail::GetIspName() const
{
    return m_ispName;
}

void CatReturnDetail::SetIspName(const string& _ispName)
{
    m_ispName = _ispName;
    m_ispNameHasBeenSet = true;
}

bool CatReturnDetail::IspNameHasBeenSet() const
{
    return m_ispNameHasBeenSet;
}

string CatReturnDetail::GetProvince() const
{
    return m_province;
}

void CatReturnDetail::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool CatReturnDetail::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string CatReturnDetail::GetProvinceName() const
{
    return m_provinceName;
}

void CatReturnDetail::SetProvinceName(const string& _provinceName)
{
    m_provinceName = _provinceName;
    m_provinceNameHasBeenSet = true;
}

bool CatReturnDetail::ProvinceNameHasBeenSet() const
{
    return m_provinceNameHasBeenSet;
}

string CatReturnDetail::GetMapKey() const
{
    return m_mapKey;
}

void CatReturnDetail::SetMapKey(const string& _mapKey)
{
    m_mapKey = _mapKey;
    m_mapKeyHasBeenSet = true;
}

bool CatReturnDetail::MapKeyHasBeenSet() const
{
    return m_mapKeyHasBeenSet;
}

string CatReturnDetail::GetServerIp() const
{
    return m_serverIp;
}

void CatReturnDetail::SetServerIp(const string& _serverIp)
{
    m_serverIp = _serverIp;
    m_serverIpHasBeenSet = true;
}

bool CatReturnDetail::ServerIpHasBeenSet() const
{
    return m_serverIpHasBeenSet;
}

uint64_t CatReturnDetail::GetResultCount() const
{
    return m_resultCount;
}

void CatReturnDetail::SetResultCount(const uint64_t& _resultCount)
{
    m_resultCount = _resultCount;
    m_resultCountHasBeenSet = true;
}

bool CatReturnDetail::ResultCountHasBeenSet() const
{
    return m_resultCountHasBeenSet;
}

uint64_t CatReturnDetail::GetResultCode() const
{
    return m_resultCode;
}

void CatReturnDetail::SetResultCode(const uint64_t& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool CatReturnDetail::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string CatReturnDetail::GetErrorReason() const
{
    return m_errorReason;
}

void CatReturnDetail::SetErrorReason(const string& _errorReason)
{
    m_errorReason = _errorReason;
    m_errorReasonHasBeenSet = true;
}

bool CatReturnDetail::ErrorReasonHasBeenSet() const
{
    return m_errorReasonHasBeenSet;
}

