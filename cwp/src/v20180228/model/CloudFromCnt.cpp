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

#include <tencentcloud/cwp/v20180228/model/CloudFromCnt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CloudFromCnt::CloudFromCnt() :
    m_cloudFromHasBeenSet(false),
    m_machineCntHasBeenSet(false)
{
}

CoreInternalOutcome CloudFromCnt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudFrom") && !value["CloudFrom"].IsNull())
    {
        if (!value["CloudFrom"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFromCnt.CloudFrom` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudFrom = value["CloudFrom"].GetUint64();
        m_cloudFromHasBeenSet = true;
    }

    if (value.HasMember("MachineCnt") && !value["MachineCnt"].IsNull())
    {
        if (!value["MachineCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFromCnt.MachineCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_machineCnt = value["MachineCnt"].GetInt64();
        m_machineCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudFromCnt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloudFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudFrom, allocator);
    }

    if (m_machineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineCnt, allocator);
    }

}


uint64_t CloudFromCnt::GetCloudFrom() const
{
    return m_cloudFrom;
}

void CloudFromCnt::SetCloudFrom(const uint64_t& _cloudFrom)
{
    m_cloudFrom = _cloudFrom;
    m_cloudFromHasBeenSet = true;
}

bool CloudFromCnt::CloudFromHasBeenSet() const
{
    return m_cloudFromHasBeenSet;
}

int64_t CloudFromCnt::GetMachineCnt() const
{
    return m_machineCnt;
}

void CloudFromCnt::SetMachineCnt(const int64_t& _machineCnt)
{
    m_machineCnt = _machineCnt;
    m_machineCntHasBeenSet = true;
}

bool CloudFromCnt::MachineCntHasBeenSet() const
{
    return m_machineCntHasBeenSet;
}

