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

#include <tencentcloud/emr/v20190103/model/CreateInstanceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

CreateInstanceResult::CreateInstanceResult() :
    m_clientTokenHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_dealNamesHasBeenSet(false)
{
}

CoreInternalOutcome CreateInstanceResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientToken") && !value["ClientToken"].IsNull())
    {
        if (!value["ClientToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateInstanceResult.ClientToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientToken = string(value["ClientToken"].GetString());
        m_clientTokenHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateInstanceResult.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("DealNames") && !value["DealNames"].IsNull())
    {
        if (!value["DealNames"].IsArray())
            return CoreInternalOutcome(Error("response `CreateInstanceResult.DealNames` is not array type"));

        const Value &tmpValue = value["DealNames"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealNames.push_back((*itr).GetString());
        }
        m_dealNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateInstanceResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dealNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DealNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dealNames.begin(); itr != m_dealNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CreateInstanceResult::GetClientToken() const
{
    return m_clientToken;
}

void CreateInstanceResult::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateInstanceResult::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateInstanceResult::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstanceResult::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstanceResult::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> CreateInstanceResult::GetDealNames() const
{
    return m_dealNames;
}

void CreateInstanceResult::SetDealNames(const vector<string>& _dealNames)
{
    m_dealNames = _dealNames;
    m_dealNamesHasBeenSet = true;
}

bool CreateInstanceResult::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

