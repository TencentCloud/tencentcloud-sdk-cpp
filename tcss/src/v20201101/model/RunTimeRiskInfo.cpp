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

#include <tencentcloud/tcss/v20201101/model/RunTimeRiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RunTimeRiskInfo::RunTimeRiskInfo() :
    m_cntHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

CoreInternalOutcome RunTimeRiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cnt") && !value["Cnt"].IsNull())
    {
        if (!value["Cnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeRiskInfo.Cnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cnt = value["Cnt"].GetUint64();
        m_cntHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeRiskInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunTimeRiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cnt, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RunTimeRiskInfo::GetCnt() const
{
    return m_cnt;
}

void RunTimeRiskInfo::SetCnt(const uint64_t& _cnt)
{
    m_cnt = _cnt;
    m_cntHasBeenSet = true;
}

bool RunTimeRiskInfo::CntHasBeenSet() const
{
    return m_cntHasBeenSet;
}

string RunTimeRiskInfo::GetLevel() const
{
    return m_level;
}

void RunTimeRiskInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool RunTimeRiskInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

