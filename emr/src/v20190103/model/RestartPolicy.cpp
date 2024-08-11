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

#include <tencentcloud/emr/v20190103/model/RestartPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

RestartPolicy::RestartPolicy() :
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_batchSizeRangeHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

CoreInternalOutcome RestartPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestartPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestartPolicy.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestartPolicy.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("BatchSizeRange") && !value["BatchSizeRange"].IsNull())
    {
        if (!value["BatchSizeRange"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RestartPolicy.BatchSizeRange` is not array type"));

        const rapidjson::Value &tmpValue = value["BatchSizeRange"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_batchSizeRange.push_back((*itr).GetInt64());
        }
        m_batchSizeRangeHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestartPolicy.IsDefault` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = string(value["IsDefault"].GetString());
        m_isDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RestartPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_batchSizeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchSizeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_batchSizeRange.begin(); itr != m_batchSizeRange.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isDefault.c_str(), allocator).Move(), allocator);
    }

}


string RestartPolicy::GetName() const
{
    return m_name;
}

void RestartPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RestartPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RestartPolicy::GetDisplayName() const
{
    return m_displayName;
}

void RestartPolicy::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool RestartPolicy::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string RestartPolicy::GetDescribe() const
{
    return m_describe;
}

void RestartPolicy::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool RestartPolicy::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

vector<int64_t> RestartPolicy::GetBatchSizeRange() const
{
    return m_batchSizeRange;
}

void RestartPolicy::SetBatchSizeRange(const vector<int64_t>& _batchSizeRange)
{
    m_batchSizeRange = _batchSizeRange;
    m_batchSizeRangeHasBeenSet = true;
}

bool RestartPolicy::BatchSizeRangeHasBeenSet() const
{
    return m_batchSizeRangeHasBeenSet;
}

string RestartPolicy::GetIsDefault() const
{
    return m_isDefault;
}

void RestartPolicy::SetIsDefault(const string& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool RestartPolicy::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

