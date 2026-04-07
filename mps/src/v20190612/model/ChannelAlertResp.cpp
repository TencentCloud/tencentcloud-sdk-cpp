/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mps/v20190612/model/ChannelAlertResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ChannelAlertResp::ChannelAlertResp() :
    m_programAlertCountsHasBeenSet(false),
    m_programAlertInfosHasBeenSet(false)
{
}

CoreInternalOutcome ChannelAlertResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProgramAlertCounts") && !value["ProgramAlertCounts"].IsNull())
    {
        if (!value["ProgramAlertCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelAlertResp.ProgramAlertCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["ProgramAlertCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProgramAlertCounts item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_programAlertCounts.push_back(item);
        }
        m_programAlertCountsHasBeenSet = true;
    }

    if (value.HasMember("ProgramAlertInfos") && !value["ProgramAlertInfos"].IsNull())
    {
        if (!value["ProgramAlertInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelAlertResp.ProgramAlertInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ProgramAlertInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProgramAlertInfos item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_programAlertInfos.push_back(item);
        }
        m_programAlertInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelAlertResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_programAlertCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramAlertCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_programAlertCounts.begin(); itr != m_programAlertCounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_programAlertInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramAlertInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_programAlertInfos.begin(); itr != m_programAlertInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ProgramAlertCounts> ChannelAlertResp::GetProgramAlertCounts() const
{
    return m_programAlertCounts;
}

void ChannelAlertResp::SetProgramAlertCounts(const vector<ProgramAlertCounts>& _programAlertCounts)
{
    m_programAlertCounts = _programAlertCounts;
    m_programAlertCountsHasBeenSet = true;
}

bool ChannelAlertResp::ProgramAlertCountsHasBeenSet() const
{
    return m_programAlertCountsHasBeenSet;
}

vector<ProgramAlertInfos> ChannelAlertResp::GetProgramAlertInfos() const
{
    return m_programAlertInfos;
}

void ChannelAlertResp::SetProgramAlertInfos(const vector<ProgramAlertInfos>& _programAlertInfos)
{
    m_programAlertInfos = _programAlertInfos;
    m_programAlertInfosHasBeenSet = true;
}

bool ChannelAlertResp::ProgramAlertInfosHasBeenSet() const
{
    return m_programAlertInfosHasBeenSet;
}

