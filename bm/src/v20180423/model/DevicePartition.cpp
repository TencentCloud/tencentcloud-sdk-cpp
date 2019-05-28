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

#include <tencentcloud/bm/v20180423/model/DevicePartition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace rapidjson;
using namespace std;

DevicePartition::DevicePartition() :
    m_systemDiskSizeHasBeenSet(false),
    m_dataDiskSizeHasBeenSet(false),
    m_sysIsUefiTypeHasBeenSet(false),
    m_sysRootSpaceHasBeenSet(false),
    m_sysSwaporuefiSpaceHasBeenSet(false),
    m_sysUsrlocalSpaceHasBeenSet(false),
    m_sysDataSpaceHasBeenSet(false)
{
}

CoreInternalOutcome DevicePartition::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SystemDiskSize") && !value["SystemDiskSize"].IsNull())
    {
        if (!value["SystemDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DevicePartition.SystemDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskSize = value["SystemDiskSize"].GetUint64();
        m_systemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("DataDiskSize") && !value["DataDiskSize"].IsNull())
    {
        if (!value["DataDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DevicePartition.DataDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskSize = value["DataDiskSize"].GetUint64();
        m_dataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("SysIsUefiType") && !value["SysIsUefiType"].IsNull())
    {
        if (!value["SysIsUefiType"].IsBool())
        {
            return CoreInternalOutcome(Error("response `DevicePartition.SysIsUefiType` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sysIsUefiType = value["SysIsUefiType"].GetBool();
        m_sysIsUefiTypeHasBeenSet = true;
    }

    if (value.HasMember("SysRootSpace") && !value["SysRootSpace"].IsNull())
    {
        if (!value["SysRootSpace"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DevicePartition.SysRootSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sysRootSpace = value["SysRootSpace"].GetUint64();
        m_sysRootSpaceHasBeenSet = true;
    }

    if (value.HasMember("SysSwaporuefiSpace") && !value["SysSwaporuefiSpace"].IsNull())
    {
        if (!value["SysSwaporuefiSpace"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DevicePartition.SysSwaporuefiSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sysSwaporuefiSpace = value["SysSwaporuefiSpace"].GetUint64();
        m_sysSwaporuefiSpaceHasBeenSet = true;
    }

    if (value.HasMember("SysUsrlocalSpace") && !value["SysUsrlocalSpace"].IsNull())
    {
        if (!value["SysUsrlocalSpace"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DevicePartition.SysUsrlocalSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sysUsrlocalSpace = value["SysUsrlocalSpace"].GetUint64();
        m_sysUsrlocalSpaceHasBeenSet = true;
    }

    if (value.HasMember("SysDataSpace") && !value["SysDataSpace"].IsNull())
    {
        if (!value["SysDataSpace"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DevicePartition.SysDataSpace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sysDataSpace = value["SysDataSpace"].GetUint64();
        m_sysDataSpaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicePartition::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_systemDiskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemDiskSize, allocator);
    }

    if (m_dataDiskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskSize, allocator);
    }

    if (m_sysIsUefiTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SysIsUefiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysIsUefiType, allocator);
    }

    if (m_sysRootSpaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SysRootSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysRootSpace, allocator);
    }

    if (m_sysSwaporuefiSpaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SysSwaporuefiSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysSwaporuefiSpace, allocator);
    }

    if (m_sysUsrlocalSpaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SysUsrlocalSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysUsrlocalSpace, allocator);
    }

    if (m_sysDataSpaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SysDataSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysDataSpace, allocator);
    }

}


uint64_t DevicePartition::GetSystemDiskSize() const
{
    return m_systemDiskSize;
}

void DevicePartition::SetSystemDiskSize(const uint64_t& _systemDiskSize)
{
    m_systemDiskSize = _systemDiskSize;
    m_systemDiskSizeHasBeenSet = true;
}

bool DevicePartition::SystemDiskSizeHasBeenSet() const
{
    return m_systemDiskSizeHasBeenSet;
}

uint64_t DevicePartition::GetDataDiskSize() const
{
    return m_dataDiskSize;
}

void DevicePartition::SetDataDiskSize(const uint64_t& _dataDiskSize)
{
    m_dataDiskSize = _dataDiskSize;
    m_dataDiskSizeHasBeenSet = true;
}

bool DevicePartition::DataDiskSizeHasBeenSet() const
{
    return m_dataDiskSizeHasBeenSet;
}

bool DevicePartition::GetSysIsUefiType() const
{
    return m_sysIsUefiType;
}

void DevicePartition::SetSysIsUefiType(const bool& _sysIsUefiType)
{
    m_sysIsUefiType = _sysIsUefiType;
    m_sysIsUefiTypeHasBeenSet = true;
}

bool DevicePartition::SysIsUefiTypeHasBeenSet() const
{
    return m_sysIsUefiTypeHasBeenSet;
}

uint64_t DevicePartition::GetSysRootSpace() const
{
    return m_sysRootSpace;
}

void DevicePartition::SetSysRootSpace(const uint64_t& _sysRootSpace)
{
    m_sysRootSpace = _sysRootSpace;
    m_sysRootSpaceHasBeenSet = true;
}

bool DevicePartition::SysRootSpaceHasBeenSet() const
{
    return m_sysRootSpaceHasBeenSet;
}

uint64_t DevicePartition::GetSysSwaporuefiSpace() const
{
    return m_sysSwaporuefiSpace;
}

void DevicePartition::SetSysSwaporuefiSpace(const uint64_t& _sysSwaporuefiSpace)
{
    m_sysSwaporuefiSpace = _sysSwaporuefiSpace;
    m_sysSwaporuefiSpaceHasBeenSet = true;
}

bool DevicePartition::SysSwaporuefiSpaceHasBeenSet() const
{
    return m_sysSwaporuefiSpaceHasBeenSet;
}

uint64_t DevicePartition::GetSysUsrlocalSpace() const
{
    return m_sysUsrlocalSpace;
}

void DevicePartition::SetSysUsrlocalSpace(const uint64_t& _sysUsrlocalSpace)
{
    m_sysUsrlocalSpace = _sysUsrlocalSpace;
    m_sysUsrlocalSpaceHasBeenSet = true;
}

bool DevicePartition::SysUsrlocalSpaceHasBeenSet() const
{
    return m_sysUsrlocalSpaceHasBeenSet;
}

uint64_t DevicePartition::GetSysDataSpace() const
{
    return m_sysDataSpace;
}

void DevicePartition::SetSysDataSpace(const uint64_t& _sysDataSpace)
{
    m_sysDataSpace = _sysDataSpace;
    m_sysDataSpaceHasBeenSet = true;
}

bool DevicePartition::SysDataSpaceHasBeenSet() const
{
    return m_sysDataSpaceHasBeenSet;
}

