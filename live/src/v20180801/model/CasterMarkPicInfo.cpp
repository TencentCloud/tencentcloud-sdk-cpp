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

#include <tencentcloud/live/v20180801/model/CasterMarkPicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CasterMarkPicInfo::CasterMarkPicInfo() :
    m_markPicIndexHasBeenSet(false),
    m_markPicIdHasBeenSet(false),
    m_markPicWidthHasBeenSet(false),
    m_markPicHeightHasBeenSet(false),
    m_markPicLocationXHasBeenSet(false),
    m_markPicLocationYHasBeenSet(false),
    m_markPicUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isEqualProportionHasBeenSet(false)
{
}

CoreInternalOutcome CasterMarkPicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarkPicIndex") && !value["MarkPicIndex"].IsNull())
    {
        if (!value["MarkPicIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkPicInfo.MarkPicIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_markPicIndex = value["MarkPicIndex"].GetInt64();
        m_markPicIndexHasBeenSet = true;
    }

    if (value.HasMember("MarkPicId") && !value["MarkPicId"].IsNull())
    {
        if (!value["MarkPicId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkPicInfo.MarkPicId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_markPicId = value["MarkPicId"].GetInt64();
        m_markPicIdHasBeenSet = true;
    }

    if (value.HasMember("MarkPicWidth") && !value["MarkPicWidth"].IsNull())
    {
        if (!value["MarkPicWidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkPicInfo.MarkPicWidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_markPicWidth = value["MarkPicWidth"].GetDouble();
        m_markPicWidthHasBeenSet = true;
    }

    if (value.HasMember("MarkPicHeight") && !value["MarkPicHeight"].IsNull())
    {
        if (!value["MarkPicHeight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkPicInfo.MarkPicHeight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_markPicHeight = value["MarkPicHeight"].GetDouble();
        m_markPicHeightHasBeenSet = true;
    }

    if (value.HasMember("MarkPicLocationX") && !value["MarkPicLocationX"].IsNull())
    {
        if (!value["MarkPicLocationX"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkPicInfo.MarkPicLocationX` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_markPicLocationX = value["MarkPicLocationX"].GetDouble();
        m_markPicLocationXHasBeenSet = true;
    }

    if (value.HasMember("MarkPicLocationY") && !value["MarkPicLocationY"].IsNull())
    {
        if (!value["MarkPicLocationY"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkPicInfo.MarkPicLocationY` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_markPicLocationY = value["MarkPicLocationY"].GetDouble();
        m_markPicLocationYHasBeenSet = true;
    }

    if (value.HasMember("MarkPicUrl") && !value["MarkPicUrl"].IsNull())
    {
        if (!value["MarkPicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkPicInfo.MarkPicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markPicUrl = string(value["MarkPicUrl"].GetString());
        m_markPicUrlHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkPicInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IsEqualProportion") && !value["IsEqualProportion"].IsNull())
    {
        if (!value["IsEqualProportion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CasterMarkPicInfo.IsEqualProportion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEqualProportion = value["IsEqualProportion"].GetBool();
        m_isEqualProportionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CasterMarkPicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_markPicIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkPicIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markPicIndex, allocator);
    }

    if (m_markPicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkPicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markPicId, allocator);
    }

    if (m_markPicWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkPicWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markPicWidth, allocator);
    }

    if (m_markPicHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkPicHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markPicHeight, allocator);
    }

    if (m_markPicLocationXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkPicLocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markPicLocationX, allocator);
    }

    if (m_markPicLocationYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkPicLocationY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markPicLocationY, allocator);
    }

    if (m_markPicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkPicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_markPicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_isEqualProportionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEqualProportion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEqualProportion, allocator);
    }

}


int64_t CasterMarkPicInfo::GetMarkPicIndex() const
{
    return m_markPicIndex;
}

void CasterMarkPicInfo::SetMarkPicIndex(const int64_t& _markPicIndex)
{
    m_markPicIndex = _markPicIndex;
    m_markPicIndexHasBeenSet = true;
}

bool CasterMarkPicInfo::MarkPicIndexHasBeenSet() const
{
    return m_markPicIndexHasBeenSet;
}

int64_t CasterMarkPicInfo::GetMarkPicId() const
{
    return m_markPicId;
}

void CasterMarkPicInfo::SetMarkPicId(const int64_t& _markPicId)
{
    m_markPicId = _markPicId;
    m_markPicIdHasBeenSet = true;
}

bool CasterMarkPicInfo::MarkPicIdHasBeenSet() const
{
    return m_markPicIdHasBeenSet;
}

double CasterMarkPicInfo::GetMarkPicWidth() const
{
    return m_markPicWidth;
}

void CasterMarkPicInfo::SetMarkPicWidth(const double& _markPicWidth)
{
    m_markPicWidth = _markPicWidth;
    m_markPicWidthHasBeenSet = true;
}

bool CasterMarkPicInfo::MarkPicWidthHasBeenSet() const
{
    return m_markPicWidthHasBeenSet;
}

double CasterMarkPicInfo::GetMarkPicHeight() const
{
    return m_markPicHeight;
}

void CasterMarkPicInfo::SetMarkPicHeight(const double& _markPicHeight)
{
    m_markPicHeight = _markPicHeight;
    m_markPicHeightHasBeenSet = true;
}

bool CasterMarkPicInfo::MarkPicHeightHasBeenSet() const
{
    return m_markPicHeightHasBeenSet;
}

double CasterMarkPicInfo::GetMarkPicLocationX() const
{
    return m_markPicLocationX;
}

void CasterMarkPicInfo::SetMarkPicLocationX(const double& _markPicLocationX)
{
    m_markPicLocationX = _markPicLocationX;
    m_markPicLocationXHasBeenSet = true;
}

bool CasterMarkPicInfo::MarkPicLocationXHasBeenSet() const
{
    return m_markPicLocationXHasBeenSet;
}

double CasterMarkPicInfo::GetMarkPicLocationY() const
{
    return m_markPicLocationY;
}

void CasterMarkPicInfo::SetMarkPicLocationY(const double& _markPicLocationY)
{
    m_markPicLocationY = _markPicLocationY;
    m_markPicLocationYHasBeenSet = true;
}

bool CasterMarkPicInfo::MarkPicLocationYHasBeenSet() const
{
    return m_markPicLocationYHasBeenSet;
}

string CasterMarkPicInfo::GetMarkPicUrl() const
{
    return m_markPicUrl;
}

void CasterMarkPicInfo::SetMarkPicUrl(const string& _markPicUrl)
{
    m_markPicUrl = _markPicUrl;
    m_markPicUrlHasBeenSet = true;
}

bool CasterMarkPicInfo::MarkPicUrlHasBeenSet() const
{
    return m_markPicUrlHasBeenSet;
}

string CasterMarkPicInfo::GetDescription() const
{
    return m_description;
}

void CasterMarkPicInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CasterMarkPicInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CasterMarkPicInfo::GetIsEqualProportion() const
{
    return m_isEqualProportion;
}

void CasterMarkPicInfo::SetIsEqualProportion(const bool& _isEqualProportion)
{
    m_isEqualProportion = _isEqualProportion;
    m_isEqualProportionHasBeenSet = true;
}

bool CasterMarkPicInfo::IsEqualProportionHasBeenSet() const
{
    return m_isEqualProportionHasBeenSet;
}

