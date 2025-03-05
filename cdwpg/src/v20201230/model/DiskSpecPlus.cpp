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

#include <tencentcloud/cdwpg/v20201230/model/DiskSpecPlus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

DiskSpecPlus::DiskSpecPlus() :
    m_diskCountHasBeenSet(false),
    m_maxDiskSizeHasBeenSet(false),
    m_minDiskSizeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskDescHasBeenSet(false),
    m_cvmClassHasBeenSet(false)
{
}

CoreInternalOutcome DiskSpecPlus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskCount") && !value["DiskCount"].IsNull())
    {
        if (!value["DiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecPlus.DiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCount = value["DiskCount"].GetInt64();
        m_diskCountHasBeenSet = true;
    }

    if (value.HasMember("MaxDiskSize") && !value["MaxDiskSize"].IsNull())
    {
        if (!value["MaxDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecPlus.MaxDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDiskSize = value["MaxDiskSize"].GetInt64();
        m_maxDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MinDiskSize") && !value["MinDiskSize"].IsNull())
    {
        if (!value["MinDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecPlus.MinDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minDiskSize = value["MinDiskSize"].GetInt64();
        m_minDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecPlus.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskDesc") && !value["DiskDesc"].IsNull())
    {
        if (!value["DiskDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecPlus.DiskDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskDesc = string(value["DiskDesc"].GetString());
        m_diskDescHasBeenSet = true;
    }

    if (value.HasMember("CvmClass") && !value["CvmClass"].IsNull())
    {
        if (!value["CvmClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpecPlus.CvmClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmClass = string(value["CvmClass"].GetString());
        m_cvmClassHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskSpecPlus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCount, allocator);
    }

    if (m_maxDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDiskSize, allocator);
    }

    if (m_minDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minDiskSize, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmClass.c_str(), allocator).Move(), allocator);
    }

}


int64_t DiskSpecPlus::GetDiskCount() const
{
    return m_diskCount;
}

void DiskSpecPlus::SetDiskCount(const int64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool DiskSpecPlus::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

int64_t DiskSpecPlus::GetMaxDiskSize() const
{
    return m_maxDiskSize;
}

void DiskSpecPlus::SetMaxDiskSize(const int64_t& _maxDiskSize)
{
    m_maxDiskSize = _maxDiskSize;
    m_maxDiskSizeHasBeenSet = true;
}

bool DiskSpecPlus::MaxDiskSizeHasBeenSet() const
{
    return m_maxDiskSizeHasBeenSet;
}

int64_t DiskSpecPlus::GetMinDiskSize() const
{
    return m_minDiskSize;
}

void DiskSpecPlus::SetMinDiskSize(const int64_t& _minDiskSize)
{
    m_minDiskSize = _minDiskSize;
    m_minDiskSizeHasBeenSet = true;
}

bool DiskSpecPlus::MinDiskSizeHasBeenSet() const
{
    return m_minDiskSizeHasBeenSet;
}

string DiskSpecPlus::GetDiskType() const
{
    return m_diskType;
}

void DiskSpecPlus::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DiskSpecPlus::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string DiskSpecPlus::GetDiskDesc() const
{
    return m_diskDesc;
}

void DiskSpecPlus::SetDiskDesc(const string& _diskDesc)
{
    m_diskDesc = _diskDesc;
    m_diskDescHasBeenSet = true;
}

bool DiskSpecPlus::DiskDescHasBeenSet() const
{
    return m_diskDescHasBeenSet;
}

string DiskSpecPlus::GetCvmClass() const
{
    return m_cvmClass;
}

void DiskSpecPlus::SetCvmClass(const string& _cvmClass)
{
    m_cvmClass = _cvmClass;
    m_cvmClassHasBeenSet = true;
}

bool DiskSpecPlus::CvmClassHasBeenSet() const
{
    return m_cvmClassHasBeenSet;
}

