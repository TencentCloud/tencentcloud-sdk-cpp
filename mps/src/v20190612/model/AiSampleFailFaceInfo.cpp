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

#include <tencentcloud/mps/v20190612/model/AiSampleFailFaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiSampleFailFaceInfo::AiSampleFailFaceInfo() :
    m_indexHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome AiSampleFailFaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AiSampleFailFaceInfo.Index` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetUint64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiSampleFailFaceInfo.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiSampleFailFaceInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiSampleFailFaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AiSampleFailFaceInfo::GetIndex() const
{
    return m_index;
}

void AiSampleFailFaceInfo::SetIndex(const uint64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AiSampleFailFaceInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

int64_t AiSampleFailFaceInfo::GetErrCode() const
{
    return m_errCode;
}

void AiSampleFailFaceInfo::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool AiSampleFailFaceInfo::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string AiSampleFailFaceInfo::GetMessage() const
{
    return m_message;
}

void AiSampleFailFaceInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AiSampleFailFaceInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

