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

#include <tencentcloud/ie/v20200304/model/PicMarkInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

PicMarkInfoItem::PicMarkInfoItem() :
    m_posXHasBeenSet(false),
    m_posYHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_cosInfoHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome PicMarkInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PosX") && !value["PosX"].IsNull())
    {
        if (!value["PosX"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PicMarkInfoItem.PosX` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_posX = value["PosX"].GetInt64();
        m_posXHasBeenSet = true;
    }

    if (value.HasMember("PosY") && !value["PosY"].IsNull())
    {
        if (!value["PosY"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PicMarkInfoItem.PosY` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_posY = value["PosY"].GetInt64();
        m_posYHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PicMarkInfoItem.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("CosInfo") && !value["CosInfo"].IsNull())
    {
        if (!value["CosInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PicMarkInfoItem.CosInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosInfo.Deserialize(value["CosInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosInfoHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PicMarkInfoItem.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PicMarkInfoItem.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PicMarkInfoItem.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PicMarkInfoItem.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PicMarkInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_posXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posX, allocator);
    }

    if (m_posYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posY, allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_cosInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosInfo.ToJsonObject(value[key.c_str()], allocator);
    }

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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

}


int64_t PicMarkInfoItem::GetPosX() const
{
    return m_posX;
}

void PicMarkInfoItem::SetPosX(const int64_t& _posX)
{
    m_posX = _posX;
    m_posXHasBeenSet = true;
}

bool PicMarkInfoItem::PosXHasBeenSet() const
{
    return m_posXHasBeenSet;
}

int64_t PicMarkInfoItem::GetPosY() const
{
    return m_posY;
}

void PicMarkInfoItem::SetPosY(const int64_t& _posY)
{
    m_posY = _posY;
    m_posYHasBeenSet = true;
}

bool PicMarkInfoItem::PosYHasBeenSet() const
{
    return m_posYHasBeenSet;
}

string PicMarkInfoItem::GetPath() const
{
    return m_path;
}

void PicMarkInfoItem::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool PicMarkInfoItem::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

CosInfo PicMarkInfoItem::GetCosInfo() const
{
    return m_cosInfo;
}

void PicMarkInfoItem::SetCosInfo(const CosInfo& _cosInfo)
{
    m_cosInfo = _cosInfo;
    m_cosInfoHasBeenSet = true;
}

bool PicMarkInfoItem::CosInfoHasBeenSet() const
{
    return m_cosInfoHasBeenSet;
}

int64_t PicMarkInfoItem::GetWidth() const
{
    return m_width;
}

void PicMarkInfoItem::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool PicMarkInfoItem::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t PicMarkInfoItem::GetHeight() const
{
    return m_height;
}

void PicMarkInfoItem::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool PicMarkInfoItem::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t PicMarkInfoItem::GetStartTime() const
{
    return m_startTime;
}

void PicMarkInfoItem::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PicMarkInfoItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t PicMarkInfoItem::GetEndTime() const
{
    return m_endTime;
}

void PicMarkInfoItem::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PicMarkInfoItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

