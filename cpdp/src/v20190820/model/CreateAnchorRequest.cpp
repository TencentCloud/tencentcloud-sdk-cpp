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

#include <tencentcloud/cpdp/v20190820/model/CreateAnchorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateAnchorRequest::CreateAnchorRequest() :
    m_anchorUidHasBeenSet(false),
    m_anchorNameHasBeenSet(false),
    m_anchorPhoneHasBeenSet(false),
    m_anchorEmailHasBeenSet(false),
    m_anchorAddressHasBeenSet(false),
    m_anchorIdNoHasBeenSet(false),
    m_anchorTypeHasBeenSet(false),
    m_anchorExtendInfoHasBeenSet(false)
{
}

string CreateAnchorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_anchorUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorUid.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorName.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorIdNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorIdNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorIdNo.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_anchorType.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorExtendInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorExtendInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_anchorExtendInfo.begin(); itr != m_anchorExtendInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAnchorRequest::GetAnchorUid() const
{
    return m_anchorUid;
}

void CreateAnchorRequest::SetAnchorUid(const string& _anchorUid)
{
    m_anchorUid = _anchorUid;
    m_anchorUidHasBeenSet = true;
}

bool CreateAnchorRequest::AnchorUidHasBeenSet() const
{
    return m_anchorUidHasBeenSet;
}

string CreateAnchorRequest::GetAnchorName() const
{
    return m_anchorName;
}

void CreateAnchorRequest::SetAnchorName(const string& _anchorName)
{
    m_anchorName = _anchorName;
    m_anchorNameHasBeenSet = true;
}

bool CreateAnchorRequest::AnchorNameHasBeenSet() const
{
    return m_anchorNameHasBeenSet;
}

string CreateAnchorRequest::GetAnchorPhone() const
{
    return m_anchorPhone;
}

void CreateAnchorRequest::SetAnchorPhone(const string& _anchorPhone)
{
    m_anchorPhone = _anchorPhone;
    m_anchorPhoneHasBeenSet = true;
}

bool CreateAnchorRequest::AnchorPhoneHasBeenSet() const
{
    return m_anchorPhoneHasBeenSet;
}

string CreateAnchorRequest::GetAnchorEmail() const
{
    return m_anchorEmail;
}

void CreateAnchorRequest::SetAnchorEmail(const string& _anchorEmail)
{
    m_anchorEmail = _anchorEmail;
    m_anchorEmailHasBeenSet = true;
}

bool CreateAnchorRequest::AnchorEmailHasBeenSet() const
{
    return m_anchorEmailHasBeenSet;
}

string CreateAnchorRequest::GetAnchorAddress() const
{
    return m_anchorAddress;
}

void CreateAnchorRequest::SetAnchorAddress(const string& _anchorAddress)
{
    m_anchorAddress = _anchorAddress;
    m_anchorAddressHasBeenSet = true;
}

bool CreateAnchorRequest::AnchorAddressHasBeenSet() const
{
    return m_anchorAddressHasBeenSet;
}

string CreateAnchorRequest::GetAnchorIdNo() const
{
    return m_anchorIdNo;
}

void CreateAnchorRequest::SetAnchorIdNo(const string& _anchorIdNo)
{
    m_anchorIdNo = _anchorIdNo;
    m_anchorIdNoHasBeenSet = true;
}

bool CreateAnchorRequest::AnchorIdNoHasBeenSet() const
{
    return m_anchorIdNoHasBeenSet;
}

string CreateAnchorRequest::GetAnchorType() const
{
    return m_anchorType;
}

void CreateAnchorRequest::SetAnchorType(const string& _anchorType)
{
    m_anchorType = _anchorType;
    m_anchorTypeHasBeenSet = true;
}

bool CreateAnchorRequest::AnchorTypeHasBeenSet() const
{
    return m_anchorTypeHasBeenSet;
}

vector<AnchorExtendInfo> CreateAnchorRequest::GetAnchorExtendInfo() const
{
    return m_anchorExtendInfo;
}

void CreateAnchorRequest::SetAnchorExtendInfo(const vector<AnchorExtendInfo>& _anchorExtendInfo)
{
    m_anchorExtendInfo = _anchorExtendInfo;
    m_anchorExtendInfoHasBeenSet = true;
}

bool CreateAnchorRequest::AnchorExtendInfoHasBeenSet() const
{
    return m_anchorExtendInfoHasBeenSet;
}


