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

#include <tencentcloud/dsgc/v20190723/model/ErrDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ErrDescription::ErrDescription() :
    m_errCodeHasBeenSet(false),
    m_errMessageHasBeenSet(false)
{
}

CoreInternalOutcome ErrDescription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrDescription.ErrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = string(value["ErrCode"].GetString());
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMessage") && !value["ErrMessage"].IsNull())
    {
        if (!value["ErrMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrDescription.ErrMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMessage = string(value["ErrMessage"].GetString());
        m_errMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrDescription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMessage.c_str(), allocator).Move(), allocator);
    }

}


string ErrDescription::GetErrCode() const
{
    return m_errCode;
}

void ErrDescription::SetErrCode(const string& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool ErrDescription::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string ErrDescription::GetErrMessage() const
{
    return m_errMessage;
}

void ErrDescription::SetErrMessage(const string& _errMessage)
{
    m_errMessage = _errMessage;
    m_errMessageHasBeenSet = true;
}

bool ErrDescription::ErrMessageHasBeenSet() const
{
    return m_errMessageHasBeenSet;
}

