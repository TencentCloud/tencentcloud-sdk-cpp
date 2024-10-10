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

#include <tencentcloud/ess/v20201111/model/ArchiveDynamicApproverData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ArchiveDynamicApproverData::ArchiveDynamicApproverData() :
    m_signIdHasBeenSet(false),
    m_recipientIdHasBeenSet(false)
{
}

CoreInternalOutcome ArchiveDynamicApproverData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveDynamicApproverData.SignId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signId = string(value["SignId"].GetString());
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveDynamicApproverData.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArchiveDynamicApproverData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

}


string ArchiveDynamicApproverData::GetSignId() const
{
    return m_signId;
}

void ArchiveDynamicApproverData::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool ArchiveDynamicApproverData::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

string ArchiveDynamicApproverData::GetRecipientId() const
{
    return m_recipientId;
}

void ArchiveDynamicApproverData::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool ArchiveDynamicApproverData::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

