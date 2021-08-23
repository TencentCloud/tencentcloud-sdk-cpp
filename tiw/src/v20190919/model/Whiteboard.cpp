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

#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

Whiteboard::Whiteboard() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_initParamHasBeenSet(false)
{
}

CoreInternalOutcome Whiteboard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Whiteboard.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Whiteboard.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("InitParam") && !value["InitParam"].IsNull())
    {
        if (!value["InitParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Whiteboard.InitParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initParam = string(value["InitParam"].GetString());
        m_initParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Whiteboard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_initParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initParam.c_str(), allocator).Move(), allocator);
    }

}


int64_t Whiteboard::GetWidth() const
{
    return m_width;
}

void Whiteboard::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool Whiteboard::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t Whiteboard::GetHeight() const
{
    return m_height;
}

void Whiteboard::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool Whiteboard::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string Whiteboard::GetInitParam() const
{
    return m_initParam;
}

void Whiteboard::SetInitParam(const string& _initParam)
{
    m_initParam = _initParam;
    m_initParamHasBeenSet = true;
}

bool Whiteboard::InitParamHasBeenSet() const
{
    return m_initParamHasBeenSet;
}

