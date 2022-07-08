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

#include <tencentcloud/iotvideo/v20211125/model/DeviceCntStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

DeviceCntStats::DeviceCntStats() :
    m_dateHasBeenSet(false),
    m_newRegisterCntHasBeenSet(false),
    m_newActivateCntHasBeenSet(false),
    m_activeCntHasBeenSet(false)
{
}

CoreInternalOutcome DeviceCntStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCntStats.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("NewRegisterCnt") && !value["NewRegisterCnt"].IsNull())
    {
        if (!value["NewRegisterCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCntStats.NewRegisterCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_newRegisterCnt = value["NewRegisterCnt"].GetUint64();
        m_newRegisterCntHasBeenSet = true;
    }

    if (value.HasMember("NewActivateCnt") && !value["NewActivateCnt"].IsNull())
    {
        if (!value["NewActivateCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCntStats.NewActivateCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_newActivateCnt = value["NewActivateCnt"].GetUint64();
        m_newActivateCntHasBeenSet = true;
    }

    if (value.HasMember("ActiveCnt") && !value["ActiveCnt"].IsNull())
    {
        if (!value["ActiveCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceCntStats.ActiveCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeCnt = value["ActiveCnt"].GetUint64();
        m_activeCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceCntStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_newRegisterCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewRegisterCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newRegisterCnt, allocator);
    }

    if (m_newActivateCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewActivateCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newActivateCnt, allocator);
    }

    if (m_activeCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeCnt, allocator);
    }

}


string DeviceCntStats::GetDate() const
{
    return m_date;
}

void DeviceCntStats::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DeviceCntStats::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t DeviceCntStats::GetNewRegisterCnt() const
{
    return m_newRegisterCnt;
}

void DeviceCntStats::SetNewRegisterCnt(const uint64_t& _newRegisterCnt)
{
    m_newRegisterCnt = _newRegisterCnt;
    m_newRegisterCntHasBeenSet = true;
}

bool DeviceCntStats::NewRegisterCntHasBeenSet() const
{
    return m_newRegisterCntHasBeenSet;
}

uint64_t DeviceCntStats::GetNewActivateCnt() const
{
    return m_newActivateCnt;
}

void DeviceCntStats::SetNewActivateCnt(const uint64_t& _newActivateCnt)
{
    m_newActivateCnt = _newActivateCnt;
    m_newActivateCntHasBeenSet = true;
}

bool DeviceCntStats::NewActivateCntHasBeenSet() const
{
    return m_newActivateCntHasBeenSet;
}

uint64_t DeviceCntStats::GetActiveCnt() const
{
    return m_activeCnt;
}

void DeviceCntStats::SetActiveCnt(const uint64_t& _activeCnt)
{
    m_activeCnt = _activeCnt;
    m_activeCntHasBeenSet = true;
}

bool DeviceCntStats::ActiveCntHasBeenSet() const
{
    return m_activeCntHasBeenSet;
}

