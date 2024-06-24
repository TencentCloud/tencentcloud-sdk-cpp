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

#include <tencentcloud/asr/v20190614/model/VoicePrintCountData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

VoicePrintCountData::VoicePrintCountData() :
    m_totalHasBeenSet(false),
    m_voicePrintListHasBeenSet(false)
{
}

CoreInternalOutcome VoicePrintCountData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintCountData.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("VoicePrintList") && !value["VoicePrintList"].IsNull())
    {
        if (!value["VoicePrintList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoicePrintCountData.VoicePrintList` is not array type"));

        const rapidjson::Value &tmpValue = value["VoicePrintList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VoicePrintBaseData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_voicePrintList.push_back(item);
        }
        m_voicePrintListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoicePrintCountData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_voicePrintListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_voicePrintList.begin(); itr != m_voicePrintList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t VoicePrintCountData::GetTotal() const
{
    return m_total;
}

void VoicePrintCountData::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool VoicePrintCountData::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<VoicePrintBaseData> VoicePrintCountData::GetVoicePrintList() const
{
    return m_voicePrintList;
}

void VoicePrintCountData::SetVoicePrintList(const vector<VoicePrintBaseData>& _voicePrintList)
{
    m_voicePrintList = _voicePrintList;
    m_voicePrintListHasBeenSet = true;
}

bool VoicePrintCountData::VoicePrintListHasBeenSet() const
{
    return m_voicePrintListHasBeenSet;
}

