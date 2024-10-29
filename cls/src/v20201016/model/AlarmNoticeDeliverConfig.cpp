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

#include <tencentcloud/cls/v20201016/model/AlarmNoticeDeliverConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AlarmNoticeDeliverConfig::AlarmNoticeDeliverConfig() :
    m_deliverConfigHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome AlarmNoticeDeliverConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeliverConfig") && !value["DeliverConfig"].IsNull())
    {
        if (!value["DeliverConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNoticeDeliverConfig.DeliverConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deliverConfig.Deserialize(value["DeliverConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deliverConfigHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNoticeDeliverConfig.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmNoticeDeliverConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deliverConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deliverConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

}


DeliverConfig AlarmNoticeDeliverConfig::GetDeliverConfig() const
{
    return m_deliverConfig;
}

void AlarmNoticeDeliverConfig::SetDeliverConfig(const DeliverConfig& _deliverConfig)
{
    m_deliverConfig = _deliverConfig;
    m_deliverConfigHasBeenSet = true;
}

bool AlarmNoticeDeliverConfig::DeliverConfigHasBeenSet() const
{
    return m_deliverConfigHasBeenSet;
}

string AlarmNoticeDeliverConfig::GetErrMsg() const
{
    return m_errMsg;
}

void AlarmNoticeDeliverConfig::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool AlarmNoticeDeliverConfig::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

