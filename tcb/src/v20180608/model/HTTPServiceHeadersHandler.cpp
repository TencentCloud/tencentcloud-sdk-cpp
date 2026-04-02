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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceHeadersHandler.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceHeadersHandler::HTTPServiceHeadersHandler() :
    m_requestHeadersToAddHasBeenSet(false),
    m_requestHeadersToRemoveHasBeenSet(false),
    m_responseHeadersToAddHasBeenSet(false),
    m_responseHeadersToRemoveHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceHeadersHandler::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestHeadersToAdd") && !value["RequestHeadersToAdd"].IsNull())
    {
        if (!value["RequestHeadersToAdd"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceHeadersHandler.RequestHeadersToAdd` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestHeadersToAdd"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HTTPServiceHeaderToAdd item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestHeadersToAdd.push_back(item);
        }
        m_requestHeadersToAddHasBeenSet = true;
    }

    if (value.HasMember("RequestHeadersToRemove") && !value["RequestHeadersToRemove"].IsNull())
    {
        if (!value["RequestHeadersToRemove"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceHeadersHandler.RequestHeadersToRemove` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestHeadersToRemove"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_requestHeadersToRemove.push_back((*itr).GetString());
        }
        m_requestHeadersToRemoveHasBeenSet = true;
    }

    if (value.HasMember("ResponseHeadersToAdd") && !value["ResponseHeadersToAdd"].IsNull())
    {
        if (!value["ResponseHeadersToAdd"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceHeadersHandler.ResponseHeadersToAdd` is not array type"));

        const rapidjson::Value &tmpValue = value["ResponseHeadersToAdd"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HTTPServiceHeaderToAdd item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_responseHeadersToAdd.push_back(item);
        }
        m_responseHeadersToAddHasBeenSet = true;
    }

    if (value.HasMember("ResponseHeadersToRemove") && !value["ResponseHeadersToRemove"].IsNull())
    {
        if (!value["ResponseHeadersToRemove"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceHeadersHandler.ResponseHeadersToRemove` is not array type"));

        const rapidjson::Value &tmpValue = value["ResponseHeadersToRemove"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_responseHeadersToRemove.push_back((*itr).GetString());
        }
        m_responseHeadersToRemoveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceHeadersHandler::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestHeadersToAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeadersToAdd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestHeadersToAdd.begin(); itr != m_requestHeadersToAdd.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestHeadersToRemoveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeadersToRemove";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_requestHeadersToRemove.begin(); itr != m_requestHeadersToRemove.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_responseHeadersToAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeadersToAdd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_responseHeadersToAdd.begin(); itr != m_responseHeadersToAdd.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_responseHeadersToRemoveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeadersToRemove";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_responseHeadersToRemove.begin(); itr != m_responseHeadersToRemove.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<HTTPServiceHeaderToAdd> HTTPServiceHeadersHandler::GetRequestHeadersToAdd() const
{
    return m_requestHeadersToAdd;
}

void HTTPServiceHeadersHandler::SetRequestHeadersToAdd(const vector<HTTPServiceHeaderToAdd>& _requestHeadersToAdd)
{
    m_requestHeadersToAdd = _requestHeadersToAdd;
    m_requestHeadersToAddHasBeenSet = true;
}

bool HTTPServiceHeadersHandler::RequestHeadersToAddHasBeenSet() const
{
    return m_requestHeadersToAddHasBeenSet;
}

vector<string> HTTPServiceHeadersHandler::GetRequestHeadersToRemove() const
{
    return m_requestHeadersToRemove;
}

void HTTPServiceHeadersHandler::SetRequestHeadersToRemove(const vector<string>& _requestHeadersToRemove)
{
    m_requestHeadersToRemove = _requestHeadersToRemove;
    m_requestHeadersToRemoveHasBeenSet = true;
}

bool HTTPServiceHeadersHandler::RequestHeadersToRemoveHasBeenSet() const
{
    return m_requestHeadersToRemoveHasBeenSet;
}

vector<HTTPServiceHeaderToAdd> HTTPServiceHeadersHandler::GetResponseHeadersToAdd() const
{
    return m_responseHeadersToAdd;
}

void HTTPServiceHeadersHandler::SetResponseHeadersToAdd(const vector<HTTPServiceHeaderToAdd>& _responseHeadersToAdd)
{
    m_responseHeadersToAdd = _responseHeadersToAdd;
    m_responseHeadersToAddHasBeenSet = true;
}

bool HTTPServiceHeadersHandler::ResponseHeadersToAddHasBeenSet() const
{
    return m_responseHeadersToAddHasBeenSet;
}

vector<string> HTTPServiceHeadersHandler::GetResponseHeadersToRemove() const
{
    return m_responseHeadersToRemove;
}

void HTTPServiceHeadersHandler::SetResponseHeadersToRemove(const vector<string>& _responseHeadersToRemove)
{
    m_responseHeadersToRemove = _responseHeadersToRemove;
    m_responseHeadersToRemoveHasBeenSet = true;
}

bool HTTPServiceHeadersHandler::ResponseHeadersToRemoveHasBeenSet() const
{
    return m_responseHeadersToRemoveHasBeenSet;
}

