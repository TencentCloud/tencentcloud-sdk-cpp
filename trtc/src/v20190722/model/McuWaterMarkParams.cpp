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

#include <tencentcloud/trtc/v20190722/model/McuWaterMarkParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuWaterMarkParams::McuWaterMarkParams() :
    m_waterMarkTypeHasBeenSet(false),
    m_waterMarkImageHasBeenSet(false),
    m_waterMarkTextHasBeenSet(false)
{
}

CoreInternalOutcome McuWaterMarkParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WaterMarkType") && !value["WaterMarkType"].IsNull())
    {
        if (!value["WaterMarkType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkParams.WaterMarkType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkType = value["WaterMarkType"].GetUint64();
        m_waterMarkTypeHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkImage") && !value["WaterMarkImage"].IsNull())
    {
        if (!value["WaterMarkImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkParams.WaterMarkImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waterMarkImage.Deserialize(value["WaterMarkImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_waterMarkImageHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkText") && !value["WaterMarkText"].IsNull())
    {
        if (!value["WaterMarkText"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkParams.WaterMarkText` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waterMarkText.Deserialize(value["WaterMarkText"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_waterMarkTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuWaterMarkParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_waterMarkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waterMarkType, allocator);
    }

    if (m_waterMarkImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waterMarkImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_waterMarkTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waterMarkText.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t McuWaterMarkParams::GetWaterMarkType() const
{
    return m_waterMarkType;
}

void McuWaterMarkParams::SetWaterMarkType(const uint64_t& _waterMarkType)
{
    m_waterMarkType = _waterMarkType;
    m_waterMarkTypeHasBeenSet = true;
}

bool McuWaterMarkParams::WaterMarkTypeHasBeenSet() const
{
    return m_waterMarkTypeHasBeenSet;
}

McuWaterMarkImage McuWaterMarkParams::GetWaterMarkImage() const
{
    return m_waterMarkImage;
}

void McuWaterMarkParams::SetWaterMarkImage(const McuWaterMarkImage& _waterMarkImage)
{
    m_waterMarkImage = _waterMarkImage;
    m_waterMarkImageHasBeenSet = true;
}

bool McuWaterMarkParams::WaterMarkImageHasBeenSet() const
{
    return m_waterMarkImageHasBeenSet;
}

McuWaterMarkText McuWaterMarkParams::GetWaterMarkText() const
{
    return m_waterMarkText;
}

void McuWaterMarkParams::SetWaterMarkText(const McuWaterMarkText& _waterMarkText)
{
    m_waterMarkText = _waterMarkText;
    m_waterMarkTextHasBeenSet = true;
}

bool McuWaterMarkParams::WaterMarkTextHasBeenSet() const
{
    return m_waterMarkTextHasBeenSet;
}

