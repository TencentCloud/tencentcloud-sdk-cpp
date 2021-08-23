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

#include <tencentcloud/cpdp/v20190820/model/AgentTaxPaymentBatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AgentTaxPaymentBatch::AgentTaxPaymentBatch() :
    m_statusMsgHasBeenSet(false),
    m_batchNumHasBeenSet(false),
    m_infoNumHasBeenSet(false),
    m_rawElectronicCertUrlHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome AgentTaxPaymentBatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusMsg") && !value["StatusMsg"].IsNull())
    {
        if (!value["StatusMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPaymentBatch.StatusMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusMsg = string(value["StatusMsg"].GetString());
        m_statusMsgHasBeenSet = true;
    }

    if (value.HasMember("BatchNum") && !value["BatchNum"].IsNull())
    {
        if (!value["BatchNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPaymentBatch.BatchNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchNum = value["BatchNum"].GetInt64();
        m_batchNumHasBeenSet = true;
    }

    if (value.HasMember("InfoNum") && !value["InfoNum"].IsNull())
    {
        if (!value["InfoNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPaymentBatch.InfoNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_infoNum = value["InfoNum"].GetInt64();
        m_infoNumHasBeenSet = true;
    }

    if (value.HasMember("RawElectronicCertUrl") && !value["RawElectronicCertUrl"].IsNull())
    {
        if (!value["RawElectronicCertUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPaymentBatch.RawElectronicCertUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawElectronicCertUrl = string(value["RawElectronicCertUrl"].GetString());
        m_rawElectronicCertUrlHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPaymentBatch.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPaymentBatch.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPaymentBatch.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPaymentBatch.Channel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channel = value["Channel"].GetInt64();
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTaxPaymentBatch.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentTaxPaymentBatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_batchNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchNum, allocator);
    }

    if (m_infoNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_infoNum, allocator);
    }

    if (m_rawElectronicCertUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawElectronicCertUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawElectronicCertUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channel, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string AgentTaxPaymentBatch::GetStatusMsg() const
{
    return m_statusMsg;
}

void AgentTaxPaymentBatch::SetStatusMsg(const string& _statusMsg)
{
    m_statusMsg = _statusMsg;
    m_statusMsgHasBeenSet = true;
}

bool AgentTaxPaymentBatch::StatusMsgHasBeenSet() const
{
    return m_statusMsgHasBeenSet;
}

int64_t AgentTaxPaymentBatch::GetBatchNum() const
{
    return m_batchNum;
}

void AgentTaxPaymentBatch::SetBatchNum(const int64_t& _batchNum)
{
    m_batchNum = _batchNum;
    m_batchNumHasBeenSet = true;
}

bool AgentTaxPaymentBatch::BatchNumHasBeenSet() const
{
    return m_batchNumHasBeenSet;
}

int64_t AgentTaxPaymentBatch::GetInfoNum() const
{
    return m_infoNum;
}

void AgentTaxPaymentBatch::SetInfoNum(const int64_t& _infoNum)
{
    m_infoNum = _infoNum;
    m_infoNumHasBeenSet = true;
}

bool AgentTaxPaymentBatch::InfoNumHasBeenSet() const
{
    return m_infoNumHasBeenSet;
}

string AgentTaxPaymentBatch::GetRawElectronicCertUrl() const
{
    return m_rawElectronicCertUrl;
}

void AgentTaxPaymentBatch::SetRawElectronicCertUrl(const string& _rawElectronicCertUrl)
{
    m_rawElectronicCertUrl = _rawElectronicCertUrl;
    m_rawElectronicCertUrlHasBeenSet = true;
}

bool AgentTaxPaymentBatch::RawElectronicCertUrlHasBeenSet() const
{
    return m_rawElectronicCertUrlHasBeenSet;
}

string AgentTaxPaymentBatch::GetAgentId() const
{
    return m_agentId;
}

void AgentTaxPaymentBatch::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool AgentTaxPaymentBatch::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string AgentTaxPaymentBatch::GetFileName() const
{
    return m_fileName;
}

void AgentTaxPaymentBatch::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AgentTaxPaymentBatch::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t AgentTaxPaymentBatch::GetStatusCode() const
{
    return m_statusCode;
}

void AgentTaxPaymentBatch::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool AgentTaxPaymentBatch::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

int64_t AgentTaxPaymentBatch::GetChannel() const
{
    return m_channel;
}

void AgentTaxPaymentBatch::SetChannel(const int64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool AgentTaxPaymentBatch::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

int64_t AgentTaxPaymentBatch::GetType() const
{
    return m_type;
}

void AgentTaxPaymentBatch::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AgentTaxPaymentBatch::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

