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

#include <tencentcloud/tokenhub/v20260322/model/EndpointCreateDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

EndpointCreateDetail::EndpointCreateDetail() :
    m_preResourceIdHasBeenSet(false)
{
}

CoreInternalOutcome EndpointCreateDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PreResourceId") && !value["PreResourceId"].IsNull())
    {
        if (!value["PreResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointCreateDetail.PreResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preResourceId = string(value["PreResourceId"].GetString());
        m_preResourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointCreateDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_preResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preResourceId.c_str(), allocator).Move(), allocator);
    }

}


string EndpointCreateDetail::GetPreResourceId() const
{
    return m_preResourceId;
}

void EndpointCreateDetail::SetPreResourceId(const string& _preResourceId)
{
    m_preResourceId = _preResourceId;
    m_preResourceIdHasBeenSet = true;
}

bool EndpointCreateDetail::PreResourceIdHasBeenSet() const
{
    return m_preResourceIdHasBeenSet;
}

