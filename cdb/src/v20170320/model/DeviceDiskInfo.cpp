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

#include <tencentcloud/cdb/v20170320/model/DeviceDiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

DeviceDiskInfo::DeviceDiskInfo() :
    m_ioRatioPerSecHasBeenSet(false),
    m_ioWaitTimeHasBeenSet(false),
    m_readHasBeenSet(false),
    m_writeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceDiskInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("IoRatioPerSec") && !value["IoRatioPerSec"].IsNull())
    {
        if (!value["IoRatioPerSec"].IsArray())
            return CoreInternalOutcome(Error("response `DeviceDiskInfo.IoRatioPerSec` is not array type"));

        const Value &tmpValue = value["IoRatioPerSec"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ioRatioPerSec.push_back((*itr).GetInt64());
        }
        m_ioRatioPerSecHasBeenSet = true;
    }

    if (value.HasMember("IoWaitTime") && !value["IoWaitTime"].IsNull())
    {
        if (!value["IoWaitTime"].IsArray())
            return CoreInternalOutcome(Error("response `DeviceDiskInfo.IoWaitTime` is not array type"));

        const Value &tmpValue = value["IoWaitTime"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ioWaitTime.push_back((*itr).GetInt64());
        }
        m_ioWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("Read") && !value["Read"].IsNull())
    {
        if (!value["Read"].IsArray())
            return CoreInternalOutcome(Error("response `DeviceDiskInfo.Read` is not array type"));

        const Value &tmpValue = value["Read"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_read.push_back((*itr).GetInt64());
        }
        m_readHasBeenSet = true;
    }

    if (value.HasMember("Write") && !value["Write"].IsNull())
    {
        if (!value["Write"].IsArray())
            return CoreInternalOutcome(Error("response `DeviceDiskInfo.Write` is not array type"));

        const Value &tmpValue = value["Write"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_write.push_back((*itr).GetInt64());
        }
        m_writeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceDiskInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_ioRatioPerSecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IoRatioPerSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ioRatioPerSec.begin(); itr != m_ioRatioPerSec.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_ioWaitTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IoWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ioWaitTime.begin(); itr != m_ioWaitTime.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_readHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Read";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_read.begin(); itr != m_read.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_writeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Write";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_write.begin(); itr != m_write.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> DeviceDiskInfo::GetIoRatioPerSec() const
{
    return m_ioRatioPerSec;
}

void DeviceDiskInfo::SetIoRatioPerSec(const vector<int64_t>& _ioRatioPerSec)
{
    m_ioRatioPerSec = _ioRatioPerSec;
    m_ioRatioPerSecHasBeenSet = true;
}

bool DeviceDiskInfo::IoRatioPerSecHasBeenSet() const
{
    return m_ioRatioPerSecHasBeenSet;
}

vector<int64_t> DeviceDiskInfo::GetIoWaitTime() const
{
    return m_ioWaitTime;
}

void DeviceDiskInfo::SetIoWaitTime(const vector<int64_t>& _ioWaitTime)
{
    m_ioWaitTime = _ioWaitTime;
    m_ioWaitTimeHasBeenSet = true;
}

bool DeviceDiskInfo::IoWaitTimeHasBeenSet() const
{
    return m_ioWaitTimeHasBeenSet;
}

vector<int64_t> DeviceDiskInfo::GetRead() const
{
    return m_read;
}

void DeviceDiskInfo::SetRead(const vector<int64_t>& _read)
{
    m_read = _read;
    m_readHasBeenSet = true;
}

bool DeviceDiskInfo::ReadHasBeenSet() const
{
    return m_readHasBeenSet;
}

vector<int64_t> DeviceDiskInfo::GetWrite() const
{
    return m_write;
}

void DeviceDiskInfo::SetWrite(const vector<int64_t>& _write)
{
    m_write = _write;
    m_writeHasBeenSet = true;
}

bool DeviceDiskInfo::WriteHasBeenSet() const
{
    return m_writeHasBeenSet;
}

