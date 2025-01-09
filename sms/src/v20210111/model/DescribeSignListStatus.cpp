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

#include <tencentcloud/sms/v20210111/model/DescribeSignListStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

DescribeSignListStatus::DescribeSignListStatus() :
    m_signIdHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_reviewReplyHasBeenSet(false),
    m_signNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_qualificationIdHasBeenSet(false),
    m_qualificationNameHasBeenSet(false),
    m_qualificationStatusCodeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSignListStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSignListStatus.SignId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_signId = value["SignId"].GetUint64();
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("International") && !value["International"].IsNull())
    {
        if (!value["International"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSignListStatus.International` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_international = value["International"].GetUint64();
        m_internationalHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSignListStatus.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("ReviewReply") && !value["ReviewReply"].IsNull())
    {
        if (!value["ReviewReply"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSignListStatus.ReviewReply` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewReply = string(value["ReviewReply"].GetString());
        m_reviewReplyHasBeenSet = true;
    }

    if (value.HasMember("SignName") && !value["SignName"].IsNull())
    {
        if (!value["SignName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSignListStatus.SignName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signName = string(value["SignName"].GetString());
        m_signNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSignListStatus.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("QualificationId") && !value["QualificationId"].IsNull())
    {
        if (!value["QualificationId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSignListStatus.QualificationId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualificationId = value["QualificationId"].GetUint64();
        m_qualificationIdHasBeenSet = true;
    }

    if (value.HasMember("QualificationName") && !value["QualificationName"].IsNull())
    {
        if (!value["QualificationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSignListStatus.QualificationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualificationName = string(value["QualificationName"].GetString());
        m_qualificationNameHasBeenSet = true;
    }

    if (value.HasMember("QualificationStatusCode") && !value["QualificationStatusCode"].IsNull())
    {
        if (!value["QualificationStatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSignListStatus.QualificationStatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qualificationStatusCode = value["QualificationStatusCode"].GetInt64();
        m_qualificationStatusCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSignListStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_qualificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualificationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualificationId, allocator);
    }

    if (m_qualificationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualificationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualificationName.c_str(), allocator).Move(), allocator);
    }

    if (m_qualificationStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualificationStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualificationStatusCode, allocator);
    }

}


uint64_t DescribeSignListStatus::GetSignId() const
{
    return m_signId;
}

void DescribeSignListStatus::SetSignId(const uint64_t& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool DescribeSignListStatus::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

uint64_t DescribeSignListStatus::GetInternational() const
{
    return m_international;
}

void DescribeSignListStatus::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool DescribeSignListStatus::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}

int64_t DescribeSignListStatus::GetStatusCode() const
{
    return m_statusCode;
}

void DescribeSignListStatus::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool DescribeSignListStatus::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string DescribeSignListStatus::GetReviewReply() const
{
    return m_reviewReply;
}

void DescribeSignListStatus::SetReviewReply(const string& _reviewReply)
{
    m_reviewReply = _reviewReply;
    m_reviewReplyHasBeenSet = true;
}

bool DescribeSignListStatus::ReviewReplyHasBeenSet() const
{
    return m_reviewReplyHasBeenSet;
}

string DescribeSignListStatus::GetSignName() const
{
    return m_signName;
}

void DescribeSignListStatus::SetSignName(const string& _signName)
{
    m_signName = _signName;
    m_signNameHasBeenSet = true;
}

bool DescribeSignListStatus::SignNameHasBeenSet() const
{
    return m_signNameHasBeenSet;
}

uint64_t DescribeSignListStatus::GetCreateTime() const
{
    return m_createTime;
}

void DescribeSignListStatus::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeSignListStatus::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DescribeSignListStatus::GetQualificationId() const
{
    return m_qualificationId;
}

void DescribeSignListStatus::SetQualificationId(const uint64_t& _qualificationId)
{
    m_qualificationId = _qualificationId;
    m_qualificationIdHasBeenSet = true;
}

bool DescribeSignListStatus::QualificationIdHasBeenSet() const
{
    return m_qualificationIdHasBeenSet;
}

string DescribeSignListStatus::GetQualificationName() const
{
    return m_qualificationName;
}

void DescribeSignListStatus::SetQualificationName(const string& _qualificationName)
{
    m_qualificationName = _qualificationName;
    m_qualificationNameHasBeenSet = true;
}

bool DescribeSignListStatus::QualificationNameHasBeenSet() const
{
    return m_qualificationNameHasBeenSet;
}

int64_t DescribeSignListStatus::GetQualificationStatusCode() const
{
    return m_qualificationStatusCode;
}

void DescribeSignListStatus::SetQualificationStatusCode(const int64_t& _qualificationStatusCode)
{
    m_qualificationStatusCode = _qualificationStatusCode;
    m_qualificationStatusCodeHasBeenSet = true;
}

bool DescribeSignListStatus::QualificationStatusCodeHasBeenSet() const
{
    return m_qualificationStatusCodeHasBeenSet;
}

