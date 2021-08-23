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

#include <tencentcloud/iotvideo/v20191126/model/ProductBase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

ProductBase::ProductBase() :
    m_productIdHasBeenSet(false),
    m_productModelHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_iotModelRevisionHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_funcCodeHasBeenSet(false),
    m_productCateHasBeenSet(false),
    m_productRegionHasBeenSet(false)
{
}

CoreInternalOutcome ProductBase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductBase.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductModel") && !value["ProductModel"].IsNull())
    {
        if (!value["ProductModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductBase.ProductModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productModel = string(value["ProductModel"].GetString());
        m_productModelHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductBase.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductDescription") && !value["ProductDescription"].IsNull())
    {
        if (!value["ProductDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductBase.ProductDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDescription = string(value["ProductDescription"].GetString());
        m_productDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductBase.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IotModelRevision") && !value["IotModelRevision"].IsNull())
    {
        if (!value["IotModelRevision"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductBase.IotModelRevision` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iotModelRevision = value["IotModelRevision"].GetUint64();
        m_iotModelRevisionHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductBase.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("FuncCode") && !value["FuncCode"].IsNull())
    {
        if (!value["FuncCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductBase.FuncCode` is not array type"));

        const rapidjson::Value &tmpValue = value["FuncCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_funcCode.push_back((*itr).GetString());
        }
        m_funcCodeHasBeenSet = true;
    }

    if (value.HasMember("ProductCate") && !value["ProductCate"].IsNull())
    {
        if (!value["ProductCate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductBase.ProductCate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productCate = value["ProductCate"].GetInt64();
        m_productCateHasBeenSet = true;
    }

    if (value.HasMember("ProductRegion") && !value["ProductRegion"].IsNull())
    {
        if (!value["ProductRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductBase.ProductRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productRegion = string(value["ProductRegion"].GetString());
        m_productRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductBase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productModel.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
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

    if (m_iotModelRevisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotModelRevision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iotModelRevision, allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_funcCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuncCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_funcCode.begin(); itr != m_funcCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_productCateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productCate, allocator);
    }

    if (m_productRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productRegion.c_str(), allocator).Move(), allocator);
    }

}


string ProductBase::GetProductId() const
{
    return m_productId;
}

void ProductBase::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ProductBase::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ProductBase::GetProductModel() const
{
    return m_productModel;
}

void ProductBase::SetProductModel(const string& _productModel)
{
    m_productModel = _productModel;
    m_productModelHasBeenSet = true;
}

bool ProductBase::ProductModelHasBeenSet() const
{
    return m_productModelHasBeenSet;
}

string ProductBase::GetProductName() const
{
    return m_productName;
}

void ProductBase::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ProductBase::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ProductBase::GetProductDescription() const
{
    return m_productDescription;
}

void ProductBase::SetProductDescription(const string& _productDescription)
{
    m_productDescription = _productDescription;
    m_productDescriptionHasBeenSet = true;
}

bool ProductBase::ProductDescriptionHasBeenSet() const
{
    return m_productDescriptionHasBeenSet;
}

uint64_t ProductBase::GetCreateTime() const
{
    return m_createTime;
}

void ProductBase::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProductBase::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ProductBase::GetIotModelRevision() const
{
    return m_iotModelRevision;
}

void ProductBase::SetIotModelRevision(const uint64_t& _iotModelRevision)
{
    m_iotModelRevision = _iotModelRevision;
    m_iotModelRevisionHasBeenSet = true;
}

bool ProductBase::IotModelRevisionHasBeenSet() const
{
    return m_iotModelRevisionHasBeenSet;
}

string ProductBase::GetSecretKey() const
{
    return m_secretKey;
}

void ProductBase::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool ProductBase::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

vector<string> ProductBase::GetFuncCode() const
{
    return m_funcCode;
}

void ProductBase::SetFuncCode(const vector<string>& _funcCode)
{
    m_funcCode = _funcCode;
    m_funcCodeHasBeenSet = true;
}

bool ProductBase::FuncCodeHasBeenSet() const
{
    return m_funcCodeHasBeenSet;
}

int64_t ProductBase::GetProductCate() const
{
    return m_productCate;
}

void ProductBase::SetProductCate(const int64_t& _productCate)
{
    m_productCate = _productCate;
    m_productCateHasBeenSet = true;
}

bool ProductBase::ProductCateHasBeenSet() const
{
    return m_productCateHasBeenSet;
}

string ProductBase::GetProductRegion() const
{
    return m_productRegion;
}

void ProductBase::SetProductRegion(const string& _productRegion)
{
    m_productRegion = _productRegion;
    m_productRegionHasBeenSet = true;
}

bool ProductBase::ProductRegionHasBeenSet() const
{
    return m_productRegionHasBeenSet;
}

