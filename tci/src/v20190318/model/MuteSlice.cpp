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

#include <tencentcloud/tci/v20190318/model/MuteSlice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

MuteSlice::MuteSlice() :
    m_muteBtmHasBeenSet(false),
    m_muteEtmHasBeenSet(false)
{
}

CoreInternalOutcome MuteSlice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MuteBtm") && !value["MuteBtm"].IsNull())
    {
        if (!value["MuteBtm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MuteSlice.MuteBtm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_muteBtm = value["MuteBtm"].GetInt64();
        m_muteBtmHasBeenSet = true;
    }

    if (value.HasMember("MuteEtm") && !value["MuteEtm"].IsNull())
    {
        if (!value["MuteEtm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MuteSlice.MuteEtm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_muteEtm = value["MuteEtm"].GetInt64();
        m_muteEtmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MuteSlice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_muteBtmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MuteBtm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_muteBtm, allocator);
    }

    if (m_muteEtmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MuteEtm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_muteEtm, allocator);
    }

}


int64_t MuteSlice::GetMuteBtm() const
{
    return m_muteBtm;
}

void MuteSlice::SetMuteBtm(const int64_t& _muteBtm)
{
    m_muteBtm = _muteBtm;
    m_muteBtmHasBeenSet = true;
}

bool MuteSlice::MuteBtmHasBeenSet() const
{
    return m_muteBtmHasBeenSet;
}

int64_t MuteSlice::GetMuteEtm() const
{
    return m_muteEtm;
}

void MuteSlice::SetMuteEtm(const int64_t& _muteEtm)
{
    m_muteEtm = _muteEtm;
    m_muteEtmHasBeenSet = true;
}

bool MuteSlice::MuteEtmHasBeenSet() const
{
    return m_muteEtmHasBeenSet;
}

