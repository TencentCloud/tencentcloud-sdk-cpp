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

#include <tencentcloud/dnspod/v20210323/model/ModifyRecordBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

ModifyRecordBatchRequest::ModifyRecordBatchRequest() :
    m_recordIdListHasBeenSet(false),
    m_changeHasBeenSet(false),
    m_changeToHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_mXHasBeenSet(false)
{
}

string ModifyRecordBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_recordIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordIdList.begin(); itr != m_recordIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_changeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Change";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_change.c_str(), allocator).Move(), allocator);
    }

    if (m_changeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_changeTo.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_mXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MX";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mX.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> ModifyRecordBatchRequest::GetRecordIdList() const
{
    return m_recordIdList;
}

void ModifyRecordBatchRequest::SetRecordIdList(const vector<uint64_t>& _recordIdList)
{
    m_recordIdList = _recordIdList;
    m_recordIdListHasBeenSet = true;
}

bool ModifyRecordBatchRequest::RecordIdListHasBeenSet() const
{
    return m_recordIdListHasBeenSet;
}

string ModifyRecordBatchRequest::GetChange() const
{
    return m_change;
}

void ModifyRecordBatchRequest::SetChange(const string& _change)
{
    m_change = _change;
    m_changeHasBeenSet = true;
}

bool ModifyRecordBatchRequest::ChangeHasBeenSet() const
{
    return m_changeHasBeenSet;
}

string ModifyRecordBatchRequest::GetChangeTo() const
{
    return m_changeTo;
}

void ModifyRecordBatchRequest::SetChangeTo(const string& _changeTo)
{
    m_changeTo = _changeTo;
    m_changeToHasBeenSet = true;
}

bool ModifyRecordBatchRequest::ChangeToHasBeenSet() const
{
    return m_changeToHasBeenSet;
}

string ModifyRecordBatchRequest::GetValue() const
{
    return m_value;
}

void ModifyRecordBatchRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ModifyRecordBatchRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ModifyRecordBatchRequest::GetMX() const
{
    return m_mX;
}

void ModifyRecordBatchRequest::SetMX(const string& _mX)
{
    m_mX = _mX;
    m_mXHasBeenSet = true;
}

bool ModifyRecordBatchRequest::MXHasBeenSet() const
{
    return m_mXHasBeenSet;
}


