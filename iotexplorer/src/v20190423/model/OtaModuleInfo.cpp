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

#include <tencentcloud/iotexplorer/v20190423/model/OtaModuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

OtaModuleInfo::OtaModuleInfo() :
    m_createTimeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productIDHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_isBuildInHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome OtaModuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OtaModuleInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtaModuleInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtaModuleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProductID") && !value["ProductID"].IsNull())
    {
        if (!value["ProductID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtaModuleInfo.ProductID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productID = string(value["ProductID"].GetString());
        m_productIDHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtaModuleInfo.FwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = string(value["FwType"].GetString());
        m_fwTypeHasBeenSet = true;
    }

    if (value.HasMember("IsBuildIn") && !value["IsBuildIn"].IsNull())
    {
        if (!value["IsBuildIn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OtaModuleInfo.IsBuildIn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBuildIn = value["IsBuildIn"].GetBool();
        m_isBuildInHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtaModuleInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtaModuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
    }

    if (m_isBuildInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBuildIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBuildIn, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


uint64_t OtaModuleInfo::GetCreateTime() const
{
    return m_createTime;
}

void OtaModuleInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OtaModuleInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OtaModuleInfo::GetProductName() const
{
    return m_productName;
}

void OtaModuleInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool OtaModuleInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string OtaModuleInfo::GetName() const
{
    return m_name;
}

void OtaModuleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OtaModuleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OtaModuleInfo::GetProductID() const
{
    return m_productID;
}

void OtaModuleInfo::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool OtaModuleInfo::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string OtaModuleInfo::GetFwType() const
{
    return m_fwType;
}

void OtaModuleInfo::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool OtaModuleInfo::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

bool OtaModuleInfo::GetIsBuildIn() const
{
    return m_isBuildIn;
}

void OtaModuleInfo::SetIsBuildIn(const bool& _isBuildIn)
{
    m_isBuildIn = _isBuildIn;
    m_isBuildInHasBeenSet = true;
}

bool OtaModuleInfo::IsBuildInHasBeenSet() const
{
    return m_isBuildInHasBeenSet;
}

string OtaModuleInfo::GetRemark() const
{
    return m_remark;
}

void OtaModuleInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool OtaModuleInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

