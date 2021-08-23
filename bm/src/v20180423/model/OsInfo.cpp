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

#include <tencentcloud/bm/v20180423/model/OsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

OsInfo::OsInfo() :
    m_osTypeIdHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_osDescriptionHasBeenSet(false),
    m_osEnglishDescriptionHasBeenSet(false),
    m_osClassHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_maxPartitionSizeHasBeenSet(false),
    m_osMinorVersionHasBeenSet(false),
    m_osMinorClassHasBeenSet(false)
{
}

CoreInternalOutcome OsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OsTypeId") && !value["OsTypeId"].IsNull())
    {
        if (!value["OsTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OsInfo.OsTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_osTypeId = value["OsTypeId"].GetUint64();
        m_osTypeIdHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsInfo.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("OsDescription") && !value["OsDescription"].IsNull())
    {
        if (!value["OsDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsInfo.OsDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osDescription = string(value["OsDescription"].GetString());
        m_osDescriptionHasBeenSet = true;
    }

    if (value.HasMember("OsEnglishDescription") && !value["OsEnglishDescription"].IsNull())
    {
        if (!value["OsEnglishDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsInfo.OsEnglishDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osEnglishDescription = string(value["OsEnglishDescription"].GetString());
        m_osEnglishDescriptionHasBeenSet = true;
    }

    if (value.HasMember("OsClass") && !value["OsClass"].IsNull())
    {
        if (!value["OsClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsInfo.OsClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osClass = string(value["OsClass"].GetString());
        m_osClassHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("MaxPartitionSize") && !value["MaxPartitionSize"].IsNull())
    {
        if (!value["MaxPartitionSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OsInfo.MaxPartitionSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPartitionSize = value["MaxPartitionSize"].GetUint64();
        m_maxPartitionSizeHasBeenSet = true;
    }

    if (value.HasMember("OsMinorVersion") && !value["OsMinorVersion"].IsNull())
    {
        if (!value["OsMinorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsInfo.OsMinorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osMinorVersion = string(value["OsMinorVersion"].GetString());
        m_osMinorVersionHasBeenSet = true;
    }

    if (value.HasMember("OsMinorClass") && !value["OsMinorClass"].IsNull())
    {
        if (!value["OsMinorClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OsInfo.OsMinorClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osMinorClass = string(value["OsMinorClass"].GetString());
        m_osMinorClassHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_osTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osTypeId, allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_osDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_osEnglishDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsEnglishDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osEnglishDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_osClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osClass.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageTag.c_str(), allocator).Move(), allocator);
    }

    if (m_maxPartitionSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPartitionSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPartitionSize, allocator);
    }

    if (m_osMinorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsMinorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osMinorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_osMinorClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsMinorClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osMinorClass.c_str(), allocator).Move(), allocator);
    }

}


uint64_t OsInfo::GetOsTypeId() const
{
    return m_osTypeId;
}

void OsInfo::SetOsTypeId(const uint64_t& _osTypeId)
{
    m_osTypeId = _osTypeId;
    m_osTypeIdHasBeenSet = true;
}

bool OsInfo::OsTypeIdHasBeenSet() const
{
    return m_osTypeIdHasBeenSet;
}

string OsInfo::GetOsName() const
{
    return m_osName;
}

void OsInfo::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool OsInfo::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string OsInfo::GetOsDescription() const
{
    return m_osDescription;
}

void OsInfo::SetOsDescription(const string& _osDescription)
{
    m_osDescription = _osDescription;
    m_osDescriptionHasBeenSet = true;
}

bool OsInfo::OsDescriptionHasBeenSet() const
{
    return m_osDescriptionHasBeenSet;
}

string OsInfo::GetOsEnglishDescription() const
{
    return m_osEnglishDescription;
}

void OsInfo::SetOsEnglishDescription(const string& _osEnglishDescription)
{
    m_osEnglishDescription = _osEnglishDescription;
    m_osEnglishDescriptionHasBeenSet = true;
}

bool OsInfo::OsEnglishDescriptionHasBeenSet() const
{
    return m_osEnglishDescriptionHasBeenSet;
}

string OsInfo::GetOsClass() const
{
    return m_osClass;
}

void OsInfo::SetOsClass(const string& _osClass)
{
    m_osClass = _osClass;
    m_osClassHasBeenSet = true;
}

bool OsInfo::OsClassHasBeenSet() const
{
    return m_osClassHasBeenSet;
}

string OsInfo::GetImageTag() const
{
    return m_imageTag;
}

void OsInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool OsInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

uint64_t OsInfo::GetMaxPartitionSize() const
{
    return m_maxPartitionSize;
}

void OsInfo::SetMaxPartitionSize(const uint64_t& _maxPartitionSize)
{
    m_maxPartitionSize = _maxPartitionSize;
    m_maxPartitionSizeHasBeenSet = true;
}

bool OsInfo::MaxPartitionSizeHasBeenSet() const
{
    return m_maxPartitionSizeHasBeenSet;
}

string OsInfo::GetOsMinorVersion() const
{
    return m_osMinorVersion;
}

void OsInfo::SetOsMinorVersion(const string& _osMinorVersion)
{
    m_osMinorVersion = _osMinorVersion;
    m_osMinorVersionHasBeenSet = true;
}

bool OsInfo::OsMinorVersionHasBeenSet() const
{
    return m_osMinorVersionHasBeenSet;
}

string OsInfo::GetOsMinorClass() const
{
    return m_osMinorClass;
}

void OsInfo::SetOsMinorClass(const string& _osMinorClass)
{
    m_osMinorClass = _osMinorClass;
    m_osMinorClassHasBeenSet = true;
}

bool OsInfo::OsMinorClassHasBeenSet() const
{
    return m_osMinorClassHasBeenSet;
}

