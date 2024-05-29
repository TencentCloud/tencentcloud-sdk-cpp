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

#include <tencentcloud/trp/v20210515/model/ScanLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ScanLog::ScanLog() :
    m_logIdHasBeenSet(false),
    m_openidHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_unionidHasBeenSet(false),
    m_firstHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productLogoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_verifyHasBeenSet(false)
{
}

CoreInternalOutcome ScanLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.LogId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logId = value["LogId"].GetInt64();
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("Openid") && !value["Openid"].IsNull())
    {
        if (!value["Openid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Openid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openid = string(value["Openid"].GetString());
        m_openidHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.CorpId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetInt64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("District") && !value["District"].IsNull())
    {
        if (!value["District"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.District` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_district = string(value["District"].GetString());
        m_districtHasBeenSet = true;
    }

    if (value.HasMember("Unionid") && !value["Unionid"].IsNull())
    {
        if (!value["Unionid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Unionid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unionid = string(value["Unionid"].GetString());
        m_unionidHasBeenSet = true;
    }

    if (value.HasMember("First") && !value["First"].IsNull())
    {
        if (!value["First"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.First` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_first = value["First"].GetInt64();
        m_firstHasBeenSet = true;
    }

    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductLogo") && !value["ProductLogo"].IsNull())
    {
        if (!value["ProductLogo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.ProductLogo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productLogo = string(value["ProductLogo"].GetString());
        m_productLogoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Verify") && !value["Verify"].IsNull())
    {
        if (!value["Verify"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanLog.Verify` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verify = value["Verify"].GetInt64();
        m_verifyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logId, allocator);
    }

    if (m_openidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Openid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openid.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_district.c_str(), allocator).Move(), allocator);
    }

    if (m_unionidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unionid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unionid.c_str(), allocator).Move(), allocator);
    }

    if (m_firstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "First";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_first, allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productLogo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_verifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Verify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verify, allocator);
    }

}


int64_t ScanLog::GetLogId() const
{
    return m_logId;
}

void ScanLog::SetLogId(const int64_t& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool ScanLog::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string ScanLog::GetOpenid() const
{
    return m_openid;
}

void ScanLog::SetOpenid(const string& _openid)
{
    m_openid = _openid;
    m_openidHasBeenSet = true;
}

bool ScanLog::OpenidHasBeenSet() const
{
    return m_openidHasBeenSet;
}

string ScanLog::GetNickname() const
{
    return m_nickname;
}

void ScanLog::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool ScanLog::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string ScanLog::GetCreateTime() const
{
    return m_createTime;
}

void ScanLog::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ScanLog::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ScanLog::GetCode() const
{
    return m_code;
}

void ScanLog::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ScanLog::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

int64_t ScanLog::GetCorpId() const
{
    return m_corpId;
}

void ScanLog::SetCorpId(const int64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool ScanLog::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string ScanLog::GetMerchantId() const
{
    return m_merchantId;
}

void ScanLog::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool ScanLog::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string ScanLog::GetProductId() const
{
    return m_productId;
}

void ScanLog::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ScanLog::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ScanLog::GetIp() const
{
    return m_ip;
}

void ScanLog::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ScanLog::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string ScanLog::GetCountry() const
{
    return m_country;
}

void ScanLog::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool ScanLog::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string ScanLog::GetProvince() const
{
    return m_province;
}

void ScanLog::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ScanLog::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string ScanLog::GetCity() const
{
    return m_city;
}

void ScanLog::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ScanLog::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string ScanLog::GetDistrict() const
{
    return m_district;
}

void ScanLog::SetDistrict(const string& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool ScanLog::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

string ScanLog::GetUnionid() const
{
    return m_unionid;
}

void ScanLog::SetUnionid(const string& _unionid)
{
    m_unionid = _unionid;
    m_unionidHasBeenSet = true;
}

bool ScanLog::UnionidHasBeenSet() const
{
    return m_unionidHasBeenSet;
}

int64_t ScanLog::GetFirst() const
{
    return m_first;
}

void ScanLog::SetFirst(const int64_t& _first)
{
    m_first = _first;
    m_firstHasBeenSet = true;
}

bool ScanLog::FirstHasBeenSet() const
{
    return m_firstHasBeenSet;
}

string ScanLog::GetBatchId() const
{
    return m_batchId;
}

void ScanLog::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool ScanLog::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

int64_t ScanLog::GetType() const
{
    return m_type;
}

void ScanLog::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ScanLog::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ScanLog::GetMerchantName() const
{
    return m_merchantName;
}

void ScanLog::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool ScanLog::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string ScanLog::GetProductName() const
{
    return m_productName;
}

void ScanLog::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ScanLog::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ScanLog::GetProductLogo() const
{
    return m_productLogo;
}

void ScanLog::SetProductLogo(const string& _productLogo)
{
    m_productLogo = _productLogo;
    m_productLogoHasBeenSet = true;
}

bool ScanLog::ProductLogoHasBeenSet() const
{
    return m_productLogoHasBeenSet;
}

int64_t ScanLog::GetStatus() const
{
    return m_status;
}

void ScanLog::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScanLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ScanLog::GetVerify() const
{
    return m_verify;
}

void ScanLog::SetVerify(const int64_t& _verify)
{
    m_verify = _verify;
    m_verifyHasBeenSet = true;
}

bool ScanLog::VerifyHasBeenSet() const
{
    return m_verifyHasBeenSet;
}

