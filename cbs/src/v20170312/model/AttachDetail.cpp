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

#include <tencentcloud/cbs/v20170312/model/AttachDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

AttachDetail::AttachDetail() :
    m_instanceIdHasBeenSet(false),
    m_attachedDiskCountHasBeenSet(false),
    m_maxAttachCountHasBeenSet(false)
{
}

CoreInternalOutcome AttachDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AttachedDiskCount") && !value["AttachedDiskCount"].IsNull())
    {
        if (!value["AttachedDiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachDetail.AttachedDiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attachedDiskCount = value["AttachedDiskCount"].GetUint64();
        m_attachedDiskCountHasBeenSet = true;
    }

    if (value.HasMember("MaxAttachCount") && !value["MaxAttachCount"].IsNull())
    {
        if (!value["MaxAttachCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttachDetail.MaxAttachCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAttachCount = value["MaxAttachCount"].GetUint64();
        m_maxAttachCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedDiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachedDiskCount, allocator);
    }

    if (m_maxAttachCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAttachCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAttachCount, allocator);
    }

}


string AttachDetail::GetInstanceId() const
{
    return m_instanceId;
}

void AttachDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AttachDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t AttachDetail::GetAttachedDiskCount() const
{
    return m_attachedDiskCount;
}

void AttachDetail::SetAttachedDiskCount(const uint64_t& _attachedDiskCount)
{
    m_attachedDiskCount = _attachedDiskCount;
    m_attachedDiskCountHasBeenSet = true;
}

bool AttachDetail::AttachedDiskCountHasBeenSet() const
{
    return m_attachedDiskCountHasBeenSet;
}

uint64_t AttachDetail::GetMaxAttachCount() const
{
    return m_maxAttachCount;
}

void AttachDetail::SetMaxAttachCount(const uint64_t& _maxAttachCount)
{
    m_maxAttachCount = _maxAttachCount;
    m_maxAttachCountHasBeenSet = true;
}

bool AttachDetail::MaxAttachCountHasBeenSet() const
{
    return m_maxAttachCountHasBeenSet;
}

