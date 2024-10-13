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

#include <tencentcloud/waf/v20180125/model/ApiDetailSampleHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiDetailSampleHistory::ApiDetailSampleHistory() :
    m_sampleNmeHasBeenSet(false),
    m_repLogHasBeenSet(false),
    m_rspLogHasBeenSet(false)
{
}

CoreInternalOutcome ApiDetailSampleHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SampleNme") && !value["SampleNme"].IsNull())
    {
        if (!value["SampleNme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailSampleHistory.SampleNme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleNme = string(value["SampleNme"].GetString());
        m_sampleNmeHasBeenSet = true;
    }

    if (value.HasMember("RepLog") && !value["RepLog"].IsNull())
    {
        if (!value["RepLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailSampleHistory.RepLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repLog = string(value["RepLog"].GetString());
        m_repLogHasBeenSet = true;
    }

    if (value.HasMember("RspLog") && !value["RspLog"].IsNull())
    {
        if (!value["RspLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailSampleHistory.RspLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rspLog = string(value["RspLog"].GetString());
        m_rspLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiDetailSampleHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sampleNmeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleNme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sampleNme.c_str(), allocator).Move(), allocator);
    }

    if (m_repLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repLog.c_str(), allocator).Move(), allocator);
    }

    if (m_rspLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rspLog.c_str(), allocator).Move(), allocator);
    }

}


string ApiDetailSampleHistory::GetSampleNme() const
{
    return m_sampleNme;
}

void ApiDetailSampleHistory::SetSampleNme(const string& _sampleNme)
{
    m_sampleNme = _sampleNme;
    m_sampleNmeHasBeenSet = true;
}

bool ApiDetailSampleHistory::SampleNmeHasBeenSet() const
{
    return m_sampleNmeHasBeenSet;
}

string ApiDetailSampleHistory::GetRepLog() const
{
    return m_repLog;
}

void ApiDetailSampleHistory::SetRepLog(const string& _repLog)
{
    m_repLog = _repLog;
    m_repLogHasBeenSet = true;
}

bool ApiDetailSampleHistory::RepLogHasBeenSet() const
{
    return m_repLogHasBeenSet;
}

string ApiDetailSampleHistory::GetRspLog() const
{
    return m_rspLog;
}

void ApiDetailSampleHistory::SetRspLog(const string& _rspLog)
{
    m_rspLog = _rspLog;
    m_rspLogHasBeenSet = true;
}

bool ApiDetailSampleHistory::RspLogHasBeenSet() const
{
    return m_rspLogHasBeenSet;
}

