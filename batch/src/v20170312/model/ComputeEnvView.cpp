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

#include <tencentcloud/batch/v20170312/model/ComputeEnvView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

ComputeEnvView::ComputeEnvView() :
    m_envIdHasBeenSet(false),
    m_envNameHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_computeNodeMetricsHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_desiredComputeNodeCountHasBeenSet(false)
{
}

CoreInternalOutcome ComputeEnvView::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComputeEnvView.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("EnvName") && !value["EnvName"].IsNull())
    {
        if (!value["EnvName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComputeEnvView.EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(value["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ComputeEnvView.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComputeEnvView.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ComputeNodeMetrics") && !value["ComputeNodeMetrics"].IsNull())
    {
        if (!value["ComputeNodeMetrics"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ComputeEnvView.ComputeNodeMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_computeNodeMetrics.Deserialize(value["ComputeNodeMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_computeNodeMetricsHasBeenSet = true;
    }

    if (value.HasMember("EnvType") && !value["EnvType"].IsNull())
    {
        if (!value["EnvType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComputeEnvView.EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(value["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (value.HasMember("DesiredComputeNodeCount") && !value["DesiredComputeNodeCount"].IsNull())
    {
        if (!value["DesiredComputeNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ComputeEnvView.DesiredComputeNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredComputeNodeCount = value["DesiredComputeNodeCount"].GetUint64();
        m_desiredComputeNodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputeEnvView::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_envNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeMetricsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ComputeNodeMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_computeNodeMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredComputeNodeCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DesiredComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredComputeNodeCount, allocator);
    }

}


string ComputeEnvView::GetEnvId() const
{
    return m_envId;
}

void ComputeEnvView::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ComputeEnvView::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ComputeEnvView::GetEnvName() const
{
    return m_envName;
}

void ComputeEnvView::SetEnvName(const string& _envName)
{
    m_envName = _envName;
    m_envNameHasBeenSet = true;
}

bool ComputeEnvView::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

Placement ComputeEnvView::GetPlacement() const
{
    return m_placement;
}

void ComputeEnvView::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool ComputeEnvView::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string ComputeEnvView::GetCreateTime() const
{
    return m_createTime;
}

void ComputeEnvView::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ComputeEnvView::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

ComputeNodeMetrics ComputeEnvView::GetComputeNodeMetrics() const
{
    return m_computeNodeMetrics;
}

void ComputeEnvView::SetComputeNodeMetrics(const ComputeNodeMetrics& _computeNodeMetrics)
{
    m_computeNodeMetrics = _computeNodeMetrics;
    m_computeNodeMetricsHasBeenSet = true;
}

bool ComputeEnvView::ComputeNodeMetricsHasBeenSet() const
{
    return m_computeNodeMetricsHasBeenSet;
}

string ComputeEnvView::GetEnvType() const
{
    return m_envType;
}

void ComputeEnvView::SetEnvType(const string& _envType)
{
    m_envType = _envType;
    m_envTypeHasBeenSet = true;
}

bool ComputeEnvView::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

uint64_t ComputeEnvView::GetDesiredComputeNodeCount() const
{
    return m_desiredComputeNodeCount;
}

void ComputeEnvView::SetDesiredComputeNodeCount(const uint64_t& _desiredComputeNodeCount)
{
    m_desiredComputeNodeCount = _desiredComputeNodeCount;
    m_desiredComputeNodeCountHasBeenSet = true;
}

bool ComputeEnvView::DesiredComputeNodeCountHasBeenSet() const
{
    return m_desiredComputeNodeCountHasBeenSet;
}

