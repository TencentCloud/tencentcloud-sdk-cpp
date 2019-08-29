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

#include <tencentcloud/gaap/v20180529/model/DescribeListenerRealServersResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

DescribeListenerRealServersResponse::DescribeListenerRealServersResponse() :
    m_totalCountHasBeenSet(false),
    m_realServerSetHasBeenSet(false),
    m_bindRealServerTotalCountHasBeenSet(false),
    m_bindRealServerSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeListenerRealServersResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RealServerSet") && !rsp["RealServerSet"].IsNull())
    {
        if (!rsp["RealServerSet"].IsArray())
            return CoreInternalOutcome(Error("response `RealServerSet` is not array type"));

        const Value &tmpValue = rsp["RealServerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `BindRealServerTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindRealServerTotalCount = rsp["BindRealServerTotalCount"].GetUint64();
        m_bindRealServerTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("BindRealServerSet") && !rsp["BindRealServerSet"].IsNull())
    {
        if (!rsp["BindRealServerSet"].IsArray())
            return CoreInternalOutcome(Error("response `BindRealServerSet` is not array type"));

        const Value &tmpValue = rsp["BindRealServerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


uint64_t DescribeListenerRealServersResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeListenerRealServersResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<RealServer> DescribeListenerRealServersResponse::GetRealServerSet() const
{
    return m_realServerSet;
}

bool DescribeListenerRealServersResponse::RealServerSetHasBeenSet() const
{
    return m_realServerSetHasBeenSet;
}

uint64_t DescribeListenerRealServersResponse::GetBindRealServerTotalCount() const
{
    return m_bindRealServerTotalCount;
}

bool DescribeListenerRealServersResponse::BindRealServerTotalCountHasBeenSet() const
{
    return m_bindRealServerTotalCountHasBeenSet;
}

vector<BindRealServer> DescribeListenerRealServersResponse::GetBindRealServerSet() const
{
    return m_bindRealServerSet;
}

bool DescribeListenerRealServersResponse::BindRealServerSetHasBeenSet() const
{
    return m_bindRealServerSetHasBeenSet;
}


