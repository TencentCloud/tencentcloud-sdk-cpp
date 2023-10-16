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

#include <tencentcloud/wedata/v20210820/model/PathNodeDsVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

PathNodeDsVO::PathNodeDsVO() :
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

CoreInternalOutcome PathNodeDsVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathNodeDsVO.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathNodeDsVO.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathNodeDsVO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathNodeDsVO.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PathNodeDsVO.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathNodeDsVO.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PathNodeDsVO item;
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

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathNodeDsVO.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PathNodeDsVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_isLeafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLeaf, allocator);
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

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

}


string PathNodeDsVO::GetId() const
{
    return m_id;
}

void PathNodeDsVO::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PathNodeDsVO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PathNodeDsVO::GetTitle() const
{
    return m_title;
}

void PathNodeDsVO::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool PathNodeDsVO::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string PathNodeDsVO::GetType() const
{
    return m_type;
}

void PathNodeDsVO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PathNodeDsVO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PathNodeDsVO::GetParentId() const
{
    return m_parentId;
}

void PathNodeDsVO::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool PathNodeDsVO::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

bool PathNodeDsVO::GetIsLeaf() const
{
    return m_isLeaf;
}

void PathNodeDsVO::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool PathNodeDsVO::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

vector<PathNodeDsVO> PathNodeDsVO::GetChildren() const
{
    return m_children;
}

void PathNodeDsVO::SetChildren(const vector<PathNodeDsVO>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool PathNodeDsVO::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

string PathNodeDsVO::GetParams() const
{
    return m_params;
}

void PathNodeDsVO::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool PathNodeDsVO::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

