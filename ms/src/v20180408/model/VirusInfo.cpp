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

#include <tencentcloud/ms/v20180408/model/VirusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

VirusInfo::VirusInfo() :
    m_safeTypeHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_virusDescHasBeenSet(false)
{
}

CoreInternalOutcome VirusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SafeType") && !value["SafeType"].IsNull())
    {
        if (!value["SafeType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `VirusInfo.SafeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_safeType = value["SafeType"].GetInt64();
        m_safeTypeHasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Error("response `VirusInfo.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("VirusDesc") && !value["VirusDesc"].IsNull())
    {
        if (!value["VirusDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `VirusInfo.VirusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusDesc = string(value["VirusDesc"].GetString());
        m_virusDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VirusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_safeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safeType, allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_virusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusDesc.c_str(), allocator).Move(), allocator);
    }

}


int64_t VirusInfo::GetSafeType() const
{
    return m_safeType;
}

void VirusInfo::SetSafeType(const int64_t& _safeType)
{
    m_safeType = _safeType;
    m_safeTypeHasBeenSet = true;
}

bool VirusInfo::SafeTypeHasBeenSet() const
{
    return m_safeTypeHasBeenSet;
}

string VirusInfo::GetVirusName() const
{
    return m_virusName;
}

void VirusInfo::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool VirusInfo::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string VirusInfo::GetVirusDesc() const
{
    return m_virusDesc;
}

void VirusInfo::SetVirusDesc(const string& _virusDesc)
{
    m_virusDesc = _virusDesc;
    m_virusDescHasBeenSet = true;
}

bool VirusInfo::VirusDescHasBeenSet() const
{
    return m_virusDescHasBeenSet;
}

