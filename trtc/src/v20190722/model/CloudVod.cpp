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

#include <tencentcloud/trtc/v20190722/model/CloudVod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CloudVod::CloudVod() :
    m_tencentVodHasBeenSet(false)
{
}

CoreInternalOutcome CloudVod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TencentVod") && !value["TencentVod"].IsNull())
    {
        if (!value["TencentVod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudVod.TencentVod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tencentVod.Deserialize(value["TencentVod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tencentVodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudVod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tencentVodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentVod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tencentVod.ToJsonObject(value[key.c_str()], allocator);
    }

}


TencentVod CloudVod::GetTencentVod() const
{
    return m_tencentVod;
}

void CloudVod::SetTencentVod(const TencentVod& _tencentVod)
{
    m_tencentVod = _tencentVod;
    m_tencentVodHasBeenSet = true;
}

bool CloudVod::TencentVodHasBeenSet() const
{
    return m_tencentVodHasBeenSet;
}

