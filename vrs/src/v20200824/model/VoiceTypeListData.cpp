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

#include <tencentcloud/vrs/v20200824/model/VoiceTypeListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

VoiceTypeListData::VoiceTypeListData() :
    m_voiceTypeListHasBeenSet(false)
{
}

CoreInternalOutcome VoiceTypeListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceTypeList") && !value["VoiceTypeList"].IsNull())
    {
        if (!value["VoiceTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceTypeListData.VoiceTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["VoiceTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VoiceTypeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_voiceTypeList.push_back(item);
        }
        m_voiceTypeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceTypeListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_voiceTypeList.begin(); itr != m_voiceTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<VoiceTypeInfo> VoiceTypeListData::GetVoiceTypeList() const
{
    return m_voiceTypeList;
}

void VoiceTypeListData::SetVoiceTypeList(const vector<VoiceTypeInfo>& _voiceTypeList)
{
    m_voiceTypeList = _voiceTypeList;
    m_voiceTypeListHasBeenSet = true;
}

bool VoiceTypeListData::VoiceTypeListHasBeenSet() const
{
    return m_voiceTypeListHasBeenSet;
}

