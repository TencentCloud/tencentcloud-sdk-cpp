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

#include <tencentcloud/solar/v20181011/model/DescribeProjectResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace rapidjson;
using namespace std;

DescribeProjectResponse::DescribeProjectResponse() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectBudgetHasBeenSet(false),
    m_projectOrgHasBeenSet(false),
    m_projectIntroductionHasBeenSet(false),
    m_subProjectListHasBeenSet(false),
    m_projectStatusHasBeenSet(false),
    m_projectOrgIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProjectResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(rsp["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectName") && !rsp["ProjectName"].IsNull())
    {
        if (!rsp["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(rsp["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectBudget") && !rsp["ProjectBudget"].IsNull())
    {
        if (!rsp["ProjectBudget"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ProjectBudget` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_projectBudget = rsp["ProjectBudget"].GetDouble();
        m_projectBudgetHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectOrg") && !rsp["ProjectOrg"].IsNull())
    {
        if (!rsp["ProjectOrg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectOrg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectOrg = string(rsp["ProjectOrg"].GetString());
        m_projectOrgHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectIntroduction") && !rsp["ProjectIntroduction"].IsNull())
    {
        if (!rsp["ProjectIntroduction"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectIntroduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIntroduction = string(rsp["ProjectIntroduction"].GetString());
        m_projectIntroductionHasBeenSet = true;
    }

    if (rsp.HasMember("SubProjectList") && !rsp["SubProjectList"].IsNull())
    {
        if (!rsp["SubProjectList"].IsArray())
            return CoreInternalOutcome(Error("response `SubProjectList` is not array type"));

        const Value &tmpValue = rsp["SubProjectList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubProjectInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subProjectList.push_back(item);
        }
        m_subProjectListHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectStatus") && !rsp["ProjectStatus"].IsNull())
    {
        if (!rsp["ProjectStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectStatus = string(rsp["ProjectStatus"].GetString());
        m_projectStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectOrgId") && !rsp["ProjectOrgId"].IsNull())
    {
        if (!rsp["ProjectOrgId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectOrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectOrgId = string(rsp["ProjectOrgId"].GetString());
        m_projectOrgIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeProjectResponse::GetProjectId() const
{
    return m_projectId;
}

bool DescribeProjectResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeProjectResponse::GetProjectName() const
{
    return m_projectName;
}

bool DescribeProjectResponse::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

double DescribeProjectResponse::GetProjectBudget() const
{
    return m_projectBudget;
}

bool DescribeProjectResponse::ProjectBudgetHasBeenSet() const
{
    return m_projectBudgetHasBeenSet;
}

string DescribeProjectResponse::GetProjectOrg() const
{
    return m_projectOrg;
}

bool DescribeProjectResponse::ProjectOrgHasBeenSet() const
{
    return m_projectOrgHasBeenSet;
}

string DescribeProjectResponse::GetProjectIntroduction() const
{
    return m_projectIntroduction;
}

bool DescribeProjectResponse::ProjectIntroductionHasBeenSet() const
{
    return m_projectIntroductionHasBeenSet;
}

vector<SubProjectInfo> DescribeProjectResponse::GetSubProjectList() const
{
    return m_subProjectList;
}

bool DescribeProjectResponse::SubProjectListHasBeenSet() const
{
    return m_subProjectListHasBeenSet;
}

string DescribeProjectResponse::GetProjectStatus() const
{
    return m_projectStatus;
}

bool DescribeProjectResponse::ProjectStatusHasBeenSet() const
{
    return m_projectStatusHasBeenSet;
}

string DescribeProjectResponse::GetProjectOrgId() const
{
    return m_projectOrgId;
}

bool DescribeProjectResponse::ProjectOrgIdHasBeenSet() const
{
    return m_projectOrgIdHasBeenSet;
}


