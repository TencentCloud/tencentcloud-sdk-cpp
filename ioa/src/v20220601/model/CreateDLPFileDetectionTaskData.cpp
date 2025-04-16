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

#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectionTaskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

CreateDLPFileDetectionTaskData::CreateDLPFileDetectionTaskData() :
    m_dLPFileDetectionTaskIDHasBeenSet(false)
{
}

CoreInternalOutcome CreateDLPFileDetectionTaskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DLPFileDetectionTaskID") && !value["DLPFileDetectionTaskID"].IsNull())
    {
        if (!value["DLPFileDetectionTaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDLPFileDetectionTaskData.DLPFileDetectionTaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dLPFileDetectionTaskID = string(value["DLPFileDetectionTaskID"].GetString());
        m_dLPFileDetectionTaskIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateDLPFileDetectionTaskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dLPFileDetectionTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DLPFileDetectionTaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dLPFileDetectionTaskID.c_str(), allocator).Move(), allocator);
    }

}


string CreateDLPFileDetectionTaskData::GetDLPFileDetectionTaskID() const
{
    return m_dLPFileDetectionTaskID;
}

void CreateDLPFileDetectionTaskData::SetDLPFileDetectionTaskID(const string& _dLPFileDetectionTaskID)
{
    m_dLPFileDetectionTaskID = _dLPFileDetectionTaskID;
    m_dLPFileDetectionTaskIDHasBeenSet = true;
}

bool CreateDLPFileDetectionTaskData::DLPFileDetectionTaskIDHasBeenSet() const
{
    return m_dLPFileDetectionTaskIDHasBeenSet;
}

