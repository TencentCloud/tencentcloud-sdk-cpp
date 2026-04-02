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

#include <tencentcloud/tcb/v20180608/model/LocalizedTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

LocalizedTemplate::LocalizedTemplate() :
    m_zhCNHasBeenSet(false),
    m_enUSHasBeenSet(false)
{
}

CoreInternalOutcome LocalizedTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZhCN") && !value["ZhCN"].IsNull())
    {
        if (!value["ZhCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalizedTemplate.ZhCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zhCN = string(value["ZhCN"].GetString());
        m_zhCNHasBeenSet = true;
    }

    if (value.HasMember("EnUS") && !value["EnUS"].IsNull())
    {
        if (!value["EnUS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalizedTemplate.EnUS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enUS = string(value["EnUS"].GetString());
        m_enUSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocalizedTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zhCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZhCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zhCN.c_str(), allocator).Move(), allocator);
    }

    if (m_enUSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnUS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enUS.c_str(), allocator).Move(), allocator);
    }

}


string LocalizedTemplate::GetZhCN() const
{
    return m_zhCN;
}

void LocalizedTemplate::SetZhCN(const string& _zhCN)
{
    m_zhCN = _zhCN;
    m_zhCNHasBeenSet = true;
}

bool LocalizedTemplate::ZhCNHasBeenSet() const
{
    return m_zhCNHasBeenSet;
}

string LocalizedTemplate::GetEnUS() const
{
    return m_enUS;
}

void LocalizedTemplate::SetEnUS(const string& _enUS)
{
    m_enUS = _enUS;
    m_enUSHasBeenSet = true;
}

bool LocalizedTemplate::EnUSHasBeenSet() const
{
    return m_enUSHasBeenSet;
}

