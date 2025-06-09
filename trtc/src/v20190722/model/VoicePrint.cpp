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

#include <tencentcloud/trtc/v20190722/model/VoicePrint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VoicePrint::VoicePrint() :
    m_modeHasBeenSet(false),
    m_idListHasBeenSet(false)
{
}

CoreInternalOutcome VoicePrint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrint.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("IdList") && !value["IdList"].IsNull())
    {
        if (!value["IdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoicePrint.IdList` is not array type"));

        const rapidjson::Value &tmpValue = value["IdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_idList.push_back((*itr).GetString());
        }
        m_idListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoicePrint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_idListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idList.begin(); itr != m_idList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t VoicePrint::GetMode() const
{
    return m_mode;
}

void VoicePrint::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool VoicePrint::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<string> VoicePrint::GetIdList() const
{
    return m_idList;
}

void VoicePrint::SetIdList(const vector<string>& _idList)
{
    m_idList = _idList;
    m_idListHasBeenSet = true;
}

bool VoicePrint::IdListHasBeenSet() const
{
    return m_idListHasBeenSet;
}

