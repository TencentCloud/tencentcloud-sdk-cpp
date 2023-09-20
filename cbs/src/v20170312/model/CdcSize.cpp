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

#include <tencentcloud/cbs/v20170312/model/CdcSize.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

CdcSize::CdcSize() :
    m_diskTotalHasBeenSet(false),
    m_diskAvailableHasBeenSet(false)
{
}

CoreInternalOutcome CdcSize::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskTotal") && !value["DiskTotal"].IsNull())
    {
        if (!value["DiskTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CdcSize.DiskTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskTotal = value["DiskTotal"].GetUint64();
        m_diskTotalHasBeenSet = true;
    }

    if (value.HasMember("DiskAvailable") && !value["DiskAvailable"].IsNull())
    {
        if (!value["DiskAvailable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CdcSize.DiskAvailable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAvailable = value["DiskAvailable"].GetUint64();
        m_diskAvailableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdcSize::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskTotal, allocator);
    }

    if (m_diskAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskAvailable, allocator);
    }

}


uint64_t CdcSize::GetDiskTotal() const
{
    return m_diskTotal;
}

void CdcSize::SetDiskTotal(const uint64_t& _diskTotal)
{
    m_diskTotal = _diskTotal;
    m_diskTotalHasBeenSet = true;
}

bool CdcSize::DiskTotalHasBeenSet() const
{
    return m_diskTotalHasBeenSet;
}

uint64_t CdcSize::GetDiskAvailable() const
{
    return m_diskAvailable;
}

void CdcSize::SetDiskAvailable(const uint64_t& _diskAvailable)
{
    m_diskAvailable = _diskAvailable;
    m_diskAvailableHasBeenSet = true;
}

bool CdcSize::DiskAvailableHasBeenSet() const
{
    return m_diskAvailableHasBeenSet;
}

