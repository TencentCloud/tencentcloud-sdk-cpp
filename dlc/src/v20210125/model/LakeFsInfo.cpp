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

#include <tencentcloud/dlc/v20210125/model/LakeFsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LakeFsInfo::LakeFsInfo() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_spaceUsedSizeHasBeenSet(false),
    m_createTimeStampHasBeenSet(false),
    m_defaultBucketHasBeenSet(false),
    m_shortNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome LakeFsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFsInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFsInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SpaceUsedSize") && !value["SpaceUsedSize"].IsNull())
    {
        if (!value["SpaceUsedSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFsInfo.SpaceUsedSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_spaceUsedSize = value["SpaceUsedSize"].GetDouble();
        m_spaceUsedSizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTimeStamp") && !value["CreateTimeStamp"].IsNull())
    {
        if (!value["CreateTimeStamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFsInfo.CreateTimeStamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTimeStamp = value["CreateTimeStamp"].GetInt64();
        m_createTimeStampHasBeenSet = true;
    }

    if (value.HasMember("DefaultBucket") && !value["DefaultBucket"].IsNull())
    {
        if (!value["DefaultBucket"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFsInfo.DefaultBucket` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultBucket = value["DefaultBucket"].GetInt64();
        m_defaultBucketHasBeenSet = true;
    }

    if (value.HasMember("ShortName") && !value["ShortName"].IsNull())
    {
        if (!value["ShortName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFsInfo.ShortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortName = string(value["ShortName"].GetString());
        m_shortNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFsInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LakeFsInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LakeFsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceUsedSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceUsedSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spaceUsedSize, allocator);
    }

    if (m_createTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTimeStamp, allocator);
    }

    if (m_defaultBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultBucket, allocator);
    }

    if (m_shortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string LakeFsInfo::GetName() const
{
    return m_name;
}

void LakeFsInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LakeFsInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LakeFsInfo::GetType() const
{
    return m_type;
}

void LakeFsInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LakeFsInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

double LakeFsInfo::GetSpaceUsedSize() const
{
    return m_spaceUsedSize;
}

void LakeFsInfo::SetSpaceUsedSize(const double& _spaceUsedSize)
{
    m_spaceUsedSize = _spaceUsedSize;
    m_spaceUsedSizeHasBeenSet = true;
}

bool LakeFsInfo::SpaceUsedSizeHasBeenSet() const
{
    return m_spaceUsedSizeHasBeenSet;
}

int64_t LakeFsInfo::GetCreateTimeStamp() const
{
    return m_createTimeStamp;
}

void LakeFsInfo::SetCreateTimeStamp(const int64_t& _createTimeStamp)
{
    m_createTimeStamp = _createTimeStamp;
    m_createTimeStampHasBeenSet = true;
}

bool LakeFsInfo::CreateTimeStampHasBeenSet() const
{
    return m_createTimeStampHasBeenSet;
}

int64_t LakeFsInfo::GetDefaultBucket() const
{
    return m_defaultBucket;
}

void LakeFsInfo::SetDefaultBucket(const int64_t& _defaultBucket)
{
    m_defaultBucket = _defaultBucket;
    m_defaultBucketHasBeenSet = true;
}

bool LakeFsInfo::DefaultBucketHasBeenSet() const
{
    return m_defaultBucketHasBeenSet;
}

string LakeFsInfo::GetShortName() const
{
    return m_shortName;
}

void LakeFsInfo::SetShortName(const string& _shortName)
{
    m_shortName = _shortName;
    m_shortNameHasBeenSet = true;
}

bool LakeFsInfo::ShortNameHasBeenSet() const
{
    return m_shortNameHasBeenSet;
}

string LakeFsInfo::GetDescription() const
{
    return m_description;
}

void LakeFsInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LakeFsInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LakeFsInfo::GetStatus() const
{
    return m_status;
}

void LakeFsInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LakeFsInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

