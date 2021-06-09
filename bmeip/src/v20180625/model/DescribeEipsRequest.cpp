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

#include <tencentcloud/bmeip/v20180625/model/DescribeEipsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

DescribeEipsRequest::DescribeEipsRequest() :
    m_eipIdsHasBeenSet(false),
    m_eipsHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_bindTypesHasBeenSet(false),
    m_exclusiveTagHasBeenSet(false),
    m_aclIdHasBeenSet(false),
    m_bindAclHasBeenSet(false)
{
}

string DescribeEipsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eipIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eipIds.begin(); itr != m_eipIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eips.begin(); itr != m_eips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_order, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindTypes.begin(); itr != m_bindTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_exclusiveTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exclusiveTag, allocator);
    }

    if (m_aclIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aclId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindAcl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindAcl, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeEipsRequest::GetEipIds() const
{
    return m_eipIds;
}

void DescribeEipsRequest::SetEipIds(const vector<string>& _eipIds)
{
    m_eipIds = _eipIds;
    m_eipIdsHasBeenSet = true;
}

bool DescribeEipsRequest::EipIdsHasBeenSet() const
{
    return m_eipIdsHasBeenSet;
}

vector<string> DescribeEipsRequest::GetEips() const
{
    return m_eips;
}

void DescribeEipsRequest::SetEips(const vector<string>& _eips)
{
    m_eips = _eips;
    m_eipsHasBeenSet = true;
}

bool DescribeEipsRequest::EipsHasBeenSet() const
{
    return m_eipsHasBeenSet;
}

vector<string> DescribeEipsRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeEipsRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeEipsRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string DescribeEipsRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeEipsRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeEipsRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

vector<int64_t> DescribeEipsRequest::GetStatus() const
{
    return m_status;
}

void DescribeEipsRequest::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeEipsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeEipsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEipsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEipsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeEipsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEipsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEipsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeEipsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeEipsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeEipsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

int64_t DescribeEipsRequest::GetOrder() const
{
    return m_order;
}

void DescribeEipsRequest::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeEipsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeEipsRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeEipsRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeEipsRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeEipsRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeEipsRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeEipsRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<int64_t> DescribeEipsRequest::GetBindTypes() const
{
    return m_bindTypes;
}

void DescribeEipsRequest::SetBindTypes(const vector<int64_t>& _bindTypes)
{
    m_bindTypes = _bindTypes;
    m_bindTypesHasBeenSet = true;
}

bool DescribeEipsRequest::BindTypesHasBeenSet() const
{
    return m_bindTypesHasBeenSet;
}

int64_t DescribeEipsRequest::GetExclusiveTag() const
{
    return m_exclusiveTag;
}

void DescribeEipsRequest::SetExclusiveTag(const int64_t& _exclusiveTag)
{
    m_exclusiveTag = _exclusiveTag;
    m_exclusiveTagHasBeenSet = true;
}

bool DescribeEipsRequest::ExclusiveTagHasBeenSet() const
{
    return m_exclusiveTagHasBeenSet;
}

string DescribeEipsRequest::GetAclId() const
{
    return m_aclId;
}

void DescribeEipsRequest::SetAclId(const string& _aclId)
{
    m_aclId = _aclId;
    m_aclIdHasBeenSet = true;
}

bool DescribeEipsRequest::AclIdHasBeenSet() const
{
    return m_aclIdHasBeenSet;
}

int64_t DescribeEipsRequest::GetBindAcl() const
{
    return m_bindAcl;
}

void DescribeEipsRequest::SetBindAcl(const int64_t& _bindAcl)
{
    m_bindAcl = _bindAcl;
    m_bindAclHasBeenSet = true;
}

bool DescribeEipsRequest::BindAclHasBeenSet() const
{
    return m_bindAclHasBeenSet;
}


