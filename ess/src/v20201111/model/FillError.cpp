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

#include <tencentcloud/ess/v20201111/model/FillError.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FillError::FillError() :
    m_recipientIdHasBeenSet(false),
    m_errMessageHasBeenSet(false),
    m_flowIdHasBeenSet(false)
{
}

CoreInternalOutcome FillError::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FillError.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("ErrMessage") && !value["ErrMessage"].IsNull())
    {
        if (!value["ErrMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FillError.ErrMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMessage = string(value["ErrMessage"].GetString());
        m_errMessageHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FillError.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FillError::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_errMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

}


string FillError::GetRecipientId() const
{
    return m_recipientId;
}

void FillError::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool FillError::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

string FillError::GetErrMessage() const
{
    return m_errMessage;
}

void FillError::SetErrMessage(const string& _errMessage)
{
    m_errMessage = _errMessage;
    m_errMessageHasBeenSet = true;
}

bool FillError::ErrMessageHasBeenSet() const
{
    return m_errMessageHasBeenSet;
}

string FillError::GetFlowId() const
{
    return m_flowId;
}

void FillError::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FillError::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

