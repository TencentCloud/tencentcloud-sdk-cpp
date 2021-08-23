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

#include <tencentcloud/sms/v20190711/model/ModifySignStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20190711::Model;
using namespace std;

ModifySignStatus::ModifySignStatus() :
    m_signIdHasBeenSet(false),
    m_signApplyIdHasBeenSet(false)
{
}

CoreInternalOutcome ModifySignStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifySignStatus.SignId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_signId = value["SignId"].GetUint64();
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("SignApplyId") && !value["SignApplyId"].IsNull())
    {
        if (!value["SignApplyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifySignStatus.SignApplyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signApplyId = string(value["SignApplyId"].GetString());
        m_signApplyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifySignStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signId, allocator);
    }

    if (m_signApplyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignApplyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signApplyId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ModifySignStatus::GetSignId() const
{
    return m_signId;
}

void ModifySignStatus::SetSignId(const uint64_t& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool ModifySignStatus::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

string ModifySignStatus::GetSignApplyId() const
{
    return m_signApplyId;
}

void ModifySignStatus::SetSignApplyId(const string& _signApplyId)
{
    m_signApplyId = _signApplyId;
    m_signApplyIdHasBeenSet = true;
}

bool ModifySignStatus::SignApplyIdHasBeenSet() const
{
    return m_signApplyIdHasBeenSet;
}

