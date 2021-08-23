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

#include <tencentcloud/ie/v20200304/model/SubtitleRec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

SubtitleRec::SubtitleRec() :
    m_asrDstHasBeenSet(false),
    m_transDstHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleRec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsrDst") && !value["AsrDst"].IsNull())
    {
        if (!value["AsrDst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleRec.AsrDst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrDst = string(value["AsrDst"].GetString());
        m_asrDstHasBeenSet = true;
    }

    if (value.HasMember("TransDst") && !value["TransDst"].IsNull())
    {
        if (!value["TransDst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleRec.TransDst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transDst = string(value["TransDst"].GetString());
        m_transDstHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleRec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asrDstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrDst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrDst.c_str(), allocator).Move(), allocator);
    }

    if (m_transDstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransDst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transDst.c_str(), allocator).Move(), allocator);
    }

}


string SubtitleRec::GetAsrDst() const
{
    return m_asrDst;
}

void SubtitleRec::SetAsrDst(const string& _asrDst)
{
    m_asrDst = _asrDst;
    m_asrDstHasBeenSet = true;
}

bool SubtitleRec::AsrDstHasBeenSet() const
{
    return m_asrDstHasBeenSet;
}

string SubtitleRec::GetTransDst() const
{
    return m_transDst;
}

void SubtitleRec::SetTransDst(const string& _transDst)
{
    m_transDst = _transDst;
    m_transDstHasBeenSet = true;
}

bool SubtitleRec::TransDstHasBeenSet() const
{
    return m_transDstHasBeenSet;
}

