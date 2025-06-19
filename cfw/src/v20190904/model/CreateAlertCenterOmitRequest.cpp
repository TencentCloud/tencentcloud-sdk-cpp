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

#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterOmitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateAlertCenterOmitRequest::CreateAlertCenterOmitRequest() :
    m_handleIdListHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_handleEventIdListHasBeenSet(false)
{
}

string CreateAlertCenterOmitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_handleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_handleIdList.begin(); itr != m_handleIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_handleEventIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleEventIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_handleEventIdList.begin(); itr != m_handleEventIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateAlertCenterOmitRequest::GetHandleIdList() const
{
    return m_handleIdList;
}

void CreateAlertCenterOmitRequest::SetHandleIdList(const vector<string>& _handleIdList)
{
    m_handleIdList = _handleIdList;
    m_handleIdListHasBeenSet = true;
}

bool CreateAlertCenterOmitRequest::HandleIdListHasBeenSet() const
{
    return m_handleIdListHasBeenSet;
}

string CreateAlertCenterOmitRequest::GetTableType() const
{
    return m_tableType;
}

void CreateAlertCenterOmitRequest::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool CreateAlertCenterOmitRequest::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

vector<string> CreateAlertCenterOmitRequest::GetHandleEventIdList() const
{
    return m_handleEventIdList;
}

void CreateAlertCenterOmitRequest::SetHandleEventIdList(const vector<string>& _handleEventIdList)
{
    m_handleEventIdList = _handleEventIdList;
    m_handleEventIdListHasBeenSet = true;
}

bool CreateAlertCenterOmitRequest::HandleEventIdListHasBeenSet() const
{
    return m_handleEventIdListHasBeenSet;
}


