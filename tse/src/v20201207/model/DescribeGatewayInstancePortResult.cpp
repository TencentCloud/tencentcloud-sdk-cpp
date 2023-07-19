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

#include <tencentcloud/tse/v20201207/model/DescribeGatewayInstancePortResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeGatewayInstancePortResult::DescribeGatewayInstancePortResult() :
    m_gatewayIdHasBeenSet(false),
    m_gatewayInstancePortListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGatewayInstancePortResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayInstancePortResult.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayInstancePortList") && !value["GatewayInstancePortList"].IsNull())
    {
        if (!value["GatewayInstancePortList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeGatewayInstancePortResult.GatewayInstancePortList` is not array type"));

        const rapidjson::Value &tmpValue = value["GatewayInstancePortList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GatewayInstanceSchemeAndPorts item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gatewayInstancePortList.push_back(item);
        }
        m_gatewayInstancePortListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeGatewayInstancePortResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayInstancePortListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstancePortList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gatewayInstancePortList.begin(); itr != m_gatewayInstancePortList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeGatewayInstancePortResult::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeGatewayInstancePortResult::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeGatewayInstancePortResult::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

vector<GatewayInstanceSchemeAndPorts> DescribeGatewayInstancePortResult::GetGatewayInstancePortList() const
{
    return m_gatewayInstancePortList;
}

void DescribeGatewayInstancePortResult::SetGatewayInstancePortList(const vector<GatewayInstanceSchemeAndPorts>& _gatewayInstancePortList)
{
    m_gatewayInstancePortList = _gatewayInstancePortList;
    m_gatewayInstancePortListHasBeenSet = true;
}

bool DescribeGatewayInstancePortResult::GatewayInstancePortListHasBeenSet() const
{
    return m_gatewayInstancePortListHasBeenSet;
}

