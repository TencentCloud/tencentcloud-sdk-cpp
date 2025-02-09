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

#include <tencentcloud/lighthouse/v20200324/model/SupportIpv6Detail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

SupportIpv6Detail::SupportIpv6Detail() :
    m_isSupportHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome SupportIpv6Detail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsSupport") && !value["IsSupport"].IsNull())
    {
        if (!value["IsSupport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportIpv6Detail.IsSupport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupport = value["IsSupport"].GetBool();
        m_isSupportHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportIpv6Detail.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportIpv6Detail.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SupportIpv6Detail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupport, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


bool SupportIpv6Detail::GetIsSupport() const
{
    return m_isSupport;
}

void SupportIpv6Detail::SetIsSupport(const bool& _isSupport)
{
    m_isSupport = _isSupport;
    m_isSupportHasBeenSet = true;
}

bool SupportIpv6Detail::IsSupportHasBeenSet() const
{
    return m_isSupportHasBeenSet;
}

string SupportIpv6Detail::GetDetail() const
{
    return m_detail;
}

void SupportIpv6Detail::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool SupportIpv6Detail::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string SupportIpv6Detail::GetMessage() const
{
    return m_message;
}

void SupportIpv6Detail::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SupportIpv6Detail::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

