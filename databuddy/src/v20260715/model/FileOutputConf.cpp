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

#include <tencentcloud/databuddy/v20260715/model/FileOutputConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FileOutputConf::FileOutputConf() :
    m_cellIdHasBeenSet(false),
    m_dashboardConfHasBeenSet(false),
    m_outputPathHasBeenSet(false)
{
}

CoreInternalOutcome FileOutputConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CellId") && !value["CellId"].IsNull())
    {
        if (!value["CellId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileOutputConf.CellId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cellId = string(value["CellId"].GetString());
        m_cellIdHasBeenSet = true;
    }

    if (value.HasMember("DashboardConf") && !value["DashboardConf"].IsNull())
    {
        if (!value["DashboardConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileOutputConf.DashboardConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardConf = string(value["DashboardConf"].GetString());
        m_dashboardConfHasBeenSet = true;
    }

    if (value.HasMember("OutputPath") && !value["OutputPath"].IsNull())
    {
        if (!value["OutputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileOutputConf.OutputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputPath = string(value["OutputPath"].GetString());
        m_outputPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileOutputConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cellIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CellId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cellId.c_str(), allocator).Move(), allocator);
    }

    if (m_dashboardConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashboardConf.c_str(), allocator).Move(), allocator);
    }

    if (m_outputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputPath.c_str(), allocator).Move(), allocator);
    }

}


string FileOutputConf::GetCellId() const
{
    return m_cellId;
}

void FileOutputConf::SetCellId(const string& _cellId)
{
    m_cellId = _cellId;
    m_cellIdHasBeenSet = true;
}

bool FileOutputConf::CellIdHasBeenSet() const
{
    return m_cellIdHasBeenSet;
}

string FileOutputConf::GetDashboardConf() const
{
    return m_dashboardConf;
}

void FileOutputConf::SetDashboardConf(const string& _dashboardConf)
{
    m_dashboardConf = _dashboardConf;
    m_dashboardConfHasBeenSet = true;
}

bool FileOutputConf::DashboardConfHasBeenSet() const
{
    return m_dashboardConfHasBeenSet;
}

string FileOutputConf::GetOutputPath() const
{
    return m_outputPath;
}

void FileOutputConf::SetOutputPath(const string& _outputPath)
{
    m_outputPath = _outputPath;
    m_outputPathHasBeenSet = true;
}

bool FileOutputConf::OutputPathHasBeenSet() const
{
    return m_outputPathHasBeenSet;
}

