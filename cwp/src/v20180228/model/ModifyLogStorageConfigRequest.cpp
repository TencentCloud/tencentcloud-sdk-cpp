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

#include <tencentcloud/cwp/v20180228/model/ModifyLogStorageConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyLogStorageConfigRequest::ModifyLogStorageConfigRequest() :
    m_isModifyPeriodHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_granularityHasBeenSet(false)
{
}

string ModifyLogStorageConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isModifyPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModifyPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isModifyPeriod, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_granularity.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyLogStorageConfigRequest::GetIsModifyPeriod() const
{
    return m_isModifyPeriod;
}

void ModifyLogStorageConfigRequest::SetIsModifyPeriod(const bool& _isModifyPeriod)
{
    m_isModifyPeriod = _isModifyPeriod;
    m_isModifyPeriodHasBeenSet = true;
}

bool ModifyLogStorageConfigRequest::IsModifyPeriodHasBeenSet() const
{
    return m_isModifyPeriodHasBeenSet;
}

vector<string> ModifyLogStorageConfigRequest::GetType() const
{
    return m_type;
}

void ModifyLogStorageConfigRequest::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyLogStorageConfigRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ModifyLogStorageConfigRequest::GetPeriod() const
{
    return m_period;
}

void ModifyLogStorageConfigRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ModifyLogStorageConfigRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string ModifyLogStorageConfigRequest::GetGranularity() const
{
    return m_granularity;
}

void ModifyLogStorageConfigRequest::SetGranularity(const string& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool ModifyLogStorageConfigRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}


