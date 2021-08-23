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

#include <tencentcloud/captcha/v20190722/model/CaptchaQueryData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CaptchaQueryData::CaptchaQueryData() :
    m_cntHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome CaptchaQueryData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cnt") && !value["Cnt"].IsNull())
    {
        if (!value["Cnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaQueryData.Cnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cnt = value["Cnt"].GetInt64();
        m_cntHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaQueryData.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptchaQueryData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cnt, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


int64_t CaptchaQueryData::GetCnt() const
{
    return m_cnt;
}

void CaptchaQueryData::SetCnt(const int64_t& _cnt)
{
    m_cnt = _cnt;
    m_cntHasBeenSet = true;
}

bool CaptchaQueryData::CntHasBeenSet() const
{
    return m_cntHasBeenSet;
}

string CaptchaQueryData::GetDate() const
{
    return m_date;
}

void CaptchaQueryData::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool CaptchaQueryData::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

