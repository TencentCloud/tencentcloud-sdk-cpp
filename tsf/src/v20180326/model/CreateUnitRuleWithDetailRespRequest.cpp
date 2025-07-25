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

#include <tencentcloud/tsf/v20180326/model/CreateUnitRuleWithDetailRespRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateUnitRuleWithDetailRespRequest::CreateUnitRuleWithDetailRespRequest() :
    m_gatewayInstanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_unitRuleItemListHasBeenSet(false)
{
}

string CreateUnitRuleWithDetailRespRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_unitRuleItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitRuleItemList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unitRuleItemList.begin(); itr != m_unitRuleItemList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUnitRuleWithDetailRespRequest::GetGatewayInstanceId() const
{
    return m_gatewayInstanceId;
}

void CreateUnitRuleWithDetailRespRequest::SetGatewayInstanceId(const string& _gatewayInstanceId)
{
    m_gatewayInstanceId = _gatewayInstanceId;
    m_gatewayInstanceIdHasBeenSet = true;
}

bool CreateUnitRuleWithDetailRespRequest::GatewayInstanceIdHasBeenSet() const
{
    return m_gatewayInstanceIdHasBeenSet;
}

string CreateUnitRuleWithDetailRespRequest::GetName() const
{
    return m_name;
}

void CreateUnitRuleWithDetailRespRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateUnitRuleWithDetailRespRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateUnitRuleWithDetailRespRequest::GetDescription() const
{
    return m_description;
}

void CreateUnitRuleWithDetailRespRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateUnitRuleWithDetailRespRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<UnitRuleItem> CreateUnitRuleWithDetailRespRequest::GetUnitRuleItemList() const
{
    return m_unitRuleItemList;
}

void CreateUnitRuleWithDetailRespRequest::SetUnitRuleItemList(const vector<UnitRuleItem>& _unitRuleItemList)
{
    m_unitRuleItemList = _unitRuleItemList;
    m_unitRuleItemListHasBeenSet = true;
}

bool CreateUnitRuleWithDetailRespRequest::UnitRuleItemListHasBeenSet() const
{
    return m_unitRuleItemListHasBeenSet;
}


