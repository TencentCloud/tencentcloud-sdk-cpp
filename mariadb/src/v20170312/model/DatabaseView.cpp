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

#include <tencentcloud/mariadb/v20170312/model/DatabaseView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DatabaseView::DatabaseView() :
    m_viewHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("View") && !value["View"].IsNull())
    {
        if (!value["View"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseView.View` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_view = string(value["View"].GetString());
        m_viewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_viewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "View";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_view.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseView::GetView() const
{
    return m_view;
}

void DatabaseView::SetView(const string& _view)
{
    m_view = _view;
    m_viewHasBeenSet = true;
}

bool DatabaseView::ViewHasBeenSet() const
{
    return m_viewHasBeenSet;
}

