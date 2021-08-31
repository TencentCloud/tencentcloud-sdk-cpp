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

#include <tencentcloud/cwp/v20180228/model/BaselineBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineBasicInfo::BaselineBasicInfo() :
    m_nameHasBeenSet(false),
    m_baselineIdHasBeenSet(false),
    m_parentIdHasBeenSet(false)
{
}

CoreInternalOutcome BaselineBasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineBasicInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BaselineId") && !value["BaselineId"].IsNull())
    {
        if (!value["BaselineId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineBasicInfo.BaselineId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineId = value["BaselineId"].GetUint64();
        m_baselineIdHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineBasicInfo.ParentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetUint64();
        m_parentIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineBasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineId, allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

}


string BaselineBasicInfo::GetName() const
{
    return m_name;
}

void BaselineBasicInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BaselineBasicInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t BaselineBasicInfo::GetBaselineId() const
{
    return m_baselineId;
}

void BaselineBasicInfo::SetBaselineId(const uint64_t& _baselineId)
{
    m_baselineId = _baselineId;
    m_baselineIdHasBeenSet = true;
}

bool BaselineBasicInfo::BaselineIdHasBeenSet() const
{
    return m_baselineIdHasBeenSet;
}

uint64_t BaselineBasicInfo::GetParentId() const
{
    return m_parentId;
}

void BaselineBasicInfo::SetParentId(const uint64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool BaselineBasicInfo::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

