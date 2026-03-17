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

#include <tencentcloud/cwp/v20180228/model/UuidHostip.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

UuidHostip::UuidHostip() :
    m_uuidHasBeenSet(false),
    m_hostipHasBeenSet(false)
{
}

CoreInternalOutcome UuidHostip::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UuidHostip.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Hostip") && !value["Hostip"].IsNull())
    {
        if (!value["Hostip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UuidHostip.Hostip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostip = string(value["Hostip"].GetString());
        m_hostipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UuidHostip::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostip.c_str(), allocator).Move(), allocator);
    }

}


string UuidHostip::GetUuid() const
{
    return m_uuid;
}

void UuidHostip::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool UuidHostip::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string UuidHostip::GetHostip() const
{
    return m_hostip;
}

void UuidHostip::SetHostip(const string& _hostip)
{
    m_hostip = _hostip;
    m_hostipHasBeenSet = true;
}

bool UuidHostip::HostipHasBeenSet() const
{
    return m_hostipHasBeenSet;
}

