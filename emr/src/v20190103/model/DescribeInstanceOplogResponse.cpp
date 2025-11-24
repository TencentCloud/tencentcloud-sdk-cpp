/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/emr/v20190103/model/DescribeInstanceOplogResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeInstanceOplogResponse::DescribeInstanceOplogResponse() :
    m_totalCntHasBeenSet(false),
    m_logListHasBeenSet(false),
    m_operandListHasBeenSet(false),
    m_securityLevelListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceOplogResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCnt") && !rsp["TotalCnt"].IsNull())
    {
        if (!rsp["TotalCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnt = rsp["TotalCnt"].GetInt64();
        m_totalCntHasBeenSet = true;
    }

    if (rsp.HasMember("LogList") && !rsp["LogList"].IsNull())
    {
        if (!rsp["LogList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LogList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OperationLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logList.push_back(item);
        }
        m_logListHasBeenSet = true;
    }

    if (rsp.HasMember("OperandList") && !rsp["OperandList"].IsNull())
    {
        if (!rsp["OperandList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OperandList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OperandList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operandList.push_back((*itr).GetString());
        }
        m_operandListHasBeenSet = true;
    }

    if (rsp.HasMember("SecurityLevelList") && !rsp["SecurityLevelList"].IsNull())
    {
        if (!rsp["SecurityLevelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityLevelList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SecurityLevelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityLevelList.push_back((*itr).GetString());
        }
        m_securityLevelListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInstanceOplogResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCnt, allocator);
    }

    if (m_logListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logList.begin(); itr != m_logList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operandListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperandList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operandList.begin(); itr != m_operandList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_securityLevelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityLevelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityLevelList.begin(); itr != m_securityLevelList.end(); ++itr)
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


int64_t DescribeInstanceOplogResponse::GetTotalCnt() const
{
    return m_totalCnt;
}

bool DescribeInstanceOplogResponse::TotalCntHasBeenSet() const
{
    return m_totalCntHasBeenSet;
}

vector<OperationLog> DescribeInstanceOplogResponse::GetLogList() const
{
    return m_logList;
}

bool DescribeInstanceOplogResponse::LogListHasBeenSet() const
{
    return m_logListHasBeenSet;
}

vector<string> DescribeInstanceOplogResponse::GetOperandList() const
{
    return m_operandList;
}

bool DescribeInstanceOplogResponse::OperandListHasBeenSet() const
{
    return m_operandListHasBeenSet;
}

vector<string> DescribeInstanceOplogResponse::GetSecurityLevelList() const
{
    return m_securityLevelList;
}

bool DescribeInstanceOplogResponse::SecurityLevelListHasBeenSet() const
{
    return m_securityLevelListHasBeenSet;
}


