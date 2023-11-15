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

#include <tencentcloud/weilingwith/v20230427/model/ElementProfileTreeNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ElementProfileTreeNode::ElementProfileTreeNode() :
    m_elementProfileHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
}

CoreInternalOutcome ElementProfileTreeNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ElementProfile") && !value["ElementProfile"].IsNull())
    {
        if (!value["ElementProfile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfileTreeNode.ElementProfile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_elementProfile.Deserialize(value["ElementProfile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_elementProfileHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ElementProfileTreeNode.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ElementProfileTreeNode item;
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


    return CoreInternalOutcome(true);
}

void ElementProfileTreeNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_elementProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_elementProfile.ToJsonObject(value[key.c_str()], allocator);
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

}


ElementProfile ElementProfileTreeNode::GetElementProfile() const
{
    return m_elementProfile;
}

void ElementProfileTreeNode::SetElementProfile(const ElementProfile& _elementProfile)
{
    m_elementProfile = _elementProfile;
    m_elementProfileHasBeenSet = true;
}

bool ElementProfileTreeNode::ElementProfileHasBeenSet() const
{
    return m_elementProfileHasBeenSet;
}

vector<ElementProfileTreeNode> ElementProfileTreeNode::GetChildren() const
{
    return m_children;
}

void ElementProfileTreeNode::SetChildren(const vector<ElementProfileTreeNode>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool ElementProfileTreeNode::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

