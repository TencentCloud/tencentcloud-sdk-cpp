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

#include <tencentcloud/wedata/v20210820/model/BaselineDetailResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BaselineDetailResponse::BaselineDetailResponse() :
    m_baselineDtoHasBeenSet(false),
    m_baselineCreateAlarmRuleRequestHasBeenSet(false),
    m_isNewAlarmHasBeenSet(false)
{
}

CoreInternalOutcome BaselineDetailResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BaselineDto") && !value["BaselineDto"].IsNull())
    {
        if (!value["BaselineDto"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDetailResponse.BaselineDto` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baselineDto.Deserialize(value["BaselineDto"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baselineDtoHasBeenSet = true;
    }

    if (value.HasMember("BaselineCreateAlarmRuleRequest") && !value["BaselineCreateAlarmRuleRequest"].IsNull())
    {
        if (!value["BaselineCreateAlarmRuleRequest"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDetailResponse.BaselineCreateAlarmRuleRequest` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baselineCreateAlarmRuleRequest.Deserialize(value["BaselineCreateAlarmRuleRequest"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baselineCreateAlarmRuleRequestHasBeenSet = true;
    }

    if (value.HasMember("IsNewAlarm") && !value["IsNewAlarm"].IsNull())
    {
        if (!value["IsNewAlarm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineDetailResponse.IsNewAlarm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAlarm = value["IsNewAlarm"].GetBool();
        m_isNewAlarmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineDetailResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baselineDtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineDto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baselineDto.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_baselineCreateAlarmRuleRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineCreateAlarmRuleRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baselineCreateAlarmRuleRequest.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isNewAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAlarm, allocator);
    }

}


BaselineDto BaselineDetailResponse::GetBaselineDto() const
{
    return m_baselineDto;
}

void BaselineDetailResponse::SetBaselineDto(const BaselineDto& _baselineDto)
{
    m_baselineDto = _baselineDto;
    m_baselineDtoHasBeenSet = true;
}

bool BaselineDetailResponse::BaselineDtoHasBeenSet() const
{
    return m_baselineDtoHasBeenSet;
}

CreateAlarmRuleRequest BaselineDetailResponse::GetBaselineCreateAlarmRuleRequest() const
{
    return m_baselineCreateAlarmRuleRequest;
}

void BaselineDetailResponse::SetBaselineCreateAlarmRuleRequest(const CreateAlarmRuleRequest& _baselineCreateAlarmRuleRequest)
{
    m_baselineCreateAlarmRuleRequest = _baselineCreateAlarmRuleRequest;
    m_baselineCreateAlarmRuleRequestHasBeenSet = true;
}

bool BaselineDetailResponse::BaselineCreateAlarmRuleRequestHasBeenSet() const
{
    return m_baselineCreateAlarmRuleRequestHasBeenSet;
}

bool BaselineDetailResponse::GetIsNewAlarm() const
{
    return m_isNewAlarm;
}

void BaselineDetailResponse::SetIsNewAlarm(const bool& _isNewAlarm)
{
    m_isNewAlarm = _isNewAlarm;
    m_isNewAlarmHasBeenSet = true;
}

bool BaselineDetailResponse::IsNewAlarmHasBeenSet() const
{
    return m_isNewAlarmHasBeenSet;
}

