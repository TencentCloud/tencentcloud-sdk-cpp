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

#include <tencentcloud/tcss/v20201101/model/EscapeWhiteListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

EscapeWhiteListInfo::EscapeWhiteListInfo() :
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_superNodeCountHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_imageSizeHasBeenSet(false)
{
}

CoreInternalOutcome EscapeWhiteListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("SuperNodeCount") && !value["SuperNodeCount"].IsNull())
    {
        if (!value["SuperNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.SuperNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_superNodeCount = value["SuperNodeCount"].GetInt64();
        m_superNodeCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.ContainerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetInt64();
        m_containerCountHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.EventType` is not array type"));

        const rapidjson::Value &tmpValue = value["EventType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eventType.push_back((*itr).GetString());
        }
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeWhiteListInfo.ImageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = value["ImageSize"].GetInt64();
        m_imageSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EscapeWhiteListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_superNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_superNodeCount, allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventType.begin(); itr != m_eventType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
    }

}


string EscapeWhiteListInfo::GetImageID() const
{
    return m_imageID;
}

void EscapeWhiteListInfo::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool EscapeWhiteListInfo::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string EscapeWhiteListInfo::GetImageName() const
{
    return m_imageName;
}

void EscapeWhiteListInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool EscapeWhiteListInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

int64_t EscapeWhiteListInfo::GetID() const
{
    return m_iD;
}

void EscapeWhiteListInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool EscapeWhiteListInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t EscapeWhiteListInfo::GetHostCount() const
{
    return m_hostCount;
}

void EscapeWhiteListInfo::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool EscapeWhiteListInfo::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

int64_t EscapeWhiteListInfo::GetSuperNodeCount() const
{
    return m_superNodeCount;
}

void EscapeWhiteListInfo::SetSuperNodeCount(const int64_t& _superNodeCount)
{
    m_superNodeCount = _superNodeCount;
    m_superNodeCountHasBeenSet = true;
}

bool EscapeWhiteListInfo::SuperNodeCountHasBeenSet() const
{
    return m_superNodeCountHasBeenSet;
}

int64_t EscapeWhiteListInfo::GetContainerCount() const
{
    return m_containerCount;
}

void EscapeWhiteListInfo::SetContainerCount(const int64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool EscapeWhiteListInfo::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

vector<string> EscapeWhiteListInfo::GetEventType() const
{
    return m_eventType;
}

void EscapeWhiteListInfo::SetEventType(const vector<string>& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EscapeWhiteListInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EscapeWhiteListInfo::GetInsertTime() const
{
    return m_insertTime;
}

void EscapeWhiteListInfo::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool EscapeWhiteListInfo::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string EscapeWhiteListInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void EscapeWhiteListInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool EscapeWhiteListInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t EscapeWhiteListInfo::GetImageSize() const
{
    return m_imageSize;
}

void EscapeWhiteListInfo::SetImageSize(const int64_t& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool EscapeWhiteListInfo::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

