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

#include <tencentcloud/tcss/v20201101/model/RunTimeEventBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RunTimeEventBaseInfo::RunTimeEventBaseInfo() :
    m_eventIdHasBeenSet(false),
    m_foundTimeHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_containerNetStatusHasBeenSet(false),
    m_containerNetSubStatusHasBeenSet(false),
    m_containerIsolateOperationSrcHasBeenSet(false)
{
}

CoreInternalOutcome RunTimeEventBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("FoundTime") && !value["FoundTime"].IsNull())
    {
        if (!value["FoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.FoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_foundTime = string(value["FoundTime"].GetString());
        m_foundTimeHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("ClientIP") && !value["ClientIP"].IsNull())
    {
        if (!value["ClientIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.ClientIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIP = string(value["ClientIP"].GetString());
        m_clientIPHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetStatus") && !value["ContainerNetStatus"].IsNull())
    {
        if (!value["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(value["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetSubStatus") && !value["ContainerNetSubStatus"].IsNull())
    {
        if (!value["ContainerNetSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.ContainerNetSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetSubStatus = string(value["ContainerNetSubStatus"].GetString());
        m_containerNetSubStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerIsolateOperationSrc") && !value["ContainerIsolateOperationSrc"].IsNull())
    {
        if (!value["ContainerIsolateOperationSrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunTimeEventBaseInfo.ContainerIsolateOperationSrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerIsolateOperationSrc = string(value["ContainerIsolateOperationSrc"].GetString());
        m_containerIsolateOperationSrcHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunTimeEventBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_foundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_foundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_latestFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetSubStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetSubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetSubStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIsolateOperationSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerIsolateOperationSrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerIsolateOperationSrc.c_str(), allocator).Move(), allocator);
    }

}


string RunTimeEventBaseInfo::GetEventId() const
{
    return m_eventId;
}

void RunTimeEventBaseInfo::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool RunTimeEventBaseInfo::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string RunTimeEventBaseInfo::GetFoundTime() const
{
    return m_foundTime;
}

void RunTimeEventBaseInfo::SetFoundTime(const string& _foundTime)
{
    m_foundTime = _foundTime;
    m_foundTimeHasBeenSet = true;
}

bool RunTimeEventBaseInfo::FoundTimeHasBeenSet() const
{
    return m_foundTimeHasBeenSet;
}

string RunTimeEventBaseInfo::GetContainerId() const
{
    return m_containerId;
}

void RunTimeEventBaseInfo::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool RunTimeEventBaseInfo::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string RunTimeEventBaseInfo::GetContainerName() const
{
    return m_containerName;
}

void RunTimeEventBaseInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool RunTimeEventBaseInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string RunTimeEventBaseInfo::GetImageId() const
{
    return m_imageId;
}

void RunTimeEventBaseInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool RunTimeEventBaseInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string RunTimeEventBaseInfo::GetImageName() const
{
    return m_imageName;
}

void RunTimeEventBaseInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool RunTimeEventBaseInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string RunTimeEventBaseInfo::GetNodeName() const
{
    return m_nodeName;
}

void RunTimeEventBaseInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool RunTimeEventBaseInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string RunTimeEventBaseInfo::GetPodName() const
{
    return m_podName;
}

void RunTimeEventBaseInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool RunTimeEventBaseInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string RunTimeEventBaseInfo::GetStatus() const
{
    return m_status;
}

void RunTimeEventBaseInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RunTimeEventBaseInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RunTimeEventBaseInfo::GetEventName() const
{
    return m_eventName;
}

void RunTimeEventBaseInfo::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool RunTimeEventBaseInfo::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string RunTimeEventBaseInfo::GetEventType() const
{
    return m_eventType;
}

void RunTimeEventBaseInfo::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool RunTimeEventBaseInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

int64_t RunTimeEventBaseInfo::GetEventCount() const
{
    return m_eventCount;
}

void RunTimeEventBaseInfo::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool RunTimeEventBaseInfo::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string RunTimeEventBaseInfo::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void RunTimeEventBaseInfo::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool RunTimeEventBaseInfo::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

string RunTimeEventBaseInfo::GetHostIP() const
{
    return m_hostIP;
}

void RunTimeEventBaseInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool RunTimeEventBaseInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string RunTimeEventBaseInfo::GetClientIP() const
{
    return m_clientIP;
}

void RunTimeEventBaseInfo::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool RunTimeEventBaseInfo::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

string RunTimeEventBaseInfo::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

void RunTimeEventBaseInfo::SetContainerNetStatus(const string& _containerNetStatus)
{
    m_containerNetStatus = _containerNetStatus;
    m_containerNetStatusHasBeenSet = true;
}

bool RunTimeEventBaseInfo::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string RunTimeEventBaseInfo::GetContainerNetSubStatus() const
{
    return m_containerNetSubStatus;
}

void RunTimeEventBaseInfo::SetContainerNetSubStatus(const string& _containerNetSubStatus)
{
    m_containerNetSubStatus = _containerNetSubStatus;
    m_containerNetSubStatusHasBeenSet = true;
}

bool RunTimeEventBaseInfo::ContainerNetSubStatusHasBeenSet() const
{
    return m_containerNetSubStatusHasBeenSet;
}

string RunTimeEventBaseInfo::GetContainerIsolateOperationSrc() const
{
    return m_containerIsolateOperationSrc;
}

void RunTimeEventBaseInfo::SetContainerIsolateOperationSrc(const string& _containerIsolateOperationSrc)
{
    m_containerIsolateOperationSrc = _containerIsolateOperationSrc;
    m_containerIsolateOperationSrcHasBeenSet = true;
}

bool RunTimeEventBaseInfo::ContainerIsolateOperationSrcHasBeenSet() const
{
    return m_containerIsolateOperationSrcHasBeenSet;
}

