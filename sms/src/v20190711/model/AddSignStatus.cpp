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

#include <tencentcloud/sms/v20190711/model/AddSignStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20190711::Model;
using namespace std;

AddSignStatus::AddSignStatus() :
    m_signIdHasBeenSet(false),
    m_signApplyIdHasBeenSet(false)
{
}

CoreInternalOutcome AddSignStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddSignStatus.SignId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_signId = value["SignId"].GetUint64();
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("SignApplyId") && !value["SignApplyId"].IsNull())
    {
        if (!value["SignApplyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddSignStatus.SignApplyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_signApplyId = value["SignApplyId"].GetUint64();
        m_signApplyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddSignStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_signApplyId, allocator);
    }

}


uint64_t AddSignStatus::GetSignId() const
{
    return m_signId;
}

void AddSignStatus::SetSignId(const uint64_t& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool AddSignStatus::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

uint64_t AddSignStatus::GetSignApplyId() const
{
    return m_signApplyId;
}

void AddSignStatus::SetSignApplyId(const uint64_t& _signApplyId)
{
    m_signApplyId = _signApplyId;
    m_signApplyIdHasBeenSet = true;
}

bool AddSignStatus::SignApplyIdHasBeenSet() const
{
    return m_signApplyIdHasBeenSet;
}

