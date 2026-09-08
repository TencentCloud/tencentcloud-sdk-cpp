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

#include <tencentcloud/postgres/v20170312/model/DescribePostgRESTServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribePostgRESTServiceResponse::DescribePostgRESTServiceResponse() :
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_networkAccessListHasBeenSet(false),
    m_jWTSecretHasBeenSet(false)
{
}

CoreInternalOutcome DescribePostgRESTServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NetworkAccessList") && !rsp["NetworkAccessList"].IsNull())
    {
        if (!rsp["NetworkAccessList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAccessList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NetworkAccessList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBInstanceNetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networkAccessList.push_back(item);
        }
        m_networkAccessListHasBeenSet = true;
    }

    if (rsp.HasMember("JWTSecret") && !rsp["JWTSecret"].IsNull())
    {
        if (!rsp["JWTSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JWTSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jWTSecret = string(rsp["JWTSecret"].GetString());
        m_jWTSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePostgRESTServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAccessListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAccessList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networkAccessList.begin(); itr != m_networkAccessList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_jWTSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JWTSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jWTSecret.c_str(), allocator).Move(), allocator);
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


string DescribePostgRESTServiceResponse::GetStatus() const
{
    return m_status;
}

bool DescribePostgRESTServiceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribePostgRESTServiceResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribePostgRESTServiceResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<DBInstanceNetInfo> DescribePostgRESTServiceResponse::GetNetworkAccessList() const
{
    return m_networkAccessList;
}

bool DescribePostgRESTServiceResponse::NetworkAccessListHasBeenSet() const
{
    return m_networkAccessListHasBeenSet;
}

string DescribePostgRESTServiceResponse::GetJWTSecret() const
{
    return m_jWTSecret;
}

bool DescribePostgRESTServiceResponse::JWTSecretHasBeenSet() const
{
    return m_jWTSecretHasBeenSet;
}


