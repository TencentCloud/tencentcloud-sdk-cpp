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

#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyBlockIgnoreListRequest::ModifyBlockIgnoreListRequest() :
    m_ruleTypeHasBeenSet(false),
    m_iOCHasBeenSet(false),
    m_iocActionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string ModifyBlockIgnoreListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_iOCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOC";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iOC.begin(); itr != m_iOC.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_iocActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IocAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iocAction.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyBlockIgnoreListRequest::GetRuleType() const
{
    return m_ruleType;
}

void ModifyBlockIgnoreListRequest::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ModifyBlockIgnoreListRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<IocListData> ModifyBlockIgnoreListRequest::GetIOC() const
{
    return m_iOC;
}

void ModifyBlockIgnoreListRequest::SetIOC(const vector<IocListData>& _iOC)
{
    m_iOC = _iOC;
    m_iOCHasBeenSet = true;
}

bool ModifyBlockIgnoreListRequest::IOCHasBeenSet() const
{
    return m_iOCHasBeenSet;
}

string ModifyBlockIgnoreListRequest::GetIocAction() const
{
    return m_iocAction;
}

void ModifyBlockIgnoreListRequest::SetIocAction(const string& _iocAction)
{
    m_iocAction = _iocAction;
    m_iocActionHasBeenSet = true;
}

bool ModifyBlockIgnoreListRequest::IocActionHasBeenSet() const
{
    return m_iocActionHasBeenSet;
}

string ModifyBlockIgnoreListRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyBlockIgnoreListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyBlockIgnoreListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyBlockIgnoreListRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyBlockIgnoreListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyBlockIgnoreListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


