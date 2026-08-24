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

#include <tencentcloud/bdrc/v20260330/model/CrossCloudDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CrossCloudDetails::CrossCloudDetails() :
    m_sourceCloudNameHasBeenSet(false),
    m_targetCloudNameHasBeenSet(false),
    m_sourceAppIdHasBeenSet(false),
    m_sourceUinHasBeenSet(false),
    m_sourceSubAccountUinHasBeenSet(false),
    m_sourceUserNameHasBeenSet(false),
    m_targetAppIdHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_targetSubAccountUinHasBeenSet(false),
    m_peerRegionNameHasBeenSet(false),
    m_peerZoneNameHasBeenSet(false),
    m_peerVpcNameHasBeenSet(false)
{
}

CoreInternalOutcome CrossCloudDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceCloudName") && !value["SourceCloudName"].IsNull())
    {
        if (!value["SourceCloudName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.SourceCloudName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCloudName = string(value["SourceCloudName"].GetString());
        m_sourceCloudNameHasBeenSet = true;
    }

    if (value.HasMember("TargetCloudName") && !value["TargetCloudName"].IsNull())
    {
        if (!value["TargetCloudName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.TargetCloudName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetCloudName = string(value["TargetCloudName"].GetString());
        m_targetCloudNameHasBeenSet = true;
    }

    if (value.HasMember("SourceAppId") && !value["SourceAppId"].IsNull())
    {
        if (!value["SourceAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.SourceAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceAppId = value["SourceAppId"].GetInt64();
        m_sourceAppIdHasBeenSet = true;
    }

    if (value.HasMember("SourceUin") && !value["SourceUin"].IsNull())
    {
        if (!value["SourceUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.SourceUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceUin = string(value["SourceUin"].GetString());
        m_sourceUinHasBeenSet = true;
    }

    if (value.HasMember("SourceSubAccountUin") && !value["SourceSubAccountUin"].IsNull())
    {
        if (!value["SourceSubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.SourceSubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceSubAccountUin = string(value["SourceSubAccountUin"].GetString());
        m_sourceSubAccountUinHasBeenSet = true;
    }

    if (value.HasMember("SourceUserName") && !value["SourceUserName"].IsNull())
    {
        if (!value["SourceUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.SourceUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceUserName = string(value["SourceUserName"].GetString());
        m_sourceUserNameHasBeenSet = true;
    }

    if (value.HasMember("TargetAppId") && !value["TargetAppId"].IsNull())
    {
        if (!value["TargetAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.TargetAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetAppId = value["TargetAppId"].GetInt64();
        m_targetAppIdHasBeenSet = true;
    }

    if (value.HasMember("TargetUin") && !value["TargetUin"].IsNull())
    {
        if (!value["TargetUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.TargetUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetUin = string(value["TargetUin"].GetString());
        m_targetUinHasBeenSet = true;
    }

    if (value.HasMember("TargetSubAccountUin") && !value["TargetSubAccountUin"].IsNull())
    {
        if (!value["TargetSubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.TargetSubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSubAccountUin = string(value["TargetSubAccountUin"].GetString());
        m_targetSubAccountUinHasBeenSet = true;
    }

    if (value.HasMember("PeerRegionName") && !value["PeerRegionName"].IsNull())
    {
        if (!value["PeerRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.PeerRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerRegionName = string(value["PeerRegionName"].GetString());
        m_peerRegionNameHasBeenSet = true;
    }

    if (value.HasMember("PeerZoneName") && !value["PeerZoneName"].IsNull())
    {
        if (!value["PeerZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.PeerZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerZoneName = string(value["PeerZoneName"].GetString());
        m_peerZoneNameHasBeenSet = true;
    }

    if (value.HasMember("PeerVpcName") && !value["PeerVpcName"].IsNull())
    {
        if (!value["PeerVpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossCloudDetails.PeerVpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerVpcName = string(value["PeerVpcName"].GetString());
        m_peerVpcNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrossCloudDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceCloudNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCloudName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCloudName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCloudNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCloudName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetCloudName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceAppId, allocator);
    }

    if (m_sourceUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceUin.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetAppId, allocator);
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetUin.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_peerRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_peerZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_peerVpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerVpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerVpcName.c_str(), allocator).Move(), allocator);
    }

}


string CrossCloudDetails::GetSourceCloudName() const
{
    return m_sourceCloudName;
}

void CrossCloudDetails::SetSourceCloudName(const string& _sourceCloudName)
{
    m_sourceCloudName = _sourceCloudName;
    m_sourceCloudNameHasBeenSet = true;
}

bool CrossCloudDetails::SourceCloudNameHasBeenSet() const
{
    return m_sourceCloudNameHasBeenSet;
}

string CrossCloudDetails::GetTargetCloudName() const
{
    return m_targetCloudName;
}

void CrossCloudDetails::SetTargetCloudName(const string& _targetCloudName)
{
    m_targetCloudName = _targetCloudName;
    m_targetCloudNameHasBeenSet = true;
}

bool CrossCloudDetails::TargetCloudNameHasBeenSet() const
{
    return m_targetCloudNameHasBeenSet;
}

int64_t CrossCloudDetails::GetSourceAppId() const
{
    return m_sourceAppId;
}

void CrossCloudDetails::SetSourceAppId(const int64_t& _sourceAppId)
{
    m_sourceAppId = _sourceAppId;
    m_sourceAppIdHasBeenSet = true;
}

bool CrossCloudDetails::SourceAppIdHasBeenSet() const
{
    return m_sourceAppIdHasBeenSet;
}

string CrossCloudDetails::GetSourceUin() const
{
    return m_sourceUin;
}

void CrossCloudDetails::SetSourceUin(const string& _sourceUin)
{
    m_sourceUin = _sourceUin;
    m_sourceUinHasBeenSet = true;
}

bool CrossCloudDetails::SourceUinHasBeenSet() const
{
    return m_sourceUinHasBeenSet;
}

string CrossCloudDetails::GetSourceSubAccountUin() const
{
    return m_sourceSubAccountUin;
}

void CrossCloudDetails::SetSourceSubAccountUin(const string& _sourceSubAccountUin)
{
    m_sourceSubAccountUin = _sourceSubAccountUin;
    m_sourceSubAccountUinHasBeenSet = true;
}

bool CrossCloudDetails::SourceSubAccountUinHasBeenSet() const
{
    return m_sourceSubAccountUinHasBeenSet;
}

string CrossCloudDetails::GetSourceUserName() const
{
    return m_sourceUserName;
}

void CrossCloudDetails::SetSourceUserName(const string& _sourceUserName)
{
    m_sourceUserName = _sourceUserName;
    m_sourceUserNameHasBeenSet = true;
}

bool CrossCloudDetails::SourceUserNameHasBeenSet() const
{
    return m_sourceUserNameHasBeenSet;
}

int64_t CrossCloudDetails::GetTargetAppId() const
{
    return m_targetAppId;
}

void CrossCloudDetails::SetTargetAppId(const int64_t& _targetAppId)
{
    m_targetAppId = _targetAppId;
    m_targetAppIdHasBeenSet = true;
}

bool CrossCloudDetails::TargetAppIdHasBeenSet() const
{
    return m_targetAppIdHasBeenSet;
}

string CrossCloudDetails::GetTargetUin() const
{
    return m_targetUin;
}

void CrossCloudDetails::SetTargetUin(const string& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool CrossCloudDetails::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string CrossCloudDetails::GetTargetSubAccountUin() const
{
    return m_targetSubAccountUin;
}

void CrossCloudDetails::SetTargetSubAccountUin(const string& _targetSubAccountUin)
{
    m_targetSubAccountUin = _targetSubAccountUin;
    m_targetSubAccountUinHasBeenSet = true;
}

bool CrossCloudDetails::TargetSubAccountUinHasBeenSet() const
{
    return m_targetSubAccountUinHasBeenSet;
}

string CrossCloudDetails::GetPeerRegionName() const
{
    return m_peerRegionName;
}

void CrossCloudDetails::SetPeerRegionName(const string& _peerRegionName)
{
    m_peerRegionName = _peerRegionName;
    m_peerRegionNameHasBeenSet = true;
}

bool CrossCloudDetails::PeerRegionNameHasBeenSet() const
{
    return m_peerRegionNameHasBeenSet;
}

string CrossCloudDetails::GetPeerZoneName() const
{
    return m_peerZoneName;
}

void CrossCloudDetails::SetPeerZoneName(const string& _peerZoneName)
{
    m_peerZoneName = _peerZoneName;
    m_peerZoneNameHasBeenSet = true;
}

bool CrossCloudDetails::PeerZoneNameHasBeenSet() const
{
    return m_peerZoneNameHasBeenSet;
}

string CrossCloudDetails::GetPeerVpcName() const
{
    return m_peerVpcName;
}

void CrossCloudDetails::SetPeerVpcName(const string& _peerVpcName)
{
    m_peerVpcName = _peerVpcName;
    m_peerVpcNameHasBeenSet = true;
}

bool CrossCloudDetails::PeerVpcNameHasBeenSet() const
{
    return m_peerVpcNameHasBeenSet;
}

