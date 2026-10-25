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

#include <tencentcloud/databuddy/v20260715/model/UpdateViewRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateViewRsp::UpdateViewRsp() :
    m_viewHasBeenSet(false)
{
}

CoreInternalOutcome UpdateViewRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("View") && !value["View"].IsNull())
    {
        if (!value["View"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateViewRsp.View` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_view.Deserialize(value["View"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_viewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateViewRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "View";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_view.ToJsonObject(value[key.c_str()], allocator);
    }

}


ViewInfo UpdateViewRsp::GetView() const
{
    return m_view;
}

void UpdateViewRsp::SetView(const ViewInfo& _view)
{
    m_view = _view;
    m_viewHasBeenSet = true;
}

bool UpdateViewRsp::ViewHasBeenSet() const
{
    return m_viewHasBeenSet;
}

