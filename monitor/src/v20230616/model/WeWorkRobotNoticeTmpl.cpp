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

#include <tencentcloud/monitor/v20230616/model/WeWorkRobotNoticeTmpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

WeWorkRobotNoticeTmpl::WeWorkRobotNoticeTmpl() :
    m_contentTmplHasBeenSet(false)
{
}

CoreInternalOutcome WeWorkRobotNoticeTmpl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentTmpl") && !value["ContentTmpl"].IsNull())
    {
        if (!value["ContentTmpl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeWorkRobotNoticeTmpl.ContentTmpl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentTmpl = string(value["ContentTmpl"].GetString());
        m_contentTmplHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeWorkRobotNoticeTmpl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentTmplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentTmpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentTmpl.c_str(), allocator).Move(), allocator);
    }

}


string WeWorkRobotNoticeTmpl::GetContentTmpl() const
{
    return m_contentTmpl;
}

void WeWorkRobotNoticeTmpl::SetContentTmpl(const string& _contentTmpl)
{
    m_contentTmpl = _contentTmpl;
    m_contentTmplHasBeenSet = true;
}

bool WeWorkRobotNoticeTmpl::ContentTmplHasBeenSet() const
{
    return m_contentTmplHasBeenSet;
}

