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

#include <tencentcloud/wedata/v20250806/model/LineageNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

LineageNodeInfo::LineageNodeInfo() :
    m_resourceHasBeenSet(false),
    m_relationHasBeenSet(false)
{
}

CoreInternalOutcome LineageNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LineageNodeInfo.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Relation") && !value["Relation"].IsNull())
    {
        if (!value["Relation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LineageNodeInfo.Relation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_relation.Deserialize(value["Relation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_relationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineageNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_relation.ToJsonObject(value[key.c_str()], allocator);
    }

}


LineageResource LineageNodeInfo::GetResource() const
{
    return m_resource;
}

void LineageNodeInfo::SetResource(const LineageResource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool LineageNodeInfo::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

LineageRelation LineageNodeInfo::GetRelation() const
{
    return m_relation;
}

void LineageNodeInfo::SetRelation(const LineageRelation& _relation)
{
    m_relation = _relation;
    m_relationHasBeenSet = true;
}

bool LineageNodeInfo::RelationHasBeenSet() const
{
    return m_relationHasBeenSet;
}

