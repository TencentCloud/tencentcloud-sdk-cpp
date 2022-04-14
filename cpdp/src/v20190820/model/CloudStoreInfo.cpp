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

#include <tencentcloud/cpdp/v20190820/model/CloudStoreInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudStoreInfo::CloudStoreInfo() :
    m_storeIdHasBeenSet(false),
    m_storeNameHasBeenSet(false),
    m_storeAddressHasBeenSet(false),
    m_storeAreaCodeHasBeenSet(false),
    m_storeDeviceIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudStoreInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StoreId") && !value["StoreId"].IsNull())
    {
        if (!value["StoreId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStoreInfo.StoreId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeId = string(value["StoreId"].GetString());
        m_storeIdHasBeenSet = true;
    }

    if (value.HasMember("StoreName") && !value["StoreName"].IsNull())
    {
        if (!value["StoreName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStoreInfo.StoreName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeName = string(value["StoreName"].GetString());
        m_storeNameHasBeenSet = true;
    }

    if (value.HasMember("StoreAddress") && !value["StoreAddress"].IsNull())
    {
        if (!value["StoreAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStoreInfo.StoreAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeAddress = string(value["StoreAddress"].GetString());
        m_storeAddressHasBeenSet = true;
    }

    if (value.HasMember("StoreAreaCode") && !value["StoreAreaCode"].IsNull())
    {
        if (!value["StoreAreaCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStoreInfo.StoreAreaCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeAreaCode = string(value["StoreAreaCode"].GetString());
        m_storeAreaCodeHasBeenSet = true;
    }

    if (value.HasMember("StoreDeviceId") && !value["StoreDeviceId"].IsNull())
    {
        if (!value["StoreDeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStoreInfo.StoreDeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storeDeviceId = string(value["StoreDeviceId"].GetString());
        m_storeDeviceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudStoreInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeId.c_str(), allocator).Move(), allocator);
    }

    if (m_storeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeName.c_str(), allocator).Move(), allocator);
    }

    if (m_storeAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_storeAreaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreAreaCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeAreaCode.c_str(), allocator).Move(), allocator);
    }

    if (m_storeDeviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreDeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storeDeviceId.c_str(), allocator).Move(), allocator);
    }

}


string CloudStoreInfo::GetStoreId() const
{
    return m_storeId;
}

void CloudStoreInfo::SetStoreId(const string& _storeId)
{
    m_storeId = _storeId;
    m_storeIdHasBeenSet = true;
}

bool CloudStoreInfo::StoreIdHasBeenSet() const
{
    return m_storeIdHasBeenSet;
}

string CloudStoreInfo::GetStoreName() const
{
    return m_storeName;
}

void CloudStoreInfo::SetStoreName(const string& _storeName)
{
    m_storeName = _storeName;
    m_storeNameHasBeenSet = true;
}

bool CloudStoreInfo::StoreNameHasBeenSet() const
{
    return m_storeNameHasBeenSet;
}

string CloudStoreInfo::GetStoreAddress() const
{
    return m_storeAddress;
}

void CloudStoreInfo::SetStoreAddress(const string& _storeAddress)
{
    m_storeAddress = _storeAddress;
    m_storeAddressHasBeenSet = true;
}

bool CloudStoreInfo::StoreAddressHasBeenSet() const
{
    return m_storeAddressHasBeenSet;
}

string CloudStoreInfo::GetStoreAreaCode() const
{
    return m_storeAreaCode;
}

void CloudStoreInfo::SetStoreAreaCode(const string& _storeAreaCode)
{
    m_storeAreaCode = _storeAreaCode;
    m_storeAreaCodeHasBeenSet = true;
}

bool CloudStoreInfo::StoreAreaCodeHasBeenSet() const
{
    return m_storeAreaCodeHasBeenSet;
}

string CloudStoreInfo::GetStoreDeviceId() const
{
    return m_storeDeviceId;
}

void CloudStoreInfo::SetStoreDeviceId(const string& _storeDeviceId)
{
    m_storeDeviceId = _storeDeviceId;
    m_storeDeviceIdHasBeenSet = true;
}

bool CloudStoreInfo::StoreDeviceIdHasBeenSet() const
{
    return m_storeDeviceIdHasBeenSet;
}

