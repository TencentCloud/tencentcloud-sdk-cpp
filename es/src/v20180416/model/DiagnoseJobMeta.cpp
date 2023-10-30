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

#include <tencentcloud/es/v20180416/model/DiagnoseJobMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiagnoseJobMeta::DiagnoseJobMeta() :
    m_jobNameHasBeenSet(false),
    m_jobZhNameHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome DiagnoseJobMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobMeta.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("JobZhName") && !value["JobZhName"].IsNull())
    {
        if (!value["JobZhName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobMeta.JobZhName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobZhName = string(value["JobZhName"].GetString());
        m_jobZhNameHasBeenSet = true;
    }

    if (value.HasMember("JobDescription") && !value["JobDescription"].IsNull())
    {
        if (!value["JobDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobMeta.JobDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobDescription = string(value["JobDescription"].GetString());
        m_jobDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnoseJobMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobZhNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobZhName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobZhName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobDescription.c_str(), allocator).Move(), allocator);
    }

}


string DiagnoseJobMeta::GetJobName() const
{
    return m_jobName;
}

void DiagnoseJobMeta::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool DiagnoseJobMeta::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string DiagnoseJobMeta::GetJobZhName() const
{
    return m_jobZhName;
}

void DiagnoseJobMeta::SetJobZhName(const string& _jobZhName)
{
    m_jobZhName = _jobZhName;
    m_jobZhNameHasBeenSet = true;
}

bool DiagnoseJobMeta::JobZhNameHasBeenSet() const
{
    return m_jobZhNameHasBeenSet;
}

string DiagnoseJobMeta::GetJobDescription() const
{
    return m_jobDescription;
}

void DiagnoseJobMeta::SetJobDescription(const string& _jobDescription)
{
    m_jobDescription = _jobDescription;
    m_jobDescriptionHasBeenSet = true;
}

bool DiagnoseJobMeta::JobDescriptionHasBeenSet() const
{
    return m_jobDescriptionHasBeenSet;
}

