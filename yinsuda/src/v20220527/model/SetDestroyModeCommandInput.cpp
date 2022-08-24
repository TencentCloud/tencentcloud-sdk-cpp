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

#include <tencentcloud/yinsuda/v20220527/model/SetDestroyModeCommandInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

SetDestroyModeCommandInput::SetDestroyModeCommandInput() :
    m_destroyModeHasBeenSet(false),
    m_destroyExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome SetDestroyModeCommandInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DestroyMode") && !value["DestroyMode"].IsNull())
    {
        if (!value["DestroyMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetDestroyModeCommandInput.DestroyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyMode = string(value["DestroyMode"].GetString());
        m_destroyModeHasBeenSet = true;
    }

    if (value.HasMember("DestroyExpireTime") && !value["DestroyExpireTime"].IsNull())
    {
        if (!value["DestroyExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SetDestroyModeCommandInput.DestroyExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_destroyExpireTime = value["DestroyExpireTime"].GetInt64();
        m_destroyExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetDestroyModeCommandInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destroyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destroyExpireTime, allocator);
    }

}


string SetDestroyModeCommandInput::GetDestroyMode() const
{
    return m_destroyMode;
}

void SetDestroyModeCommandInput::SetDestroyMode(const string& _destroyMode)
{
    m_destroyMode = _destroyMode;
    m_destroyModeHasBeenSet = true;
}

bool SetDestroyModeCommandInput::DestroyModeHasBeenSet() const
{
    return m_destroyModeHasBeenSet;
}

int64_t SetDestroyModeCommandInput::GetDestroyExpireTime() const
{
    return m_destroyExpireTime;
}

void SetDestroyModeCommandInput::SetDestroyExpireTime(const int64_t& _destroyExpireTime)
{
    m_destroyExpireTime = _destroyExpireTime;
    m_destroyExpireTimeHasBeenSet = true;
}

bool SetDestroyModeCommandInput::DestroyExpireTimeHasBeenSet() const
{
    return m_destroyExpireTimeHasBeenSet;
}

