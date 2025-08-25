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

#include <tencentcloud/wedata/v20210820/model/CommitTaskDataDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CommitTaskDataDto::CommitTaskDataDto() :
    m_taskApproveIdHasBeenSet(false)
{
}

CoreInternalOutcome CommitTaskDataDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskApproveId") && !value["TaskApproveId"].IsNull())
    {
        if (!value["TaskApproveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommitTaskDataDto.TaskApproveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskApproveId = string(value["TaskApproveId"].GetString());
        m_taskApproveIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommitTaskDataDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskApproveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskApproveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskApproveId.c_str(), allocator).Move(), allocator);
    }

}


string CommitTaskDataDto::GetTaskApproveId() const
{
    return m_taskApproveId;
}

void CommitTaskDataDto::SetTaskApproveId(const string& _taskApproveId)
{
    m_taskApproveId = _taskApproveId;
    m_taskApproveIdHasBeenSet = true;
}

bool CommitTaskDataDto::TaskApproveIdHasBeenSet() const
{
    return m_taskApproveIdHasBeenSet;
}

