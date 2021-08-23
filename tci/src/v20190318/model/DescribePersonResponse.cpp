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

#include <tencentcloud/tci/v20190318/model/DescribePersonResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

DescribePersonResponse::DescribePersonResponse() :
    m_faceSetHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_jobNumberHasBeenSet(false),
    m_libraryIdHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_maleHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_personNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_studentNumberHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePersonResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("FaceSet") && !rsp["FaceSet"].IsNull())
    {
        if (!rsp["FaceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FaceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Face item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceSet.push_back(item);
        }
        m_faceSetHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("JobNumber") && !rsp["JobNumber"].IsNull())
    {
        if (!rsp["JobNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobNumber = string(rsp["JobNumber"].GetString());
        m_jobNumberHasBeenSet = true;
    }

    if (rsp.HasMember("LibraryId") && !rsp["LibraryId"].IsNull())
    {
        if (!rsp["LibraryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryId = string(rsp["LibraryId"].GetString());
        m_libraryIdHasBeenSet = true;
    }

    if (rsp.HasMember("Mail") && !rsp["Mail"].IsNull())
    {
        if (!rsp["Mail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Mail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mail = string(rsp["Mail"].GetString());
        m_mailHasBeenSet = true;
    }

    if (rsp.HasMember("Male") && !rsp["Male"].IsNull())
    {
        if (!rsp["Male"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Male` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_male = rsp["Male"].GetInt64();
        m_maleHasBeenSet = true;
    }

    if (rsp.HasMember("PersonId") && !rsp["PersonId"].IsNull())
    {
        if (!rsp["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(rsp["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (rsp.HasMember("PersonName") && !rsp["PersonName"].IsNull())
    {
        if (!rsp["PersonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personName = string(rsp["PersonName"].GetString());
        m_personNameHasBeenSet = true;
    }

    if (rsp.HasMember("PhoneNumber") && !rsp["PhoneNumber"].IsNull())
    {
        if (!rsp["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(rsp["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (rsp.HasMember("StudentNumber") && !rsp["StudentNumber"].IsNull())
    {
        if (!rsp["StudentNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StudentNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_studentNumber = string(rsp["StudentNumber"].GetString());
        m_studentNumberHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePersonResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_faceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceSet.begin(); itr != m_faceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_maleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Male";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_male, allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_personNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_studentNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StudentNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_studentNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<Face> DescribePersonResponse::GetFaceSet() const
{
    return m_faceSet;
}

bool DescribePersonResponse::FaceSetHasBeenSet() const
{
    return m_faceSetHasBeenSet;
}

string DescribePersonResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribePersonResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribePersonResponse::GetJobNumber() const
{
    return m_jobNumber;
}

bool DescribePersonResponse::JobNumberHasBeenSet() const
{
    return m_jobNumberHasBeenSet;
}

string DescribePersonResponse::GetLibraryId() const
{
    return m_libraryId;
}

bool DescribePersonResponse::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string DescribePersonResponse::GetMail() const
{
    return m_mail;
}

bool DescribePersonResponse::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

int64_t DescribePersonResponse::GetMale() const
{
    return m_male;
}

bool DescribePersonResponse::MaleHasBeenSet() const
{
    return m_maleHasBeenSet;
}

string DescribePersonResponse::GetPersonId() const
{
    return m_personId;
}

bool DescribePersonResponse::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string DescribePersonResponse::GetPersonName() const
{
    return m_personName;
}

bool DescribePersonResponse::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}

string DescribePersonResponse::GetPhoneNumber() const
{
    return m_phoneNumber;
}

bool DescribePersonResponse::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string DescribePersonResponse::GetStudentNumber() const
{
    return m_studentNumber;
}

bool DescribePersonResponse::StudentNumberHasBeenSet() const
{
    return m_studentNumberHasBeenSet;
}

string DescribePersonResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribePersonResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


