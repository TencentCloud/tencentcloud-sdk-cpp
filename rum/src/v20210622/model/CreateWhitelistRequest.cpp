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

#include <tencentcloud/rum/v20210622/model/CreateWhitelistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

CreateWhitelistRequest::CreateWhitelistRequest() :
    m_instanceIDHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_whitelistUinHasBeenSet(false),
    m_aidHasBeenSet(false)
{
}

string CreateWhitelistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_whitelistUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhitelistUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_whitelistUin.c_str(), allocator).Move(), allocator);
    }

    if (m_aidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aid.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWhitelistRequest::GetInstanceID() const
{
    return m_instanceID;
}

void CreateWhitelistRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool CreateWhitelistRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string CreateWhitelistRequest::GetRemark() const
{
    return m_remark;
}

void CreateWhitelistRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateWhitelistRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateWhitelistRequest::GetWhitelistUin() const
{
    return m_whitelistUin;
}

void CreateWhitelistRequest::SetWhitelistUin(const string& _whitelistUin)
{
    m_whitelistUin = _whitelistUin;
    m_whitelistUinHasBeenSet = true;
}

bool CreateWhitelistRequest::WhitelistUinHasBeenSet() const
{
    return m_whitelistUinHasBeenSet;
}

string CreateWhitelistRequest::GetAid() const
{
    return m_aid;
}

void CreateWhitelistRequest::SetAid(const string& _aid)
{
    m_aid = _aid;
    m_aidHasBeenSet = true;
}

bool CreateWhitelistRequest::AidHasBeenSet() const
{
    return m_aidHasBeenSet;
}


