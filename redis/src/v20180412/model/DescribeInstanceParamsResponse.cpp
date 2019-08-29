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

#include <tencentcloud/redis/v20180412/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

DescribeInstanceParamsResponse::DescribeInstanceParamsResponse() :
    m_totalCountHasBeenSet(false),
    m_instanceEnumParamHasBeenSet(false),
    m_instanceIntegerParamHasBeenSet(false),
    m_instanceTextParamHasBeenSet(false),
    m_instanceMultiParamHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceParamsResponse::Deserialize(const string &payload)
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
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceEnumParam") && !rsp["InstanceEnumParam"].IsNull())
    {
        if (!rsp["InstanceEnumParam"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceEnumParam` is not array type"));

        const Value &tmpValue = rsp["InstanceEnumParam"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceEnumParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceEnumParam.push_back(item);
        }
        m_instanceEnumParamHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceIntegerParam") && !rsp["InstanceIntegerParam"].IsNull())
    {
        if (!rsp["InstanceIntegerParam"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceIntegerParam` is not array type"));

        const Value &tmpValue = rsp["InstanceIntegerParam"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceIntegerParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceIntegerParam.push_back(item);
        }
        m_instanceIntegerParamHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceTextParam") && !rsp["InstanceTextParam"].IsNull())
    {
        if (!rsp["InstanceTextParam"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceTextParam` is not array type"));

        const Value &tmpValue = rsp["InstanceTextParam"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceTextParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTextParam.push_back(item);
        }
        m_instanceTextParamHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceMultiParam") && !rsp["InstanceMultiParam"].IsNull())
    {
        if (!rsp["InstanceMultiParam"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceMultiParam` is not array type"));

        const Value &tmpValue = rsp["InstanceMultiParam"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceMultiParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceMultiParam.push_back(item);
        }
        m_instanceMultiParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeInstanceParamsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeInstanceParamsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<InstanceEnumParam> DescribeInstanceParamsResponse::GetInstanceEnumParam() const
{
    return m_instanceEnumParam;
}

bool DescribeInstanceParamsResponse::InstanceEnumParamHasBeenSet() const
{
    return m_instanceEnumParamHasBeenSet;
}

vector<InstanceIntegerParam> DescribeInstanceParamsResponse::GetInstanceIntegerParam() const
{
    return m_instanceIntegerParam;
}

bool DescribeInstanceParamsResponse::InstanceIntegerParamHasBeenSet() const
{
    return m_instanceIntegerParamHasBeenSet;
}

vector<InstanceTextParam> DescribeInstanceParamsResponse::GetInstanceTextParam() const
{
    return m_instanceTextParam;
}

bool DescribeInstanceParamsResponse::InstanceTextParamHasBeenSet() const
{
    return m_instanceTextParamHasBeenSet;
}

vector<InstanceMultiParam> DescribeInstanceParamsResponse::GetInstanceMultiParam() const
{
    return m_instanceMultiParam;
}

bool DescribeInstanceParamsResponse::InstanceMultiParamHasBeenSet() const
{
    return m_instanceMultiParamHasBeenSet;
}


