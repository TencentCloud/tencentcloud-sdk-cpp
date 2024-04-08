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

#include <tencentcloud/ccc/v20200210/model/UploadIvrAudioFailedInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

UploadIvrAudioFailedInfo::UploadIvrAudioFailedInfo() :
    m_fileNameHasBeenSet(false),
    m_failedMsgHasBeenSet(false)
{
}

CoreInternalOutcome UploadIvrAudioFailedInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadIvrAudioFailedInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FailedMsg") && !value["FailedMsg"].IsNull())
    {
        if (!value["FailedMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadIvrAudioFailedInfo.FailedMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedMsg = string(value["FailedMsg"].GetString());
        m_failedMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadIvrAudioFailedInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_failedMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedMsg.c_str(), allocator).Move(), allocator);
    }

}


string UploadIvrAudioFailedInfo::GetFileName() const
{
    return m_fileName;
}

void UploadIvrAudioFailedInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadIvrAudioFailedInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string UploadIvrAudioFailedInfo::GetFailedMsg() const
{
    return m_failedMsg;
}

void UploadIvrAudioFailedInfo::SetFailedMsg(const string& _failedMsg)
{
    m_failedMsg = _failedMsg;
    m_failedMsgHasBeenSet = true;
}

bool UploadIvrAudioFailedInfo::FailedMsgHasBeenSet() const
{
    return m_failedMsgHasBeenSet;
}

