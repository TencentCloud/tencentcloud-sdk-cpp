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

#include <tencentcloud/tcss/v20201101/model/VulAffectedImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulAffectedImageInfo::VulAffectedImageInfo() :
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_superNodeCountHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_componentListHasBeenSet(false)
{
}

CoreInternalOutcome VulAffectedImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageInfo.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageInfo.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("SuperNodeCount") && !value["SuperNodeCount"].IsNull())
    {
        if (!value["SuperNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageInfo.SuperNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_superNodeCount = value["SuperNodeCount"].GetInt64();
        m_superNodeCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageInfo.ContainerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetInt64();
        m_containerCountHasBeenSet = true;
    }

    if (value.HasMember("ComponentList") && !value["ComponentList"].IsNull())
    {
        if (!value["ComponentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulAffectedImageInfo.ComponentList` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulAffectedImageComponentInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentList.push_back(item);
        }
        m_componentListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulAffectedImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_componentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentList.begin(); itr != m_componentList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VulAffectedImageInfo::GetImageID() const
{
    return m_imageID;
}

void VulAffectedImageInfo::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool VulAffectedImageInfo::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string VulAffectedImageInfo::GetImageName() const
{
    return m_imageName;
}

void VulAffectedImageInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool VulAffectedImageInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

int64_t VulAffectedImageInfo::GetHostCount() const
{
    return m_hostCount;
}

void VulAffectedImageInfo::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool VulAffectedImageInfo::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

int64_t VulAffectedImageInfo::GetSuperNodeCount() const
{
    return m_superNodeCount;
}

void VulAffectedImageInfo::SetSuperNodeCount(const int64_t& _superNodeCount)
{
    m_superNodeCount = _superNodeCount;
    m_superNodeCountHasBeenSet = true;
}

bool VulAffectedImageInfo::SuperNodeCountHasBeenSet() const
{
    return m_superNodeCountHasBeenSet;
}

int64_t VulAffectedImageInfo::GetContainerCount() const
{
    return m_containerCount;
}

void VulAffectedImageInfo::SetContainerCount(const int64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool VulAffectedImageInfo::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

vector<VulAffectedImageComponentInfo> VulAffectedImageInfo::GetComponentList() const
{
    return m_componentList;
}

void VulAffectedImageInfo::SetComponentList(const vector<VulAffectedImageComponentInfo>& _componentList)
{
    m_componentList = _componentList;
    m_componentListHasBeenSet = true;
}

bool VulAffectedImageInfo::ComponentListHasBeenSet() const
{
    return m_componentListHasBeenSet;
}

