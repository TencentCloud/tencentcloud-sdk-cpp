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

#include <tencentcloud/apm/v20210622/model/DescribeOPRAllVulCountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeOPRAllVulCountResponse::DescribeOPRAllVulCountResponse() :
    m_vulnerabilityListHasBeenSet(false),
    m_vulnerabilityCountHasBeenSet(false),
    m_importantVulnerabilityCountHasBeenSet(false),
    m_criticalVulnerabilityCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOPRAllVulCountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VulnerabilityList") && !rsp["VulnerabilityList"].IsNull())
    {
        if (!rsp["VulnerabilityList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulnerabilityList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulnerabilityList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmMetricRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulnerabilityList.push_back(item);
        }
        m_vulnerabilityListHasBeenSet = true;
    }

    if (rsp.HasMember("VulnerabilityCount") && !rsp["VulnerabilityCount"].IsNull())
    {
        if (!rsp["VulnerabilityCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulnerabilityCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulnerabilityCount = rsp["VulnerabilityCount"].GetInt64();
        m_vulnerabilityCountHasBeenSet = true;
    }

    if (rsp.HasMember("ImportantVulnerabilityCount") && !rsp["ImportantVulnerabilityCount"].IsNull())
    {
        if (!rsp["ImportantVulnerabilityCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImportantVulnerabilityCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_importantVulnerabilityCount = rsp["ImportantVulnerabilityCount"].GetInt64();
        m_importantVulnerabilityCountHasBeenSet = true;
    }

    if (rsp.HasMember("CriticalVulnerabilityCount") && !rsp["CriticalVulnerabilityCount"].IsNull())
    {
        if (!rsp["CriticalVulnerabilityCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CriticalVulnerabilityCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalVulnerabilityCount = rsp["CriticalVulnerabilityCount"].GetInt64();
        m_criticalVulnerabilityCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOPRAllVulCountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_vulnerabilityListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulnerabilityList.begin(); itr != m_vulnerabilityList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulnerabilityCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulnerabilityCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulnerabilityCount, allocator);
    }

    if (m_importantVulnerabilityCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportantVulnerabilityCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_importantVulnerabilityCount, allocator);
    }

    if (m_criticalVulnerabilityCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalVulnerabilityCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalVulnerabilityCount, allocator);
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


vector<ApmMetricRecord> DescribeOPRAllVulCountResponse::GetVulnerabilityList() const
{
    return m_vulnerabilityList;
}

bool DescribeOPRAllVulCountResponse::VulnerabilityListHasBeenSet() const
{
    return m_vulnerabilityListHasBeenSet;
}

int64_t DescribeOPRAllVulCountResponse::GetVulnerabilityCount() const
{
    return m_vulnerabilityCount;
}

bool DescribeOPRAllVulCountResponse::VulnerabilityCountHasBeenSet() const
{
    return m_vulnerabilityCountHasBeenSet;
}

int64_t DescribeOPRAllVulCountResponse::GetImportantVulnerabilityCount() const
{
    return m_importantVulnerabilityCount;
}

bool DescribeOPRAllVulCountResponse::ImportantVulnerabilityCountHasBeenSet() const
{
    return m_importantVulnerabilityCountHasBeenSet;
}

int64_t DescribeOPRAllVulCountResponse::GetCriticalVulnerabilityCount() const
{
    return m_criticalVulnerabilityCount;
}

bool DescribeOPRAllVulCountResponse::CriticalVulnerabilityCountHasBeenSet() const
{
    return m_criticalVulnerabilityCountHasBeenSet;
}


