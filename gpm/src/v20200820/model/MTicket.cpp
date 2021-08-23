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

#include <tencentcloud/gpm/v20200820/model/MTicket.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

MTicket::MTicket() :
    m_matchCodeHasBeenSet(false),
    m_matchTicketIdHasBeenSet(false)
{
}

CoreInternalOutcome MTicket::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchCode") && !value["MatchCode"].IsNull())
    {
        if (!value["MatchCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MTicket.MatchCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchCode = string(value["MatchCode"].GetString());
        m_matchCodeHasBeenSet = true;
    }

    if (value.HasMember("MatchTicketId") && !value["MatchTicketId"].IsNull())
    {
        if (!value["MatchTicketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MTicket.MatchTicketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchTicketId = string(value["MatchTicketId"].GetString());
        m_matchTicketIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MTicket::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTicketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchTicketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchTicketId.c_str(), allocator).Move(), allocator);
    }

}


string MTicket::GetMatchCode() const
{
    return m_matchCode;
}

void MTicket::SetMatchCode(const string& _matchCode)
{
    m_matchCode = _matchCode;
    m_matchCodeHasBeenSet = true;
}

bool MTicket::MatchCodeHasBeenSet() const
{
    return m_matchCodeHasBeenSet;
}

string MTicket::GetMatchTicketId() const
{
    return m_matchTicketId;
}

void MTicket::SetMatchTicketId(const string& _matchTicketId)
{
    m_matchTicketId = _matchTicketId;
    m_matchTicketIdHasBeenSet = true;
}

bool MTicket::MatchTicketIdHasBeenSet() const
{
    return m_matchTicketIdHasBeenSet;
}

