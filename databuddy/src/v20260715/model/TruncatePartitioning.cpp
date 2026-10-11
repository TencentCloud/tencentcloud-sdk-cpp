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

#include <tencentcloud/databuddy/v20260715/model/TruncatePartitioning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

TruncatePartitioning::TruncatePartitioning() :
    m_filedNameHasBeenSet(false),
    m_widthHasBeenSet(false)
{
}

CoreInternalOutcome TruncatePartitioning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FiledName") && !value["FiledName"].IsNull())
    {
        if (!value["FiledName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TruncatePartitioning.FiledName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filedName = string(value["FiledName"].GetString());
        m_filedNameHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TruncatePartitioning.Width` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_width = string(value["Width"].GetString());
        m_widthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TruncatePartitioning::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filedNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FiledName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filedName.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_width.c_str(), allocator).Move(), allocator);
    }

}


string TruncatePartitioning::GetFiledName() const
{
    return m_filedName;
}

void TruncatePartitioning::SetFiledName(const string& _filedName)
{
    m_filedName = _filedName;
    m_filedNameHasBeenSet = true;
}

bool TruncatePartitioning::FiledNameHasBeenSet() const
{
    return m_filedNameHasBeenSet;
}

string TruncatePartitioning::GetWidth() const
{
    return m_width;
}

void TruncatePartitioning::SetWidth(const string& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool TruncatePartitioning::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

