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

#include <tencentcloud/es/v20180416/model/DiSourceCvm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiSourceCvm::DiSourceCvm() :
    m_vpcIdHasBeenSet(false),
    m_cvmIdsHasBeenSet(false),
    m_logPathsHasBeenSet(false)
{
}

CoreInternalOutcome DiSourceCvm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiSourceCvm.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("CvmIds") && !value["CvmIds"].IsNull())
    {
        if (!value["CvmIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiSourceCvm.CvmIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CvmIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cvmIds.push_back((*itr).GetString());
        }
        m_cvmIdsHasBeenSet = true;
    }

    if (value.HasMember("LogPaths") && !value["LogPaths"].IsNull())
    {
        if (!value["LogPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiSourceCvm.LogPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["LogPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_logPaths.push_back((*itr).GetString());
        }
        m_logPathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiSourceCvm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cvmIds.begin(); itr != m_cvmIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

}


string DiSourceCvm::GetVpcId() const
{
    return m_vpcId;
}

void DiSourceCvm::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DiSourceCvm::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> DiSourceCvm::GetCvmIds() const
{
    return m_cvmIds;
}

void DiSourceCvm::SetCvmIds(const vector<string>& _cvmIds)
{
    m_cvmIds = _cvmIds;
    m_cvmIdsHasBeenSet = true;
}

bool DiSourceCvm::CvmIdsHasBeenSet() const
{
    return m_cvmIdsHasBeenSet;
}

vector<string> DiSourceCvm::GetLogPaths() const
{
    return m_logPaths;
}

void DiSourceCvm::SetLogPaths(const vector<string>& _logPaths)
{
    m_logPaths = _logPaths;
    m_logPathsHasBeenSet = true;
}

bool DiSourceCvm::LogPathsHasBeenSet() const
{
    return m_logPathsHasBeenSet;
}

