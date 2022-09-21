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

#include <tencentcloud/iotvideo/v20211125/model/VideoProduct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

VideoProduct::VideoProduct() :
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_chipOsHasBeenSet(false),
    m_chipManufactureIdHasBeenSet(false),
    m_chipIdHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_productVaildYearsHasBeenSet(false)
{
}

CoreInternalOutcome VideoProduct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.DeviceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = value["DeviceType"].GetUint64();
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("EncryptionType") && !value["EncryptionType"].IsNull())
    {
        if (!value["EncryptionType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.EncryptionType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionType = value["EncryptionType"].GetUint64();
        m_encryptionTypeHasBeenSet = true;
    }

    if (value.HasMember("Features") && !value["Features"].IsNull())
    {
        if (!value["Features"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoProduct.Features` is not array type"));

        const rapidjson::Value &tmpValue = value["Features"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_features.push_back((*itr).GetString());
        }
        m_featuresHasBeenSet = true;
    }

    if (value.HasMember("ChipOs") && !value["ChipOs"].IsNull())
    {
        if (!value["ChipOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.ChipOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chipOs = string(value["ChipOs"].GetString());
        m_chipOsHasBeenSet = true;
    }

    if (value.HasMember("ChipManufactureId") && !value["ChipManufactureId"].IsNull())
    {
        if (!value["ChipManufactureId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.ChipManufactureId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chipManufactureId = string(value["ChipManufactureId"].GetString());
        m_chipManufactureIdHasBeenSet = true;
    }

    if (value.HasMember("ChipId") && !value["ChipId"].IsNull())
    {
        if (!value["ChipId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.ChipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chipId = string(value["ChipId"].GetString());
        m_chipIdHasBeenSet = true;
    }

    if (value.HasMember("ProductDescription") && !value["ProductDescription"].IsNull())
    {
        if (!value["ProductDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.ProductDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDescription = string(value["ProductDescription"].GetString());
        m_productDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.CategoryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetUint64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("ProductVaildYears") && !value["ProductVaildYears"].IsNull())
    {
        if (!value["ProductVaildYears"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoProduct.ProductVaildYears` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productVaildYears = value["ProductVaildYears"].GetUint64();
        m_productVaildYearsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoProduct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceType, allocator);
    }

    if (m_encryptionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptionType, allocator);
    }

    if (m_featuresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Features";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_features.begin(); itr != m_features.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_chipOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChipOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chipOs.c_str(), allocator).Move(), allocator);
    }

    if (m_chipManufactureIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChipManufactureId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chipManufactureId.c_str(), allocator).Move(), allocator);
    }

    if (m_chipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chipId.c_str(), allocator).Move(), allocator);
    }

    if (m_productDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_productVaildYearsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductVaildYears";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productVaildYears, allocator);
    }

}


string VideoProduct::GetProductId() const
{
    return m_productId;
}

void VideoProduct::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool VideoProduct::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string VideoProduct::GetProductName() const
{
    return m_productName;
}

void VideoProduct::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool VideoProduct::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

uint64_t VideoProduct::GetDeviceType() const
{
    return m_deviceType;
}

void VideoProduct::SetDeviceType(const uint64_t& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool VideoProduct::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

uint64_t VideoProduct::GetEncryptionType() const
{
    return m_encryptionType;
}

void VideoProduct::SetEncryptionType(const uint64_t& _encryptionType)
{
    m_encryptionType = _encryptionType;
    m_encryptionTypeHasBeenSet = true;
}

bool VideoProduct::EncryptionTypeHasBeenSet() const
{
    return m_encryptionTypeHasBeenSet;
}

vector<string> VideoProduct::GetFeatures() const
{
    return m_features;
}

void VideoProduct::SetFeatures(const vector<string>& _features)
{
    m_features = _features;
    m_featuresHasBeenSet = true;
}

bool VideoProduct::FeaturesHasBeenSet() const
{
    return m_featuresHasBeenSet;
}

string VideoProduct::GetChipOs() const
{
    return m_chipOs;
}

void VideoProduct::SetChipOs(const string& _chipOs)
{
    m_chipOs = _chipOs;
    m_chipOsHasBeenSet = true;
}

bool VideoProduct::ChipOsHasBeenSet() const
{
    return m_chipOsHasBeenSet;
}

string VideoProduct::GetChipManufactureId() const
{
    return m_chipManufactureId;
}

void VideoProduct::SetChipManufactureId(const string& _chipManufactureId)
{
    m_chipManufactureId = _chipManufactureId;
    m_chipManufactureIdHasBeenSet = true;
}

bool VideoProduct::ChipManufactureIdHasBeenSet() const
{
    return m_chipManufactureIdHasBeenSet;
}

string VideoProduct::GetChipId() const
{
    return m_chipId;
}

void VideoProduct::SetChipId(const string& _chipId)
{
    m_chipId = _chipId;
    m_chipIdHasBeenSet = true;
}

bool VideoProduct::ChipIdHasBeenSet() const
{
    return m_chipIdHasBeenSet;
}

string VideoProduct::GetProductDescription() const
{
    return m_productDescription;
}

void VideoProduct::SetProductDescription(const string& _productDescription)
{
    m_productDescription = _productDescription;
    m_productDescriptionHasBeenSet = true;
}

bool VideoProduct::ProductDescriptionHasBeenSet() const
{
    return m_productDescriptionHasBeenSet;
}

uint64_t VideoProduct::GetCreateTime() const
{
    return m_createTime;
}

void VideoProduct::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VideoProduct::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t VideoProduct::GetUpdateTime() const
{
    return m_updateTime;
}

void VideoProduct::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VideoProduct::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string VideoProduct::GetNetType() const
{
    return m_netType;
}

void VideoProduct::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool VideoProduct::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

uint64_t VideoProduct::GetCategoryId() const
{
    return m_categoryId;
}

void VideoProduct::SetCategoryId(const uint64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool VideoProduct::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

uint64_t VideoProduct::GetProductVaildYears() const
{
    return m_productVaildYears;
}

void VideoProduct::SetProductVaildYears(const uint64_t& _productVaildYears)
{
    m_productVaildYears = _productVaildYears;
    m_productVaildYearsHasBeenSet = true;
}

bool VideoProduct::ProductVaildYearsHasBeenSet() const
{
    return m_productVaildYearsHasBeenSet;
}

