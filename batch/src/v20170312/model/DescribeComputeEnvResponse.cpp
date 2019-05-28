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

#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

DescribeComputeEnvResponse::DescribeComputeEnvResponse() :
    m_envIdHasBeenSet(false),
    m_envNameHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_computeNodeSetHasBeenSet(false),
    m_computeNodeMetricsHasBeenSet(false),
    m_desiredComputeNodeCountHasBeenSet(false),
    m_envTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeComputeEnvResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EnvId") && !rsp["EnvId"].IsNull())
    {
        if (!rsp["EnvId"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(rsp["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (rsp.HasMember("EnvName") && !rsp["EnvName"].IsNull())
    {
        if (!rsp["EnvName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(rsp["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (rsp.HasMember("Placement") && !rsp["Placement"].IsNull())
    {
        if (!rsp["Placement"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(rsp["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ComputeNodeSet") && !rsp["ComputeNodeSet"].IsNull())
    {
        if (!rsp["ComputeNodeSet"].IsArray())
            return CoreInternalOutcome(Error("response `ComputeNodeSet` is not array type"));

        const Value &tmpValue = rsp["ComputeNodeSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComputeNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_computeNodeSet.push_back(item);
        }
        m_computeNodeSetHasBeenSet = true;
    }

    if (rsp.HasMember("ComputeNodeMetrics") && !rsp["ComputeNodeMetrics"].IsNull())
    {
        if (!rsp["ComputeNodeMetrics"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ComputeNodeMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_computeNodeMetrics.Deserialize(rsp["ComputeNodeMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_computeNodeMetricsHasBeenSet = true;
    }

    if (rsp.HasMember("DesiredComputeNodeCount") && !rsp["DesiredComputeNodeCount"].IsNull())
    {
        if (!rsp["DesiredComputeNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DesiredComputeNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredComputeNodeCount = rsp["DesiredComputeNodeCount"].GetUint64();
        m_desiredComputeNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("EnvType") && !rsp["EnvType"].IsNull())
    {
        if (!rsp["EnvType"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(rsp["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeComputeEnvResponse::GetEnvId() const
{
    return m_envId;
}

bool DescribeComputeEnvResponse::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeComputeEnvResponse::GetEnvName() const
{
    return m_envName;
}

bool DescribeComputeEnvResponse::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

Placement DescribeComputeEnvResponse::GetPlacement() const
{
    return m_placement;
}

bool DescribeComputeEnvResponse::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string DescribeComputeEnvResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeComputeEnvResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<ComputeNode> DescribeComputeEnvResponse::GetComputeNodeSet() const
{
    return m_computeNodeSet;
}

bool DescribeComputeEnvResponse::ComputeNodeSetHasBeenSet() const
{
    return m_computeNodeSetHasBeenSet;
}

ComputeNodeMetrics DescribeComputeEnvResponse::GetComputeNodeMetrics() const
{
    return m_computeNodeMetrics;
}

bool DescribeComputeEnvResponse::ComputeNodeMetricsHasBeenSet() const
{
    return m_computeNodeMetricsHasBeenSet;
}

uint64_t DescribeComputeEnvResponse::GetDesiredComputeNodeCount() const
{
    return m_desiredComputeNodeCount;
}

bool DescribeComputeEnvResponse::DesiredComputeNodeCountHasBeenSet() const
{
    return m_desiredComputeNodeCountHasBeenSet;
}

string DescribeComputeEnvResponse::GetEnvType() const
{
    return m_envType;
}

bool DescribeComputeEnvResponse::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}


