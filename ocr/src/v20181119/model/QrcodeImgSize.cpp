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

#include <tencentcloud/ocr/v20181119/model/QrcodeImgSize.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QrcodeImgSize::QrcodeImgSize() :
    m_wideHasBeenSet(false),
    m_highHasBeenSet(false)
{
}

CoreInternalOutcome QrcodeImgSize::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Wide") && !value["Wide"].IsNull())
    {
        if (!value["Wide"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodeImgSize.Wide` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wide = value["Wide"].GetInt64();
        m_wideHasBeenSet = true;
    }

    if (value.HasMember("High") && !value["High"].IsNull())
    {
        if (!value["High"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodeImgSize.High` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_high = value["High"].GetInt64();
        m_highHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QrcodeImgSize::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wide, allocator);
    }

    if (m_highHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "High";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_high, allocator);
    }

}


int64_t QrcodeImgSize::GetWide() const
{
    return m_wide;
}

void QrcodeImgSize::SetWide(const int64_t& _wide)
{
    m_wide = _wide;
    m_wideHasBeenSet = true;
}

bool QrcodeImgSize::WideHasBeenSet() const
{
    return m_wideHasBeenSet;
}

int64_t QrcodeImgSize::GetHigh() const
{
    return m_high;
}

void QrcodeImgSize::SetHigh(const int64_t& _high)
{
    m_high = _high;
    m_highHasBeenSet = true;
}

bool QrcodeImgSize::HighHasBeenSet() const
{
    return m_highHasBeenSet;
}

