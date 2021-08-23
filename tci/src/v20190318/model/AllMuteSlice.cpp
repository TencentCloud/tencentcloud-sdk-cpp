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

#include <tencentcloud/tci/v20190318/model/AllMuteSlice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

AllMuteSlice::AllMuteSlice() :
    m_muteSliceHasBeenSet(false),
    m_muteRatioHasBeenSet(false),
    m_totalMuteDurationHasBeenSet(false)
{
}

CoreInternalOutcome AllMuteSlice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MuteSlice") && !value["MuteSlice"].IsNull())
    {
        if (!value["MuteSlice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllMuteSlice.MuteSlice` is not array type"));

        const rapidjson::Value &tmpValue = value["MuteSlice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MuteSlice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_muteSlice.push_back(item);
        }
        m_muteSliceHasBeenSet = true;
    }

    if (value.HasMember("MuteRatio") && !value["MuteRatio"].IsNull())
    {
        if (!value["MuteRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AllMuteSlice.MuteRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_muteRatio = value["MuteRatio"].GetDouble();
        m_muteRatioHasBeenSet = true;
    }

    if (value.HasMember("TotalMuteDuration") && !value["TotalMuteDuration"].IsNull())
    {
        if (!value["TotalMuteDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllMuteSlice.TotalMuteDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalMuteDuration = value["TotalMuteDuration"].GetInt64();
        m_totalMuteDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllMuteSlice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_muteSliceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MuteSlice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_muteSlice.begin(); itr != m_muteSlice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_muteRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MuteRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_muteRatio, allocator);
    }

    if (m_totalMuteDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMuteDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMuteDuration, allocator);
    }

}


vector<MuteSlice> AllMuteSlice::GetMuteSlice() const
{
    return m_muteSlice;
}

void AllMuteSlice::SetMuteSlice(const vector<MuteSlice>& _muteSlice)
{
    m_muteSlice = _muteSlice;
    m_muteSliceHasBeenSet = true;
}

bool AllMuteSlice::MuteSliceHasBeenSet() const
{
    return m_muteSliceHasBeenSet;
}

double AllMuteSlice::GetMuteRatio() const
{
    return m_muteRatio;
}

void AllMuteSlice::SetMuteRatio(const double& _muteRatio)
{
    m_muteRatio = _muteRatio;
    m_muteRatioHasBeenSet = true;
}

bool AllMuteSlice::MuteRatioHasBeenSet() const
{
    return m_muteRatioHasBeenSet;
}

int64_t AllMuteSlice::GetTotalMuteDuration() const
{
    return m_totalMuteDuration;
}

void AllMuteSlice::SetTotalMuteDuration(const int64_t& _totalMuteDuration)
{
    m_totalMuteDuration = _totalMuteDuration;
    m_totalMuteDurationHasBeenSet = true;
}

bool AllMuteSlice::TotalMuteDurationHasBeenSet() const
{
    return m_totalMuteDurationHasBeenSet;
}

