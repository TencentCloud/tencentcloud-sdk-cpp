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

#include <tencentcloud/iotexplorer/v20190423/model/VideoLicenseEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

VideoLicenseEntity::VideoLicenseEntity() :
    m_typeHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_usedCountHasBeenSet(false),
    m_expiresSoonCountHasBeenSet(false)
{
}

CoreInternalOutcome VideoLicenseEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoLicenseEntity.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoLicenseEntity.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("UsedCount") && !value["UsedCount"].IsNull())
    {
        if (!value["UsedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoLicenseEntity.UsedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedCount = value["UsedCount"].GetInt64();
        m_usedCountHasBeenSet = true;
    }

    if (value.HasMember("ExpiresSoonCount") && !value["ExpiresSoonCount"].IsNull())
    {
        if (!value["ExpiresSoonCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoLicenseEntity.ExpiresSoonCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiresSoonCount = value["ExpiresSoonCount"].GetInt64();
        m_expiresSoonCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoLicenseEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_usedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedCount, allocator);
    }

    if (m_expiresSoonCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresSoonCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiresSoonCount, allocator);
    }

}


string VideoLicenseEntity::GetType() const
{
    return m_type;
}

void VideoLicenseEntity::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VideoLicenseEntity::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t VideoLicenseEntity::GetTotalCount() const
{
    return m_totalCount;
}

void VideoLicenseEntity::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool VideoLicenseEntity::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t VideoLicenseEntity::GetUsedCount() const
{
    return m_usedCount;
}

void VideoLicenseEntity::SetUsedCount(const int64_t& _usedCount)
{
    m_usedCount = _usedCount;
    m_usedCountHasBeenSet = true;
}

bool VideoLicenseEntity::UsedCountHasBeenSet() const
{
    return m_usedCountHasBeenSet;
}

int64_t VideoLicenseEntity::GetExpiresSoonCount() const
{
    return m_expiresSoonCount;
}

void VideoLicenseEntity::SetExpiresSoonCount(const int64_t& _expiresSoonCount)
{
    m_expiresSoonCount = _expiresSoonCount;
    m_expiresSoonCountHasBeenSet = true;
}

bool VideoLicenseEntity::ExpiresSoonCountHasBeenSet() const
{
    return m_expiresSoonCountHasBeenSet;
}

