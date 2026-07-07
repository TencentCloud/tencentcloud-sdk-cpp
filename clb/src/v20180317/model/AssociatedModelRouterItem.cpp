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

#include <tencentcloud/clb/v20180317/model/AssociatedModelRouterItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

AssociatedModelRouterItem::AssociatedModelRouterItem() :
    m_modelRouterIdHasBeenSet(false)
{
}

CoreInternalOutcome AssociatedModelRouterItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelRouterId") && !value["ModelRouterId"].IsNull())
    {
        if (!value["ModelRouterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociatedModelRouterItem.ModelRouterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelRouterId = string(value["ModelRouterId"].GetString());
        m_modelRouterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssociatedModelRouterItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

}


string AssociatedModelRouterItem::GetModelRouterId() const
{
    return m_modelRouterId;
}

void AssociatedModelRouterItem::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool AssociatedModelRouterItem::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

