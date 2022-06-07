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

#include <tencentcloud/teo/v20220106/model/RateLimitTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

RateLimitTemplate::RateLimitTemplate() :
    m_modeHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

CoreInternalOutcome RateLimitTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitTemplate.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitTemplate.Detail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_detail.Deserialize(value["Detail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimitTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_detail.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RateLimitTemplate::GetMode() const
{
    return m_mode;
}

void RateLimitTemplate::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool RateLimitTemplate::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

RateLimitTemplateDetail RateLimitTemplate::GetDetail() const
{
    return m_detail;
}

void RateLimitTemplate::SetDetail(const RateLimitTemplateDetail& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool RateLimitTemplate::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

