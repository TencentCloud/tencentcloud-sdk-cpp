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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceExtension.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceExtension::HTTPServiceExtension() :
    m_headersHandlerHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceExtension::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeadersHandler") && !value["HeadersHandler"].IsNull())
    {
        if (!value["HeadersHandler"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceExtension.HeadersHandler` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headersHandler.Deserialize(value["HeadersHandler"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headersHandlerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceExtension::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headersHandlerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadersHandler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headersHandler.ToJsonObject(value[key.c_str()], allocator);
    }

}


HTTPServiceHeadersHandler HTTPServiceExtension::GetHeadersHandler() const
{
    return m_headersHandler;
}

void HTTPServiceExtension::SetHeadersHandler(const HTTPServiceHeadersHandler& _headersHandler)
{
    m_headersHandler = _headersHandler;
    m_headersHandlerHasBeenSet = true;
}

bool HTTPServiceExtension::HeadersHandlerHasBeenSet() const
{
    return m_headersHandlerHasBeenSet;
}

