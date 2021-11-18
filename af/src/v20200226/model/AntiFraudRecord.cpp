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

#include <tencentcloud/af/v20200226/model/AntiFraudRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

AntiFraudRecord::AntiFraudRecord() :
    m_codeHasBeenSet(false),
    m_codeDescHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_foundHasBeenSet(false),
    m_idFoundHasBeenSet(false),
    m_riskScoreHasBeenSet(false),
    m_riskInfoHasBeenSet(false),
    m_otherModelScoresHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_extensionOutHasBeenSet(false)
{
}

CoreInternalOutcome AntiFraudRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CodeDesc") && !value["CodeDesc"].IsNull())
    {
        if (!value["CodeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.CodeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeDesc = string(value["CodeDesc"].GetString());
        m_codeDescHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Found") && !value["Found"].IsNull())
    {
        if (!value["Found"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.Found` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_found = string(value["Found"].GetString());
        m_foundHasBeenSet = true;
    }

    if (value.HasMember("IdFound") && !value["IdFound"].IsNull())
    {
        if (!value["IdFound"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.IdFound` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idFound = string(value["IdFound"].GetString());
        m_idFoundHasBeenSet = true;
    }

    if (value.HasMember("RiskScore") && !value["RiskScore"].IsNull())
    {
        if (!value["RiskScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.RiskScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskScore = string(value["RiskScore"].GetString());
        m_riskScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskInfo") && !value["RiskInfo"].IsNull())
    {
        if (!value["RiskInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.RiskInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SimpleKindRiskDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskInfo.push_back(item);
        }
        m_riskInfoHasBeenSet = true;
    }

    if (value.HasMember("OtherModelScores") && !value["OtherModelScores"].IsNull())
    {
        if (!value["OtherModelScores"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.OtherModelScores` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherModelScores"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OtherModelScoresDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_otherModelScores.push_back(item);
        }
        m_otherModelScoresHasBeenSet = true;
    }

    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.PostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = string(value["PostTime"].GetString());
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtensionOut") && !value["ExtensionOut"].IsNull())
    {
        if (!value["ExtensionOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudRecord.ExtensionOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionOut = string(value["ExtensionOut"].GetString());
        m_extensionOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AntiFraudRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_codeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_foundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Found";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_found.c_str(), allocator).Move(), allocator);
    }

    if (m_idFoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdFound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idFound.c_str(), allocator).Move(), allocator);
    }

    if (m_riskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskScore.c_str(), allocator).Move(), allocator);
    }

    if (m_riskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskInfo.begin(); itr != m_riskInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_otherModelScoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherModelScores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherModelScores.begin(); itr != m_otherModelScores.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_postTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postTime.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionOut.c_str(), allocator).Move(), allocator);
    }

}


string AntiFraudRecord::GetCode() const
{
    return m_code;
}

void AntiFraudRecord::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool AntiFraudRecord::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string AntiFraudRecord::GetCodeDesc() const
{
    return m_codeDesc;
}

void AntiFraudRecord::SetCodeDesc(const string& _codeDesc)
{
    m_codeDesc = _codeDesc;
    m_codeDescHasBeenSet = true;
}

bool AntiFraudRecord::CodeDescHasBeenSet() const
{
    return m_codeDescHasBeenSet;
}

string AntiFraudRecord::GetMessage() const
{
    return m_message;
}

void AntiFraudRecord::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AntiFraudRecord::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string AntiFraudRecord::GetFound() const
{
    return m_found;
}

void AntiFraudRecord::SetFound(const string& _found)
{
    m_found = _found;
    m_foundHasBeenSet = true;
}

bool AntiFraudRecord::FoundHasBeenSet() const
{
    return m_foundHasBeenSet;
}

string AntiFraudRecord::GetIdFound() const
{
    return m_idFound;
}

void AntiFraudRecord::SetIdFound(const string& _idFound)
{
    m_idFound = _idFound;
    m_idFoundHasBeenSet = true;
}

bool AntiFraudRecord::IdFoundHasBeenSet() const
{
    return m_idFoundHasBeenSet;
}

string AntiFraudRecord::GetRiskScore() const
{
    return m_riskScore;
}

void AntiFraudRecord::SetRiskScore(const string& _riskScore)
{
    m_riskScore = _riskScore;
    m_riskScoreHasBeenSet = true;
}

bool AntiFraudRecord::RiskScoreHasBeenSet() const
{
    return m_riskScoreHasBeenSet;
}

vector<SimpleKindRiskDetail> AntiFraudRecord::GetRiskInfo() const
{
    return m_riskInfo;
}

void AntiFraudRecord::SetRiskInfo(const vector<SimpleKindRiskDetail>& _riskInfo)
{
    m_riskInfo = _riskInfo;
    m_riskInfoHasBeenSet = true;
}

bool AntiFraudRecord::RiskInfoHasBeenSet() const
{
    return m_riskInfoHasBeenSet;
}

vector<OtherModelScoresDetail> AntiFraudRecord::GetOtherModelScores() const
{
    return m_otherModelScores;
}

void AntiFraudRecord::SetOtherModelScores(const vector<OtherModelScoresDetail>& _otherModelScores)
{
    m_otherModelScores = _otherModelScores;
    m_otherModelScoresHasBeenSet = true;
}

bool AntiFraudRecord::OtherModelScoresHasBeenSet() const
{
    return m_otherModelScoresHasBeenSet;
}

string AntiFraudRecord::GetPostTime() const
{
    return m_postTime;
}

void AntiFraudRecord::SetPostTime(const string& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool AntiFraudRecord::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string AntiFraudRecord::GetExtensionOut() const
{
    return m_extensionOut;
}

void AntiFraudRecord::SetExtensionOut(const string& _extensionOut)
{
    m_extensionOut = _extensionOut;
    m_extensionOutHasBeenSet = true;
}

bool AntiFraudRecord::ExtensionOutHasBeenSet() const
{
    return m_extensionOutHasBeenSet;
}

