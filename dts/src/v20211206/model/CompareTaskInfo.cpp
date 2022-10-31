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

#include <tencentcloud/dts/v20211206/model/CompareTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareTaskInfo::CompareTaskInfo() :
    m_compareTaskIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CompareTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompareTaskId") && !value["CompareTaskId"].IsNull())
    {
        if (!value["CompareTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskInfo.CompareTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareTaskId = string(value["CompareTaskId"].GetString());
        m_compareTaskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_compareTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string CompareTaskInfo::GetCompareTaskId() const
{
    return m_compareTaskId;
}

void CompareTaskInfo::SetCompareTaskId(const string& _compareTaskId)
{
    m_compareTaskId = _compareTaskId;
    m_compareTaskIdHasBeenSet = true;
}

bool CompareTaskInfo::CompareTaskIdHasBeenSet() const
{
    return m_compareTaskIdHasBeenSet;
}

string CompareTaskInfo::GetStatus() const
{
    return m_status;
}

void CompareTaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CompareTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

