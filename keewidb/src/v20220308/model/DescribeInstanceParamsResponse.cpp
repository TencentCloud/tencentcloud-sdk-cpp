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

#include <tencentcloud/keewidb/v20220308/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Keewidb::V20220308::Model;
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
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceEnumParam") && !rsp["InstanceEnumParam"].IsNull())
    {
        if (!rsp["InstanceEnumParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParam` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceEnumParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `InstanceIntegerParam` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceIntegerParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `InstanceTextParam` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceTextParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParam` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceMultiParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

string DescribeInstanceParamsResponse::ToJsonString() const
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

    if (m_instanceEnumParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceEnumParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceEnumParam.begin(); itr != m_instanceEnumParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIntegerParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIntegerParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceIntegerParam.begin(); itr != m_instanceIntegerParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTextParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTextParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTextParam.begin(); itr != m_instanceTextParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceMultiParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMultiParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceMultiParam.begin(); itr != m_instanceMultiParam.end(); ++itr, ++i)
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


