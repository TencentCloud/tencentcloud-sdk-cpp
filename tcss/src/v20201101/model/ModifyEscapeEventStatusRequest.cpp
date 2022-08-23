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

#include <tencentcloud/tcss/v20201101/model/ModifyEscapeEventStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyEscapeEventStatusRequest::ModifyEscapeEventStatusRequest() :
    m_eventIdSetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_imageIDsHasBeenSet(false),
    m_eventTypeHasBeenSet(false)
{
}

string ModifyEscapeEventStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventIdSet.begin(); itr != m_eventIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIDs.begin(); itr != m_imageIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventType.begin(); itr != m_eventType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyEscapeEventStatusRequest::GetEventIdSet() const
{
    return m_eventIdSet;
}

void ModifyEscapeEventStatusRequest::SetEventIdSet(const vector<string>& _eventIdSet)
{
    m_eventIdSet = _eventIdSet;
    m_eventIdSetHasBeenSet = true;
}

bool ModifyEscapeEventStatusRequest::EventIdSetHasBeenSet() const
{
    return m_eventIdSetHasBeenSet;
}

string ModifyEscapeEventStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyEscapeEventStatusRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyEscapeEventStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyEscapeEventStatusRequest::GetRemark() const
{
    return m_remark;
}

void ModifyEscapeEventStatusRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyEscapeEventStatusRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> ModifyEscapeEventStatusRequest::GetImageIDs() const
{
    return m_imageIDs;
}

void ModifyEscapeEventStatusRequest::SetImageIDs(const vector<string>& _imageIDs)
{
    m_imageIDs = _imageIDs;
    m_imageIDsHasBeenSet = true;
}

bool ModifyEscapeEventStatusRequest::ImageIDsHasBeenSet() const
{
    return m_imageIDsHasBeenSet;
}

vector<string> ModifyEscapeEventStatusRequest::GetEventType() const
{
    return m_eventType;
}

void ModifyEscapeEventStatusRequest::SetEventType(const vector<string>& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool ModifyEscapeEventStatusRequest::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}


