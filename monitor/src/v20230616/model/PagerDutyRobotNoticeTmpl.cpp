/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/monitor/v20230616/model/PagerDutyRobotNoticeTmpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

PagerDutyRobotNoticeTmpl::PagerDutyRobotNoticeTmpl() :
    m_bodyHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_titleTmplHasBeenSet(false)
{
}

CoreInternalOutcome PagerDutyRobotNoticeTmpl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PagerDutyRobotNoticeTmpl.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PagerDutyRobotNoticeTmpl.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PagerDutyRobotNoticeTmplHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("TitleTmpl") && !value["TitleTmpl"].IsNull())
    {
        if (!value["TitleTmpl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PagerDutyRobotNoticeTmpl.TitleTmpl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_titleTmpl = string(value["TitleTmpl"].GetString());
        m_titleTmplHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PagerDutyRobotNoticeTmpl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_titleTmplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TitleTmpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_titleTmpl.c_str(), allocator).Move(), allocator);
    }

}


string PagerDutyRobotNoticeTmpl::GetBody() const
{
    return m_body;
}

void PagerDutyRobotNoticeTmpl::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool PagerDutyRobotNoticeTmpl::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

vector<PagerDutyRobotNoticeTmplHeader> PagerDutyRobotNoticeTmpl::GetHeaders() const
{
    return m_headers;
}

void PagerDutyRobotNoticeTmpl::SetHeaders(const vector<PagerDutyRobotNoticeTmplHeader>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool PagerDutyRobotNoticeTmpl::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

string PagerDutyRobotNoticeTmpl::GetTitleTmpl() const
{
    return m_titleTmpl;
}

void PagerDutyRobotNoticeTmpl::SetTitleTmpl(const string& _titleTmpl)
{
    m_titleTmpl = _titleTmpl;
    m_titleTmplHasBeenSet = true;
}

bool PagerDutyRobotNoticeTmpl::TitleTmplHasBeenSet() const
{
    return m_titleTmplHasBeenSet;
}

