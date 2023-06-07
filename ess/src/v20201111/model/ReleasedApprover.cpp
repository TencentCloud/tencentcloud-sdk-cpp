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

#include <tencentcloud/ess/v20201111/model/ReleasedApprover.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ReleasedApprover::ReleasedApprover() :
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_relievedApproverReceiptIdHasBeenSet(false),
    m_approverTypeHasBeenSet(false)
{
}

CoreInternalOutcome ReleasedApprover::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("RelievedApproverReceiptId") && !value["RelievedApproverReceiptId"].IsNull())
    {
        if (!value["RelievedApproverReceiptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.RelievedApproverReceiptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relievedApproverReceiptId = string(value["RelievedApproverReceiptId"].GetString());
        m_relievedApproverReceiptIdHasBeenSet = true;
    }

    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleasedApprover.ApproverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = string(value["ApproverType"].GetString());
        m_approverTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleasedApprover::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_relievedApproverReceiptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelievedApproverReceiptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relievedApproverReceiptId.c_str(), allocator).Move(), allocator);
    }

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverType.c_str(), allocator).Move(), allocator);
    }

}


string ReleasedApprover::GetName() const
{
    return m_name;
}

void ReleasedApprover::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ReleasedApprover::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ReleasedApprover::GetMobile() const
{
    return m_mobile;
}

void ReleasedApprover::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool ReleasedApprover::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string ReleasedApprover::GetRelievedApproverReceiptId() const
{
    return m_relievedApproverReceiptId;
}

void ReleasedApprover::SetRelievedApproverReceiptId(const string& _relievedApproverReceiptId)
{
    m_relievedApproverReceiptId = _relievedApproverReceiptId;
    m_relievedApproverReceiptIdHasBeenSet = true;
}

bool ReleasedApprover::RelievedApproverReceiptIdHasBeenSet() const
{
    return m_relievedApproverReceiptIdHasBeenSet;
}

string ReleasedApprover::GetApproverType() const
{
    return m_approverType;
}

void ReleasedApprover::SetApproverType(const string& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool ReleasedApprover::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

