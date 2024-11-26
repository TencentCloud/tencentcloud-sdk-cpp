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

#include <tencentcloud/live/v20180801/model/CasterLayoutInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CasterLayoutInfo::CasterLayoutInfo() :
    m_layoutIndexHasBeenSet(false),
    m_layoutTemplateIdHasBeenSet(false),
    m_inputIndexListHasBeenSet(false),
    m_layoutParamsHasBeenSet(false),
    m_layoutWidthHasBeenSet(false),
    m_layoutHeightHasBeenSet(false)
{
}

CoreInternalOutcome CasterLayoutInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LayoutIndex") && !value["LayoutIndex"].IsNull())
    {
        if (!value["LayoutIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutInfo.LayoutIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layoutIndex = value["LayoutIndex"].GetInt64();
        m_layoutIndexHasBeenSet = true;
    }

    if (value.HasMember("LayoutTemplateId") && !value["LayoutTemplateId"].IsNull())
    {
        if (!value["LayoutTemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutInfo.LayoutTemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layoutTemplateId = value["LayoutTemplateId"].GetInt64();
        m_layoutTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("InputIndexList") && !value["InputIndexList"].IsNull())
    {
        if (!value["InputIndexList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutInfo.InputIndexList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputIndexList = string(value["InputIndexList"].GetString());
        m_inputIndexListHasBeenSet = true;
    }

    if (value.HasMember("LayoutParams") && !value["LayoutParams"].IsNull())
    {
        if (!value["LayoutParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CasterLayoutInfo.LayoutParams` is not array type"));

        const rapidjson::Value &tmpValue = value["LayoutParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CasterLayoutParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_layoutParams.push_back(item);
        }
        m_layoutParamsHasBeenSet = true;
    }

    if (value.HasMember("LayoutWidth") && !value["LayoutWidth"].IsNull())
    {
        if (!value["LayoutWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutInfo.LayoutWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_layoutWidth = value["LayoutWidth"].GetUint64();
        m_layoutWidthHasBeenSet = true;
    }

    if (value.HasMember("LayoutHeight") && !value["LayoutHeight"].IsNull())
    {
        if (!value["LayoutHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterLayoutInfo.LayoutHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_layoutHeight = value["LayoutHeight"].GetUint64();
        m_layoutHeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CasterLayoutInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layoutIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layoutIndex, allocator);
    }

    if (m_layoutTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layoutTemplateId, allocator);
    }

    if (m_inputIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputIndexList.c_str(), allocator).Move(), allocator);
    }

    if (m_layoutParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_layoutParams.begin(); itr != m_layoutParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_layoutWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layoutWidth, allocator);
    }

    if (m_layoutHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layoutHeight, allocator);
    }

}


int64_t CasterLayoutInfo::GetLayoutIndex() const
{
    return m_layoutIndex;
}

void CasterLayoutInfo::SetLayoutIndex(const int64_t& _layoutIndex)
{
    m_layoutIndex = _layoutIndex;
    m_layoutIndexHasBeenSet = true;
}

bool CasterLayoutInfo::LayoutIndexHasBeenSet() const
{
    return m_layoutIndexHasBeenSet;
}

int64_t CasterLayoutInfo::GetLayoutTemplateId() const
{
    return m_layoutTemplateId;
}

void CasterLayoutInfo::SetLayoutTemplateId(const int64_t& _layoutTemplateId)
{
    m_layoutTemplateId = _layoutTemplateId;
    m_layoutTemplateIdHasBeenSet = true;
}

bool CasterLayoutInfo::LayoutTemplateIdHasBeenSet() const
{
    return m_layoutTemplateIdHasBeenSet;
}

string CasterLayoutInfo::GetInputIndexList() const
{
    return m_inputIndexList;
}

void CasterLayoutInfo::SetInputIndexList(const string& _inputIndexList)
{
    m_inputIndexList = _inputIndexList;
    m_inputIndexListHasBeenSet = true;
}

bool CasterLayoutInfo::InputIndexListHasBeenSet() const
{
    return m_inputIndexListHasBeenSet;
}

vector<CasterLayoutParam> CasterLayoutInfo::GetLayoutParams() const
{
    return m_layoutParams;
}

void CasterLayoutInfo::SetLayoutParams(const vector<CasterLayoutParam>& _layoutParams)
{
    m_layoutParams = _layoutParams;
    m_layoutParamsHasBeenSet = true;
}

bool CasterLayoutInfo::LayoutParamsHasBeenSet() const
{
    return m_layoutParamsHasBeenSet;
}

uint64_t CasterLayoutInfo::GetLayoutWidth() const
{
    return m_layoutWidth;
}

void CasterLayoutInfo::SetLayoutWidth(const uint64_t& _layoutWidth)
{
    m_layoutWidth = _layoutWidth;
    m_layoutWidthHasBeenSet = true;
}

bool CasterLayoutInfo::LayoutWidthHasBeenSet() const
{
    return m_layoutWidthHasBeenSet;
}

uint64_t CasterLayoutInfo::GetLayoutHeight() const
{
    return m_layoutHeight;
}

void CasterLayoutInfo::SetLayoutHeight(const uint64_t& _layoutHeight)
{
    m_layoutHeight = _layoutHeight;
    m_layoutHeightHasBeenSet = true;
}

bool CasterLayoutInfo::LayoutHeightHasBeenSet() const
{
    return m_layoutHeightHasBeenSet;
}

