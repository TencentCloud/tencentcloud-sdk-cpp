/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcbr/v20220217/model/DeployRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

DeployRecord::DeployRecord() :
    m_deployIdHasBeenSet(false),
    m_deployTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_flowRatioHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_scaleStatusHasBeenSet(false),
    m_hasTrafficHasBeenSet(false),
    m_trafficTypeHasBeenSet(false),
    m_isReleasingHasBeenSet(false)
{
}

CoreInternalOutcome DeployRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeployId") && !value["DeployId"].IsNull())
    {
        if (!value["DeployId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.DeployId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployId = string(value["DeployId"].GetString());
        m_deployIdHasBeenSet = true;
    }

    if (value.HasMember("DeployTime") && !value["DeployTime"].IsNull())
    {
        if (!value["DeployTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.DeployTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployTime = string(value["DeployTime"].GetString());
        m_deployTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RunId") && !value["RunId"].IsNull())
    {
        if (!value["RunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.RunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runId = string(value["RunId"].GetString());
        m_runIdHasBeenSet = true;
    }

    if (value.HasMember("BuildId") && !value["BuildId"].IsNull())
    {
        if (!value["BuildId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.BuildId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buildId = value["BuildId"].GetInt64();
        m_buildIdHasBeenSet = true;
    }

    if (value.HasMember("FlowRatio") && !value["FlowRatio"].IsNull())
    {
        if (!value["FlowRatio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.FlowRatio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowRatio = value["FlowRatio"].GetInt64();
        m_flowRatioHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("ScaleStatus") && !value["ScaleStatus"].IsNull())
    {
        if (!value["ScaleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.ScaleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleStatus = string(value["ScaleStatus"].GetString());
        m_scaleStatusHasBeenSet = true;
    }

    if (value.HasMember("HasTraffic") && !value["HasTraffic"].IsNull())
    {
        if (!value["HasTraffic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.HasTraffic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasTraffic = value["HasTraffic"].GetBool();
        m_hasTrafficHasBeenSet = true;
    }

    if (value.HasMember("TrafficType") && !value["TrafficType"].IsNull())
    {
        if (!value["TrafficType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.TrafficType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficType = string(value["TrafficType"].GetString());
        m_trafficTypeHasBeenSet = true;
    }

    if (value.HasMember("IsReleasing") && !value["IsReleasing"].IsNull())
    {
        if (!value["IsReleasing"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecord.IsReleasing` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isReleasing = value["IsReleasing"].GetBool();
        m_isReleasingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeployRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deployIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_runIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runId.c_str(), allocator).Move(), allocator);
    }

    if (m_buildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildId, allocator);
    }

    if (m_flowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowRatio, allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_hasTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasTraffic, allocator);
    }

    if (m_trafficTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficType.c_str(), allocator).Move(), allocator);
    }

    if (m_isReleasingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReleasing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReleasing, allocator);
    }

}


string DeployRecord::GetDeployId() const
{
    return m_deployId;
}

void DeployRecord::SetDeployId(const string& _deployId)
{
    m_deployId = _deployId;
    m_deployIdHasBeenSet = true;
}

bool DeployRecord::DeployIdHasBeenSet() const
{
    return m_deployIdHasBeenSet;
}

string DeployRecord::GetDeployTime() const
{
    return m_deployTime;
}

void DeployRecord::SetDeployTime(const string& _deployTime)
{
    m_deployTime = _deployTime;
    m_deployTimeHasBeenSet = true;
}

bool DeployRecord::DeployTimeHasBeenSet() const
{
    return m_deployTimeHasBeenSet;
}

string DeployRecord::GetStatus() const
{
    return m_status;
}

void DeployRecord::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeployRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeployRecord::GetRunId() const
{
    return m_runId;
}

void DeployRecord::SetRunId(const string& _runId)
{
    m_runId = _runId;
    m_runIdHasBeenSet = true;
}

bool DeployRecord::RunIdHasBeenSet() const
{
    return m_runIdHasBeenSet;
}

int64_t DeployRecord::GetBuildId() const
{
    return m_buildId;
}

void DeployRecord::SetBuildId(const int64_t& _buildId)
{
    m_buildId = _buildId;
    m_buildIdHasBeenSet = true;
}

bool DeployRecord::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

int64_t DeployRecord::GetFlowRatio() const
{
    return m_flowRatio;
}

void DeployRecord::SetFlowRatio(const int64_t& _flowRatio)
{
    m_flowRatio = _flowRatio;
    m_flowRatioHasBeenSet = true;
}

bool DeployRecord::FlowRatioHasBeenSet() const
{
    return m_flowRatioHasBeenSet;
}

string DeployRecord::GetImageUrl() const
{
    return m_imageUrl;
}

void DeployRecord::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool DeployRecord::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string DeployRecord::GetScaleStatus() const
{
    return m_scaleStatus;
}

void DeployRecord::SetScaleStatus(const string& _scaleStatus)
{
    m_scaleStatus = _scaleStatus;
    m_scaleStatusHasBeenSet = true;
}

bool DeployRecord::ScaleStatusHasBeenSet() const
{
    return m_scaleStatusHasBeenSet;
}

bool DeployRecord::GetHasTraffic() const
{
    return m_hasTraffic;
}

void DeployRecord::SetHasTraffic(const bool& _hasTraffic)
{
    m_hasTraffic = _hasTraffic;
    m_hasTrafficHasBeenSet = true;
}

bool DeployRecord::HasTrafficHasBeenSet() const
{
    return m_hasTrafficHasBeenSet;
}

string DeployRecord::GetTrafficType() const
{
    return m_trafficType;
}

void DeployRecord::SetTrafficType(const string& _trafficType)
{
    m_trafficType = _trafficType;
    m_trafficTypeHasBeenSet = true;
}

bool DeployRecord::TrafficTypeHasBeenSet() const
{
    return m_trafficTypeHasBeenSet;
}

bool DeployRecord::GetIsReleasing() const
{
    return m_isReleasing;
}

void DeployRecord::SetIsReleasing(const bool& _isReleasing)
{
    m_isReleasing = _isReleasing;
    m_isReleasingHasBeenSet = true;
}

bool DeployRecord::IsReleasingHasBeenSet() const
{
    return m_isReleasingHasBeenSet;
}

