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

#include <tencentcloud/bdrc/v20260330/model/DeleteDrillPairResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DeleteDrillPairResult::DeleteDrillPairResult() :
    m_drillPairIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome DeleteDrillPairResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrillPairId") && !value["DrillPairId"].IsNull())
    {
        if (!value["DrillPairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteDrillPairResult.DrillPairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drillPairId = string(value["DrillPairId"].GetString());
        m_drillPairIdHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteDrillPairResult.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteDrillPairResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteDrillPairResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drillPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drillPairId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string DeleteDrillPairResult::GetDrillPairId() const
{
    return m_drillPairId;
}

void DeleteDrillPairResult::SetDrillPairId(const string& _drillPairId)
{
    m_drillPairId = _drillPairId;
    m_drillPairIdHasBeenSet = true;
}

bool DeleteDrillPairResult::DrillPairIdHasBeenSet() const
{
    return m_drillPairIdHasBeenSet;
}

string DeleteDrillPairResult::GetCode() const
{
    return m_code;
}

void DeleteDrillPairResult::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DeleteDrillPairResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DeleteDrillPairResult::GetMessage() const
{
    return m_message;
}

void DeleteDrillPairResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool DeleteDrillPairResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

