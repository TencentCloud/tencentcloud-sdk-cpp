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

#include <tencentcloud/sslpod/v20190605/model/LimitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

LimitInfo::LimitInfo() :
    m_typeHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_sentHasBeenSet(false)
{
}

CoreInternalOutcome LimitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LimitInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitInfo.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Sent") && !value["Sent"].IsNull())
    {
        if (!value["Sent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitInfo.Sent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sent = value["Sent"].GetInt64();
        m_sentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LimitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_sentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sent, allocator);
    }

}


string LimitInfo::GetType() const
{
    return m_type;
}

void LimitInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LimitInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t LimitInfo::GetTotal() const
{
    return m_total;
}

void LimitInfo::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool LimitInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t LimitInfo::GetSent() const
{
    return m_sent;
}

void LimitInfo::SetSent(const int64_t& _sent)
{
    m_sent = _sent;
    m_sentHasBeenSet = true;
}

bool LimitInfo::SentHasBeenSet() const
{
    return m_sentHasBeenSet;
}

