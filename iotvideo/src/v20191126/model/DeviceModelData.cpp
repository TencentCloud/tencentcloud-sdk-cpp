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

#include <tencentcloud/iotvideo/v20191126/model/DeviceModelData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

DeviceModelData::DeviceModelData() :
    m_tidHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_iotModelHasBeenSet(false)
{
}

CoreInternalOutcome DeviceModelData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceModelData.Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(value["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("Branch") && !value["Branch"].IsNull())
    {
        if (!value["Branch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceModelData.Branch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_branch = string(value["Branch"].GetString());
        m_branchHasBeenSet = true;
    }

    if (value.HasMember("IotModel") && !value["IotModel"].IsNull())
    {
        if (!value["IotModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceModelData.IotModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iotModel = string(value["IotModel"].GetString());
        m_iotModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceModelData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

    if (m_iotModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iotModel.c_str(), allocator).Move(), allocator);
    }

}


string DeviceModelData::GetTid() const
{
    return m_tid;
}

void DeviceModelData::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool DeviceModelData::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string DeviceModelData::GetBranch() const
{
    return m_branch;
}

void DeviceModelData::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool DeviceModelData::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

string DeviceModelData::GetIotModel() const
{
    return m_iotModel;
}

void DeviceModelData::SetIotModel(const string& _iotModel)
{
    m_iotModel = _iotModel;
    m_iotModelHasBeenSet = true;
}

bool DeviceModelData::IotModelHasBeenSet() const
{
    return m_iotModelHasBeenSet;
}

