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

#include <tencentcloud/mps/v20190612/model/DstSubtitleInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DstSubtitleInput::DstSubtitleInput() :
    m_dstSubtitleInfoHasBeenSet(false)
{
}

CoreInternalOutcome DstSubtitleInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DstSubtitleInfo") && !value["DstSubtitleInfo"].IsNull())
    {
        if (!value["DstSubtitleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DstSubtitleInput.DstSubtitleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstSubtitleInfo.Deserialize(value["DstSubtitleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstSubtitleInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DstSubtitleInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dstSubtitleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstSubtitleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstSubtitleInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


MediaInputInfo DstSubtitleInput::GetDstSubtitleInfo() const
{
    return m_dstSubtitleInfo;
}

void DstSubtitleInput::SetDstSubtitleInfo(const MediaInputInfo& _dstSubtitleInfo)
{
    m_dstSubtitleInfo = _dstSubtitleInfo;
    m_dstSubtitleInfoHasBeenSet = true;
}

bool DstSubtitleInput::DstSubtitleInfoHasBeenSet() const
{
    return m_dstSubtitleInfoHasBeenSet;
}

