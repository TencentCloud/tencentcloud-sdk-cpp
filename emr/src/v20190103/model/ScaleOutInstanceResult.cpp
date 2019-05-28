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

#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

ScaleOutInstanceResult::ScaleOutInstanceResult() :
    m_clientTokenHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_dealNamesHasBeenSet(false)
{
}

CoreInternalOutcome ScaleOutInstanceResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientToken") && !value["ClientToken"].IsNull())
    {
        if (!value["ClientToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScaleOutInstanceResult.ClientToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientToken = string(value["ClientToken"].GetString());
        m_clientTokenHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScaleOutInstanceResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DealNames") && !value["DealNames"].IsNull())
    {
        if (!value["DealNames"].IsArray())
            return CoreInternalOutcome(Error("response `ScaleOutInstanceResult.DealNames` is not array type"));

        const Value &tmpValue = value["DealNames"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealNames.push_back((*itr).GetString());
        }
        m_dealNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScaleOutInstanceResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
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


string ScaleOutInstanceResult::GetClientToken() const
{
    return m_clientToken;
}

void ScaleOutInstanceResult::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool ScaleOutInstanceResult::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string ScaleOutInstanceResult::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleOutInstanceResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleOutInstanceResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ScaleOutInstanceResult::GetDealNames() const
{
    return m_dealNames;
}

void ScaleOutInstanceResult::SetDealNames(const vector<string>& _dealNames)
{
    m_dealNames = _dealNames;
    m_dealNamesHasBeenSet = true;
}

bool ScaleOutInstanceResult::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

