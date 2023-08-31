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

#include <tencentcloud/vod/v20180717/model/ProductInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProductInstance::ProductInstance() :
    m_productTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_productInstanceIdHasBeenSet(false),
    m_lastConsumeDateHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_productInstanceResourceSetHasBeenSet(false),
    m_resourceSetHasBeenSet(false),
    m_productInstanceStatusHasBeenSet(false),
    m_refundStatusHasBeenSet(false),
    m_renewStatusHasBeenSet(false)
{
}

CoreInternalOutcome ProductInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstance.ProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productType = string(value["ProductType"].GetString());
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstance.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstance.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductInstanceId") && !value["ProductInstanceId"].IsNull())
    {
        if (!value["ProductInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstance.ProductInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productInstanceId = string(value["ProductInstanceId"].GetString());
        m_productInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("LastConsumeDate") && !value["LastConsumeDate"].IsNull())
    {
        if (!value["LastConsumeDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstance.LastConsumeDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastConsumeDate = string(value["LastConsumeDate"].GetString());
        m_lastConsumeDateHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstance.BindStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = value["BindStatus"].GetInt64();
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("ProductInstanceResourceSet") && !value["ProductInstanceResourceSet"].IsNull())
    {
        if (!value["ProductInstanceResourceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductInstance.ProductInstanceResourceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductInstanceResourceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProductInstanceRecource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_productInstanceResourceSet.push_back(item);
        }
        m_productInstanceResourceSetHasBeenSet = true;
    }

    if (value.HasMember("ResourceSet") && !value["ResourceSet"].IsNull())
    {
        if (!value["ResourceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductInstance.ResourceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProductInstanceResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceSet.push_back(item);
        }
        m_resourceSetHasBeenSet = true;
    }

    if (value.HasMember("ProductInstanceStatus") && !value["ProductInstanceStatus"].IsNull())
    {
        if (!value["ProductInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstance.ProductInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productInstanceStatus = string(value["ProductInstanceStatus"].GetString());
        m_productInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("RefundStatus") && !value["RefundStatus"].IsNull())
    {
        if (!value["RefundStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstance.RefundStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundStatus = string(value["RefundStatus"].GetString());
        m_refundStatusHasBeenSet = true;
    }

    if (value.HasMember("RenewStatus") && !value["RenewStatus"].IsNull())
    {
        if (!value["RenewStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInstance.RenewStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewStatus = string(value["RenewStatus"].GetString());
        m_renewStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastConsumeDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastConsumeDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastConsumeDate.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindStatus, allocator);
    }

    if (m_productInstanceResourceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductInstanceResourceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_productInstanceResourceSet.begin(); itr != m_productInstanceResourceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceSet.begin(); itr != m_resourceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_productInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_refundStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_renewStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewStatus.c_str(), allocator).Move(), allocator);
    }

}


string ProductInstance::GetProductType() const
{
    return m_productType;
}

void ProductInstance::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool ProductInstance::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string ProductInstance::GetStartTime() const
{
    return m_startTime;
}

void ProductInstance::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ProductInstance::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ProductInstance::GetExpireTime() const
{
    return m_expireTime;
}

void ProductInstance::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ProductInstance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ProductInstance::GetProductInstanceId() const
{
    return m_productInstanceId;
}

void ProductInstance::SetProductInstanceId(const string& _productInstanceId)
{
    m_productInstanceId = _productInstanceId;
    m_productInstanceIdHasBeenSet = true;
}

bool ProductInstance::ProductInstanceIdHasBeenSet() const
{
    return m_productInstanceIdHasBeenSet;
}

string ProductInstance::GetLastConsumeDate() const
{
    return m_lastConsumeDate;
}

void ProductInstance::SetLastConsumeDate(const string& _lastConsumeDate)
{
    m_lastConsumeDate = _lastConsumeDate;
    m_lastConsumeDateHasBeenSet = true;
}

bool ProductInstance::LastConsumeDateHasBeenSet() const
{
    return m_lastConsumeDateHasBeenSet;
}

int64_t ProductInstance::GetBindStatus() const
{
    return m_bindStatus;
}

void ProductInstance::SetBindStatus(const int64_t& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool ProductInstance::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

vector<ProductInstanceRecource> ProductInstance::GetProductInstanceResourceSet() const
{
    return m_productInstanceResourceSet;
}

void ProductInstance::SetProductInstanceResourceSet(const vector<ProductInstanceRecource>& _productInstanceResourceSet)
{
    m_productInstanceResourceSet = _productInstanceResourceSet;
    m_productInstanceResourceSetHasBeenSet = true;
}

bool ProductInstance::ProductInstanceResourceSetHasBeenSet() const
{
    return m_productInstanceResourceSetHasBeenSet;
}

vector<ProductInstanceResource> ProductInstance::GetResourceSet() const
{
    return m_resourceSet;
}

void ProductInstance::SetResourceSet(const vector<ProductInstanceResource>& _resourceSet)
{
    m_resourceSet = _resourceSet;
    m_resourceSetHasBeenSet = true;
}

bool ProductInstance::ResourceSetHasBeenSet() const
{
    return m_resourceSetHasBeenSet;
}

string ProductInstance::GetProductInstanceStatus() const
{
    return m_productInstanceStatus;
}

void ProductInstance::SetProductInstanceStatus(const string& _productInstanceStatus)
{
    m_productInstanceStatus = _productInstanceStatus;
    m_productInstanceStatusHasBeenSet = true;
}

bool ProductInstance::ProductInstanceStatusHasBeenSet() const
{
    return m_productInstanceStatusHasBeenSet;
}

string ProductInstance::GetRefundStatus() const
{
    return m_refundStatus;
}

void ProductInstance::SetRefundStatus(const string& _refundStatus)
{
    m_refundStatus = _refundStatus;
    m_refundStatusHasBeenSet = true;
}

bool ProductInstance::RefundStatusHasBeenSet() const
{
    return m_refundStatusHasBeenSet;
}

string ProductInstance::GetRenewStatus() const
{
    return m_renewStatus;
}

void ProductInstance::SetRenewStatus(const string& _renewStatus)
{
    m_renewStatus = _renewStatus;
    m_renewStatusHasBeenSet = true;
}

bool ProductInstance::RenewStatusHasBeenSet() const
{
    return m_renewStatusHasBeenSet;
}

