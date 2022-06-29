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

#include <tencentcloud/cii/v20210408/model/ClassifiedReports.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

ClassifiedReports::ClassifiedReports() :
    m_reportTypeHasBeenSet(false),
    m_fileListHasBeenSet(false)
{
}

CoreInternalOutcome ClassifiedReports::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReportType") && !value["ReportType"].IsNull())
    {
        if (!value["ReportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassifiedReports.ReportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportType = string(value["ReportType"].GetString());
        m_reportTypeHasBeenSet = true;
    }

    if (value.HasMember("FileList") && !value["FileList"].IsNull())
    {
        if (!value["FileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClassifiedReports.FileList` is not array type"));

        const rapidjson::Value &tmpValue = value["FileList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileList.push_back((*itr).GetString());
        }
        m_fileListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassifiedReports::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileList.begin(); itr != m_fileList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ClassifiedReports::GetReportType() const
{
    return m_reportType;
}

void ClassifiedReports::SetReportType(const string& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool ClassifiedReports::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

vector<string> ClassifiedReports::GetFileList() const
{
    return m_fileList;
}

void ClassifiedReports::SetFileList(const vector<string>& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool ClassifiedReports::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}

