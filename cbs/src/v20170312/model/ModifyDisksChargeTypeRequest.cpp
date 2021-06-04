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

#include <tencentcloud/cbs/v20170312/model/ModifyDisksChargeTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

ModifyDisksChargeTypeRequest::ModifyDisksChargeTypeRequest() :
    m_diskIdsHasBeenSet(false),
    m_diskChargePrepaidHasBeenSet(false),
    m_diskChargePostpaidHasBeenSet(false)
{
}

string ModifyDisksChargeTypeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_diskIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_diskIds.begin(); itr != m_diskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diskChargePrepaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_diskChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskChargePostpaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskChargePostpaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskChargePostpaid, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDisksChargeTypeRequest::GetDiskIds() const
{
    return m_diskIds;
}

void ModifyDisksChargeTypeRequest::SetDiskIds(const vector<string>& _diskIds)
{
    m_diskIds = _diskIds;
    m_diskIdsHasBeenSet = true;
}

bool ModifyDisksChargeTypeRequest::DiskIdsHasBeenSet() const
{
    return m_diskIdsHasBeenSet;
}

DiskChargePrepaid ModifyDisksChargeTypeRequest::GetDiskChargePrepaid() const
{
    return m_diskChargePrepaid;
}

void ModifyDisksChargeTypeRequest::SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid)
{
    m_diskChargePrepaid = _diskChargePrepaid;
    m_diskChargePrepaidHasBeenSet = true;
}

bool ModifyDisksChargeTypeRequest::DiskChargePrepaidHasBeenSet() const
{
    return m_diskChargePrepaidHasBeenSet;
}

bool ModifyDisksChargeTypeRequest::GetDiskChargePostpaid() const
{
    return m_diskChargePostpaid;
}

void ModifyDisksChargeTypeRequest::SetDiskChargePostpaid(const bool& _diskChargePostpaid)
{
    m_diskChargePostpaid = _diskChargePostpaid;
    m_diskChargePostpaidHasBeenSet = true;
}

bool ModifyDisksChargeTypeRequest::DiskChargePostpaidHasBeenSet() const
{
    return m_diskChargePostpaidHasBeenSet;
}


