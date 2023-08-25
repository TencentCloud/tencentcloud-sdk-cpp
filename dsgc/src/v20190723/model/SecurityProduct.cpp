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

#include <tencentcloud/dsgc/v20190723/model/SecurityProduct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

SecurityProduct::SecurityProduct() :
    m_productNameHasBeenSet(false),
    m_referUrlHasBeenSet(false)
{
}

CoreInternalOutcome SecurityProduct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityProduct.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ReferUrl") && !value["ReferUrl"].IsNull())
    {
        if (!value["ReferUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityProduct.ReferUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referUrl = string(value["ReferUrl"].GetString());
        m_referUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityProduct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_referUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referUrl.c_str(), allocator).Move(), allocator);
    }

}


string SecurityProduct::GetProductName() const
{
    return m_productName;
}

void SecurityProduct::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool SecurityProduct::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string SecurityProduct::GetReferUrl() const
{
    return m_referUrl;
}

void SecurityProduct::SetReferUrl(const string& _referUrl)
{
    m_referUrl = _referUrl;
    m_referUrlHasBeenSet = true;
}

bool SecurityProduct::ReferUrlHasBeenSet() const
{
    return m_referUrlHasBeenSet;
}

