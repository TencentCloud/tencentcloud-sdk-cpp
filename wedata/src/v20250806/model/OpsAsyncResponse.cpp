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

#include <tencentcloud/wedata/v20250806/model/OpsAsyncResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

OpsAsyncResponse::OpsAsyncResponse() :
    m_asyncIdHasBeenSet(false)
{
}

CoreInternalOutcome OpsAsyncResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsyncId") && !value["AsyncId"].IsNull())
    {
        if (!value["AsyncId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpsAsyncResponse.AsyncId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncId = string(value["AsyncId"].GetString());
        m_asyncIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpsAsyncResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asyncIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncId.c_str(), allocator).Move(), allocator);
    }

}


string OpsAsyncResponse::GetAsyncId() const
{
    return m_asyncId;
}

void OpsAsyncResponse::SetAsyncId(const string& _asyncId)
{
    m_asyncId = _asyncId;
    m_asyncIdHasBeenSet = true;
}

bool OpsAsyncResponse::AsyncIdHasBeenSet() const
{
    return m_asyncIdHasBeenSet;
}

