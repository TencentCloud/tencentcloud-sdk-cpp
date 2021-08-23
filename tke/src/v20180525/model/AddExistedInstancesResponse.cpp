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

#include <tencentcloud/tke/v20180525/model/AddExistedInstancesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AddExistedInstancesResponse::AddExistedInstancesResponse() :
    m_failedInstanceIdsHasBeenSet(false),
    m_succInstanceIdsHasBeenSet(false),
    m_timeoutInstanceIdsHasBeenSet(false),
    m_failedReasonsHasBeenSet(false)
{
}

CoreInternalOutcome AddExistedInstancesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FailedInstanceIds") && !rsp["FailedInstanceIds"].IsNull())
    {
        if (!rsp["FailedInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedInstanceIds.push_back((*itr).GetString());
        }
        m_failedInstanceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("SuccInstanceIds") && !rsp["SuccInstanceIds"].IsNull())
    {
        if (!rsp["SuccInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuccInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuccInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_succInstanceIds.push_back((*itr).GetString());
        }
        m_succInstanceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("TimeoutInstanceIds") && !rsp["TimeoutInstanceIds"].IsNull())
    {
        if (!rsp["TimeoutInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeoutInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TimeoutInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeoutInstanceIds.push_back((*itr).GetString());
        }
        m_timeoutInstanceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("FailedReasons") && !rsp["FailedReasons"].IsNull())
    {
        if (!rsp["FailedReasons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedReasons` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedReasons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedReasons.push_back((*itr).GetString());
        }
        m_failedReasonsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AddExistedInstancesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_failedInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedInstanceIds.begin(); itr != m_failedInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_succInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_succInstanceIds.begin(); itr != m_succInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeoutInstanceIds.begin(); itr != m_timeoutInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failedReasonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReasons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedReasons.begin(); itr != m_failedReasons.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


vector<string> AddExistedInstancesResponse::GetFailedInstanceIds() const
{
    return m_failedInstanceIds;
}

bool AddExistedInstancesResponse::FailedInstanceIdsHasBeenSet() const
{
    return m_failedInstanceIdsHasBeenSet;
}

vector<string> AddExistedInstancesResponse::GetSuccInstanceIds() const
{
    return m_succInstanceIds;
}

bool AddExistedInstancesResponse::SuccInstanceIdsHasBeenSet() const
{
    return m_succInstanceIdsHasBeenSet;
}

vector<string> AddExistedInstancesResponse::GetTimeoutInstanceIds() const
{
    return m_timeoutInstanceIds;
}

bool AddExistedInstancesResponse::TimeoutInstanceIdsHasBeenSet() const
{
    return m_timeoutInstanceIdsHasBeenSet;
}

vector<string> AddExistedInstancesResponse::GetFailedReasons() const
{
    return m_failedReasons;
}

bool AddExistedInstancesResponse::FailedReasonsHasBeenSet() const
{
    return m_failedReasonsHasBeenSet;
}


