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

#include <tencentcloud/tem/v20210701/model/TemDeployApplicationDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

TemDeployApplicationDetailInfo::TemDeployApplicationDetailInfo() :
    m_deployStrategyConfHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_betaBatchDetailHasBeenSet(false),
    m_otherBatchDetailHasBeenSet(false),
    m_oldVersionPodListHasBeenSet(false),
    m_currentBatchIndexHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_currentBatchStatusHasBeenSet(false),
    m_newDeployVersionHasBeenSet(false),
    m_oldDeployVersionHasBeenSet(false),
    m_newVersionPackageInfoHasBeenSet(false),
    m_nextBatchStartTimeHasBeenSet(false)
{
}

CoreInternalOutcome TemDeployApplicationDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeployStrategyConf") && !value["DeployStrategyConf"].IsNull())
    {
        if (!value["DeployStrategyConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.DeployStrategyConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deployStrategyConf.Deserialize(value["DeployStrategyConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deployStrategyConfHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BetaBatchDetail") && !value["BetaBatchDetail"].IsNull())
    {
        if (!value["BetaBatchDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.BetaBatchDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_betaBatchDetail.Deserialize(value["BetaBatchDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_betaBatchDetailHasBeenSet = true;
    }

    if (value.HasMember("OtherBatchDetail") && !value["OtherBatchDetail"].IsNull())
    {
        if (!value["OtherBatchDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.OtherBatchDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherBatchDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeployServiceBatchDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_otherBatchDetail.push_back(item);
        }
        m_otherBatchDetailHasBeenSet = true;
    }

    if (value.HasMember("OldVersionPodList") && !value["OldVersionPodList"].IsNull())
    {
        if (!value["OldVersionPodList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.OldVersionPodList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oldVersionPodList.Deserialize(value["OldVersionPodList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oldVersionPodListHasBeenSet = true;
    }

    if (value.HasMember("CurrentBatchIndex") && !value["CurrentBatchIndex"].IsNull())
    {
        if (!value["CurrentBatchIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.CurrentBatchIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentBatchIndex = value["CurrentBatchIndex"].GetInt64();
        m_currentBatchIndexHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("CurrentBatchStatus") && !value["CurrentBatchStatus"].IsNull())
    {
        if (!value["CurrentBatchStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.CurrentBatchStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentBatchStatus = string(value["CurrentBatchStatus"].GetString());
        m_currentBatchStatusHasBeenSet = true;
    }

    if (value.HasMember("NewDeployVersion") && !value["NewDeployVersion"].IsNull())
    {
        if (!value["NewDeployVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.NewDeployVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newDeployVersion = string(value["NewDeployVersion"].GetString());
        m_newDeployVersionHasBeenSet = true;
    }

    if (value.HasMember("OldDeployVersion") && !value["OldDeployVersion"].IsNull())
    {
        if (!value["OldDeployVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.OldDeployVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldDeployVersion = string(value["OldDeployVersion"].GetString());
        m_oldDeployVersionHasBeenSet = true;
    }

    if (value.HasMember("NewVersionPackageInfo") && !value["NewVersionPackageInfo"].IsNull())
    {
        if (!value["NewVersionPackageInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.NewVersionPackageInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newVersionPackageInfo = string(value["NewVersionPackageInfo"].GetString());
        m_newVersionPackageInfoHasBeenSet = true;
    }

    if (value.HasMember("NextBatchStartTime") && !value["NextBatchStartTime"].IsNull())
    {
        if (!value["NextBatchStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemDeployApplicationDetailInfo.NextBatchStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nextBatchStartTime = value["NextBatchStartTime"].GetInt64();
        m_nextBatchStartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemDeployApplicationDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deployStrategyConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployStrategyConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployStrategyConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_betaBatchDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BetaBatchDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_betaBatchDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherBatchDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherBatchDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherBatchDetail.begin(); itr != m_otherBatchDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_oldVersionPodListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldVersionPodList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oldVersionPodList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_currentBatchIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentBatchIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentBatchIndex, allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_currentBatchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentBatchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentBatchStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_newDeployVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDeployVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newDeployVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_oldDeployVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldDeployVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldDeployVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_newVersionPackageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewVersionPackageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newVersionPackageInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_nextBatchStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextBatchStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextBatchStartTime, allocator);
    }

}


DeployStrategyConf TemDeployApplicationDetailInfo::GetDeployStrategyConf() const
{
    return m_deployStrategyConf;
}

void TemDeployApplicationDetailInfo::SetDeployStrategyConf(const DeployStrategyConf& _deployStrategyConf)
{
    m_deployStrategyConf = _deployStrategyConf;
    m_deployStrategyConfHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::DeployStrategyConfHasBeenSet() const
{
    return m_deployStrategyConfHasBeenSet;
}

string TemDeployApplicationDetailInfo::GetStartTime() const
{
    return m_startTime;
}

void TemDeployApplicationDetailInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TemDeployApplicationDetailInfo::GetEndTime() const
{
    return m_endTime;
}

void TemDeployApplicationDetailInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TemDeployApplicationDetailInfo::GetStatus() const
{
    return m_status;
}

void TemDeployApplicationDetailInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

DeployServiceBatchDetail TemDeployApplicationDetailInfo::GetBetaBatchDetail() const
{
    return m_betaBatchDetail;
}

void TemDeployApplicationDetailInfo::SetBetaBatchDetail(const DeployServiceBatchDetail& _betaBatchDetail)
{
    m_betaBatchDetail = _betaBatchDetail;
    m_betaBatchDetailHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::BetaBatchDetailHasBeenSet() const
{
    return m_betaBatchDetailHasBeenSet;
}

vector<DeployServiceBatchDetail> TemDeployApplicationDetailInfo::GetOtherBatchDetail() const
{
    return m_otherBatchDetail;
}

void TemDeployApplicationDetailInfo::SetOtherBatchDetail(const vector<DeployServiceBatchDetail>& _otherBatchDetail)
{
    m_otherBatchDetail = _otherBatchDetail;
    m_otherBatchDetailHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::OtherBatchDetailHasBeenSet() const
{
    return m_otherBatchDetailHasBeenSet;
}

DescribeRunPodPage TemDeployApplicationDetailInfo::GetOldVersionPodList() const
{
    return m_oldVersionPodList;
}

void TemDeployApplicationDetailInfo::SetOldVersionPodList(const DescribeRunPodPage& _oldVersionPodList)
{
    m_oldVersionPodList = _oldVersionPodList;
    m_oldVersionPodListHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::OldVersionPodListHasBeenSet() const
{
    return m_oldVersionPodListHasBeenSet;
}

int64_t TemDeployApplicationDetailInfo::GetCurrentBatchIndex() const
{
    return m_currentBatchIndex;
}

void TemDeployApplicationDetailInfo::SetCurrentBatchIndex(const int64_t& _currentBatchIndex)
{
    m_currentBatchIndex = _currentBatchIndex;
    m_currentBatchIndexHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::CurrentBatchIndexHasBeenSet() const
{
    return m_currentBatchIndexHasBeenSet;
}

string TemDeployApplicationDetailInfo::GetErrorMessage() const
{
    return m_errorMessage;
}

void TemDeployApplicationDetailInfo::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string TemDeployApplicationDetailInfo::GetCurrentBatchStatus() const
{
    return m_currentBatchStatus;
}

void TemDeployApplicationDetailInfo::SetCurrentBatchStatus(const string& _currentBatchStatus)
{
    m_currentBatchStatus = _currentBatchStatus;
    m_currentBatchStatusHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::CurrentBatchStatusHasBeenSet() const
{
    return m_currentBatchStatusHasBeenSet;
}

string TemDeployApplicationDetailInfo::GetNewDeployVersion() const
{
    return m_newDeployVersion;
}

void TemDeployApplicationDetailInfo::SetNewDeployVersion(const string& _newDeployVersion)
{
    m_newDeployVersion = _newDeployVersion;
    m_newDeployVersionHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::NewDeployVersionHasBeenSet() const
{
    return m_newDeployVersionHasBeenSet;
}

string TemDeployApplicationDetailInfo::GetOldDeployVersion() const
{
    return m_oldDeployVersion;
}

void TemDeployApplicationDetailInfo::SetOldDeployVersion(const string& _oldDeployVersion)
{
    m_oldDeployVersion = _oldDeployVersion;
    m_oldDeployVersionHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::OldDeployVersionHasBeenSet() const
{
    return m_oldDeployVersionHasBeenSet;
}

string TemDeployApplicationDetailInfo::GetNewVersionPackageInfo() const
{
    return m_newVersionPackageInfo;
}

void TemDeployApplicationDetailInfo::SetNewVersionPackageInfo(const string& _newVersionPackageInfo)
{
    m_newVersionPackageInfo = _newVersionPackageInfo;
    m_newVersionPackageInfoHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::NewVersionPackageInfoHasBeenSet() const
{
    return m_newVersionPackageInfoHasBeenSet;
}

int64_t TemDeployApplicationDetailInfo::GetNextBatchStartTime() const
{
    return m_nextBatchStartTime;
}

void TemDeployApplicationDetailInfo::SetNextBatchStartTime(const int64_t& _nextBatchStartTime)
{
    m_nextBatchStartTime = _nextBatchStartTime;
    m_nextBatchStartTimeHasBeenSet = true;
}

bool TemDeployApplicationDetailInfo::NextBatchStartTimeHasBeenSet() const
{
    return m_nextBatchStartTimeHasBeenSet;
}

