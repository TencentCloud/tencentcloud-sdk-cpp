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

#include <tencentcloud/tdmq/v20200217/model/AMQPExchange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

AMQPExchange::AMQPExchange() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sourceBindedNumHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_destBindedNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_internalHasBeenSet(false),
    m_alternateExchangeHasBeenSet(false),
    m_alternateExchangeDeleteMarkHasBeenSet(false),
    m_delayTypeHasBeenSet(false)
{
}

CoreInternalOutcome AMQPExchange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SourceBindedNum") && !value["SourceBindedNum"].IsNull())
    {
        if (!value["SourceBindedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.SourceBindedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceBindedNum = value["SourceBindedNum"].GetUint64();
        m_sourceBindedNumHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("DestBindedNum") && !value["DestBindedNum"].IsNull())
    {
        if (!value["DestBindedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.DestBindedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_destBindedNum = value["DestBindedNum"].GetUint64();
        m_destBindedNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Internal") && !value["Internal"].IsNull())
    {
        if (!value["Internal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.Internal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_internal = value["Internal"].GetBool();
        m_internalHasBeenSet = true;
    }

    if (value.HasMember("AlternateExchange") && !value["AlternateExchange"].IsNull())
    {
        if (!value["AlternateExchange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.AlternateExchange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alternateExchange = string(value["AlternateExchange"].GetString());
        m_alternateExchangeHasBeenSet = true;
    }

    if (value.HasMember("AlternateExchangeDeleteMark") && !value["AlternateExchangeDeleteMark"].IsNull())
    {
        if (!value["AlternateExchangeDeleteMark"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.AlternateExchangeDeleteMark` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_alternateExchangeDeleteMark = value["AlternateExchangeDeleteMark"].GetBool();
        m_alternateExchangeDeleteMarkHasBeenSet = true;
    }

    if (value.HasMember("DelayType") && !value["DelayType"].IsNull())
    {
        if (!value["DelayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPExchange.DelayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delayType = string(value["DelayType"].GetString());
        m_delayTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AMQPExchange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceBindedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceBindedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceBindedNum, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_destBindedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestBindedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destBindedNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_internalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Internal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internal, allocator);
    }

    if (m_alternateExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlternateExchange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alternateExchange.c_str(), allocator).Move(), allocator);
    }

    if (m_alternateExchangeDeleteMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlternateExchangeDeleteMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alternateExchangeDeleteMark, allocator);
    }

    if (m_delayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delayType.c_str(), allocator).Move(), allocator);
    }

}


string AMQPExchange::GetName() const
{
    return m_name;
}

void AMQPExchange::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AMQPExchange::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AMQPExchange::GetType() const
{
    return m_type;
}

void AMQPExchange::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AMQPExchange::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t AMQPExchange::GetSourceBindedNum() const
{
    return m_sourceBindedNum;
}

void AMQPExchange::SetSourceBindedNum(const uint64_t& _sourceBindedNum)
{
    m_sourceBindedNum = _sourceBindedNum;
    m_sourceBindedNumHasBeenSet = true;
}

bool AMQPExchange::SourceBindedNumHasBeenSet() const
{
    return m_sourceBindedNumHasBeenSet;
}

string AMQPExchange::GetRemark() const
{
    return m_remark;
}

void AMQPExchange::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AMQPExchange::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t AMQPExchange::GetDestBindedNum() const
{
    return m_destBindedNum;
}

void AMQPExchange::SetDestBindedNum(const uint64_t& _destBindedNum)
{
    m_destBindedNum = _destBindedNum;
    m_destBindedNumHasBeenSet = true;
}

bool AMQPExchange::DestBindedNumHasBeenSet() const
{
    return m_destBindedNumHasBeenSet;
}

uint64_t AMQPExchange::GetCreateTime() const
{
    return m_createTime;
}

void AMQPExchange::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AMQPExchange::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AMQPExchange::GetUpdateTime() const
{
    return m_updateTime;
}

void AMQPExchange::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AMQPExchange::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool AMQPExchange::GetInternal() const
{
    return m_internal;
}

void AMQPExchange::SetInternal(const bool& _internal)
{
    m_internal = _internal;
    m_internalHasBeenSet = true;
}

bool AMQPExchange::InternalHasBeenSet() const
{
    return m_internalHasBeenSet;
}

string AMQPExchange::GetAlternateExchange() const
{
    return m_alternateExchange;
}

void AMQPExchange::SetAlternateExchange(const string& _alternateExchange)
{
    m_alternateExchange = _alternateExchange;
    m_alternateExchangeHasBeenSet = true;
}

bool AMQPExchange::AlternateExchangeHasBeenSet() const
{
    return m_alternateExchangeHasBeenSet;
}

bool AMQPExchange::GetAlternateExchangeDeleteMark() const
{
    return m_alternateExchangeDeleteMark;
}

void AMQPExchange::SetAlternateExchangeDeleteMark(const bool& _alternateExchangeDeleteMark)
{
    m_alternateExchangeDeleteMark = _alternateExchangeDeleteMark;
    m_alternateExchangeDeleteMarkHasBeenSet = true;
}

bool AMQPExchange::AlternateExchangeDeleteMarkHasBeenSet() const
{
    return m_alternateExchangeDeleteMarkHasBeenSet;
}

string AMQPExchange::GetDelayType() const
{
    return m_delayType;
}

void AMQPExchange::SetDelayType(const string& _delayType)
{
    m_delayType = _delayType;
    m_delayTypeHasBeenSet = true;
}

bool AMQPExchange::DelayTypeHasBeenSet() const
{
    return m_delayTypeHasBeenSet;
}

