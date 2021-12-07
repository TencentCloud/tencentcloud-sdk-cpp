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

#include <tencentcloud/tcss/v20201101/model/RunTimeTendencyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RunTimeTendencyInfo::RunTimeTendencyInfo() :
    m_curTimeHasBeenSet(false),
    m_cntHasBeenSet(false)
{
}

CoreInternalOutcome RunTimeTendencyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurTime") && !value["CurTime"].IsNull())
    {
        if (!value["CurTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeTendencyInfo.CurTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curTime = string(value["CurTime"].GetString());
        m_curTimeHasBeenSet = true;
    }

    if (value.HasMember("Cnt") && !value["Cnt"].IsNull())
    {
        if (!value["Cnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeTendencyInfo.Cnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cnt = value["Cnt"].GetUint64();
        m_cntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunTimeTendencyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_curTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cnt, allocator);
    }

}


string RunTimeTendencyInfo::GetCurTime() const
{
    return m_curTime;
}

void RunTimeTendencyInfo::SetCurTime(const string& _curTime)
{
    m_curTime = _curTime;
    m_curTimeHasBeenSet = true;
}

bool RunTimeTendencyInfo::CurTimeHasBeenSet() const
{
    return m_curTimeHasBeenSet;
}

uint64_t RunTimeTendencyInfo::GetCnt() const
{
    return m_cnt;
}

void RunTimeTendencyInfo::SetCnt(const uint64_t& _cnt)
{
    m_cnt = _cnt;
    m_cntHasBeenSet = true;
}

bool RunTimeTendencyInfo::CntHasBeenSet() const
{
    return m_cntHasBeenSet;
}

