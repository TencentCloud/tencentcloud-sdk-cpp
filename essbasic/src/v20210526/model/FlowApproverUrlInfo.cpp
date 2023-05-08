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

#include <tencentcloud/essbasic/v20210526/model/FlowApproverUrlInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FlowApproverUrlInfo::FlowApproverUrlInfo() :
    m_signUrlHasBeenSet(false),
    m_approverTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_longUrlHasBeenSet(false)
{
}

CoreInternalOutcome FlowApproverUrlInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignUrl") && !value["SignUrl"].IsNull())
    {
        if (!value["SignUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverUrlInfo.SignUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signUrl = string(value["SignUrl"].GetString());
        m_signUrlHasBeenSet = true;
    }

    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverUrlInfo.ApproverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = string(value["ApproverType"].GetString());
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverUrlInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverUrlInfo.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("LongUrl") && !value["LongUrl"].IsNull())
    {
        if (!value["LongUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverUrlInfo.LongUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longUrl = string(value["LongUrl"].GetString());
        m_longUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowApproverUrlInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_signUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_longUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longUrl.c_str(), allocator).Move(), allocator);
    }

}


string FlowApproverUrlInfo::GetSignUrl() const
{
    return m_signUrl;
}

void FlowApproverUrlInfo::SetSignUrl(const string& _signUrl)
{
    m_signUrl = _signUrl;
    m_signUrlHasBeenSet = true;
}

bool FlowApproverUrlInfo::SignUrlHasBeenSet() const
{
    return m_signUrlHasBeenSet;
}

string FlowApproverUrlInfo::GetApproverType() const
{
    return m_approverType;
}

void FlowApproverUrlInfo::SetApproverType(const string& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool FlowApproverUrlInfo::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string FlowApproverUrlInfo::GetName() const
{
    return m_name;
}

void FlowApproverUrlInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FlowApproverUrlInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FlowApproverUrlInfo::GetMobile() const
{
    return m_mobile;
}

void FlowApproverUrlInfo::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool FlowApproverUrlInfo::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string FlowApproverUrlInfo::GetLongUrl() const
{
    return m_longUrl;
}

void FlowApproverUrlInfo::SetLongUrl(const string& _longUrl)
{
    m_longUrl = _longUrl;
    m_longUrlHasBeenSet = true;
}

bool FlowApproverUrlInfo::LongUrlHasBeenSet() const
{
    return m_longUrlHasBeenSet;
}

