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

#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ExtractTraceWatermarkTaskOutput::ExtractTraceWatermarkTaskOutput() :
    m_uvHasBeenSet(false),
    m_uidHasBeenSet(false)
{
}

CoreInternalOutcome ExtractTraceWatermarkTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uv") && !value["Uv"].IsNull())
    {
        if (!value["Uv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractTraceWatermarkTaskOutput.Uv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uv = string(value["Uv"].GetString());
        m_uvHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractTraceWatermarkTaskOutput.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtractTraceWatermarkTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uv.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

}


string ExtractTraceWatermarkTaskOutput::GetUv() const
{
    return m_uv;
}

void ExtractTraceWatermarkTaskOutput::SetUv(const string& _uv)
{
    m_uv = _uv;
    m_uvHasBeenSet = true;
}

bool ExtractTraceWatermarkTaskOutput::UvHasBeenSet() const
{
    return m_uvHasBeenSet;
}

string ExtractTraceWatermarkTaskOutput::GetUid() const
{
    return m_uid;
}

void ExtractTraceWatermarkTaskOutput::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool ExtractTraceWatermarkTaskOutput::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

