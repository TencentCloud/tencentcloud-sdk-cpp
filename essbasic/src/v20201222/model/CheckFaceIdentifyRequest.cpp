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

#include <tencentcloud/essbasic/v20201222/model/CheckFaceIdentifyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

CheckFaceIdentifyRequest::CheckFaceIdentifyRequest() :
    m_callerHasBeenSet(false),
    m_verifyChannelHasBeenSet(false),
    m_verifyResultHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_getPhotoHasBeenSet(false)
{
}

string CheckFaceIdentifyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_verifyChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyResult.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_getPhotoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetPhoto";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_getPhoto, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller CheckFaceIdentifyRequest::GetCaller() const
{
    return m_caller;
}

void CheckFaceIdentifyRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool CheckFaceIdentifyRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string CheckFaceIdentifyRequest::GetVerifyChannel() const
{
    return m_verifyChannel;
}

void CheckFaceIdentifyRequest::SetVerifyChannel(const string& _verifyChannel)
{
    m_verifyChannel = _verifyChannel;
    m_verifyChannelHasBeenSet = true;
}

bool CheckFaceIdentifyRequest::VerifyChannelHasBeenSet() const
{
    return m_verifyChannelHasBeenSet;
}

string CheckFaceIdentifyRequest::GetVerifyResult() const
{
    return m_verifyResult;
}

void CheckFaceIdentifyRequest::SetVerifyResult(const string& _verifyResult)
{
    m_verifyResult = _verifyResult;
    m_verifyResultHasBeenSet = true;
}

bool CheckFaceIdentifyRequest::VerifyResultHasBeenSet() const
{
    return m_verifyResultHasBeenSet;
}

string CheckFaceIdentifyRequest::GetName() const
{
    return m_name;
}

void CheckFaceIdentifyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CheckFaceIdentifyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CheckFaceIdentifyRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CheckFaceIdentifyRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CheckFaceIdentifyRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

bool CheckFaceIdentifyRequest::GetGetPhoto() const
{
    return m_getPhoto;
}

void CheckFaceIdentifyRequest::SetGetPhoto(const bool& _getPhoto)
{
    m_getPhoto = _getPhoto;
    m_getPhotoHasBeenSet = true;
}

bool CheckFaceIdentifyRequest::GetPhotoHasBeenSet() const
{
    return m_getPhotoHasBeenSet;
}


