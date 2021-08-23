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

#include <tencentcloud/youmall/v20180228/model/NetworkAndShopInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

NetworkAndShopInfo::NetworkAndShopInfo() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_shopNameHasBeenSet(false),
    m_uploadHasBeenSet(false),
    m_downloadHasBeenSet(false),
    m_minRttHasBeenSet(false),
    m_avgRttHasBeenSet(false),
    m_maxRttHasBeenSet(false),
    m_mdevRttHasBeenSet(false),
    m_lossHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_macHasBeenSet(false)
{
}

CoreInternalOutcome NetworkAndShopInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompanyId") && !value["CompanyId"].IsNull())
    {
        if (!value["CompanyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.CompanyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = string(value["CompanyId"].GetString());
        m_companyIdHasBeenSet = true;
    }

    if (value.HasMember("ShopId") && !value["ShopId"].IsNull())
    {
        if (!value["ShopId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.ShopId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = value["ShopId"].GetInt64();
        m_shopIdHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("ShopName") && !value["ShopName"].IsNull())
    {
        if (!value["ShopName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.ShopName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopName = string(value["ShopName"].GetString());
        m_shopNameHasBeenSet = true;
    }

    if (value.HasMember("Upload") && !value["Upload"].IsNull())
    {
        if (!value["Upload"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.Upload` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_upload = value["Upload"].GetDouble();
        m_uploadHasBeenSet = true;
    }

    if (value.HasMember("Download") && !value["Download"].IsNull())
    {
        if (!value["Download"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.Download` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_download = value["Download"].GetDouble();
        m_downloadHasBeenSet = true;
    }

    if (value.HasMember("MinRtt") && !value["MinRtt"].IsNull())
    {
        if (!value["MinRtt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.MinRtt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minRtt = value["MinRtt"].GetDouble();
        m_minRttHasBeenSet = true;
    }

    if (value.HasMember("AvgRtt") && !value["AvgRtt"].IsNull())
    {
        if (!value["AvgRtt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.AvgRtt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgRtt = value["AvgRtt"].GetDouble();
        m_avgRttHasBeenSet = true;
    }

    if (value.HasMember("MaxRtt") && !value["MaxRtt"].IsNull())
    {
        if (!value["MaxRtt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.MaxRtt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxRtt = value["MaxRtt"].GetDouble();
        m_maxRttHasBeenSet = true;
    }

    if (value.HasMember("MdevRtt") && !value["MdevRtt"].IsNull())
    {
        if (!value["MdevRtt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.MdevRtt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mdevRtt = value["MdevRtt"].GetDouble();
        m_mdevRttHasBeenSet = true;
    }

    if (value.HasMember("Loss") && !value["Loss"].IsNull())
    {
        if (!value["Loss"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.Loss` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loss = value["Loss"].GetDouble();
        m_lossHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAndShopInfo.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkAndShopInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shopId, allocator);
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

    if (m_shopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopName.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Upload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upload, allocator);
    }

    if (m_downloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Download";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_download, allocator);
    }

    if (m_minRttHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRtt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRtt, allocator);
    }

    if (m_avgRttHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgRtt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgRtt, allocator);
    }

    if (m_maxRttHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRtt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRtt, allocator);
    }

    if (m_mdevRttHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MdevRtt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mdevRtt, allocator);
    }

    if (m_lossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Loss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loss, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_macHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mac.c_str(), allocator).Move(), allocator);
    }

}


string NetworkAndShopInfo::GetCompanyId() const
{
    return m_companyId;
}

void NetworkAndShopInfo::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool NetworkAndShopInfo::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t NetworkAndShopInfo::GetShopId() const
{
    return m_shopId;
}

void NetworkAndShopInfo::SetShopId(const int64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool NetworkAndShopInfo::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

string NetworkAndShopInfo::GetProvince() const
{
    return m_province;
}

void NetworkAndShopInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool NetworkAndShopInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string NetworkAndShopInfo::GetCity() const
{
    return m_city;
}

void NetworkAndShopInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool NetworkAndShopInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string NetworkAndShopInfo::GetShopName() const
{
    return m_shopName;
}

void NetworkAndShopInfo::SetShopName(const string& _shopName)
{
    m_shopName = _shopName;
    m_shopNameHasBeenSet = true;
}

bool NetworkAndShopInfo::ShopNameHasBeenSet() const
{
    return m_shopNameHasBeenSet;
}

double NetworkAndShopInfo::GetUpload() const
{
    return m_upload;
}

void NetworkAndShopInfo::SetUpload(const double& _upload)
{
    m_upload = _upload;
    m_uploadHasBeenSet = true;
}

bool NetworkAndShopInfo::UploadHasBeenSet() const
{
    return m_uploadHasBeenSet;
}

double NetworkAndShopInfo::GetDownload() const
{
    return m_download;
}

void NetworkAndShopInfo::SetDownload(const double& _download)
{
    m_download = _download;
    m_downloadHasBeenSet = true;
}

bool NetworkAndShopInfo::DownloadHasBeenSet() const
{
    return m_downloadHasBeenSet;
}

double NetworkAndShopInfo::GetMinRtt() const
{
    return m_minRtt;
}

void NetworkAndShopInfo::SetMinRtt(const double& _minRtt)
{
    m_minRtt = _minRtt;
    m_minRttHasBeenSet = true;
}

bool NetworkAndShopInfo::MinRttHasBeenSet() const
{
    return m_minRttHasBeenSet;
}

double NetworkAndShopInfo::GetAvgRtt() const
{
    return m_avgRtt;
}

void NetworkAndShopInfo::SetAvgRtt(const double& _avgRtt)
{
    m_avgRtt = _avgRtt;
    m_avgRttHasBeenSet = true;
}

bool NetworkAndShopInfo::AvgRttHasBeenSet() const
{
    return m_avgRttHasBeenSet;
}

double NetworkAndShopInfo::GetMaxRtt() const
{
    return m_maxRtt;
}

void NetworkAndShopInfo::SetMaxRtt(const double& _maxRtt)
{
    m_maxRtt = _maxRtt;
    m_maxRttHasBeenSet = true;
}

bool NetworkAndShopInfo::MaxRttHasBeenSet() const
{
    return m_maxRttHasBeenSet;
}

double NetworkAndShopInfo::GetMdevRtt() const
{
    return m_mdevRtt;
}

void NetworkAndShopInfo::SetMdevRtt(const double& _mdevRtt)
{
    m_mdevRtt = _mdevRtt;
    m_mdevRttHasBeenSet = true;
}

bool NetworkAndShopInfo::MdevRttHasBeenSet() const
{
    return m_mdevRttHasBeenSet;
}

double NetworkAndShopInfo::GetLoss() const
{
    return m_loss;
}

void NetworkAndShopInfo::SetLoss(const double& _loss)
{
    m_loss = _loss;
    m_lossHasBeenSet = true;
}

bool NetworkAndShopInfo::LossHasBeenSet() const
{
    return m_lossHasBeenSet;
}

int64_t NetworkAndShopInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void NetworkAndShopInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NetworkAndShopInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string NetworkAndShopInfo::GetMac() const
{
    return m_mac;
}

void NetworkAndShopInfo::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool NetworkAndShopInfo::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

