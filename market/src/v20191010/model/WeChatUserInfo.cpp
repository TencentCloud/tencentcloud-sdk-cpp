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

#include <tencentcloud/market/v20191010/model/WeChatUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Market::V20191010::Model;
using namespace std;

WeChatUserInfo::WeChatUserInfo() :
    m_paidCorpIdHasBeenSet(false),
    m_paidCorpNameHasBeenSet(false)
{
}

CoreInternalOutcome WeChatUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PaidCorpId") && !value["PaidCorpId"].IsNull())
    {
        if (!value["PaidCorpId"].IsString())
        {
            return CoreInternalOutcome(Error("response `WeChatUserInfo.PaidCorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidCorpId = string(value["PaidCorpId"].GetString());
        m_paidCorpIdHasBeenSet = true;
    }

    if (value.HasMember("PaidCorpName") && !value["PaidCorpName"].IsNull())
    {
        if (!value["PaidCorpName"].IsString())
        {
            return CoreInternalOutcome(Error("response `WeChatUserInfo.PaidCorpName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidCorpName = string(value["PaidCorpName"].GetString());
        m_paidCorpNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeChatUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paidCorpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidCorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidCorpId.c_str(), allocator).Move(), allocator);
    }

    if (m_paidCorpNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidCorpName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidCorpName.c_str(), allocator).Move(), allocator);
    }

}


string WeChatUserInfo::GetPaidCorpId() const
{
    return m_paidCorpId;
}

void WeChatUserInfo::SetPaidCorpId(const string& _paidCorpId)
{
    m_paidCorpId = _paidCorpId;
    m_paidCorpIdHasBeenSet = true;
}

bool WeChatUserInfo::PaidCorpIdHasBeenSet() const
{
    return m_paidCorpIdHasBeenSet;
}

string WeChatUserInfo::GetPaidCorpName() const
{
    return m_paidCorpName;
}

void WeChatUserInfo::SetPaidCorpName(const string& _paidCorpName)
{
    m_paidCorpName = _paidCorpName;
    m_paidCorpNameHasBeenSet = true;
}

bool WeChatUserInfo::PaidCorpNameHasBeenSet() const
{
    return m_paidCorpNameHasBeenSet;
}

