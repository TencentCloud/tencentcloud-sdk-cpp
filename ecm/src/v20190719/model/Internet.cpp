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

#include <tencentcloud/ecm/v20190719/model/Internet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Internet::Internet() :
    m_privateIPAddressSetHasBeenSet(false),
    m_publicIPAddressSetHasBeenSet(false),
    m_instanceNetworkInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome Internet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivateIPAddressSet") && !value["PrivateIPAddressSet"].IsNull())
    {
        if (!value["PrivateIPAddressSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Internet.PrivateIPAddressSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIPAddressSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrivateIPAddressInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privateIPAddressSet.push_back(item);
        }
        m_privateIPAddressSetHasBeenSet = true;
    }

    if (value.HasMember("PublicIPAddressSet") && !value["PublicIPAddressSet"].IsNull())
    {
        if (!value["PublicIPAddressSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Internet.PublicIPAddressSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIPAddressSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PublicIPAddressInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_publicIPAddressSet.push_back(item);
        }
        m_publicIPAddressSetHasBeenSet = true;
    }

    if (value.HasMember("InstanceNetworkInfoSet") && !value["InstanceNetworkInfoSet"].IsNull())
    {
        if (!value["InstanceNetworkInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Internet.InstanceNetworkInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceNetworkInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNetworkInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceNetworkInfoSet.push_back(item);
        }
        m_instanceNetworkInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Internet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privateIPAddressSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIPAddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateIPAddressSet.begin(); itr != m_privateIPAddressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_publicIPAddressSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIPAddressSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publicIPAddressSet.begin(); itr != m_publicIPAddressSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceNetworkInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNetworkInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceNetworkInfoSet.begin(); itr != m_instanceNetworkInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<PrivateIPAddressInfo> Internet::GetPrivateIPAddressSet() const
{
    return m_privateIPAddressSet;
}

void Internet::SetPrivateIPAddressSet(const vector<PrivateIPAddressInfo>& _privateIPAddressSet)
{
    m_privateIPAddressSet = _privateIPAddressSet;
    m_privateIPAddressSetHasBeenSet = true;
}

bool Internet::PrivateIPAddressSetHasBeenSet() const
{
    return m_privateIPAddressSetHasBeenSet;
}

vector<PublicIPAddressInfo> Internet::GetPublicIPAddressSet() const
{
    return m_publicIPAddressSet;
}

void Internet::SetPublicIPAddressSet(const vector<PublicIPAddressInfo>& _publicIPAddressSet)
{
    m_publicIPAddressSet = _publicIPAddressSet;
    m_publicIPAddressSetHasBeenSet = true;
}

bool Internet::PublicIPAddressSetHasBeenSet() const
{
    return m_publicIPAddressSetHasBeenSet;
}

vector<InstanceNetworkInfo> Internet::GetInstanceNetworkInfoSet() const
{
    return m_instanceNetworkInfoSet;
}

void Internet::SetInstanceNetworkInfoSet(const vector<InstanceNetworkInfo>& _instanceNetworkInfoSet)
{
    m_instanceNetworkInfoSet = _instanceNetworkInfoSet;
    m_instanceNetworkInfoSetHasBeenSet = true;
}

bool Internet::InstanceNetworkInfoSetHasBeenSet() const
{
    return m_instanceNetworkInfoSetHasBeenSet;
}

