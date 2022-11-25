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

#include <tencentcloud/tcss/v20201101/model/ModifyK8sApiAbnormalEventStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyK8sApiAbnormalEventStatusRequest::ModifyK8sApiAbnormalEventStatusRequest() :
    m_eventIDSetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyK8sApiAbnormalEventStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventIDSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIDSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventIDSet.begin(); itr != m_eventIDSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> ModifyK8sApiAbnormalEventStatusRequest::GetEventIDSet() const
{
    return m_eventIDSet;
}

void ModifyK8sApiAbnormalEventStatusRequest::SetEventIDSet(const vector<uint64_t>& _eventIDSet)
{
    m_eventIDSet = _eventIDSet;
    m_eventIDSetHasBeenSet = true;
}

bool ModifyK8sApiAbnormalEventStatusRequest::EventIDSetHasBeenSet() const
{
    return m_eventIDSetHasBeenSet;
}

string ModifyK8sApiAbnormalEventStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyK8sApiAbnormalEventStatusRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyK8sApiAbnormalEventStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyK8sApiAbnormalEventStatusRequest::GetRemark() const
{
    return m_remark;
}

void ModifyK8sApiAbnormalEventStatusRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyK8sApiAbnormalEventStatusRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


