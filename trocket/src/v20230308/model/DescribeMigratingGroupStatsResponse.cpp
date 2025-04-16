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

#include <tencentcloud/trocket/v20230308/model/DescribeMigratingGroupStatsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DescribeMigratingGroupStatsResponse::DescribeMigratingGroupStatsResponse() :
    m_sourceConsumeLagHasBeenSet(false),
    m_targetConsumeLagHasBeenSet(false),
    m_sourceConsumerClientsHasBeenSet(false),
    m_targetConsumerClientsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMigratingGroupStatsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SourceConsumeLag") && !rsp["SourceConsumeLag"].IsNull())
    {
        if (!rsp["SourceConsumeLag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceConsumeLag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceConsumeLag = rsp["SourceConsumeLag"].GetInt64();
        m_sourceConsumeLagHasBeenSet = true;
    }

    if (rsp.HasMember("TargetConsumeLag") && !rsp["TargetConsumeLag"].IsNull())
    {
        if (!rsp["TargetConsumeLag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetConsumeLag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetConsumeLag = rsp["TargetConsumeLag"].GetInt64();
        m_targetConsumeLagHasBeenSet = true;
    }

    if (rsp.HasMember("SourceConsumerClients") && !rsp["SourceConsumerClients"].IsNull())
    {
        if (!rsp["SourceConsumerClients"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceConsumerClients` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SourceConsumerClients"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumerClient item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceConsumerClients.push_back(item);
        }
        m_sourceConsumerClientsHasBeenSet = true;
    }

    if (rsp.HasMember("TargetConsumerClients") && !rsp["TargetConsumerClients"].IsNull())
    {
        if (!rsp["TargetConsumerClients"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetConsumerClients` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TargetConsumerClients"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumerClient item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetConsumerClients.push_back(item);
        }
        m_targetConsumerClientsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMigratingGroupStatsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sourceConsumeLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceConsumeLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceConsumeLag, allocator);
    }

    if (m_targetConsumeLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetConsumeLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetConsumeLag, allocator);
    }

    if (m_sourceConsumerClientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceConsumerClients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceConsumerClients.begin(); itr != m_sourceConsumerClients.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetConsumerClientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetConsumerClients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetConsumerClients.begin(); itr != m_targetConsumerClients.end(); ++itr, ++i)
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


int64_t DescribeMigratingGroupStatsResponse::GetSourceConsumeLag() const
{
    return m_sourceConsumeLag;
}

bool DescribeMigratingGroupStatsResponse::SourceConsumeLagHasBeenSet() const
{
    return m_sourceConsumeLagHasBeenSet;
}

int64_t DescribeMigratingGroupStatsResponse::GetTargetConsumeLag() const
{
    return m_targetConsumeLag;
}

bool DescribeMigratingGroupStatsResponse::TargetConsumeLagHasBeenSet() const
{
    return m_targetConsumeLagHasBeenSet;
}

vector<ConsumerClient> DescribeMigratingGroupStatsResponse::GetSourceConsumerClients() const
{
    return m_sourceConsumerClients;
}

bool DescribeMigratingGroupStatsResponse::SourceConsumerClientsHasBeenSet() const
{
    return m_sourceConsumerClientsHasBeenSet;
}

vector<ConsumerClient> DescribeMigratingGroupStatsResponse::GetTargetConsumerClients() const
{
    return m_targetConsumerClients;
}

bool DescribeMigratingGroupStatsResponse::TargetConsumerClientsHasBeenSet() const
{
    return m_targetConsumerClientsHasBeenSet;
}


