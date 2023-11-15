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

#include <tencentcloud/weilingwith/v20230427/model/AddDeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

AddDeviceInfo::AddDeviceInfo() :
    m_productIdHasBeenSet(false),
    m_sNHasBeenSet(false),
    m_parentWIDHasBeenSet(false),
    m_keySourceHasBeenSet(false)
{
}

CoreInternalOutcome AddDeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddDeviceInfo.ProductId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = value["ProductId"].GetInt64();
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("SN") && !value["SN"].IsNull())
    {
        if (!value["SN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddDeviceInfo.SN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sN = string(value["SN"].GetString());
        m_sNHasBeenSet = true;
    }

    if (value.HasMember("ParentWID") && !value["ParentWID"].IsNull())
    {
        if (!value["ParentWID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddDeviceInfo.ParentWID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentWID = string(value["ParentWID"].GetString());
        m_parentWIDHasBeenSet = true;
    }

    if (value.HasMember("KeySource") && !value["KeySource"].IsNull())
    {
        if (!value["KeySource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddDeviceInfo.KeySource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keySource = value["KeySource"].GetInt64();
        m_keySourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddDeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productId, allocator);
    }

    if (m_sNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sN.c_str(), allocator).Move(), allocator);
    }

    if (m_parentWIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentWID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentWID.c_str(), allocator).Move(), allocator);
    }

    if (m_keySourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeySource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keySource, allocator);
    }

}


int64_t AddDeviceInfo::GetProductId() const
{
    return m_productId;
}

void AddDeviceInfo::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool AddDeviceInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string AddDeviceInfo::GetSN() const
{
    return m_sN;
}

void AddDeviceInfo::SetSN(const string& _sN)
{
    m_sN = _sN;
    m_sNHasBeenSet = true;
}

bool AddDeviceInfo::SNHasBeenSet() const
{
    return m_sNHasBeenSet;
}

string AddDeviceInfo::GetParentWID() const
{
    return m_parentWID;
}

void AddDeviceInfo::SetParentWID(const string& _parentWID)
{
    m_parentWID = _parentWID;
    m_parentWIDHasBeenSet = true;
}

bool AddDeviceInfo::ParentWIDHasBeenSet() const
{
    return m_parentWIDHasBeenSet;
}

int64_t AddDeviceInfo::GetKeySource() const
{
    return m_keySource;
}

void AddDeviceInfo::SetKeySource(const int64_t& _keySource)
{
    m_keySource = _keySource;
    m_keySourceHasBeenSet = true;
}

bool AddDeviceInfo::KeySourceHasBeenSet() const
{
    return m_keySourceHasBeenSet;
}

