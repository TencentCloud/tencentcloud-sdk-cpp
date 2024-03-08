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

#include <tencentcloud/billing/v20180709/model/AllocationOverviewNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationOverviewNode::AllocationOverviewNode() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_treeNodeUniqKeyHasBeenSet(false),
    m_symbolHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

CoreInternalOutcome AllocationOverviewNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationOverviewNode.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationOverviewNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TreeNodeUniqKey") && !value["TreeNodeUniqKey"].IsNull())
    {
        if (!value["TreeNodeUniqKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationOverviewNode.TreeNodeUniqKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKey = string(value["TreeNodeUniqKey"].GetString());
        m_treeNodeUniqKeyHasBeenSet = true;
    }

    if (value.HasMember("Symbol") && !value["Symbol"].IsNull())
    {
        if (!value["Symbol"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationOverviewNode.Symbol` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_symbol = value["Symbol"].GetUint64();
        m_symbolHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllocationOverviewNode.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AllocationOverviewNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationOverviewNode.Detail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_detail.Deserialize(value["Detail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationOverviewNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_treeNodeUniqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treeNodeUniqKey.c_str(), allocator).Move(), allocator);
    }

    if (m_symbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Symbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_symbol, allocator);
    }

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_detail.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t AllocationOverviewNode::GetId() const
{
    return m_id;
}

void AllocationOverviewNode::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AllocationOverviewNode::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AllocationOverviewNode::GetName() const
{
    return m_name;
}

void AllocationOverviewNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AllocationOverviewNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AllocationOverviewNode::GetTreeNodeUniqKey() const
{
    return m_treeNodeUniqKey;
}

void AllocationOverviewNode::SetTreeNodeUniqKey(const string& _treeNodeUniqKey)
{
    m_treeNodeUniqKey = _treeNodeUniqKey;
    m_treeNodeUniqKeyHasBeenSet = true;
}

bool AllocationOverviewNode::TreeNodeUniqKeyHasBeenSet() const
{
    return m_treeNodeUniqKeyHasBeenSet;
}

uint64_t AllocationOverviewNode::GetSymbol() const
{
    return m_symbol;
}

void AllocationOverviewNode::SetSymbol(const uint64_t& _symbol)
{
    m_symbol = _symbol;
    m_symbolHasBeenSet = true;
}

bool AllocationOverviewNode::SymbolHasBeenSet() const
{
    return m_symbolHasBeenSet;
}

vector<AllocationOverviewNode> AllocationOverviewNode::GetChildren() const
{
    return m_children;
}

void AllocationOverviewNode::SetChildren(const vector<AllocationOverviewNode>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool AllocationOverviewNode::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

AllocationMonthOverviewDetail AllocationOverviewNode::GetDetail() const
{
    return m_detail;
}

void AllocationOverviewNode::SetDetail(const AllocationMonthOverviewDetail& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool AllocationOverviewNode::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

