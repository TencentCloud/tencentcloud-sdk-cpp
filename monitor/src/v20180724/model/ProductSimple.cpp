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

#include <tencentcloud/monitor/v20180724/model/ProductSimple.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ProductSimple::ProductSimple() :
    m_namespaceHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_productEnNameHasBeenSet(false)
{
}

CoreInternalOutcome ProductSimple::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSimple.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSimple.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProductEnName") && !value["ProductEnName"].IsNull())
    {
        if (!value["ProductEnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSimple.ProductEnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productEnName = string(value["ProductEnName"].GetString());
        m_productEnNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductSimple::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_productEnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductEnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productEnName.c_str(), allocator).Move(), allocator);
    }

}


string ProductSimple::GetNamespace() const
{
    return m_namespace;
}

void ProductSimple::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ProductSimple::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ProductSimple::GetProductName() const
{
    return m_productName;
}

void ProductSimple::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ProductSimple::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ProductSimple::GetProductEnName() const
{
    return m_productEnName;
}

void ProductSimple::SetProductEnName(const string& _productEnName)
{
    m_productEnName = _productEnName;
    m_productEnNameHasBeenSet = true;
}

bool ProductSimple::ProductEnNameHasBeenSet() const
{
    return m_productEnNameHasBeenSet;
}

