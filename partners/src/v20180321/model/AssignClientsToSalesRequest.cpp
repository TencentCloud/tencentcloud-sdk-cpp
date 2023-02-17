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

#include <tencentcloud/partners/v20180321/model/AssignClientsToSalesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

AssignClientsToSalesRequest::AssignClientsToSalesRequest() :
    m_clientUinsHasBeenSet(false),
    m_salesUinHasBeenSet(false),
    m_assignClientStatusHasBeenSet(false),
    m_assignActionTypeHasBeenSet(false)
{
}

string AssignClientsToSalesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clientUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clientUins.begin(); itr != m_clientUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_salesUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_salesUin.c_str(), allocator).Move(), allocator);
    }

    if (m_assignClientStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssignClientStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assignClientStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_assignActionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssignActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assignActionType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> AssignClientsToSalesRequest::GetClientUins() const
{
    return m_clientUins;
}

void AssignClientsToSalesRequest::SetClientUins(const vector<string>& _clientUins)
{
    m_clientUins = _clientUins;
    m_clientUinsHasBeenSet = true;
}

bool AssignClientsToSalesRequest::ClientUinsHasBeenSet() const
{
    return m_clientUinsHasBeenSet;
}

string AssignClientsToSalesRequest::GetSalesUin() const
{
    return m_salesUin;
}

void AssignClientsToSalesRequest::SetSalesUin(const string& _salesUin)
{
    m_salesUin = _salesUin;
    m_salesUinHasBeenSet = true;
}

bool AssignClientsToSalesRequest::SalesUinHasBeenSet() const
{
    return m_salesUinHasBeenSet;
}

string AssignClientsToSalesRequest::GetAssignClientStatus() const
{
    return m_assignClientStatus;
}

void AssignClientsToSalesRequest::SetAssignClientStatus(const string& _assignClientStatus)
{
    m_assignClientStatus = _assignClientStatus;
    m_assignClientStatusHasBeenSet = true;
}

bool AssignClientsToSalesRequest::AssignClientStatusHasBeenSet() const
{
    return m_assignClientStatusHasBeenSet;
}

string AssignClientsToSalesRequest::GetAssignActionType() const
{
    return m_assignActionType;
}

void AssignClientsToSalesRequest::SetAssignActionType(const string& _assignActionType)
{
    m_assignActionType = _assignActionType;
    m_assignActionTypeHasBeenSet = true;
}

bool AssignClientsToSalesRequest::AssignActionTypeHasBeenSet() const
{
    return m_assignActionTypeHasBeenSet;
}


