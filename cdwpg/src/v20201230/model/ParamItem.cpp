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

#include <tencentcloud/cdwpg/v20201230/model/ParamItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

ParamItem::ParamItem() :
    m_nodeTypeHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome ParamItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItem.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItem.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParamItem.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamItem.Details` is not array type"));

        const rapidjson::Value &tmpValue = value["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ParamItem::GetNodeType() const
{
    return m_nodeType;
}

void ParamItem::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ParamItem::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ParamItem::GetNodeName() const
{
    return m_nodeName;
}

void ParamItem::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ParamItem::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

int64_t ParamItem::GetTotalCount() const
{
    return m_totalCount;
}

void ParamItem::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ParamItem::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ParamDetail> ParamItem::GetDetails() const
{
    return m_details;
}

void ParamItem::SetDetails(const vector<ParamDetail>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool ParamItem::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

