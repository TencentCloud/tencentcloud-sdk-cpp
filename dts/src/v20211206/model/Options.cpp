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

#include <tencentcloud/dts/v20211206/model/Options.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

Options::Options() :
    m_initTypeHasBeenSet(false),
    m_dealOfExistSameTableHasBeenSet(false),
    m_conflictHandleTypeHasBeenSet(false),
    m_addAdditionalColumnHasBeenSet(false),
    m_opTypesHasBeenSet(false),
    m_conflictHandleOptionHasBeenSet(false),
    m_ddlOptionsHasBeenSet(false),
    m_kafkaOptionHasBeenSet(false),
    m_rateLimitOptionHasBeenSet(false),
    m_autoRetryTimeRangeMinutesHasBeenSet(false),
    m_startPositionHasBeenSet(false),
    m_filterBeginCommitHasBeenSet(false),
    m_filterCheckpointHasBeenSet(false)
{
}

CoreInternalOutcome Options::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InitType") && !value["InitType"].IsNull())
    {
        if (!value["InitType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Options.InitType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initType = string(value["InitType"].GetString());
        m_initTypeHasBeenSet = true;
    }

    if (value.HasMember("DealOfExistSameTable") && !value["DealOfExistSameTable"].IsNull())
    {
        if (!value["DealOfExistSameTable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Options.DealOfExistSameTable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealOfExistSameTable = string(value["DealOfExistSameTable"].GetString());
        m_dealOfExistSameTableHasBeenSet = true;
    }

    if (value.HasMember("ConflictHandleType") && !value["ConflictHandleType"].IsNull())
    {
        if (!value["ConflictHandleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Options.ConflictHandleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conflictHandleType = string(value["ConflictHandleType"].GetString());
        m_conflictHandleTypeHasBeenSet = true;
    }

    if (value.HasMember("AddAdditionalColumn") && !value["AddAdditionalColumn"].IsNull())
    {
        if (!value["AddAdditionalColumn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Options.AddAdditionalColumn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_addAdditionalColumn = value["AddAdditionalColumn"].GetBool();
        m_addAdditionalColumnHasBeenSet = true;
    }

    if (value.HasMember("OpTypes") && !value["OpTypes"].IsNull())
    {
        if (!value["OpTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Options.OpTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["OpTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_opTypes.push_back((*itr).GetString());
        }
        m_opTypesHasBeenSet = true;
    }

    if (value.HasMember("ConflictHandleOption") && !value["ConflictHandleOption"].IsNull())
    {
        if (!value["ConflictHandleOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Options.ConflictHandleOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conflictHandleOption.Deserialize(value["ConflictHandleOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conflictHandleOptionHasBeenSet = true;
    }

    if (value.HasMember("DdlOptions") && !value["DdlOptions"].IsNull())
    {
        if (!value["DdlOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Options.DdlOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["DdlOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DdlOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ddlOptions.push_back(item);
        }
        m_ddlOptionsHasBeenSet = true;
    }

    if (value.HasMember("KafkaOption") && !value["KafkaOption"].IsNull())
    {
        if (!value["KafkaOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Options.KafkaOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kafkaOption.Deserialize(value["KafkaOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kafkaOptionHasBeenSet = true;
    }

    if (value.HasMember("RateLimitOption") && !value["RateLimitOption"].IsNull())
    {
        if (!value["RateLimitOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Options.RateLimitOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rateLimitOption.Deserialize(value["RateLimitOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rateLimitOptionHasBeenSet = true;
    }

    if (value.HasMember("AutoRetryTimeRangeMinutes") && !value["AutoRetryTimeRangeMinutes"].IsNull())
    {
        if (!value["AutoRetryTimeRangeMinutes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Options.AutoRetryTimeRangeMinutes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRetryTimeRangeMinutes = value["AutoRetryTimeRangeMinutes"].GetInt64();
        m_autoRetryTimeRangeMinutesHasBeenSet = true;
    }

    if (value.HasMember("StartPosition") && !value["StartPosition"].IsNull())
    {
        if (!value["StartPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Options.StartPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startPosition = string(value["StartPosition"].GetString());
        m_startPositionHasBeenSet = true;
    }

    if (value.HasMember("FilterBeginCommit") && !value["FilterBeginCommit"].IsNull())
    {
        if (!value["FilterBeginCommit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Options.FilterBeginCommit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_filterBeginCommit = value["FilterBeginCommit"].GetBool();
        m_filterBeginCommitHasBeenSet = true;
    }

    if (value.HasMember("FilterCheckpoint") && !value["FilterCheckpoint"].IsNull())
    {
        if (!value["FilterCheckpoint"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Options.FilterCheckpoint` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_filterCheckpoint = value["FilterCheckpoint"].GetBool();
        m_filterCheckpointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Options::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_initTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initType.c_str(), allocator).Move(), allocator);
    }

    if (m_dealOfExistSameTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealOfExistSameTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealOfExistSameTable.c_str(), allocator).Move(), allocator);
    }

    if (m_conflictHandleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictHandleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conflictHandleType.c_str(), allocator).Move(), allocator);
    }

    if (m_addAdditionalColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddAdditionalColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addAdditionalColumn, allocator);
    }

    if (m_opTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_opTypes.begin(); itr != m_opTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_conflictHandleOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictHandleOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conflictHandleOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ddlOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdlOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ddlOptions.begin(); itr != m_ddlOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_kafkaOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafkaOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rateLimitOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoRetryTimeRangeMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRetryTimeRangeMinutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRetryTimeRangeMinutes, allocator);
    }

    if (m_startPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_filterBeginCommitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterBeginCommit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterBeginCommit, allocator);
    }

    if (m_filterCheckpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterCheckpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterCheckpoint, allocator);
    }

}


string Options::GetInitType() const
{
    return m_initType;
}

void Options::SetInitType(const string& _initType)
{
    m_initType = _initType;
    m_initTypeHasBeenSet = true;
}

bool Options::InitTypeHasBeenSet() const
{
    return m_initTypeHasBeenSet;
}

string Options::GetDealOfExistSameTable() const
{
    return m_dealOfExistSameTable;
}

void Options::SetDealOfExistSameTable(const string& _dealOfExistSameTable)
{
    m_dealOfExistSameTable = _dealOfExistSameTable;
    m_dealOfExistSameTableHasBeenSet = true;
}

bool Options::DealOfExistSameTableHasBeenSet() const
{
    return m_dealOfExistSameTableHasBeenSet;
}

string Options::GetConflictHandleType() const
{
    return m_conflictHandleType;
}

void Options::SetConflictHandleType(const string& _conflictHandleType)
{
    m_conflictHandleType = _conflictHandleType;
    m_conflictHandleTypeHasBeenSet = true;
}

bool Options::ConflictHandleTypeHasBeenSet() const
{
    return m_conflictHandleTypeHasBeenSet;
}

bool Options::GetAddAdditionalColumn() const
{
    return m_addAdditionalColumn;
}

void Options::SetAddAdditionalColumn(const bool& _addAdditionalColumn)
{
    m_addAdditionalColumn = _addAdditionalColumn;
    m_addAdditionalColumnHasBeenSet = true;
}

bool Options::AddAdditionalColumnHasBeenSet() const
{
    return m_addAdditionalColumnHasBeenSet;
}

vector<string> Options::GetOpTypes() const
{
    return m_opTypes;
}

void Options::SetOpTypes(const vector<string>& _opTypes)
{
    m_opTypes = _opTypes;
    m_opTypesHasBeenSet = true;
}

bool Options::OpTypesHasBeenSet() const
{
    return m_opTypesHasBeenSet;
}

ConflictHandleOption Options::GetConflictHandleOption() const
{
    return m_conflictHandleOption;
}

void Options::SetConflictHandleOption(const ConflictHandleOption& _conflictHandleOption)
{
    m_conflictHandleOption = _conflictHandleOption;
    m_conflictHandleOptionHasBeenSet = true;
}

bool Options::ConflictHandleOptionHasBeenSet() const
{
    return m_conflictHandleOptionHasBeenSet;
}

vector<DdlOption> Options::GetDdlOptions() const
{
    return m_ddlOptions;
}

void Options::SetDdlOptions(const vector<DdlOption>& _ddlOptions)
{
    m_ddlOptions = _ddlOptions;
    m_ddlOptionsHasBeenSet = true;
}

bool Options::DdlOptionsHasBeenSet() const
{
    return m_ddlOptionsHasBeenSet;
}

KafkaOption Options::GetKafkaOption() const
{
    return m_kafkaOption;
}

void Options::SetKafkaOption(const KafkaOption& _kafkaOption)
{
    m_kafkaOption = _kafkaOption;
    m_kafkaOptionHasBeenSet = true;
}

bool Options::KafkaOptionHasBeenSet() const
{
    return m_kafkaOptionHasBeenSet;
}

RateLimitOption Options::GetRateLimitOption() const
{
    return m_rateLimitOption;
}

void Options::SetRateLimitOption(const RateLimitOption& _rateLimitOption)
{
    m_rateLimitOption = _rateLimitOption;
    m_rateLimitOptionHasBeenSet = true;
}

bool Options::RateLimitOptionHasBeenSet() const
{
    return m_rateLimitOptionHasBeenSet;
}

int64_t Options::GetAutoRetryTimeRangeMinutes() const
{
    return m_autoRetryTimeRangeMinutes;
}

void Options::SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes)
{
    m_autoRetryTimeRangeMinutes = _autoRetryTimeRangeMinutes;
    m_autoRetryTimeRangeMinutesHasBeenSet = true;
}

bool Options::AutoRetryTimeRangeMinutesHasBeenSet() const
{
    return m_autoRetryTimeRangeMinutesHasBeenSet;
}

string Options::GetStartPosition() const
{
    return m_startPosition;
}

void Options::SetStartPosition(const string& _startPosition)
{
    m_startPosition = _startPosition;
    m_startPositionHasBeenSet = true;
}

bool Options::StartPositionHasBeenSet() const
{
    return m_startPositionHasBeenSet;
}

bool Options::GetFilterBeginCommit() const
{
    return m_filterBeginCommit;
}

void Options::SetFilterBeginCommit(const bool& _filterBeginCommit)
{
    m_filterBeginCommit = _filterBeginCommit;
    m_filterBeginCommitHasBeenSet = true;
}

bool Options::FilterBeginCommitHasBeenSet() const
{
    return m_filterBeginCommitHasBeenSet;
}

bool Options::GetFilterCheckpoint() const
{
    return m_filterCheckpoint;
}

void Options::SetFilterCheckpoint(const bool& _filterCheckpoint)
{
    m_filterCheckpoint = _filterCheckpoint;
    m_filterCheckpointHasBeenSet = true;
}

bool Options::FilterCheckpointHasBeenSet() const
{
    return m_filterCheckpointHasBeenSet;
}

