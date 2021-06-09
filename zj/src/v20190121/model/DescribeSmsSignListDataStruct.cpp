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

#include <tencentcloud/zj/v20190121/model/DescribeSmsSignListDataStruct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

DescribeSmsSignListDataStruct::DescribeSmsSignListDataStruct() :
    m_signIdHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_reviewReplyHasBeenSet(false),
    m_signNameHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSmsSignListDataStruct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsSignListDataStruct.SignId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_signId = value["SignId"].GetUint64();
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("International") && !value["International"].IsNull())
    {
        if (!value["International"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsSignListDataStruct.International` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_international = value["International"].GetUint64();
        m_internationalHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsSignListDataStruct.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("ReviewReply") && !value["ReviewReply"].IsNull())
    {
        if (!value["ReviewReply"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsSignListDataStruct.ReviewReply` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewReply = string(value["ReviewReply"].GetString());
        m_reviewReplyHasBeenSet = true;
    }

    if (value.HasMember("SignName") && !value["SignName"].IsNull())
    {
        if (!value["SignName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsSignListDataStruct.SignName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signName = string(value["SignName"].GetString());
        m_signNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DescribeSmsSignListDataStruct.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSmsSignListDataStruct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signId, allocator);
    }

    if (m_internationalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "International";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_international, allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_reviewReplyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewReply";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewReply.c_str(), allocator).Move(), allocator);
    }

    if (m_signNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


uint64_t DescribeSmsSignListDataStruct::GetSignId() const
{
    return m_signId;
}

void DescribeSmsSignListDataStruct::SetSignId(const uint64_t& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool DescribeSmsSignListDataStruct::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

uint64_t DescribeSmsSignListDataStruct::GetInternational() const
{
    return m_international;
}

void DescribeSmsSignListDataStruct::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool DescribeSmsSignListDataStruct::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}

int64_t DescribeSmsSignListDataStruct::GetStatusCode() const
{
    return m_statusCode;
}

void DescribeSmsSignListDataStruct::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool DescribeSmsSignListDataStruct::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string DescribeSmsSignListDataStruct::GetReviewReply() const
{
    return m_reviewReply;
}

void DescribeSmsSignListDataStruct::SetReviewReply(const string& _reviewReply)
{
    m_reviewReply = _reviewReply;
    m_reviewReplyHasBeenSet = true;
}

bool DescribeSmsSignListDataStruct::ReviewReplyHasBeenSet() const
{
    return m_reviewReplyHasBeenSet;
}

string DescribeSmsSignListDataStruct::GetSignName() const
{
    return m_signName;
}

void DescribeSmsSignListDataStruct::SetSignName(const string& _signName)
{
    m_signName = _signName;
    m_signNameHasBeenSet = true;
}

bool DescribeSmsSignListDataStruct::SignNameHasBeenSet() const
{
    return m_signNameHasBeenSet;
}

uint64_t DescribeSmsSignListDataStruct::GetCreateTime() const
{
    return m_createTime;
}

void DescribeSmsSignListDataStruct::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeSmsSignListDataStruct::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

