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

#include <tencentcloud/ctem/v20231128/model/DisplayJobRecordDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayJobRecordDetail::DisplayJobRecordDetail() :
    m_timeAtHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_moduleNameHasBeenSet(false),
    m_jobRecordIdHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome DisplayJobRecordDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeAt") && !value["TimeAt"].IsNull())
    {
        if (!value["TimeAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecordDetail.TimeAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeAt = string(value["TimeAt"].GetString());
        m_timeAtHasBeenSet = true;
    }

    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecordDetail.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("ModuleName") && !value["ModuleName"].IsNull())
    {
        if (!value["ModuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecordDetail.ModuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleName = string(value["ModuleName"].GetString());
        m_moduleNameHasBeenSet = true;
    }

    if (value.HasMember("JobRecordId") && !value["JobRecordId"].IsNull())
    {
        if (!value["JobRecordId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecordDetail.JobRecordId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobRecordId = value["JobRecordId"].GetInt64();
        m_jobRecordIdHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DisplayJobRecordDetail.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IdndValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayJobRecordDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeAt.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobRecordId, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DisplayJobRecordDetail::GetTimeAt() const
{
    return m_timeAt;
}

void DisplayJobRecordDetail::SetTimeAt(const string& _timeAt)
{
    m_timeAt = _timeAt;
    m_timeAtHasBeenSet = true;
}

bool DisplayJobRecordDetail::TimeAtHasBeenSet() const
{
    return m_timeAtHasBeenSet;
}

string DisplayJobRecordDetail::GetModule() const
{
    return m_module;
}

void DisplayJobRecordDetail::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DisplayJobRecordDetail::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string DisplayJobRecordDetail::GetModuleName() const
{
    return m_moduleName;
}

void DisplayJobRecordDetail::SetModuleName(const string& _moduleName)
{
    m_moduleName = _moduleName;
    m_moduleNameHasBeenSet = true;
}

bool DisplayJobRecordDetail::ModuleNameHasBeenSet() const
{
    return m_moduleNameHasBeenSet;
}

int64_t DisplayJobRecordDetail::GetJobRecordId() const
{
    return m_jobRecordId;
}

void DisplayJobRecordDetail::SetJobRecordId(const int64_t& _jobRecordId)
{
    m_jobRecordId = _jobRecordId;
    m_jobRecordIdHasBeenSet = true;
}

bool DisplayJobRecordDetail::JobRecordIdHasBeenSet() const
{
    return m_jobRecordIdHasBeenSet;
}

vector<IdndValue> DisplayJobRecordDetail::GetData() const
{
    return m_data;
}

void DisplayJobRecordDetail::SetData(const vector<IdndValue>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool DisplayJobRecordDetail::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

