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

#include <tencentcloud/ie/v20200304/model/MuxInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MuxInfo::MuxInfo() :
    m_deleteStreamHasBeenSet(false),
    m_flvFlagsHasBeenSet(false)
{
}

CoreInternalOutcome MuxInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeleteStream") && !value["DeleteStream"].IsNull())
    {
        if (!value["DeleteStream"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MuxInfo.DeleteStream` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteStream = string(value["DeleteStream"].GetString());
        m_deleteStreamHasBeenSet = true;
    }

    if (value.HasMember("FlvFlags") && !value["FlvFlags"].IsNull())
    {
        if (!value["FlvFlags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MuxInfo.FlvFlags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flvFlags = string(value["FlvFlags"].GetString());
        m_flvFlagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MuxInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deleteStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteStream.c_str(), allocator).Move(), allocator);
    }

    if (m_flvFlagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlvFlags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flvFlags.c_str(), allocator).Move(), allocator);
    }

}


string MuxInfo::GetDeleteStream() const
{
    return m_deleteStream;
}

void MuxInfo::SetDeleteStream(const string& _deleteStream)
{
    m_deleteStream = _deleteStream;
    m_deleteStreamHasBeenSet = true;
}

bool MuxInfo::DeleteStreamHasBeenSet() const
{
    return m_deleteStreamHasBeenSet;
}

string MuxInfo::GetFlvFlags() const
{
    return m_flvFlags;
}

void MuxInfo::SetFlvFlags(const string& _flvFlags)
{
    m_flvFlags = _flvFlags;
    m_flvFlagsHasBeenSet = true;
}

bool MuxInfo::FlvFlagsHasBeenSet() const
{
    return m_flvFlagsHasBeenSet;
}

