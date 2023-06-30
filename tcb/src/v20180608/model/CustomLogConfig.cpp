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

#include <tencentcloud/tcb/v20180608/model/CustomLogConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CustomLogConfig::CustomLogConfig() :
    m_needReqBodyLogHasBeenSet(false),
    m_needReqHeaderLogHasBeenSet(false),
    m_needRspBodyLogHasBeenSet(false),
    m_needRspHeaderLogHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_logTopicIdHasBeenSet(false)
{
}

CoreInternalOutcome CustomLogConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NeedReqBodyLog") && !value["NeedReqBodyLog"].IsNull())
    {
        if (!value["NeedReqBodyLog"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLogConfig.NeedReqBodyLog` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needReqBodyLog = value["NeedReqBodyLog"].GetBool();
        m_needReqBodyLogHasBeenSet = true;
    }

    if (value.HasMember("NeedReqHeaderLog") && !value["NeedReqHeaderLog"].IsNull())
    {
        if (!value["NeedReqHeaderLog"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLogConfig.NeedReqHeaderLog` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needReqHeaderLog = value["NeedReqHeaderLog"].GetBool();
        m_needReqHeaderLogHasBeenSet = true;
    }

    if (value.HasMember("NeedRspBodyLog") && !value["NeedRspBodyLog"].IsNull())
    {
        if (!value["NeedRspBodyLog"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLogConfig.NeedRspBodyLog` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needRspBodyLog = value["NeedRspBodyLog"].GetBool();
        m_needRspBodyLogHasBeenSet = true;
    }

    if (value.HasMember("NeedRspHeaderLog") && !value["NeedRspHeaderLog"].IsNull())
    {
        if (!value["NeedRspHeaderLog"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLogConfig.NeedRspHeaderLog` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needRspHeaderLog = value["NeedRspHeaderLog"].GetBool();
        m_needRspHeaderLogHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLogConfig.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("LogTopicId") && !value["LogTopicId"].IsNull())
    {
        if (!value["LogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomLogConfig.LogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicId = string(value["LogTopicId"].GetString());
        m_logTopicIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomLogConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_needReqBodyLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReqBodyLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needReqBodyLog, allocator);
    }

    if (m_needReqHeaderLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReqHeaderLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needReqHeaderLog, allocator);
    }

    if (m_needRspBodyLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRspBodyLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needRspBodyLog, allocator);
    }

    if (m_needRspHeaderLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRspHeaderLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needRspHeaderLog, allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

}


bool CustomLogConfig::GetNeedReqBodyLog() const
{
    return m_needReqBodyLog;
}

void CustomLogConfig::SetNeedReqBodyLog(const bool& _needReqBodyLog)
{
    m_needReqBodyLog = _needReqBodyLog;
    m_needReqBodyLogHasBeenSet = true;
}

bool CustomLogConfig::NeedReqBodyLogHasBeenSet() const
{
    return m_needReqBodyLogHasBeenSet;
}

bool CustomLogConfig::GetNeedReqHeaderLog() const
{
    return m_needReqHeaderLog;
}

void CustomLogConfig::SetNeedReqHeaderLog(const bool& _needReqHeaderLog)
{
    m_needReqHeaderLog = _needReqHeaderLog;
    m_needReqHeaderLogHasBeenSet = true;
}

bool CustomLogConfig::NeedReqHeaderLogHasBeenSet() const
{
    return m_needReqHeaderLogHasBeenSet;
}

bool CustomLogConfig::GetNeedRspBodyLog() const
{
    return m_needRspBodyLog;
}

void CustomLogConfig::SetNeedRspBodyLog(const bool& _needRspBodyLog)
{
    m_needRspBodyLog = _needRspBodyLog;
    m_needRspBodyLogHasBeenSet = true;
}

bool CustomLogConfig::NeedRspBodyLogHasBeenSet() const
{
    return m_needRspBodyLogHasBeenSet;
}

bool CustomLogConfig::GetNeedRspHeaderLog() const
{
    return m_needRspHeaderLog;
}

void CustomLogConfig::SetNeedRspHeaderLog(const bool& _needRspHeaderLog)
{
    m_needRspHeaderLog = _needRspHeaderLog;
    m_needRspHeaderLogHasBeenSet = true;
}

bool CustomLogConfig::NeedRspHeaderLogHasBeenSet() const
{
    return m_needRspHeaderLogHasBeenSet;
}

string CustomLogConfig::GetLogSetId() const
{
    return m_logSetId;
}

void CustomLogConfig::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool CustomLogConfig::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string CustomLogConfig::GetLogTopicId() const
{
    return m_logTopicId;
}

void CustomLogConfig::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool CustomLogConfig::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

