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

#include <tencentcloud/weilingwith/v20230427/model/ControlDeviceRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ControlDeviceRes::ControlDeviceRes() :
    m_wIDHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_seqHasBeenSet(false)
{
}

CoreInternalOutcome ControlDeviceRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WID") && !value["WID"].IsNull())
    {
        if (!value["WID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ControlDeviceRes.WID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wID = string(value["WID"].GetString());
        m_wIDHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ControlDeviceRes.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ControlDeviceRes.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Seq") && !value["Seq"].IsNull())
    {
        if (!value["Seq"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ControlDeviceRes.Seq` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seq = string(value["Seq"].GetString());
        m_seqHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ControlDeviceRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wID.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_seqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seq.c_str(), allocator).Move(), allocator);
    }

}


string ControlDeviceRes::GetWID() const
{
    return m_wID;
}

void ControlDeviceRes::SetWID(const string& _wID)
{
    m_wID = _wID;
    m_wIDHasBeenSet = true;
}

bool ControlDeviceRes::WIDHasBeenSet() const
{
    return m_wIDHasBeenSet;
}

int64_t ControlDeviceRes::GetCode() const
{
    return m_code;
}

void ControlDeviceRes::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ControlDeviceRes::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ControlDeviceRes::GetResult() const
{
    return m_result;
}

void ControlDeviceRes::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ControlDeviceRes::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string ControlDeviceRes::GetSeq() const
{
    return m_seq;
}

void ControlDeviceRes::SetSeq(const string& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool ControlDeviceRes::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

