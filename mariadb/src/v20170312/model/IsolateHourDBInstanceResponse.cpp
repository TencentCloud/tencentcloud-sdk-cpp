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

#include <tencentcloud/mariadb/v20170312/model/IsolateHourDBInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

IsolateHourDBInstanceResponse::IsolateHourDBInstanceResponse() :
    m_successInstanceIdsHasBeenSet(false),
    m_failedInstanceIdsHasBeenSet(false)
{
}

CoreInternalOutcome IsolateHourDBInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SuccessInstanceIds") && !rsp["SuccessInstanceIds"].IsNull())
    {
        if (!rsp["SuccessInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuccessInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuccessInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successInstanceIds.push_back((*itr).GetString());
        }
        m_successInstanceIdsHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string IsolateHourDBInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_successInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successInstanceIds.begin(); itr != m_successInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<string> IsolateHourDBInstanceResponse::GetSuccessInstanceIds() const
{
    return m_successInstanceIds;
}

bool IsolateHourDBInstanceResponse::SuccessInstanceIdsHasBeenSet() const
{
    return m_successInstanceIdsHasBeenSet;
}

vector<string> IsolateHourDBInstanceResponse::GetFailedInstanceIds() const
{
    return m_failedInstanceIds;
}

bool IsolateHourDBInstanceResponse::FailedInstanceIdsHasBeenSet() const
{
    return m_failedInstanceIdsHasBeenSet;
}


