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

#include <tencentcloud/cvm/v20170312/model/Externals.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

Externals::Externals() :
    m_releaseAddressHasBeenSet(false),
    m_unsupportNetworksHasBeenSet(false),
    m_storageBlockAttrHasBeenSet(false)
{
}

CoreInternalOutcome Externals::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReleaseAddress") && !value["ReleaseAddress"].IsNull())
    {
        if (!value["ReleaseAddress"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Externals.ReleaseAddress` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_releaseAddress = value["ReleaseAddress"].GetBool();
        m_releaseAddressHasBeenSet = true;
    }

    if (value.HasMember("UnsupportNetworks") && !value["UnsupportNetworks"].IsNull())
    {
        if (!value["UnsupportNetworks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Externals.UnsupportNetworks` is not array type"));

        const rapidjson::Value &tmpValue = value["UnsupportNetworks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_unsupportNetworks.push_back((*itr).GetString());
        }
        m_unsupportNetworksHasBeenSet = true;
    }

    if (value.HasMember("StorageBlockAttr") && !value["StorageBlockAttr"].IsNull())
    {
        if (!value["StorageBlockAttr"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Externals.StorageBlockAttr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageBlockAttr.Deserialize(value["StorageBlockAttr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageBlockAttrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Externals::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_releaseAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_releaseAddress, allocator);
    }

    if (m_unsupportNetworksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnsupportNetworks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unsupportNetworks.begin(); itr != m_unsupportNetworks.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageBlockAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageBlockAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageBlockAttr.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool Externals::GetReleaseAddress() const
{
    return m_releaseAddress;
}

void Externals::SetReleaseAddress(const bool& _releaseAddress)
{
    m_releaseAddress = _releaseAddress;
    m_releaseAddressHasBeenSet = true;
}

bool Externals::ReleaseAddressHasBeenSet() const
{
    return m_releaseAddressHasBeenSet;
}

vector<string> Externals::GetUnsupportNetworks() const
{
    return m_unsupportNetworks;
}

void Externals::SetUnsupportNetworks(const vector<string>& _unsupportNetworks)
{
    m_unsupportNetworks = _unsupportNetworks;
    m_unsupportNetworksHasBeenSet = true;
}

bool Externals::UnsupportNetworksHasBeenSet() const
{
    return m_unsupportNetworksHasBeenSet;
}

StorageBlock Externals::GetStorageBlockAttr() const
{
    return m_storageBlockAttr;
}

void Externals::SetStorageBlockAttr(const StorageBlock& _storageBlockAttr)
{
    m_storageBlockAttr = _storageBlockAttr;
    m_storageBlockAttrHasBeenSet = true;
}

bool Externals::StorageBlockAttrHasBeenSet() const
{
    return m_storageBlockAttrHasBeenSet;
}

