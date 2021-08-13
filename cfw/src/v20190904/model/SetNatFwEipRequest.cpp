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

#include <tencentcloud/cfw/v20190904/model/SetNatFwEipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

SetNatFwEipRequest::SetNatFwEipRequest() :
    m_operationTypeHasBeenSet(false),
    m_cfwInstanceHasBeenSet(false),
    m_eipListHasBeenSet(false)
{
}

string SetNatFwEipRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_cfwInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cfwInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_eipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eipList.begin(); itr != m_eipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetNatFwEipRequest::GetOperationType() const
{
    return m_operationType;
}

void SetNatFwEipRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool SetNatFwEipRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string SetNatFwEipRequest::GetCfwInstance() const
{
    return m_cfwInstance;
}

void SetNatFwEipRequest::SetCfwInstance(const string& _cfwInstance)
{
    m_cfwInstance = _cfwInstance;
    m_cfwInstanceHasBeenSet = true;
}

bool SetNatFwEipRequest::CfwInstanceHasBeenSet() const
{
    return m_cfwInstanceHasBeenSet;
}

vector<string> SetNatFwEipRequest::GetEipList() const
{
    return m_eipList;
}

void SetNatFwEipRequest::SetEipList(const vector<string>& _eipList)
{
    m_eipList = _eipList;
    m_eipListHasBeenSet = true;
}

bool SetNatFwEipRequest::EipListHasBeenSet() const
{
    return m_eipListHasBeenSet;
}


