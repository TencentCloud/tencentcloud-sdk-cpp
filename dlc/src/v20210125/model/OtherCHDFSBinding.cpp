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

#include <tencentcloud/dlc/v20210125/model/OtherCHDFSBinding.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

OtherCHDFSBinding::OtherCHDFSBinding() :
    m_productNameHasBeenSet(false),
    m_superUserHasBeenSet(false),
    m_vpcInfoHasBeenSet(false),
    m_isBindHasBeenSet(false)
{
}

CoreInternalOutcome OtherCHDFSBinding::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherCHDFSBinding.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("SuperUser") && !value["SuperUser"].IsNull())
    {
        if (!value["SuperUser"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OtherCHDFSBinding.SuperUser` is not array type"));

        const rapidjson::Value &tmpValue = value["SuperUser"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_superUser.push_back((*itr).GetString());
        }
        m_superUserHasBeenSet = true;
    }

    if (value.HasMember("VpcInfo") && !value["VpcInfo"].IsNull())
    {
        if (!value["VpcInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OtherCHDFSBinding.VpcInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CHDFSProductVpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcInfo.push_back(item);
        }
        m_vpcInfoHasBeenSet = true;
    }

    if (value.HasMember("IsBind") && !value["IsBind"].IsNull())
    {
        if (!value["IsBind"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OtherCHDFSBinding.IsBind` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBind = value["IsBind"].GetBool();
        m_isBindHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherCHDFSBinding::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_superUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_superUser.begin(); itr != m_superUser.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfo.begin(); itr != m_vpcInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBind, allocator);
    }

}


string OtherCHDFSBinding::GetProductName() const
{
    return m_productName;
}

void OtherCHDFSBinding::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool OtherCHDFSBinding::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

vector<string> OtherCHDFSBinding::GetSuperUser() const
{
    return m_superUser;
}

void OtherCHDFSBinding::SetSuperUser(const vector<string>& _superUser)
{
    m_superUser = _superUser;
    m_superUserHasBeenSet = true;
}

bool OtherCHDFSBinding::SuperUserHasBeenSet() const
{
    return m_superUserHasBeenSet;
}

vector<CHDFSProductVpcInfo> OtherCHDFSBinding::GetVpcInfo() const
{
    return m_vpcInfo;
}

void OtherCHDFSBinding::SetVpcInfo(const vector<CHDFSProductVpcInfo>& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool OtherCHDFSBinding::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}

bool OtherCHDFSBinding::GetIsBind() const
{
    return m_isBind;
}

void OtherCHDFSBinding::SetIsBind(const bool& _isBind)
{
    m_isBind = _isBind;
    m_isBindHasBeenSet = true;
}

bool OtherCHDFSBinding::IsBindHasBeenSet() const
{
    return m_isBindHasBeenSet;
}

