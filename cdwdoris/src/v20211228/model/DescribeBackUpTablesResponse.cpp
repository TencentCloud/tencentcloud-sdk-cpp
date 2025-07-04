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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeBackUpTablesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeBackUpTablesResponse::DescribeBackUpTablesResponse() :
    m_availableTablesHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_isUnknownVersionHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackUpTablesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AvailableTables") && !rsp["AvailableTables"].IsNull())
    {
        if (!rsp["AvailableTables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableTables` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AvailableTables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupTableContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_availableTables.push_back(item);
        }
        m_availableTablesHasBeenSet = true;
    }

    if (rsp.HasMember("Msg") && !rsp["Msg"].IsNull())
    {
        if (!rsp["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(rsp["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (rsp.HasMember("IsUnknownVersion") && !rsp["IsUnknownVersion"].IsNull())
    {
        if (!rsp["IsUnknownVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsUnknownVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUnknownVersion = rsp["IsUnknownVersion"].GetBool();
        m_isUnknownVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackUpTablesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_availableTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_availableTables.begin(); itr != m_availableTables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_isUnknownVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnknownVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnknownVersion, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
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


vector<BackupTableContent> DescribeBackUpTablesResponse::GetAvailableTables() const
{
    return m_availableTables;
}

bool DescribeBackUpTablesResponse::AvailableTablesHasBeenSet() const
{
    return m_availableTablesHasBeenSet;
}

string DescribeBackUpTablesResponse::GetMsg() const
{
    return m_msg;
}

bool DescribeBackUpTablesResponse::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

bool DescribeBackUpTablesResponse::GetIsUnknownVersion() const
{
    return m_isUnknownVersion;
}

bool DescribeBackUpTablesResponse::IsUnknownVersionHasBeenSet() const
{
    return m_isUnknownVersionHasBeenSet;
}

string DescribeBackUpTablesResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool DescribeBackUpTablesResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}


