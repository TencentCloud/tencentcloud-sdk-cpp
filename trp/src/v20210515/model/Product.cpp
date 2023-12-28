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

#include <tencentcloud/trp/v20210515/model/Product.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

Product::Product() :
    m_merchantIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_extHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_certStateHasBeenSet(false)
{
}

CoreInternalOutcome Product::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Product.CorpId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = value["CorpId"].GetInt64();
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Product.Logo` is not array type"));

        const rapidjson::Value &tmpValue = value["Logo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logo.push_back((*itr).GetString());
        }
        m_logoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Product.Ext` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ext.Deserialize(value["Ext"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }

    if (value.HasMember("CertState") && !value["CertState"].IsNull())
    {
        if (!value["CertState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Product.CertState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certState = value["CertState"].GetInt64();
        m_certStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Product::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpId, allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logo.begin(); itr != m_logo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ext.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_certStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certState, allocator);
    }

}


string Product::GetMerchantId() const
{
    return m_merchantId;
}

void Product::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool Product::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string Product::GetName() const
{
    return m_name;
}

void Product::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Product::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Product::GetProductId() const
{
    return m_productId;
}

void Product::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool Product::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t Product::GetCorpId() const
{
    return m_corpId;
}

void Product::SetCorpId(const int64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool Product::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string Product::GetProductCode() const
{
    return m_productCode;
}

void Product::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool Product::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string Product::GetSpecification() const
{
    return m_specification;
}

void Product::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool Product::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string Product::GetRemark() const
{
    return m_remark;
}

void Product::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Product::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> Product::GetLogo() const
{
    return m_logo;
}

void Product::SetLogo(const vector<string>& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool Product::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string Product::GetCreateTime() const
{
    return m_createTime;
}

void Product::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Product::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Product::GetUpdateTime() const
{
    return m_updateTime;
}

void Product::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Product::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

Ext Product::GetExt() const
{
    return m_ext;
}

void Product::SetExt(const Ext& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool Product::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

string Product::GetMerchantName() const
{
    return m_merchantName;
}

void Product::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool Product::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

int64_t Product::GetCertState() const
{
    return m_certState;
}

void Product::SetCertState(const int64_t& _certState)
{
    m_certState = _certState;
    m_certStateHasBeenSet = true;
}

bool Product::CertStateHasBeenSet() const
{
    return m_certStateHasBeenSet;
}

