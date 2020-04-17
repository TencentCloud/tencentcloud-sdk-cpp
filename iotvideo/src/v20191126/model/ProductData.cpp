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

#include <tencentcloud/iotvideo/v20191126/model/ProductData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace rapidjson;
using namespace std;

ProductData::ProductData() :
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_iotModelRevisionHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_productModelHasBeenSet(false),
    m_chipManufactureIdHasBeenSet(false),
    m_chipIdHasBeenSet(false)
{
}

CoreInternalOutcome ProductData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductData.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductData.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductDescription") && !value["ProductDescription"].IsNull())
    {
        if (!value["ProductDescription"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductData.ProductDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDescription = string(value["ProductDescription"].GetString());
        m_productDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProductData.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IotModelRevision") && !value["IotModelRevision"].IsNull())
    {
        if (!value["IotModelRevision"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProductData.IotModelRevision` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iotModelRevision = value["IotModelRevision"].GetInt64();
        m_iotModelRevisionHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductData.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Features") && !value["Features"].IsNull())
    {
        if (!value["Features"].IsArray())
            return CoreInternalOutcome(Error("response `ProductData.Features` is not array type"));

        const Value &tmpValue = value["Features"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_features.push_back((*itr).GetString());
        }
        m_featuresHasBeenSet = true;
    }

    if (value.HasMember("ProductModel") && !value["ProductModel"].IsNull())
    {
        if (!value["ProductModel"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductData.ProductModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productModel = string(value["ProductModel"].GetString());
        m_productModelHasBeenSet = true;
    }

    if (value.HasMember("ChipManufactureId") && !value["ChipManufactureId"].IsNull())
    {
        if (!value["ChipManufactureId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductData.ChipManufactureId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chipManufactureId = string(value["ChipManufactureId"].GetString());
        m_chipManufactureIdHasBeenSet = true;
    }

    if (value.HasMember("ChipId") && !value["ChipId"].IsNull())
    {
        if (!value["ChipId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductData.ChipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chipId = string(value["ChipId"].GetString());
        m_chipIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_iotModelRevisionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IotModelRevision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iotModelRevision, allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_featuresHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Features";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_features.begin(); itr != m_features.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_productModelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_productModel.c_str(), allocator).Move(), allocator);
    }

    if (m_chipManufactureIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChipManufactureId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_chipManufactureId.c_str(), allocator).Move(), allocator);
    }

    if (m_chipIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_chipId.c_str(), allocator).Move(), allocator);
    }

}


string ProductData::GetProductId() const
{
    return m_productId;
}

void ProductData::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ProductData::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ProductData::GetProductName() const
{
    return m_productName;
}

void ProductData::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ProductData::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ProductData::GetProductDescription() const
{
    return m_productDescription;
}

void ProductData::SetProductDescription(const string& _productDescription)
{
    m_productDescription = _productDescription;
    m_productDescriptionHasBeenSet = true;
}

bool ProductData::ProductDescriptionHasBeenSet() const
{
    return m_productDescriptionHasBeenSet;
}

int64_t ProductData::GetCreateTime() const
{
    return m_createTime;
}

void ProductData::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProductData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ProductData::GetIotModelRevision() const
{
    return m_iotModelRevision;
}

void ProductData::SetIotModelRevision(const int64_t& _iotModelRevision)
{
    m_iotModelRevision = _iotModelRevision;
    m_iotModelRevisionHasBeenSet = true;
}

bool ProductData::IotModelRevisionHasBeenSet() const
{
    return m_iotModelRevisionHasBeenSet;
}

string ProductData::GetSecretKey() const
{
    return m_secretKey;
}

void ProductData::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool ProductData::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

vector<string> ProductData::GetFeatures() const
{
    return m_features;
}

void ProductData::SetFeatures(const vector<string>& _features)
{
    m_features = _features;
    m_featuresHasBeenSet = true;
}

bool ProductData::FeaturesHasBeenSet() const
{
    return m_featuresHasBeenSet;
}

string ProductData::GetProductModel() const
{
    return m_productModel;
}

void ProductData::SetProductModel(const string& _productModel)
{
    m_productModel = _productModel;
    m_productModelHasBeenSet = true;
}

bool ProductData::ProductModelHasBeenSet() const
{
    return m_productModelHasBeenSet;
}

string ProductData::GetChipManufactureId() const
{
    return m_chipManufactureId;
}

void ProductData::SetChipManufactureId(const string& _chipManufactureId)
{
    m_chipManufactureId = _chipManufactureId;
    m_chipManufactureIdHasBeenSet = true;
}

bool ProductData::ChipManufactureIdHasBeenSet() const
{
    return m_chipManufactureIdHasBeenSet;
}

string ProductData::GetChipId() const
{
    return m_chipId;
}

void ProductData::SetChipId(const string& _chipId)
{
    m_chipId = _chipId;
    m_chipIdHasBeenSet = true;
}

bool ProductData::ChipIdHasBeenSet() const
{
    return m_chipIdHasBeenSet;
}

