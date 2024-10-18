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

#include <tencentcloud/tcss/v20201101/model/ModifySecLogJoinObjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifySecLogJoinObjectsRequest::ModifySecLogJoinObjectsRequest() :
    m_logTypeHasBeenSet(false),
    m_bindListHasBeenSet(false),
    m_unBindListHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_rangeTypeHasBeenSet(false),
    m_autoJoinHasBeenSet(false)
{
}

string ModifySecLogJoinObjectsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_bindListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindList.begin(); itr != m_bindList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_unBindListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnBindList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_unBindList.begin(); itr != m_unBindList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rangeType, allocator);
    }

    if (m_autoJoinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoJoin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoJoin, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecLogJoinObjectsRequest::GetLogType() const
{
    return m_logType;
}

void ModifySecLogJoinObjectsRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ModifySecLogJoinObjectsRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

vector<string> ModifySecLogJoinObjectsRequest::GetBindList() const
{
    return m_bindList;
}

void ModifySecLogJoinObjectsRequest::SetBindList(const vector<string>& _bindList)
{
    m_bindList = _bindList;
    m_bindListHasBeenSet = true;
}

bool ModifySecLogJoinObjectsRequest::BindListHasBeenSet() const
{
    return m_bindListHasBeenSet;
}

vector<string> ModifySecLogJoinObjectsRequest::GetUnBindList() const
{
    return m_unBindList;
}

void ModifySecLogJoinObjectsRequest::SetUnBindList(const vector<string>& _unBindList)
{
    m_unBindList = _unBindList;
    m_unBindListHasBeenSet = true;
}

bool ModifySecLogJoinObjectsRequest::UnBindListHasBeenSet() const
{
    return m_unBindListHasBeenSet;
}

string ModifySecLogJoinObjectsRequest::GetNodeType() const
{
    return m_nodeType;
}

void ModifySecLogJoinObjectsRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ModifySecLogJoinObjectsRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

int64_t ModifySecLogJoinObjectsRequest::GetRangeType() const
{
    return m_rangeType;
}

void ModifySecLogJoinObjectsRequest::SetRangeType(const int64_t& _rangeType)
{
    m_rangeType = _rangeType;
    m_rangeTypeHasBeenSet = true;
}

bool ModifySecLogJoinObjectsRequest::RangeTypeHasBeenSet() const
{
    return m_rangeTypeHasBeenSet;
}

bool ModifySecLogJoinObjectsRequest::GetAutoJoin() const
{
    return m_autoJoin;
}

void ModifySecLogJoinObjectsRequest::SetAutoJoin(const bool& _autoJoin)
{
    m_autoJoin = _autoJoin;
    m_autoJoinHasBeenSet = true;
}

bool ModifySecLogJoinObjectsRequest::AutoJoinHasBeenSet() const
{
    return m_autoJoinHasBeenSet;
}


