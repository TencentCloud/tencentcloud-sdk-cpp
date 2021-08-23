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

#include <tencentcloud/sms/v20210111/model/DeleteTemplateStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

DeleteTemplateStatus::DeleteTemplateStatus() :
    m_deleteStatusHasBeenSet(false),
    m_deleteTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeleteTemplateStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeleteStatus") && !value["DeleteStatus"].IsNull())
    {
        if (!value["DeleteStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTemplateStatus.DeleteStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteStatus = string(value["DeleteStatus"].GetString());
        m_deleteStatusHasBeenSet = true;
    }

    if (value.HasMember("DeleteTime") && !value["DeleteTime"].IsNull())
    {
        if (!value["DeleteTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTemplateStatus.DeleteTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = value["DeleteTime"].GetUint64();
        m_deleteTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteTemplateStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deleteStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteTime, allocator);
    }

}


string DeleteTemplateStatus::GetDeleteStatus() const
{
    return m_deleteStatus;
}

void DeleteTemplateStatus::SetDeleteStatus(const string& _deleteStatus)
{
    m_deleteStatus = _deleteStatus;
    m_deleteStatusHasBeenSet = true;
}

bool DeleteTemplateStatus::DeleteStatusHasBeenSet() const
{
    return m_deleteStatusHasBeenSet;
}

uint64_t DeleteTemplateStatus::GetDeleteTime() const
{
    return m_deleteTime;
}

void DeleteTemplateStatus::SetDeleteTime(const uint64_t& _deleteTime)
{
    m_deleteTime = _deleteTime;
    m_deleteTimeHasBeenSet = true;
}

bool DeleteTemplateStatus::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

