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

#include <tencentcloud/cls/v20201016/model/TopologyEdge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

TopologyEdge::TopologyEdge() :
    m_srcEntityIdHasBeenSet(false),
    m_dstEntityIdHasBeenSet(false),
    m_relationTypeHasBeenSet(false)
{
}

CoreInternalOutcome TopologyEdge::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcEntityId") && !value["SrcEntityId"].IsNull())
    {
        if (!value["SrcEntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdge.SrcEntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcEntityId = string(value["SrcEntityId"].GetString());
        m_srcEntityIdHasBeenSet = true;
    }

    if (value.HasMember("DstEntityId") && !value["DstEntityId"].IsNull())
    {
        if (!value["DstEntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdge.DstEntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstEntityId = string(value["DstEntityId"].GetString());
        m_dstEntityIdHasBeenSet = true;
    }

    if (value.HasMember("RelationType") && !value["RelationType"].IsNull())
    {
        if (!value["RelationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopologyEdge.RelationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relationType = string(value["RelationType"].GetString());
        m_relationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopologyEdge::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcEntityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcEntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcEntityId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstEntityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstEntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstEntityId.c_str(), allocator).Move(), allocator);
    }

    if (m_relationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relationType.c_str(), allocator).Move(), allocator);
    }

}


string TopologyEdge::GetSrcEntityId() const
{
    return m_srcEntityId;
}

void TopologyEdge::SetSrcEntityId(const string& _srcEntityId)
{
    m_srcEntityId = _srcEntityId;
    m_srcEntityIdHasBeenSet = true;
}

bool TopologyEdge::SrcEntityIdHasBeenSet() const
{
    return m_srcEntityIdHasBeenSet;
}

string TopologyEdge::GetDstEntityId() const
{
    return m_dstEntityId;
}

void TopologyEdge::SetDstEntityId(const string& _dstEntityId)
{
    m_dstEntityId = _dstEntityId;
    m_dstEntityIdHasBeenSet = true;
}

bool TopologyEdge::DstEntityIdHasBeenSet() const
{
    return m_dstEntityIdHasBeenSet;
}

string TopologyEdge::GetRelationType() const
{
    return m_relationType;
}

void TopologyEdge::SetRelationType(const string& _relationType)
{
    m_relationType = _relationType;
    m_relationTypeHasBeenSet = true;
}

bool TopologyEdge::RelationTypeHasBeenSet() const
{
    return m_relationTypeHasBeenSet;
}

