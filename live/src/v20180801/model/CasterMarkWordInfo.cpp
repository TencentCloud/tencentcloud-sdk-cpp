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

#include <tencentcloud/live/v20180801/model/CasterMarkWordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CasterMarkWordInfo::CasterMarkWordInfo() :
    m_markWordIndexHasBeenSet(false),
    m_markWordTextHasBeenSet(false),
    m_markWordFontSizeHasBeenSet(false),
    m_markWordFontColorHasBeenSet(false),
    m_markWordFontTypeHasBeenSet(false),
    m_markWordLocationXHasBeenSet(false),
    m_markWordLocationYHasBeenSet(false),
    m_markWordRollEnableHasBeenSet(false),
    m_markWordRollOnceTimeHasBeenSet(false),
    m_markWordRollDirectionHasBeenSet(false),
    m_markWordRollStartLocationXHasBeenSet(false),
    m_markWordRollEndLocationXHasBeenSet(false)
{
}

CoreInternalOutcome CasterMarkWordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarkWordIndex") && !value["MarkWordIndex"].IsNull())
    {
        if (!value["MarkWordIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_markWordIndex = value["MarkWordIndex"].GetInt64();
        m_markWordIndexHasBeenSet = true;
    }

    if (value.HasMember("MarkWordText") && !value["MarkWordText"].IsNull())
    {
        if (!value["MarkWordText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markWordText = string(value["MarkWordText"].GetString());
        m_markWordTextHasBeenSet = true;
    }

    if (value.HasMember("MarkWordFontSize") && !value["MarkWordFontSize"].IsNull())
    {
        if (!value["MarkWordFontSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordFontSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_markWordFontSize = value["MarkWordFontSize"].GetUint64();
        m_markWordFontSizeHasBeenSet = true;
    }

    if (value.HasMember("MarkWordFontColor") && !value["MarkWordFontColor"].IsNull())
    {
        if (!value["MarkWordFontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordFontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markWordFontColor = string(value["MarkWordFontColor"].GetString());
        m_markWordFontColorHasBeenSet = true;
    }

    if (value.HasMember("MarkWordFontType") && !value["MarkWordFontType"].IsNull())
    {
        if (!value["MarkWordFontType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordFontType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_markWordFontType = value["MarkWordFontType"].GetUint64();
        m_markWordFontTypeHasBeenSet = true;
    }

    if (value.HasMember("MarkWordLocationX") && !value["MarkWordLocationX"].IsNull())
    {
        if (!value["MarkWordLocationX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordLocationX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_markWordLocationX = value["MarkWordLocationX"].GetDouble();
        m_markWordLocationXHasBeenSet = true;
    }

    if (value.HasMember("MarkWordLocationY") && !value["MarkWordLocationY"].IsNull())
    {
        if (!value["MarkWordLocationY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordLocationY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_markWordLocationY = value["MarkWordLocationY"].GetDouble();
        m_markWordLocationYHasBeenSet = true;
    }

    if (value.HasMember("MarkWordRollEnable") && !value["MarkWordRollEnable"].IsNull())
    {
        if (!value["MarkWordRollEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordRollEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_markWordRollEnable = value["MarkWordRollEnable"].GetBool();
        m_markWordRollEnableHasBeenSet = true;
    }

    if (value.HasMember("MarkWordRollOnceTime") && !value["MarkWordRollOnceTime"].IsNull())
    {
        if (!value["MarkWordRollOnceTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordRollOnceTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_markWordRollOnceTime = value["MarkWordRollOnceTime"].GetUint64();
        m_markWordRollOnceTimeHasBeenSet = true;
    }

    if (value.HasMember("MarkWordRollDirection") && !value["MarkWordRollDirection"].IsNull())
    {
        if (!value["MarkWordRollDirection"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordRollDirection` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_markWordRollDirection = value["MarkWordRollDirection"].GetInt64();
        m_markWordRollDirectionHasBeenSet = true;
    }

    if (value.HasMember("MarkWordRollStartLocationX") && !value["MarkWordRollStartLocationX"].IsNull())
    {
        if (!value["MarkWordRollStartLocationX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordRollStartLocationX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_markWordRollStartLocationX = value["MarkWordRollStartLocationX"].GetDouble();
        m_markWordRollStartLocationXHasBeenSet = true;
    }

    if (value.HasMember("MarkWordRollEndLocationX") && !value["MarkWordRollEndLocationX"].IsNull())
    {
        if (!value["MarkWordRollEndLocationX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkWordInfo.MarkWordRollEndLocationX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_markWordRollEndLocationX = value["MarkWordRollEndLocationX"].GetDouble();
        m_markWordRollEndLocationXHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CasterMarkWordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_markWordIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordIndex, allocator);
    }

    if (m_markWordTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_markWordText.c_str(), allocator).Move(), allocator);
    }

    if (m_markWordFontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordFontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordFontSize, allocator);
    }

    if (m_markWordFontColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordFontColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_markWordFontColor.c_str(), allocator).Move(), allocator);
    }

    if (m_markWordFontTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordFontType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordFontType, allocator);
    }

    if (m_markWordLocationXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordLocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordLocationX, allocator);
    }

    if (m_markWordLocationYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordLocationY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordLocationY, allocator);
    }

    if (m_markWordRollEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordRollEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordRollEnable, allocator);
    }

    if (m_markWordRollOnceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordRollOnceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordRollOnceTime, allocator);
    }

    if (m_markWordRollDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordRollDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordRollDirection, allocator);
    }

    if (m_markWordRollStartLocationXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordRollStartLocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordRollStartLocationX, allocator);
    }

    if (m_markWordRollEndLocationXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkWordRollEndLocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markWordRollEndLocationX, allocator);
    }

}


int64_t CasterMarkWordInfo::GetMarkWordIndex() const
{
    return m_markWordIndex;
}

void CasterMarkWordInfo::SetMarkWordIndex(const int64_t& _markWordIndex)
{
    m_markWordIndex = _markWordIndex;
    m_markWordIndexHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordIndexHasBeenSet() const
{
    return m_markWordIndexHasBeenSet;
}

string CasterMarkWordInfo::GetMarkWordText() const
{
    return m_markWordText;
}

void CasterMarkWordInfo::SetMarkWordText(const string& _markWordText)
{
    m_markWordText = _markWordText;
    m_markWordTextHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordTextHasBeenSet() const
{
    return m_markWordTextHasBeenSet;
}

uint64_t CasterMarkWordInfo::GetMarkWordFontSize() const
{
    return m_markWordFontSize;
}

void CasterMarkWordInfo::SetMarkWordFontSize(const uint64_t& _markWordFontSize)
{
    m_markWordFontSize = _markWordFontSize;
    m_markWordFontSizeHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordFontSizeHasBeenSet() const
{
    return m_markWordFontSizeHasBeenSet;
}

string CasterMarkWordInfo::GetMarkWordFontColor() const
{
    return m_markWordFontColor;
}

void CasterMarkWordInfo::SetMarkWordFontColor(const string& _markWordFontColor)
{
    m_markWordFontColor = _markWordFontColor;
    m_markWordFontColorHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordFontColorHasBeenSet() const
{
    return m_markWordFontColorHasBeenSet;
}

uint64_t CasterMarkWordInfo::GetMarkWordFontType() const
{
    return m_markWordFontType;
}

void CasterMarkWordInfo::SetMarkWordFontType(const uint64_t& _markWordFontType)
{
    m_markWordFontType = _markWordFontType;
    m_markWordFontTypeHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordFontTypeHasBeenSet() const
{
    return m_markWordFontTypeHasBeenSet;
}

double CasterMarkWordInfo::GetMarkWordLocationX() const
{
    return m_markWordLocationX;
}

void CasterMarkWordInfo::SetMarkWordLocationX(const double& _markWordLocationX)
{
    m_markWordLocationX = _markWordLocationX;
    m_markWordLocationXHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordLocationXHasBeenSet() const
{
    return m_markWordLocationXHasBeenSet;
}

double CasterMarkWordInfo::GetMarkWordLocationY() const
{
    return m_markWordLocationY;
}

void CasterMarkWordInfo::SetMarkWordLocationY(const double& _markWordLocationY)
{
    m_markWordLocationY = _markWordLocationY;
    m_markWordLocationYHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordLocationYHasBeenSet() const
{
    return m_markWordLocationYHasBeenSet;
}

bool CasterMarkWordInfo::GetMarkWordRollEnable() const
{
    return m_markWordRollEnable;
}

void CasterMarkWordInfo::SetMarkWordRollEnable(const bool& _markWordRollEnable)
{
    m_markWordRollEnable = _markWordRollEnable;
    m_markWordRollEnableHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordRollEnableHasBeenSet() const
{
    return m_markWordRollEnableHasBeenSet;
}

uint64_t CasterMarkWordInfo::GetMarkWordRollOnceTime() const
{
    return m_markWordRollOnceTime;
}

void CasterMarkWordInfo::SetMarkWordRollOnceTime(const uint64_t& _markWordRollOnceTime)
{
    m_markWordRollOnceTime = _markWordRollOnceTime;
    m_markWordRollOnceTimeHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordRollOnceTimeHasBeenSet() const
{
    return m_markWordRollOnceTimeHasBeenSet;
}

int64_t CasterMarkWordInfo::GetMarkWordRollDirection() const
{
    return m_markWordRollDirection;
}

void CasterMarkWordInfo::SetMarkWordRollDirection(const int64_t& _markWordRollDirection)
{
    m_markWordRollDirection = _markWordRollDirection;
    m_markWordRollDirectionHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordRollDirectionHasBeenSet() const
{
    return m_markWordRollDirectionHasBeenSet;
}

double CasterMarkWordInfo::GetMarkWordRollStartLocationX() const
{
    return m_markWordRollStartLocationX;
}

void CasterMarkWordInfo::SetMarkWordRollStartLocationX(const double& _markWordRollStartLocationX)
{
    m_markWordRollStartLocationX = _markWordRollStartLocationX;
    m_markWordRollStartLocationXHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordRollStartLocationXHasBeenSet() const
{
    return m_markWordRollStartLocationXHasBeenSet;
}

double CasterMarkWordInfo::GetMarkWordRollEndLocationX() const
{
    return m_markWordRollEndLocationX;
}

void CasterMarkWordInfo::SetMarkWordRollEndLocationX(const double& _markWordRollEndLocationX)
{
    m_markWordRollEndLocationX = _markWordRollEndLocationX;
    m_markWordRollEndLocationXHasBeenSet = true;
}

bool CasterMarkWordInfo::MarkWordRollEndLocationXHasBeenSet() const
{
    return m_markWordRollEndLocationXHasBeenSet;
}

