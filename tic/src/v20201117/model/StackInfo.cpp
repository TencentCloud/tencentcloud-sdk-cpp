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

#include <tencentcloud/tic/v20201117/model/StackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tic::V20201117::Model;
using namespace std;

StackInfo::StackInfo() :
    m_stackIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome StackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StackId") && !value["StackId"].IsNull())
    {
        if (!value["StackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StackInfo.StackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stackId = string(value["StackId"].GetString());
        m_stackIdHasBeenSet = true;
    }

    if (value.HasMember("StackName") && !value["StackName"].IsNull())
    {
        if (!value["StackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StackInfo.StackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stackName = string(value["StackName"].GetString());
        m_stackNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StackInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StackInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StackInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StackInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stackId.c_str(), allocator).Move(), allocator);
    }

    if (m_stackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stackName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string StackInfo::GetStackId() const
{
    return m_stackId;
}

void StackInfo::SetStackId(const string& _stackId)
{
    m_stackId = _stackId;
    m_stackIdHasBeenSet = true;
}

bool StackInfo::StackIdHasBeenSet() const
{
    return m_stackIdHasBeenSet;
}

string StackInfo::GetStackName() const
{
    return m_stackName;
}

void StackInfo::SetStackName(const string& _stackName)
{
    m_stackName = _stackName;
    m_stackNameHasBeenSet = true;
}

bool StackInfo::StackNameHasBeenSet() const
{
    return m_stackNameHasBeenSet;
}

string StackInfo::GetDescription() const
{
    return m_description;
}

void StackInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool StackInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string StackInfo::GetRegion() const
{
    return m_region;
}

void StackInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool StackInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string StackInfo::GetStatus() const
{
    return m_status;
}

void StackInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StackInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StackInfo::GetCreateTime() const
{
    return m_createTime;
}

void StackInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool StackInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

