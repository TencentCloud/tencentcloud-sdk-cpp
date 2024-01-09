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

#include <tencentcloud/dts/v20211206/model/PartitionAssignment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

PartitionAssignment::PartitionAssignment() :
    m_clientIdHasBeenSet(false),
    m_partitionNoHasBeenSet(false)
{
}

CoreInternalOutcome PartitionAssignment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionAssignment.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("PartitionNo") && !value["PartitionNo"].IsNull())
    {
        if (!value["PartitionNo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PartitionAssignment.PartitionNo` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionNo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_partitionNo.push_back((*itr).GetUint64());
        }
        m_partitionNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartitionAssignment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partitionNo.begin(); itr != m_partitionNo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string PartitionAssignment::GetClientId() const
{
    return m_clientId;
}

void PartitionAssignment::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool PartitionAssignment::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

vector<uint64_t> PartitionAssignment::GetPartitionNo() const
{
    return m_partitionNo;
}

void PartitionAssignment::SetPartitionNo(const vector<uint64_t>& _partitionNo)
{
    m_partitionNo = _partitionNo;
    m_partitionNoHasBeenSet = true;
}

bool PartitionAssignment::PartitionNoHasBeenSet() const
{
    return m_partitionNoHasBeenSet;
}

