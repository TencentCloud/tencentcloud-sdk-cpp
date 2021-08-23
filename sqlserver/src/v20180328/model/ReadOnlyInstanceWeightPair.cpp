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

#include <tencentcloud/sqlserver/v20180328/model/ReadOnlyInstanceWeightPair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ReadOnlyInstanceWeightPair::ReadOnlyInstanceWeightPair() :
    m_readOnlyInstanceIdHasBeenSet(false),
    m_readOnlyWeightHasBeenSet(false)
{
}

CoreInternalOutcome ReadOnlyInstanceWeightPair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReadOnlyInstanceId") && !value["ReadOnlyInstanceId"].IsNull())
    {
        if (!value["ReadOnlyInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstanceWeightPair.ReadOnlyInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyInstanceId = string(value["ReadOnlyInstanceId"].GetString());
        m_readOnlyInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyWeight") && !value["ReadOnlyWeight"].IsNull())
    {
        if (!value["ReadOnlyWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyInstanceWeightPair.ReadOnlyWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyWeight = value["ReadOnlyWeight"].GetInt64();
        m_readOnlyWeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReadOnlyInstanceWeightPair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_readOnlyInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readOnlyInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyWeight, allocator);
    }

}


string ReadOnlyInstanceWeightPair::GetReadOnlyInstanceId() const
{
    return m_readOnlyInstanceId;
}

void ReadOnlyInstanceWeightPair::SetReadOnlyInstanceId(const string& _readOnlyInstanceId)
{
    m_readOnlyInstanceId = _readOnlyInstanceId;
    m_readOnlyInstanceIdHasBeenSet = true;
}

bool ReadOnlyInstanceWeightPair::ReadOnlyInstanceIdHasBeenSet() const
{
    return m_readOnlyInstanceIdHasBeenSet;
}

int64_t ReadOnlyInstanceWeightPair::GetReadOnlyWeight() const
{
    return m_readOnlyWeight;
}

void ReadOnlyInstanceWeightPair::SetReadOnlyWeight(const int64_t& _readOnlyWeight)
{
    m_readOnlyWeight = _readOnlyWeight;
    m_readOnlyWeightHasBeenSet = true;
}

bool ReadOnlyInstanceWeightPair::ReadOnlyWeightHasBeenSet() const
{
    return m_readOnlyWeightHasBeenSet;
}

