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

#include <tencentcloud/es/v20180416/model/DiDataSourceCvm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiDataSourceCvm::DiDataSourceCvm() :
    m_vpcIdHasBeenSet(false),
    m_logPathsHasBeenSet(false),
    m_cvmInstancesHasBeenSet(false),
    m_collectorIdHasBeenSet(false)
{
}

CoreInternalOutcome DiDataSourceCvm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceCvm.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("LogPaths") && !value["LogPaths"].IsNull())
    {
        if (!value["LogPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiDataSourceCvm.LogPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["LogPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logPaths.push_back((*itr).GetString());
        }
        m_logPathsHasBeenSet = true;
    }

    if (value.HasMember("CvmInstances") && !value["CvmInstances"].IsNull())
    {
        if (!value["CvmInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiDataSourceCvm.CvmInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["CvmInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiDataSourceCvmInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cvmInstances.push_back(item);
        }
        m_cvmInstancesHasBeenSet = true;
    }

    if (value.HasMember("CollectorId") && !value["CollectorId"].IsNull())
    {
        if (!value["CollectorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSourceCvm.CollectorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectorId = string(value["CollectorId"].GetString());
        m_collectorIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiDataSourceCvm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_logPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logPaths.begin(); itr != m_logPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cvmInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cvmInstances.begin(); itr != m_cvmInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_collectorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectorId.c_str(), allocator).Move(), allocator);
    }

}


string DiDataSourceCvm::GetVpcId() const
{
    return m_vpcId;
}

void DiDataSourceCvm::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DiDataSourceCvm::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> DiDataSourceCvm::GetLogPaths() const
{
    return m_logPaths;
}

void DiDataSourceCvm::SetLogPaths(const vector<string>& _logPaths)
{
    m_logPaths = _logPaths;
    m_logPathsHasBeenSet = true;
}

bool DiDataSourceCvm::LogPathsHasBeenSet() const
{
    return m_logPathsHasBeenSet;
}

vector<DiDataSourceCvmInstance> DiDataSourceCvm::GetCvmInstances() const
{
    return m_cvmInstances;
}

void DiDataSourceCvm::SetCvmInstances(const vector<DiDataSourceCvmInstance>& _cvmInstances)
{
    m_cvmInstances = _cvmInstances;
    m_cvmInstancesHasBeenSet = true;
}

bool DiDataSourceCvm::CvmInstancesHasBeenSet() const
{
    return m_cvmInstancesHasBeenSet;
}

string DiDataSourceCvm::GetCollectorId() const
{
    return m_collectorId;
}

void DiDataSourceCvm::SetCollectorId(const string& _collectorId)
{
    m_collectorId = _collectorId;
    m_collectorIdHasBeenSet = true;
}

bool DiDataSourceCvm::CollectorIdHasBeenSet() const
{
    return m_collectorIdHasBeenSet;
}

