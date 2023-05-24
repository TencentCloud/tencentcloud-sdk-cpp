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

#include <tencentcloud/chdfs/v20201112/model/Summary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

Summary::Summary() :
    m_capacityUsedHasBeenSet(false),
    m_standardCapacityUsedHasBeenSet(false),
    m_degradeCapacityUsedHasBeenSet(false),
    m_archiveCapacityUsedHasBeenSet(false),
    m_deepArchiveCapacityUsedHasBeenSet(false),
    m_intelligentCapacityUsedHasBeenSet(false)
{
}

CoreInternalOutcome Summary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CapacityUsed") && !value["CapacityUsed"].IsNull())
    {
        if (!value["CapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Summary.CapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityUsed = value["CapacityUsed"].GetUint64();
        m_capacityUsedHasBeenSet = true;
    }

    if (value.HasMember("StandardCapacityUsed") && !value["StandardCapacityUsed"].IsNull())
    {
        if (!value["StandardCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Summary.StandardCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standardCapacityUsed = value["StandardCapacityUsed"].GetUint64();
        m_standardCapacityUsedHasBeenSet = true;
    }

    if (value.HasMember("DegradeCapacityUsed") && !value["DegradeCapacityUsed"].IsNull())
    {
        if (!value["DegradeCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Summary.DegradeCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_degradeCapacityUsed = value["DegradeCapacityUsed"].GetUint64();
        m_degradeCapacityUsedHasBeenSet = true;
    }

    if (value.HasMember("ArchiveCapacityUsed") && !value["ArchiveCapacityUsed"].IsNull())
    {
        if (!value["ArchiveCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Summary.ArchiveCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_archiveCapacityUsed = value["ArchiveCapacityUsed"].GetUint64();
        m_archiveCapacityUsedHasBeenSet = true;
    }

    if (value.HasMember("DeepArchiveCapacityUsed") && !value["DeepArchiveCapacityUsed"].IsNull())
    {
        if (!value["DeepArchiveCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Summary.DeepArchiveCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deepArchiveCapacityUsed = value["DeepArchiveCapacityUsed"].GetUint64();
        m_deepArchiveCapacityUsedHasBeenSet = true;
    }

    if (value.HasMember("IntelligentCapacityUsed") && !value["IntelligentCapacityUsed"].IsNull())
    {
        if (!value["IntelligentCapacityUsed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Summary.IntelligentCapacityUsed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intelligentCapacityUsed = value["IntelligentCapacityUsed"].GetUint64();
        m_intelligentCapacityUsedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Summary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_capacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityUsed, allocator);
    }

    if (m_standardCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standardCapacityUsed, allocator);
    }

    if (m_degradeCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DegradeCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_degradeCapacityUsed, allocator);
    }

    if (m_archiveCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archiveCapacityUsed, allocator);
    }

    if (m_deepArchiveCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeepArchiveCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deepArchiveCapacityUsed, allocator);
    }

    if (m_intelligentCapacityUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntelligentCapacityUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intelligentCapacityUsed, allocator);
    }

}


uint64_t Summary::GetCapacityUsed() const
{
    return m_capacityUsed;
}

void Summary::SetCapacityUsed(const uint64_t& _capacityUsed)
{
    m_capacityUsed = _capacityUsed;
    m_capacityUsedHasBeenSet = true;
}

bool Summary::CapacityUsedHasBeenSet() const
{
    return m_capacityUsedHasBeenSet;
}

uint64_t Summary::GetStandardCapacityUsed() const
{
    return m_standardCapacityUsed;
}

void Summary::SetStandardCapacityUsed(const uint64_t& _standardCapacityUsed)
{
    m_standardCapacityUsed = _standardCapacityUsed;
    m_standardCapacityUsedHasBeenSet = true;
}

bool Summary::StandardCapacityUsedHasBeenSet() const
{
    return m_standardCapacityUsedHasBeenSet;
}

uint64_t Summary::GetDegradeCapacityUsed() const
{
    return m_degradeCapacityUsed;
}

void Summary::SetDegradeCapacityUsed(const uint64_t& _degradeCapacityUsed)
{
    m_degradeCapacityUsed = _degradeCapacityUsed;
    m_degradeCapacityUsedHasBeenSet = true;
}

bool Summary::DegradeCapacityUsedHasBeenSet() const
{
    return m_degradeCapacityUsedHasBeenSet;
}

uint64_t Summary::GetArchiveCapacityUsed() const
{
    return m_archiveCapacityUsed;
}

void Summary::SetArchiveCapacityUsed(const uint64_t& _archiveCapacityUsed)
{
    m_archiveCapacityUsed = _archiveCapacityUsed;
    m_archiveCapacityUsedHasBeenSet = true;
}

bool Summary::ArchiveCapacityUsedHasBeenSet() const
{
    return m_archiveCapacityUsedHasBeenSet;
}

uint64_t Summary::GetDeepArchiveCapacityUsed() const
{
    return m_deepArchiveCapacityUsed;
}

void Summary::SetDeepArchiveCapacityUsed(const uint64_t& _deepArchiveCapacityUsed)
{
    m_deepArchiveCapacityUsed = _deepArchiveCapacityUsed;
    m_deepArchiveCapacityUsedHasBeenSet = true;
}

bool Summary::DeepArchiveCapacityUsedHasBeenSet() const
{
    return m_deepArchiveCapacityUsedHasBeenSet;
}

uint64_t Summary::GetIntelligentCapacityUsed() const
{
    return m_intelligentCapacityUsed;
}

void Summary::SetIntelligentCapacityUsed(const uint64_t& _intelligentCapacityUsed)
{
    m_intelligentCapacityUsed = _intelligentCapacityUsed;
    m_intelligentCapacityUsedHasBeenSet = true;
}

bool Summary::IntelligentCapacityUsedHasBeenSet() const
{
    return m_intelligentCapacityUsedHasBeenSet;
}

