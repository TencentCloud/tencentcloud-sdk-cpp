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

#include <tencentcloud/cloudaudit/v20190319/model/LookUpEventsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace rapidjson;
using namespace std;

LookUpEventsResponse::LookUpEventsResponse() :
    m_eventsHasBeenSet(false),
    m_listOverHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

CoreInternalOutcome LookUpEventsResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Events") && !rsp["Events"].IsNull())
    {
        if (!rsp["Events"].IsArray())
            return CoreInternalOutcome(Error("response `Events` is not array type"));

        const Value &tmpValue = rsp["Events"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Event item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_events.push_back(item);
        }
        m_eventsHasBeenSet = true;
    }

    if (rsp.HasMember("ListOver") && !rsp["ListOver"].IsNull())
    {
        if (!rsp["ListOver"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ListOver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_listOver = rsp["ListOver"].GetBool();
        m_listOverHasBeenSet = true;
    }

    if (rsp.HasMember("NextToken") && !rsp["NextToken"].IsNull())
    {
        if (!rsp["NextToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `NextToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextToken = string(rsp["NextToken"].GetString());
        m_nextTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<Event> LookUpEventsResponse::GetEvents() const
{
    return m_events;
}

bool LookUpEventsResponse::EventsHasBeenSet() const
{
    return m_eventsHasBeenSet;
}

bool LookUpEventsResponse::GetListOver() const
{
    return m_listOver;
}

bool LookUpEventsResponse::ListOverHasBeenSet() const
{
    return m_listOverHasBeenSet;
}

string LookUpEventsResponse::GetNextToken() const
{
    return m_nextToken;
}

bool LookUpEventsResponse::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}


