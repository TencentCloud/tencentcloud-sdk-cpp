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

#include <tencentcloud/live/v20180801/model/FlvSpecialParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

FlvSpecialParam::FlvSpecialParam() :
    m_uploadInRecordingHasBeenSet(false)
{
}

CoreInternalOutcome FlvSpecialParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UploadInRecording") && !value["UploadInRecording"].IsNull())
    {
        if (!value["UploadInRecording"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlvSpecialParam.UploadInRecording` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_uploadInRecording = value["UploadInRecording"].GetBool();
        m_uploadInRecordingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlvSpecialParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uploadInRecordingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadInRecording";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uploadInRecording, allocator);
    }

}


bool FlvSpecialParam::GetUploadInRecording() const
{
    return m_uploadInRecording;
}

void FlvSpecialParam::SetUploadInRecording(const bool& _uploadInRecording)
{
    m_uploadInRecording = _uploadInRecording;
    m_uploadInRecordingHasBeenSet = true;
}

bool FlvSpecialParam::UploadInRecordingHasBeenSet() const
{
    return m_uploadInRecordingHasBeenSet;
}

