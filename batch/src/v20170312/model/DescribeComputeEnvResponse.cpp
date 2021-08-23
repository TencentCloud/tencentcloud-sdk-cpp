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
using namespace std;

DescribeComputeEnvResponse::DescribeComputeEnvResponse() :
    m_envIdHasBeenSet(false),
    m_envNameHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_computeNodeSetHasBeenSet(false),
    m_computeNodeMetricsHasBeenSet(false),
    m_desiredComputeNodeCountHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_nextActionHasBeenSet(false),
    m_attachedComputeNodeCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeComputeEnvResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EnvId") && !rsp["EnvId"].IsNull())
    {
        if (!rsp["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(rsp["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (rsp.HasMember("EnvName") && !rsp["EnvName"].IsNull())
    {
        if (!rsp["EnvName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(rsp["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (rsp.HasMember("Placement") && !rsp["Placement"].IsNull())
    {
        if (!rsp["Placement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Placement` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ComputeNodeSet") && !rsp["ComputeNodeSet"].IsNull())
    {
        if (!rsp["ComputeNodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComputeNodeSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ComputeNodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `ComputeNodeMetrics` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DesiredComputeNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredComputeNodeCount = rsp["DesiredComputeNodeCount"].GetUint64();
        m_desiredComputeNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("EnvType") && !rsp["EnvType"].IsNull())
    {
        if (!rsp["EnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(rsp["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceType") && !rsp["ResourceType"].IsNull())
    {
        if (!rsp["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(rsp["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("NextAction") && !rsp["NextAction"].IsNull())
    {
        if (!rsp["NextAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextAction = string(rsp["NextAction"].GetString());
        m_nextActionHasBeenSet = true;
    }

    if (rsp.HasMember("AttachedComputeNodeCount") && !rsp["AttachedComputeNodeCount"].IsNull())
    {
        if (!rsp["AttachedComputeNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachedComputeNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attachedComputeNodeCount = rsp["AttachedComputeNodeCount"].GetUint64();
        m_attachedComputeNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeComputeEnvResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_envNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_computeNodeSet.begin(); itr != m_computeNodeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_computeNodeMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_computeNodeMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_desiredComputeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredComputeNodeCount, allocator);
    }

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_nextActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextAction.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedComputeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachedComputeNodeCount, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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

string DescribeComputeEnvResponse::GetResourceType() const
{
    return m_resourceType;
}

bool DescribeComputeEnvResponse::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeComputeEnvResponse::GetNextAction() const
{
    return m_nextAction;
}

bool DescribeComputeEnvResponse::NextActionHasBeenSet() const
{
    return m_nextActionHasBeenSet;
}

uint64_t DescribeComputeEnvResponse::GetAttachedComputeNodeCount() const
{
    return m_attachedComputeNodeCount;
}

bool DescribeComputeEnvResponse::AttachedComputeNodeCountHasBeenSet() const
{
    return m_attachedComputeNodeCountHasBeenSet;
}

vector<Tag> DescribeComputeEnvResponse::GetTags() const
{
    return m_tags;
}

bool DescribeComputeEnvResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


