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

#include <tencentcloud/batch/v20170312/model/OutputMappingOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

OutputMappingOption::OutputMappingOption() :
    m_workspaceHasBeenSet(false)
{
}

CoreInternalOutcome OutputMappingOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Workspace") && !value["Workspace"].IsNull())
    {
        if (!value["Workspace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputMappingOption.Workspace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspace = string(value["Workspace"].GetString());
        m_workspaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputMappingOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workspace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspace.c_str(), allocator).Move(), allocator);
    }

}


string OutputMappingOption::GetWorkspace() const
{
    return m_workspace;
}

void OutputMappingOption::SetWorkspace(const string& _workspace)
{
    m_workspace = _workspace;
    m_workspaceHasBeenSet = true;
}

bool OutputMappingOption::WorkspaceHasBeenSet() const
{
    return m_workspaceHasBeenSet;
}

