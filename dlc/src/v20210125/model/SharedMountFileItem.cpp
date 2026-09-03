/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dlc/v20210125/model/SharedMountFileItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SharedMountFileItem::SharedMountFileItem() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

CoreInternalOutcome SharedMountFileItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedMountFileItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedMountFileItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SharedMountFileItem.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("LastModified") && !value["LastModified"].IsNull())
    {
        if (!value["LastModified"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SharedMountFileItem.LastModified` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModified = value["LastModified"].GetInt64();
        m_lastModifiedHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SharedMountFileItem.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SharedMountFileItem.Metrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metrics.Deserialize(value["Metrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SharedMountFileItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_lastModifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModified, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metrics.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SharedMountFileItem::GetName() const
{
    return m_name;
}

void SharedMountFileItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SharedMountFileItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SharedMountFileItem::GetType() const
{
    return m_type;
}

void SharedMountFileItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SharedMountFileItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t SharedMountFileItem::GetSize() const
{
    return m_size;
}

void SharedMountFileItem::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SharedMountFileItem::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t SharedMountFileItem::GetLastModified() const
{
    return m_lastModified;
}

void SharedMountFileItem::SetLastModified(const int64_t& _lastModified)
{
    m_lastModified = _lastModified;
    m_lastModifiedHasBeenSet = true;
}

bool SharedMountFileItem::LastModifiedHasBeenSet() const
{
    return m_lastModifiedHasBeenSet;
}

string SharedMountFileItem::GetPath() const
{
    return m_path;
}

void SharedMountFileItem::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool SharedMountFileItem::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

CheckpointMetrics SharedMountFileItem::GetMetrics() const
{
    return m_metrics;
}

void SharedMountFileItem::SetMetrics(const CheckpointMetrics& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool SharedMountFileItem::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

