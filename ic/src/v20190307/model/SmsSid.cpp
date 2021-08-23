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

#include <tencentcloud/ic/v20190307/model/SmsSid.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

SmsSid::SmsSid() :
    m_iccidHasBeenSet(false),
    m_sidHasBeenSet(false)
{
}

CoreInternalOutcome SmsSid::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Iccid") && !value["Iccid"].IsNull())
    {
        if (!value["Iccid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmsSid.Iccid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iccid = string(value["Iccid"].GetString());
        m_iccidHasBeenSet = true;
    }

    if (value.HasMember("Sid") && !value["Sid"].IsNull())
    {
        if (!value["Sid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmsSid.Sid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sid = string(value["Sid"].GetString());
        m_sidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsSid::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iccidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iccid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iccid.c_str(), allocator).Move(), allocator);
    }

    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

}


string SmsSid::GetIccid() const
{
    return m_iccid;
}

void SmsSid::SetIccid(const string& _iccid)
{
    m_iccid = _iccid;
    m_iccidHasBeenSet = true;
}

bool SmsSid::IccidHasBeenSet() const
{
    return m_iccidHasBeenSet;
}

string SmsSid::GetSid() const
{
    return m_sid;
}

void SmsSid::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool SmsSid::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

