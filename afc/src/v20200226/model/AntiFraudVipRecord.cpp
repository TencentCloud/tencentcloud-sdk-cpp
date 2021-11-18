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

#include <tencentcloud/afc/v20200226/model/AntiFraudVipRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Afc::V20200226::Model;
using namespace std;

AntiFraudVipRecord::AntiFraudVipRecord() :
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

CoreInternalOutcome AntiFraudVipRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("CodeDesc") && !value["CodeDesc"].IsNull())
    {
        if (!value["CodeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.CodeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeDesc = string(value["CodeDesc"].GetString());
        m_codeDescHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Found") && !value["Found"].IsNull())
    {
        if (!value["Found"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.Found` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_found = string(value["Found"].GetString());
        m_foundHasBeenSet = true;
    }

    if (value.HasMember("IdFound") && !value["IdFound"].IsNull())
    {
        if (!value["IdFound"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.IdFound` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idFound = string(value["IdFound"].GetString());
        m_idFoundHasBeenSet = true;
    }

    if (value.HasMember("RiskScore") && !value["RiskScore"].IsNull())
    {
        if (!value["RiskScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.RiskScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskScore = string(value["RiskScore"].GetString());
        m_riskScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskInfo") && !value["RiskInfo"].IsNull())
    {
        if (!value["RiskInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.RiskInfo` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.OtherModelScores` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherModelScores"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OtherModelScores item;
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
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.PostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = string(value["PostTime"].GetString());
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtensionOut") && !value["ExtensionOut"].IsNull())
    {
        if (!value["ExtensionOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipRecord.ExtensionOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionOut = string(value["ExtensionOut"].GetString());
        m_extensionOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AntiFraudVipRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string AntiFraudVipRecord::GetCode() const
{
    return m_code;
}

void AntiFraudVipRecord::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool AntiFraudVipRecord::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string AntiFraudVipRecord::GetCodeDesc() const
{
    return m_codeDesc;
}

void AntiFraudVipRecord::SetCodeDesc(const string& _codeDesc)
{
    m_codeDesc = _codeDesc;
    m_codeDescHasBeenSet = true;
}

bool AntiFraudVipRecord::CodeDescHasBeenSet() const
{
    return m_codeDescHasBeenSet;
}

string AntiFraudVipRecord::GetMessage() const
{
    return m_message;
}

void AntiFraudVipRecord::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AntiFraudVipRecord::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string AntiFraudVipRecord::GetFound() const
{
    return m_found;
}

void AntiFraudVipRecord::SetFound(const string& _found)
{
    m_found = _found;
    m_foundHasBeenSet = true;
}

bool AntiFraudVipRecord::FoundHasBeenSet() const
{
    return m_foundHasBeenSet;
}

string AntiFraudVipRecord::GetIdFound() const
{
    return m_idFound;
}

void AntiFraudVipRecord::SetIdFound(const string& _idFound)
{
    m_idFound = _idFound;
    m_idFoundHasBeenSet = true;
}

bool AntiFraudVipRecord::IdFoundHasBeenSet() const
{
    return m_idFoundHasBeenSet;
}

string AntiFraudVipRecord::GetRiskScore() const
{
    return m_riskScore;
}

void AntiFraudVipRecord::SetRiskScore(const string& _riskScore)
{
    m_riskScore = _riskScore;
    m_riskScoreHasBeenSet = true;
}

bool AntiFraudVipRecord::RiskScoreHasBeenSet() const
{
    return m_riskScoreHasBeenSet;
}

vector<SimpleKindRiskDetail> AntiFraudVipRecord::GetRiskInfo() const
{
    return m_riskInfo;
}

void AntiFraudVipRecord::SetRiskInfo(const vector<SimpleKindRiskDetail>& _riskInfo)
{
    m_riskInfo = _riskInfo;
    m_riskInfoHasBeenSet = true;
}

bool AntiFraudVipRecord::RiskInfoHasBeenSet() const
{
    return m_riskInfoHasBeenSet;
}

vector<OtherModelScores> AntiFraudVipRecord::GetOtherModelScores() const
{
    return m_otherModelScores;
}

void AntiFraudVipRecord::SetOtherModelScores(const vector<OtherModelScores>& _otherModelScores)
{
    m_otherModelScores = _otherModelScores;
    m_otherModelScoresHasBeenSet = true;
}

bool AntiFraudVipRecord::OtherModelScoresHasBeenSet() const
{
    return m_otherModelScoresHasBeenSet;
}

string AntiFraudVipRecord::GetPostTime() const
{
    return m_postTime;
}

void AntiFraudVipRecord::SetPostTime(const string& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool AntiFraudVipRecord::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string AntiFraudVipRecord::GetExtensionOut() const
{
    return m_extensionOut;
}

void AntiFraudVipRecord::SetExtensionOut(const string& _extensionOut)
{
    m_extensionOut = _extensionOut;
    m_extensionOutHasBeenSet = true;
}

bool AntiFraudVipRecord::ExtensionOutHasBeenSet() const
{
    return m_extensionOutHasBeenSet;
}

