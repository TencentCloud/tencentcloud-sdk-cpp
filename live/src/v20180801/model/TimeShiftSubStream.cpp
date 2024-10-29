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

#include <tencentcloud/live/v20180801/model/TimeShiftSubStream.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TimeShiftSubStream::TimeShiftSubStream() :
    m_transCodeIdHasBeenSet(false)
{
}

CoreInternalOutcome TimeShiftSubStream::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransCodeId") && !value["TransCodeId"].IsNull())
    {
        if (!value["TransCodeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftSubStream.TransCodeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transCodeId = value["TransCodeId"].GetUint64();
        m_transCodeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeShiftSubStream::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransCodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transCodeId, allocator);
    }

}


uint64_t TimeShiftSubStream::GetTransCodeId() const
{
    return m_transCodeId;
}

void TimeShiftSubStream::SetTransCodeId(const uint64_t& _transCodeId)
{
    m_transCodeId = _transCodeId;
    m_transCodeIdHasBeenSet = true;
}

bool TimeShiftSubStream::TransCodeIdHasBeenSet() const
{
    return m_transCodeIdHasBeenSet;
}

