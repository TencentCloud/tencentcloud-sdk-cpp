/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ExpiringProduct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ExpiringProduct::ExpiringProduct() :
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_daysToExpireHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome ExpiringProduct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiringProduct.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiringProduct.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("DaysToExpire") && !value["DaysToExpire"].IsNull())
    {
        if (!value["DaysToExpire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiringProduct.DaysToExpire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_daysToExpire = value["DaysToExpire"].GetInt64();
        m_daysToExpireHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiringProduct.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpiringProduct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_daysToExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DaysToExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_daysToExpire, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string ExpiringProduct::GetProductId() const
{
    return m_productId;
}

void ExpiringProduct::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ExpiringProduct::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ExpiringProduct::GetProductName() const
{
    return m_productName;
}

void ExpiringProduct::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ExpiringProduct::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t ExpiringProduct::GetDaysToExpire() const
{
    return m_daysToExpire;
}

void ExpiringProduct::SetDaysToExpire(const int64_t& _daysToExpire)
{
    m_daysToExpire = _daysToExpire;
    m_daysToExpireHasBeenSet = true;
}

bool ExpiringProduct::DaysToExpireHasBeenSet() const
{
    return m_daysToExpireHasBeenSet;
}

string ExpiringProduct::GetExpireTime() const
{
    return m_expireTime;
}

void ExpiringProduct::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ExpiringProduct::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

