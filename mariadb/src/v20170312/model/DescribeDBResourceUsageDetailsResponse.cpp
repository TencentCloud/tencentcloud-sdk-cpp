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

#include <tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageDetailsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribeDBResourceUsageDetailsResponse::DescribeDBResourceUsageDetailsResponse() :
    m_masterHasBeenSet(false),
    m_slave1HasBeenSet(false),
    m_slave2HasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBResourceUsageDetailsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Master") && !rsp["Master"].IsNull())
    {
        if (!rsp["Master"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Master` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_master.Deserialize(rsp["Master"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterHasBeenSet = true;
    }

    if (rsp.HasMember("Slave1") && !rsp["Slave1"].IsNull())
    {
        if (!rsp["Slave1"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Slave1` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slave1.Deserialize(rsp["Slave1"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slave1HasBeenSet = true;
    }

    if (rsp.HasMember("Slave2") && !rsp["Slave2"].IsNull())
    {
        if (!rsp["Slave2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Slave2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slave2.Deserialize(rsp["Slave2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slave2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBResourceUsageDetailsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_masterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Master";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_master.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slave1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Slave1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slave1.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slave2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Slave2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slave2.ToJsonObject(value[key.c_str()], allocator);
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


ResourceUsageMonitorSet DescribeDBResourceUsageDetailsResponse::GetMaster() const
{
    return m_master;
}

bool DescribeDBResourceUsageDetailsResponse::MasterHasBeenSet() const
{
    return m_masterHasBeenSet;
}

ResourceUsageMonitorSet DescribeDBResourceUsageDetailsResponse::GetSlave1() const
{
    return m_slave1;
}

bool DescribeDBResourceUsageDetailsResponse::Slave1HasBeenSet() const
{
    return m_slave1HasBeenSet;
}

ResourceUsageMonitorSet DescribeDBResourceUsageDetailsResponse::GetSlave2() const
{
    return m_slave2;
}

bool DescribeDBResourceUsageDetailsResponse::Slave2HasBeenSet() const
{
    return m_slave2HasBeenSet;
}


