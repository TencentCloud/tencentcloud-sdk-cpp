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

#include <tencentcloud/cdwpg/v20201230/model/InstanceNodeGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

InstanceNodeGroup::InstanceNodeGroup() :
    m_specNameHasBeenSet(false),
    m_dataDiskHasBeenSet(false),
    m_cvmCountHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNodeGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeGroup.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("DataDisk") && !value["DataDisk"].IsNull())
    {
        if (!value["DataDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeGroup.DataDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataDisk.Deserialize(value["DataDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataDiskHasBeenSet = true;
    }

    if (value.HasMember("CvmCount") && !value["CvmCount"].IsNull())
    {
        if (!value["CvmCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeGroup.CvmCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmCount = value["CvmCount"].GetInt64();
        m_cvmCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNodeGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cvmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvmCount, allocator);
    }

}


string InstanceNodeGroup::GetSpecName() const
{
    return m_specName;
}

void InstanceNodeGroup::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool InstanceNodeGroup::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

DiskSpecPlus InstanceNodeGroup::GetDataDisk() const
{
    return m_dataDisk;
}

void InstanceNodeGroup::SetDataDisk(const DiskSpecPlus& _dataDisk)
{
    m_dataDisk = _dataDisk;
    m_dataDiskHasBeenSet = true;
}

bool InstanceNodeGroup::DataDiskHasBeenSet() const
{
    return m_dataDiskHasBeenSet;
}

int64_t InstanceNodeGroup::GetCvmCount() const
{
    return m_cvmCount;
}

void InstanceNodeGroup::SetCvmCount(const int64_t& _cvmCount)
{
    m_cvmCount = _cvmCount;
    m_cvmCountHasBeenSet = true;
}

bool InstanceNodeGroup::CvmCountHasBeenSet() const
{
    return m_cvmCountHasBeenSet;
}

