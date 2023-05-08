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

#include <tencentcloud/ess/v20201111/model/FlowApproverUrlInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowApproverUrlInfo::FlowApproverUrlInfo() :
    m_signUrlHasBeenSet(false),
    m_approverTypeHasBeenSet(false),
    m_approverNameHasBeenSet(false),
    m_approverMobileHasBeenSet(false),
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
        if (!value["ApproverType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverUrlInfo.ApproverType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = value["ApproverType"].GetInt64();
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverName") && !value["ApproverName"].IsNull())
    {
        if (!value["ApproverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverUrlInfo.ApproverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverName = string(value["ApproverName"].GetString());
        m_approverNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverMobile") && !value["ApproverMobile"].IsNull())
    {
        if (!value["ApproverMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverUrlInfo.ApproverMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverMobile = string(value["ApproverMobile"].GetString());
        m_approverMobileHasBeenSet = true;
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
        value.AddMember(iKey, m_approverType, allocator);
    }

    if (m_approverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverMobile.c_str(), allocator).Move(), allocator);
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

int64_t FlowApproverUrlInfo::GetApproverType() const
{
    return m_approverType;
}

void FlowApproverUrlInfo::SetApproverType(const int64_t& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool FlowApproverUrlInfo::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string FlowApproverUrlInfo::GetApproverName() const
{
    return m_approverName;
}

void FlowApproverUrlInfo::SetApproverName(const string& _approverName)
{
    m_approverName = _approverName;
    m_approverNameHasBeenSet = true;
}

bool FlowApproverUrlInfo::ApproverNameHasBeenSet() const
{
    return m_approverNameHasBeenSet;
}

string FlowApproverUrlInfo::GetApproverMobile() const
{
    return m_approverMobile;
}

void FlowApproverUrlInfo::SetApproverMobile(const string& _approverMobile)
{
    m_approverMobile = _approverMobile;
    m_approverMobileHasBeenSet = true;
}

bool FlowApproverUrlInfo::ApproverMobileHasBeenSet() const
{
    return m_approverMobileHasBeenSet;
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

