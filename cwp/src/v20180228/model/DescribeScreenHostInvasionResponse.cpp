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

#include <tencentcloud/cwp/v20180228/model/DescribeScreenHostInvasionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeScreenHostInvasionResponse::DescribeScreenHostInvasionResponse() :
    m_defendAttackLogHasBeenSet(false),
    m_invasionEventsHasBeenSet(false),
    m_vulHasBeenSet(false),
    m_baselineHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScreenHostInvasionResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DefendAttackLog") && !rsp["DefendAttackLog"].IsNull())
    {
        if (!rsp["DefendAttackLog"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DefendAttackLog` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DefendAttackLog"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScreenDefendAttackLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_defendAttackLog.push_back(item);
        }
        m_defendAttackLogHasBeenSet = true;
    }

    if (rsp.HasMember("InvasionEvents") && !rsp["InvasionEvents"].IsNull())
    {
        if (!rsp["InvasionEvents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvasionEvents` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InvasionEvents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScreenInvasion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invasionEvents.push_back(item);
        }
        m_invasionEventsHasBeenSet = true;
    }

    if (rsp.HasMember("Vul") && !rsp["Vul"].IsNull())
    {
        if (!rsp["Vul"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Vul` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Vul"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScreenVulInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vul.push_back(item);
        }
        m_vulHasBeenSet = true;
    }

    if (rsp.HasMember("Baseline") && !rsp["Baseline"].IsNull())
    {
        if (!rsp["Baseline"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Baseline` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Baseline"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScreenBaselineInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_baseline.push_back(item);
        }
        m_baselineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScreenHostInvasionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_defendAttackLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendAttackLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defendAttackLog.begin(); itr != m_defendAttackLog.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_invasionEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvasionEvents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invasionEvents.begin(); itr != m_invasionEvents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vul.begin(); itr != m_vul.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_baselineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Baseline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_baseline.begin(); itr != m_baseline.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<ScreenDefendAttackLog> DescribeScreenHostInvasionResponse::GetDefendAttackLog() const
{
    return m_defendAttackLog;
}

bool DescribeScreenHostInvasionResponse::DefendAttackLogHasBeenSet() const
{
    return m_defendAttackLogHasBeenSet;
}

vector<ScreenInvasion> DescribeScreenHostInvasionResponse::GetInvasionEvents() const
{
    return m_invasionEvents;
}

bool DescribeScreenHostInvasionResponse::InvasionEventsHasBeenSet() const
{
    return m_invasionEventsHasBeenSet;
}

vector<ScreenVulInfo> DescribeScreenHostInvasionResponse::GetVul() const
{
    return m_vul;
}

bool DescribeScreenHostInvasionResponse::VulHasBeenSet() const
{
    return m_vulHasBeenSet;
}

vector<ScreenBaselineInfo> DescribeScreenHostInvasionResponse::GetBaseline() const
{
    return m_baseline;
}

bool DescribeScreenHostInvasionResponse::BaselineHasBeenSet() const
{
    return m_baselineHasBeenSet;
}


