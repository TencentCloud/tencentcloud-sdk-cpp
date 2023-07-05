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

#include <tencentcloud/trp/v20210515/model/RawScanLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

RawScanLog::RawScanLog() :
    m_logIdHasBeenSet(false),
    m_openidHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_merchantIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_districtHasBeenSet(false)
{
}

CoreInternalOutcome RawScanLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.LogId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logId = value["LogId"].GetInt64();
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("Openid") && !value["Openid"].IsNull())
    {
        if (!value["Openid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.Openid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openid = string(value["Openid"].GetString());
        m_openidHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.CorpId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetUint64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("District") && !value["District"].IsNull())
    {
        if (!value["District"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawScanLog.District` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_district = string(value["District"].GetString());
        m_districtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RawScanLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
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

}


int64_t RawScanLog::GetLogId() const
{
    return m_logId;
}

void RawScanLog::SetLogId(const int64_t& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool RawScanLog::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string RawScanLog::GetOpenid() const
{
    return m_openid;
}

void RawScanLog::SetOpenid(const string& _openid)
{
    m_openid = _openid;
    m_openidHasBeenSet = true;
}

bool RawScanLog::OpenidHasBeenSet() const
{
    return m_openidHasBeenSet;
}

string RawScanLog::GetCreateTime() const
{
    return m_createTime;
}

void RawScanLog::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RawScanLog::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RawScanLog::GetCode() const
{
    return m_code;
}

void RawScanLog::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool RawScanLog::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t RawScanLog::GetCorpId() const
{
    return m_corpId;
}

void RawScanLog::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool RawScanLog::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string RawScanLog::GetMerchantId() const
{
    return m_merchantId;
}

void RawScanLog::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool RawScanLog::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string RawScanLog::GetProductId() const
{
    return m_productId;
}

void RawScanLog::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool RawScanLog::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string RawScanLog::GetBatchId() const
{
    return m_batchId;
}

void RawScanLog::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool RawScanLog::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string RawScanLog::GetProvince() const
{
    return m_province;
}

void RawScanLog::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool RawScanLog::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string RawScanLog::GetCity() const
{
    return m_city;
}

void RawScanLog::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool RawScanLog::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string RawScanLog::GetDistrict() const
{
    return m_district;
}

void RawScanLog::SetDistrict(const string& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool RawScanLog::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

