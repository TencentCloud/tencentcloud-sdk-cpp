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

#include <tencentcloud/cwp/v20180228/model/ModifyRansomDefenseStrategyStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyRansomDefenseStrategyStatusRequest::ModifyRansomDefenseStrategyStatusRequest() :
    m_isAllHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idListHasBeenSet(false)
{
}

string ModifyRansomDefenseStrategyStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAll, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_idListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idList.begin(); itr != m_idList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyRansomDefenseStrategyStatusRequest::GetIsAll() const
{
    return m_isAll;
}

void ModifyRansomDefenseStrategyStatusRequest::SetIsAll(const uint64_t& _isAll)
{
    m_isAll = _isAll;
    m_isAllHasBeenSet = true;
}

bool ModifyRansomDefenseStrategyStatusRequest::IsAllHasBeenSet() const
{
    return m_isAllHasBeenSet;
}

uint64_t ModifyRansomDefenseStrategyStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyRansomDefenseStrategyStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyRansomDefenseStrategyStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<uint64_t> ModifyRansomDefenseStrategyStatusRequest::GetIdList() const
{
    return m_idList;
}

void ModifyRansomDefenseStrategyStatusRequest::SetIdList(const vector<uint64_t>& _idList)
{
    m_idList = _idList;
    m_idListHasBeenSet = true;
}

bool ModifyRansomDefenseStrategyStatusRequest::IdListHasBeenSet() const
{
    return m_idListHasBeenSet;
}


