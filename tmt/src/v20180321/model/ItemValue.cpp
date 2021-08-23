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

#include <tencentcloud/tmt/v20180321/model/ItemValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

ItemValue::ItemValue() :
    m_sourceTextHasBeenSet(false),
    m_targetTextHasBeenSet(false),
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_wHasBeenSet(false),
    m_hHasBeenSet(false)
{
}

CoreInternalOutcome ItemValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceText") && !value["SourceText"].IsNull())
    {
        if (!value["SourceText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ItemValue.SourceText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceText = string(value["SourceText"].GetString());
        m_sourceTextHasBeenSet = true;
    }

    if (value.HasMember("TargetText") && !value["TargetText"].IsNull())
    {
        if (!value["TargetText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ItemValue.TargetText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetText = string(value["TargetText"].GetString());
        m_targetTextHasBeenSet = true;
    }

    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ItemValue.X` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetInt64();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ItemValue.Y` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetInt64();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("W") && !value["W"].IsNull())
    {
        if (!value["W"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ItemValue.W` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_w = value["W"].GetInt64();
        m_wHasBeenSet = true;
    }

    if (value.HasMember("H") && !value["H"].IsNull())
    {
        if (!value["H"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ItemValue.H` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_h = value["H"].GetInt64();
        m_hHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ItemValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceText.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetText.c_str(), allocator).Move(), allocator);
    }

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_x, allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
    }

    if (m_wHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "W";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_w, allocator);
    }

    if (m_hHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "H";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_h, allocator);
    }

}


string ItemValue::GetSourceText() const
{
    return m_sourceText;
}

void ItemValue::SetSourceText(const string& _sourceText)
{
    m_sourceText = _sourceText;
    m_sourceTextHasBeenSet = true;
}

bool ItemValue::SourceTextHasBeenSet() const
{
    return m_sourceTextHasBeenSet;
}

string ItemValue::GetTargetText() const
{
    return m_targetText;
}

void ItemValue::SetTargetText(const string& _targetText)
{
    m_targetText = _targetText;
    m_targetTextHasBeenSet = true;
}

bool ItemValue::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}

int64_t ItemValue::GetX() const
{
    return m_x;
}

void ItemValue::SetX(const int64_t& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool ItemValue::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

int64_t ItemValue::GetY() const
{
    return m_y;
}

void ItemValue::SetY(const int64_t& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool ItemValue::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

int64_t ItemValue::GetW() const
{
    return m_w;
}

void ItemValue::SetW(const int64_t& _w)
{
    m_w = _w;
    m_wHasBeenSet = true;
}

bool ItemValue::WHasBeenSet() const
{
    return m_wHasBeenSet;
}

int64_t ItemValue::GetH() const
{
    return m_h;
}

void ItemValue::SetH(const int64_t& _h)
{
    m_h = _h;
    m_hHasBeenSet = true;
}

bool ItemValue::HHasBeenSet() const
{
    return m_hHasBeenSet;
}

