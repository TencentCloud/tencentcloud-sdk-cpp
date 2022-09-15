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

#include <tencentcloud/monitor/v20180724/model/DescribeConditionsTemplateListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeConditionsTemplateListRequest::DescribeConditionsTemplateListRequest() :
    m_moduleHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupIDHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_updateTimeOrderHasBeenSet(false),
    m_policyCountOrderHasBeenSet(false)
{
}

string DescribeConditionsTemplateListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupID.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_updateTimeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTimeOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateTimeOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_policyCountOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCountOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyCountOrder.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeConditionsTemplateListRequest::GetModule() const
{
    return m_module;
}

void DescribeConditionsTemplateListRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeConditionsTemplateListRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string DescribeConditionsTemplateListRequest::GetViewName() const
{
    return m_viewName;
}

void DescribeConditionsTemplateListRequest::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool DescribeConditionsTemplateListRequest::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string DescribeConditionsTemplateListRequest::GetGroupName() const
{
    return m_groupName;
}

void DescribeConditionsTemplateListRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeConditionsTemplateListRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string DescribeConditionsTemplateListRequest::GetGroupID() const
{
    return m_groupID;
}

void DescribeConditionsTemplateListRequest::SetGroupID(const string& _groupID)
{
    m_groupID = _groupID;
    m_groupIDHasBeenSet = true;
}

bool DescribeConditionsTemplateListRequest::GroupIDHasBeenSet() const
{
    return m_groupIDHasBeenSet;
}

int64_t DescribeConditionsTemplateListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeConditionsTemplateListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeConditionsTemplateListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeConditionsTemplateListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeConditionsTemplateListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeConditionsTemplateListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeConditionsTemplateListRequest::GetUpdateTimeOrder() const
{
    return m_updateTimeOrder;
}

void DescribeConditionsTemplateListRequest::SetUpdateTimeOrder(const string& _updateTimeOrder)
{
    m_updateTimeOrder = _updateTimeOrder;
    m_updateTimeOrderHasBeenSet = true;
}

bool DescribeConditionsTemplateListRequest::UpdateTimeOrderHasBeenSet() const
{
    return m_updateTimeOrderHasBeenSet;
}

string DescribeConditionsTemplateListRequest::GetPolicyCountOrder() const
{
    return m_policyCountOrder;
}

void DescribeConditionsTemplateListRequest::SetPolicyCountOrder(const string& _policyCountOrder)
{
    m_policyCountOrder = _policyCountOrder;
    m_policyCountOrderHasBeenSet = true;
}

bool DescribeConditionsTemplateListRequest::PolicyCountOrderHasBeenSet() const
{
    return m_policyCountOrderHasBeenSet;
}


