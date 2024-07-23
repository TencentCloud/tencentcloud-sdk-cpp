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

#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceParamTplDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DescribeDBInstanceParamTplDetailResponse::DescribeDBInstanceParamTplDetailResponse() :
    m_instanceEnumParamsHasBeenSet(false),
    m_instanceIntegerParamsHasBeenSet(false),
    m_instanceTextParamsHasBeenSet(false),
    m_instanceMultiParamsHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_mongoVersionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_tplNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstanceParamTplDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceEnumParams") && !rsp["InstanceEnumParams"].IsNull())
    {
        if (!rsp["InstanceEnumParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceEnumParams` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceEnumParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceEnumParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceEnumParams.push_back(item);
        }
        m_instanceEnumParamsHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceIntegerParams") && !rsp["InstanceIntegerParams"].IsNull())
    {
        if (!rsp["InstanceIntegerParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceIntegerParams` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceIntegerParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceIntegerParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceIntegerParams.push_back(item);
        }
        m_instanceIntegerParamsHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceTextParams") && !rsp["InstanceTextParams"].IsNull())
    {
        if (!rsp["InstanceTextParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceTextParams` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceTextParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceTextParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTextParams.push_back(item);
        }
        m_instanceTextParamsHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceMultiParams") && !rsp["InstanceMultiParams"].IsNull())
    {
        if (!rsp["InstanceMultiParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceMultiParams` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceMultiParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceMultiParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceMultiParams.push_back(item);
        }
        m_instanceMultiParamsHasBeenSet = true;
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

    if (rsp.HasMember("MongoVersion") && !rsp["MongoVersion"].IsNull())
    {
        if (!rsp["MongoVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mongoVersion = string(rsp["MongoVersion"].GetString());
        m_mongoVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterType") && !rsp["ClusterType"].IsNull())
    {
        if (!rsp["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(rsp["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TplName") && !rsp["TplName"].IsNull())
    {
        if (!rsp["TplName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TplName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tplName = string(rsp["TplName"].GetString());
        m_tplNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBInstanceParamTplDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceEnumParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceEnumParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceEnumParams.begin(); itr != m_instanceEnumParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIntegerParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIntegerParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceIntegerParams.begin(); itr != m_instanceIntegerParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTextParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTextParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTextParams.begin(); itr != m_instanceTextParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceMultiParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMultiParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceMultiParams.begin(); itr != m_instanceMultiParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_mongoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_tplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tplName.c_str(), allocator).Move(), allocator);
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


vector<InstanceEnumParam> DescribeDBInstanceParamTplDetailResponse::GetInstanceEnumParams() const
{
    return m_instanceEnumParams;
}

bool DescribeDBInstanceParamTplDetailResponse::InstanceEnumParamsHasBeenSet() const
{
    return m_instanceEnumParamsHasBeenSet;
}

vector<InstanceIntegerParam> DescribeDBInstanceParamTplDetailResponse::GetInstanceIntegerParams() const
{
    return m_instanceIntegerParams;
}

bool DescribeDBInstanceParamTplDetailResponse::InstanceIntegerParamsHasBeenSet() const
{
    return m_instanceIntegerParamsHasBeenSet;
}

vector<InstanceTextParam> DescribeDBInstanceParamTplDetailResponse::GetInstanceTextParams() const
{
    return m_instanceTextParams;
}

bool DescribeDBInstanceParamTplDetailResponse::InstanceTextParamsHasBeenSet() const
{
    return m_instanceTextParamsHasBeenSet;
}

vector<InstanceMultiParam> DescribeDBInstanceParamTplDetailResponse::GetInstanceMultiParams() const
{
    return m_instanceMultiParams;
}

bool DescribeDBInstanceParamTplDetailResponse::InstanceMultiParamsHasBeenSet() const
{
    return m_instanceMultiParamsHasBeenSet;
}

int64_t DescribeDBInstanceParamTplDetailResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeDBInstanceParamTplDetailResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string DescribeDBInstanceParamTplDetailResponse::GetMongoVersion() const
{
    return m_mongoVersion;
}

bool DescribeDBInstanceParamTplDetailResponse::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

string DescribeDBInstanceParamTplDetailResponse::GetClusterType() const
{
    return m_clusterType;
}

bool DescribeDBInstanceParamTplDetailResponse::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string DescribeDBInstanceParamTplDetailResponse::GetTplName() const
{
    return m_tplName;
}

bool DescribeDBInstanceParamTplDetailResponse::TplNameHasBeenSet() const
{
    return m_tplNameHasBeenSet;
}


