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

#include <tencentcloud/ess/v20201111/model/FillApproverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FillApproverInfo::FillApproverInfo() :
    m_recipientIdHasBeenSet(false),
    m_approverSourceHasBeenSet(false),
    m_customUserIdHasBeenSet(false)
{
}

CoreInternalOutcome FillApproverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FillApproverInfo.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("ApproverSource") && !value["ApproverSource"].IsNull())
    {
        if (!value["ApproverSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FillApproverInfo.ApproverSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverSource = string(value["ApproverSource"].GetString());
        m_approverSourceHasBeenSet = true;
    }

    if (value.HasMember("CustomUserId") && !value["CustomUserId"].IsNull())
    {
        if (!value["CustomUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FillApproverInfo.CustomUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customUserId = string(value["CustomUserId"].GetString());
        m_customUserIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FillApproverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_approverSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverSource.c_str(), allocator).Move(), allocator);
    }

    if (m_customUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customUserId.c_str(), allocator).Move(), allocator);
    }

}


string FillApproverInfo::GetRecipientId() const
{
    return m_recipientId;
}

void FillApproverInfo::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool FillApproverInfo::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

string FillApproverInfo::GetApproverSource() const
{
    return m_approverSource;
}

void FillApproverInfo::SetApproverSource(const string& _approverSource)
{
    m_approverSource = _approverSource;
    m_approverSourceHasBeenSet = true;
}

bool FillApproverInfo::ApproverSourceHasBeenSet() const
{
    return m_approverSourceHasBeenSet;
}

string FillApproverInfo::GetCustomUserId() const
{
    return m_customUserId;
}

void FillApproverInfo::SetCustomUserId(const string& _customUserId)
{
    m_customUserId = _customUserId;
    m_customUserIdHasBeenSet = true;
}

bool FillApproverInfo::CustomUserIdHasBeenSet() const
{
    return m_customUserIdHasBeenSet;
}

