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

#include <tencentcloud/trtc/v20190722/model/McuCloudVod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuCloudVod::McuCloudVod() :
    m_mcuTencentVodHasBeenSet(false)
{
}

CoreInternalOutcome McuCloudVod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("McuTencentVod") && !value["McuTencentVod"].IsNull())
    {
        if (!value["McuTencentVod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuCloudVod.McuTencentVod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mcuTencentVod.Deserialize(value["McuTencentVod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mcuTencentVodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuCloudVod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mcuTencentVodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McuTencentVod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mcuTencentVod.ToJsonObject(value[key.c_str()], allocator);
    }

}


McuTencentVod McuCloudVod::GetMcuTencentVod() const
{
    return m_mcuTencentVod;
}

void McuCloudVod::SetMcuTencentVod(const McuTencentVod& _mcuTencentVod)
{
    m_mcuTencentVod = _mcuTencentVod;
    m_mcuTencentVodHasBeenSet = true;
}

bool McuCloudVod::McuTencentVodHasBeenSet() const
{
    return m_mcuTencentVodHasBeenSet;
}

