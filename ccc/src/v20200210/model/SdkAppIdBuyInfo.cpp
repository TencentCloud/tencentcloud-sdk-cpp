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

#include <tencentcloud/ccc/v20200210/model/SdkAppIdBuyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

SdkAppIdBuyInfo::SdkAppIdBuyInfo() :
    m_sdkAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_staffBuyNumHasBeenSet(false),
    m_staffBuyListHasBeenSet(false),
    m_phoneNumBuyListHasBeenSet(false),
    m_sipBuyNumHasBeenSet(false)
{
}

CoreInternalOutcome SdkAppIdBuyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdBuyInfo.SdkAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetInt64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdBuyInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StaffBuyNum") && !value["StaffBuyNum"].IsNull())
    {
        if (!value["StaffBuyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdBuyInfo.StaffBuyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_staffBuyNum = value["StaffBuyNum"].GetInt64();
        m_staffBuyNumHasBeenSet = true;
    }

    if (value.HasMember("StaffBuyList") && !value["StaffBuyList"].IsNull())
    {
        if (!value["StaffBuyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SdkAppIdBuyInfo.StaffBuyList` is not array type"));

        const rapidjson::Value &tmpValue = value["StaffBuyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StaffBuyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_staffBuyList.push_back(item);
        }
        m_staffBuyListHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumBuyList") && !value["PhoneNumBuyList"].IsNull())
    {
        if (!value["PhoneNumBuyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SdkAppIdBuyInfo.PhoneNumBuyList` is not array type"));

        const rapidjson::Value &tmpValue = value["PhoneNumBuyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PhoneNumBuyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_phoneNumBuyList.push_back(item);
        }
        m_phoneNumBuyListHasBeenSet = true;
    }

    if (value.HasMember("SipBuyNum") && !value["SipBuyNum"].IsNull())
    {
        if (!value["SipBuyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdBuyInfo.SipBuyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sipBuyNum = value["SipBuyNum"].GetInt64();
        m_sipBuyNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SdkAppIdBuyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_staffBuyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffBuyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_staffBuyNum, allocator);
    }

    if (m_staffBuyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffBuyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_staffBuyList.begin(); itr != m_staffBuyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_phoneNumBuyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumBuyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_phoneNumBuyList.begin(); itr != m_phoneNumBuyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sipBuyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SipBuyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sipBuyNum, allocator);
    }

}


int64_t SdkAppIdBuyInfo::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SdkAppIdBuyInfo::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SdkAppIdBuyInfo::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string SdkAppIdBuyInfo::GetName() const
{
    return m_name;
}

void SdkAppIdBuyInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SdkAppIdBuyInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t SdkAppIdBuyInfo::GetStaffBuyNum() const
{
    return m_staffBuyNum;
}

void SdkAppIdBuyInfo::SetStaffBuyNum(const int64_t& _staffBuyNum)
{
    m_staffBuyNum = _staffBuyNum;
    m_staffBuyNumHasBeenSet = true;
}

bool SdkAppIdBuyInfo::StaffBuyNumHasBeenSet() const
{
    return m_staffBuyNumHasBeenSet;
}

vector<StaffBuyInfo> SdkAppIdBuyInfo::GetStaffBuyList() const
{
    return m_staffBuyList;
}

void SdkAppIdBuyInfo::SetStaffBuyList(const vector<StaffBuyInfo>& _staffBuyList)
{
    m_staffBuyList = _staffBuyList;
    m_staffBuyListHasBeenSet = true;
}

bool SdkAppIdBuyInfo::StaffBuyListHasBeenSet() const
{
    return m_staffBuyListHasBeenSet;
}

vector<PhoneNumBuyInfo> SdkAppIdBuyInfo::GetPhoneNumBuyList() const
{
    return m_phoneNumBuyList;
}

void SdkAppIdBuyInfo::SetPhoneNumBuyList(const vector<PhoneNumBuyInfo>& _phoneNumBuyList)
{
    m_phoneNumBuyList = _phoneNumBuyList;
    m_phoneNumBuyListHasBeenSet = true;
}

bool SdkAppIdBuyInfo::PhoneNumBuyListHasBeenSet() const
{
    return m_phoneNumBuyListHasBeenSet;
}

int64_t SdkAppIdBuyInfo::GetSipBuyNum() const
{
    return m_sipBuyNum;
}

void SdkAppIdBuyInfo::SetSipBuyNum(const int64_t& _sipBuyNum)
{
    m_sipBuyNum = _sipBuyNum;
    m_sipBuyNumHasBeenSet = true;
}

bool SdkAppIdBuyInfo::SipBuyNumHasBeenSet() const
{
    return m_sipBuyNumHasBeenSet;
}

