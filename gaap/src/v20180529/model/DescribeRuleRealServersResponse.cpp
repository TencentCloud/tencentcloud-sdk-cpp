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

#include <tencentcloud/gaap/v20180529/model/DescribeRuleRealServersResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DescribeRuleRealServersResponse::DescribeRuleRealServersResponse() :
    m_totalCountHasBeenSet(false),
    m_realServerSetHasBeenSet(false),
    m_bindRealServerTotalCountHasBeenSet(false),
    m_bindRealServerSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRuleRealServersResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RealServerSet") && !rsp["RealServerSet"].IsNull())
    {
        if (!rsp["RealServerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RealServerSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RealServerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RealServer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_realServerSet.push_back(item);
        }
        m_realServerSetHasBeenSet = true;
    }

    if (rsp.HasMember("BindRealServerTotalCount") && !rsp["BindRealServerTotalCount"].IsNull())
    {
        if (!rsp["BindRealServerTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BindRealServerTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindRealServerTotalCount = rsp["BindRealServerTotalCount"].GetUint64();
        m_bindRealServerTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("BindRealServerSet") && !rsp["BindRealServerSet"].IsNull())
    {
        if (!rsp["BindRealServerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindRealServerSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BindRealServerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindRealServer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindRealServerSet.push_back(item);
        }
        m_bindRealServerSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRuleRealServersResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_realServerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_realServerSet.begin(); itr != m_realServerSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bindRealServerTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindRealServerTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindRealServerTotalCount, allocator);
    }

    if (m_bindRealServerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindRealServerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindRealServerSet.begin(); itr != m_bindRealServerSet.end(); ++itr, ++i)
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


uint64_t DescribeRuleRealServersResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeRuleRealServersResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<RealServer> DescribeRuleRealServersResponse::GetRealServerSet() const
{
    return m_realServerSet;
}

bool DescribeRuleRealServersResponse::RealServerSetHasBeenSet() const
{
    return m_realServerSetHasBeenSet;
}

uint64_t DescribeRuleRealServersResponse::GetBindRealServerTotalCount() const
{
    return m_bindRealServerTotalCount;
}

bool DescribeRuleRealServersResponse::BindRealServerTotalCountHasBeenSet() const
{
    return m_bindRealServerTotalCountHasBeenSet;
}

vector<BindRealServer> DescribeRuleRealServersResponse::GetBindRealServerSet() const
{
    return m_bindRealServerSet;
}

bool DescribeRuleRealServersResponse::BindRealServerSetHasBeenSet() const
{
    return m_bindRealServerSetHasBeenSet;
}


