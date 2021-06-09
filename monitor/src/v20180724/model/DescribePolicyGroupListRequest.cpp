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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyGroupListRequest::DescribePolicyGroupListRequest() :
    m_moduleHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_likeHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_updateTimeOrderHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_viewNamesHasBeenSet(false),
    m_filterUnuseReceiverHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_receiverUserListHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_conditionTempGroupIdHasBeenSet(false),
    m_receiverTypeHasBeenSet(false),
    m_isOpenHasBeenSet(false)
{
}

string DescribePolicyGroupListRequest::ToJsonString() const
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

    if (m_likeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Like";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_like.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceGroupId, allocator);
    }

    if (m_updateTimeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTimeOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateTimeOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_viewNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_viewNames.begin(); itr != m_viewNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterUnuseReceiverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterUnuseReceiver";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterUnuseReceiver, allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_receiverUserListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverUserList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverUserList.begin(); itr != m_receiverUserList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimensions.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionTempGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionTempGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_conditionTempGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_receiverType.c_str(), allocator).Move(), allocator);
    }

    if (m_isOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOpen, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePolicyGroupListRequest::GetModule() const
{
    return m_module;
}

void DescribePolicyGroupListRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribePolicyGroupListRequest::GetLimit() const
{
    return m_limit;
}

void DescribePolicyGroupListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribePolicyGroupListRequest::GetOffset() const
{
    return m_offset;
}

void DescribePolicyGroupListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribePolicyGroupListRequest::GetLike() const
{
    return m_like;
}

void DescribePolicyGroupListRequest::SetLike(const string& _like)
{
    m_like = _like;
    m_likeHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::LikeHasBeenSet() const
{
    return m_likeHasBeenSet;
}

int64_t DescribePolicyGroupListRequest::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void DescribePolicyGroupListRequest::SetInstanceGroupId(const int64_t& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

string DescribePolicyGroupListRequest::GetUpdateTimeOrder() const
{
    return m_updateTimeOrder;
}

void DescribePolicyGroupListRequest::SetUpdateTimeOrder(const string& _updateTimeOrder)
{
    m_updateTimeOrder = _updateTimeOrder;
    m_updateTimeOrderHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::UpdateTimeOrderHasBeenSet() const
{
    return m_updateTimeOrderHasBeenSet;
}

vector<int64_t> DescribePolicyGroupListRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribePolicyGroupListRequest::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribePolicyGroupListRequest::GetViewNames() const
{
    return m_viewNames;
}

void DescribePolicyGroupListRequest::SetViewNames(const vector<string>& _viewNames)
{
    m_viewNames = _viewNames;
    m_viewNamesHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::ViewNamesHasBeenSet() const
{
    return m_viewNamesHasBeenSet;
}

int64_t DescribePolicyGroupListRequest::GetFilterUnuseReceiver() const
{
    return m_filterUnuseReceiver;
}

void DescribePolicyGroupListRequest::SetFilterUnuseReceiver(const int64_t& _filterUnuseReceiver)
{
    m_filterUnuseReceiver = _filterUnuseReceiver;
    m_filterUnuseReceiverHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::FilterUnuseReceiverHasBeenSet() const
{
    return m_filterUnuseReceiverHasBeenSet;
}

vector<string> DescribePolicyGroupListRequest::GetReceivers() const
{
    return m_receivers;
}

void DescribePolicyGroupListRequest::SetReceivers(const vector<string>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

vector<string> DescribePolicyGroupListRequest::GetReceiverUserList() const
{
    return m_receiverUserList;
}

void DescribePolicyGroupListRequest::SetReceiverUserList(const vector<string>& _receiverUserList)
{
    m_receiverUserList = _receiverUserList;
    m_receiverUserListHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::ReceiverUserListHasBeenSet() const
{
    return m_receiverUserListHasBeenSet;
}

string DescribePolicyGroupListRequest::GetDimensions() const
{
    return m_dimensions;
}

void DescribePolicyGroupListRequest::SetDimensions(const string& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

string DescribePolicyGroupListRequest::GetConditionTempGroupId() const
{
    return m_conditionTempGroupId;
}

void DescribePolicyGroupListRequest::SetConditionTempGroupId(const string& _conditionTempGroupId)
{
    m_conditionTempGroupId = _conditionTempGroupId;
    m_conditionTempGroupIdHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::ConditionTempGroupIdHasBeenSet() const
{
    return m_conditionTempGroupIdHasBeenSet;
}

string DescribePolicyGroupListRequest::GetReceiverType() const
{
    return m_receiverType;
}

void DescribePolicyGroupListRequest::SetReceiverType(const string& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

bool DescribePolicyGroupListRequest::GetIsOpen() const
{
    return m_isOpen;
}

void DescribePolicyGroupListRequest::SetIsOpen(const bool& _isOpen)
{
    m_isOpen = _isOpen;
    m_isOpenHasBeenSet = true;
}

bool DescribePolicyGroupListRequest::IsOpenHasBeenSet() const
{
    return m_isOpenHasBeenSet;
}


