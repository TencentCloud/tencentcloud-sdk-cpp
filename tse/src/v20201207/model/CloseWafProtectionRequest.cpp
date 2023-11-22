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

#include <tencentcloud/tse/v20201207/model/CloseWafProtectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloseWafProtectionRequest::CloseWafProtectionRequest() :
    m_gatewayIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_listHasBeenSet(false)
{
}

string CloseWafProtectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloseWafProtectionRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CloseWafProtectionRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CloseWafProtectionRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CloseWafProtectionRequest::GetType() const
{
    return m_type;
}

void CloseWafProtectionRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CloseWafProtectionRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> CloseWafProtectionRequest::GetList() const
{
    return m_list;
}

void CloseWafProtectionRequest::SetList(const vector<string>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool CloseWafProtectionRequest::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}


