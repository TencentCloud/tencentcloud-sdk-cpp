/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ses/v20201002/model/AbuseReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

AbuseReport::AbuseReport() :
    m_deliverTimeHasBeenSet(false),
    m_originalMailFromHasBeenSet(false),
    m_originalRcptToHasBeenSet(false),
    m_fromDomainHasBeenSet(false),
    m_complainTimeHasBeenSet(false),
    m_mtaHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_bulkIdHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_abuseTimeHasBeenSet(false),
    m_subjectHasBeenSet(false)
{
}

CoreInternalOutcome AbuseReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeliverTime") && !value["DeliverTime"].IsNull())
    {
        if (!value["DeliverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.DeliverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverTime = string(value["DeliverTime"].GetString());
        m_deliverTimeHasBeenSet = true;
    }

    if (value.HasMember("OriginalMailFrom") && !value["OriginalMailFrom"].IsNull())
    {
        if (!value["OriginalMailFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.OriginalMailFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalMailFrom = string(value["OriginalMailFrom"].GetString());
        m_originalMailFromHasBeenSet = true;
    }

    if (value.HasMember("OriginalRcptTo") && !value["OriginalRcptTo"].IsNull())
    {
        if (!value["OriginalRcptTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.OriginalRcptTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalRcptTo = string(value["OriginalRcptTo"].GetString());
        m_originalRcptToHasBeenSet = true;
    }

    if (value.HasMember("FromDomain") && !value["FromDomain"].IsNull())
    {
        if (!value["FromDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.FromDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromDomain = string(value["FromDomain"].GetString());
        m_fromDomainHasBeenSet = true;
    }

    if (value.HasMember("ComplainTime") && !value["ComplainTime"].IsNull())
    {
        if (!value["ComplainTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.ComplainTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complainTime = string(value["ComplainTime"].GetString());
        m_complainTimeHasBeenSet = true;
    }

    if (value.HasMember("Mta") && !value["Mta"].IsNull())
    {
        if (!value["Mta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.Mta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mta = string(value["Mta"].GetString());
        m_mtaHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("BulkId") && !value["BulkId"].IsNull())
    {
        if (!value["BulkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.BulkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bulkId = string(value["BulkId"].GetString());
        m_bulkIdHasBeenSet = true;
    }

    if (value.HasMember("MessageId") && !value["MessageId"].IsNull())
    {
        if (!value["MessageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.MessageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageId = string(value["MessageId"].GetString());
        m_messageIdHasBeenSet = true;
    }

    if (value.HasMember("AbuseTime") && !value["AbuseTime"].IsNull())
    {
        if (!value["AbuseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.AbuseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abuseTime = string(value["AbuseTime"].GetString());
        m_abuseTimeHasBeenSet = true;
    }

    if (value.HasMember("Subject") && !value["Subject"].IsNull())
    {
        if (!value["Subject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbuseReport.Subject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subject = string(value["Subject"].GetString());
        m_subjectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbuseReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deliverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_originalMailFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalMailFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalMailFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_originalRcptToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalRcptTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalRcptTo.c_str(), allocator).Move(), allocator);
    }

    if (m_fromDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_complainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplainTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complainTime.c_str(), allocator).Move(), allocator);
    }

    if (m_mtaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mta.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_bulkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BulkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bulkId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_abuseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbuseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abuseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
    }

}


string AbuseReport::GetDeliverTime() const
{
    return m_deliverTime;
}

void AbuseReport::SetDeliverTime(const string& _deliverTime)
{
    m_deliverTime = _deliverTime;
    m_deliverTimeHasBeenSet = true;
}

bool AbuseReport::DeliverTimeHasBeenSet() const
{
    return m_deliverTimeHasBeenSet;
}

string AbuseReport::GetOriginalMailFrom() const
{
    return m_originalMailFrom;
}

void AbuseReport::SetOriginalMailFrom(const string& _originalMailFrom)
{
    m_originalMailFrom = _originalMailFrom;
    m_originalMailFromHasBeenSet = true;
}

bool AbuseReport::OriginalMailFromHasBeenSet() const
{
    return m_originalMailFromHasBeenSet;
}

string AbuseReport::GetOriginalRcptTo() const
{
    return m_originalRcptTo;
}

void AbuseReport::SetOriginalRcptTo(const string& _originalRcptTo)
{
    m_originalRcptTo = _originalRcptTo;
    m_originalRcptToHasBeenSet = true;
}

bool AbuseReport::OriginalRcptToHasBeenSet() const
{
    return m_originalRcptToHasBeenSet;
}

string AbuseReport::GetFromDomain() const
{
    return m_fromDomain;
}

void AbuseReport::SetFromDomain(const string& _fromDomain)
{
    m_fromDomain = _fromDomain;
    m_fromDomainHasBeenSet = true;
}

bool AbuseReport::FromDomainHasBeenSet() const
{
    return m_fromDomainHasBeenSet;
}

string AbuseReport::GetComplainTime() const
{
    return m_complainTime;
}

void AbuseReport::SetComplainTime(const string& _complainTime)
{
    m_complainTime = _complainTime;
    m_complainTimeHasBeenSet = true;
}

bool AbuseReport::ComplainTimeHasBeenSet() const
{
    return m_complainTimeHasBeenSet;
}

string AbuseReport::GetMta() const
{
    return m_mta;
}

void AbuseReport::SetMta(const string& _mta)
{
    m_mta = _mta;
    m_mtaHasBeenSet = true;
}

bool AbuseReport::MtaHasBeenSet() const
{
    return m_mtaHasBeenSet;
}

string AbuseReport::GetSourceIp() const
{
    return m_sourceIp;
}

void AbuseReport::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool AbuseReport::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string AbuseReport::GetInsertTime() const
{
    return m_insertTime;
}

void AbuseReport::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool AbuseReport::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string AbuseReport::GetTemplateId() const
{
    return m_templateId;
}

void AbuseReport::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool AbuseReport::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string AbuseReport::GetBulkId() const
{
    return m_bulkId;
}

void AbuseReport::SetBulkId(const string& _bulkId)
{
    m_bulkId = _bulkId;
    m_bulkIdHasBeenSet = true;
}

bool AbuseReport::BulkIdHasBeenSet() const
{
    return m_bulkIdHasBeenSet;
}

string AbuseReport::GetMessageId() const
{
    return m_messageId;
}

void AbuseReport::SetMessageId(const string& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool AbuseReport::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string AbuseReport::GetAbuseTime() const
{
    return m_abuseTime;
}

void AbuseReport::SetAbuseTime(const string& _abuseTime)
{
    m_abuseTime = _abuseTime;
    m_abuseTimeHasBeenSet = true;
}

bool AbuseReport::AbuseTimeHasBeenSet() const
{
    return m_abuseTimeHasBeenSet;
}

string AbuseReport::GetSubject() const
{
    return m_subject;
}

void AbuseReport::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool AbuseReport::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

