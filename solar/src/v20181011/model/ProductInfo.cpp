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

#include <tencentcloud/solar/v20181011/model/ProductInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

ProductInfo::ProductInfo() :
    m_templateIdHasBeenSet(false),
    m_productTitleHasBeenSet(false),
    m_productDescHasBeenSet(false),
    m_productCoverHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productUrlHasBeenSet(false),
    m_productNameHasBeenSet(false)
{
}

CoreInternalOutcome ProductInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("ProductTitle") && !value["ProductTitle"].IsNull())
    {
        if (!value["ProductTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productTitle = string(value["ProductTitle"].GetString());
        m_productTitleHasBeenSet = true;
    }

    if (value.HasMember("ProductDesc") && !value["ProductDesc"].IsNull())
    {
        if (!value["ProductDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDesc = string(value["ProductDesc"].GetString());
        m_productDescHasBeenSet = true;
    }

    if (value.HasMember("ProductCover") && !value["ProductCover"].IsNull())
    {
        if (!value["ProductCover"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductCover` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCover = string(value["ProductCover"].GetString());
        m_productCoverHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductUrl") && !value["ProductUrl"].IsNull())
    {
        if (!value["ProductUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productUrl = string(value["ProductUrl"].GetString());
        m_productUrlHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_productTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_productDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_productCoverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCover.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

}


string ProductInfo::GetTemplateId() const
{
    return m_templateId;
}

void ProductInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ProductInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ProductInfo::GetProductTitle() const
{
    return m_productTitle;
}

void ProductInfo::SetProductTitle(const string& _productTitle)
{
    m_productTitle = _productTitle;
    m_productTitleHasBeenSet = true;
}

bool ProductInfo::ProductTitleHasBeenSet() const
{
    return m_productTitleHasBeenSet;
}

string ProductInfo::GetProductDesc() const
{
    return m_productDesc;
}

void ProductInfo::SetProductDesc(const string& _productDesc)
{
    m_productDesc = _productDesc;
    m_productDescHasBeenSet = true;
}

bool ProductInfo::ProductDescHasBeenSet() const
{
    return m_productDescHasBeenSet;
}

string ProductInfo::GetProductCover() const
{
    return m_productCover;
}

void ProductInfo::SetProductCover(const string& _productCover)
{
    m_productCover = _productCover;
    m_productCoverHasBeenSet = true;
}

bool ProductInfo::ProductCoverHasBeenSet() const
{
    return m_productCoverHasBeenSet;
}

string ProductInfo::GetProductId() const
{
    return m_productId;
}

void ProductInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ProductInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ProductInfo::GetProductUrl() const
{
    return m_productUrl;
}

void ProductInfo::SetProductUrl(const string& _productUrl)
{
    m_productUrl = _productUrl;
    m_productUrlHasBeenSet = true;
}

bool ProductInfo::ProductUrlHasBeenSet() const
{
    return m_productUrlHasBeenSet;
}

string ProductInfo::GetProductName() const
{
    return m_productName;
}

void ProductInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ProductInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

