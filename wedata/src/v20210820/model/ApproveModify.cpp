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

#include <tencentcloud/wedata/v20210820/model/ApproveModify.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ApproveModify::ApproveModify() :
    m_approveIdHasBeenSet(false),
    m_successHasBeenSet(false)
{
}

CoreInternalOutcome ApproveModify::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproveId") && !value["ApproveId"].IsNull())
    {
        if (!value["ApproveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveModify.ApproveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approveId = string(value["ApproveId"].GetString());
        m_approveIdHasBeenSet = true;
    }

    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveModify.Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetBool();
        m_successHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApproveModify::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approveId.c_str(), allocator).Move(), allocator);
    }

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

}


string ApproveModify::GetApproveId() const
{
    return m_approveId;
}

void ApproveModify::SetApproveId(const string& _approveId)
{
    m_approveId = _approveId;
    m_approveIdHasBeenSet = true;
}

bool ApproveModify::ApproveIdHasBeenSet() const
{
    return m_approveIdHasBeenSet;
}

bool ApproveModify::GetSuccess() const
{
    return m_success;
}

void ApproveModify::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool ApproveModify::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

