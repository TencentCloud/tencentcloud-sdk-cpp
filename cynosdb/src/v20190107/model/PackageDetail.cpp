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

#include <tencentcloud/cynosdb/v20190107/model/PackageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

PackageDetail::PackageDetail() :
    m_appIdHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_successDeductSpecHasBeenSet(false),
    m_packageTotalUsedSpecHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_extendInfoHasBeenSet(false)
{
}

CoreInternalOutcome PackageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetail.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetail.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("SuccessDeductSpec") && !value["SuccessDeductSpec"].IsNull())
    {
        if (!value["SuccessDeductSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetail.SuccessDeductSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_successDeductSpec = value["SuccessDeductSpec"].GetDouble();
        m_successDeductSpecHasBeenSet = true;
    }

    if (value.HasMember("PackageTotalUsedSpec") && !value["PackageTotalUsedSpec"].IsNull())
    {
        if (!value["PackageTotalUsedSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetail.PackageTotalUsedSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packageTotalUsedSpec = value["PackageTotalUsedSpec"].GetDouble();
        m_packageTotalUsedSpecHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExtendInfo") && !value["ExtendInfo"].IsNull())
    {
        if (!value["ExtendInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageDetail.ExtendInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendInfo = string(value["ExtendInfo"].GetString());
        m_extendInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_successDeductSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessDeductSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successDeductSpec, allocator);
    }

    if (m_packageTotalUsedSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageTotalUsedSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageTotalUsedSpec, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_extendInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendInfo.c_str(), allocator).Move(), allocator);
    }

}


int64_t PackageDetail::GetAppId() const
{
    return m_appId;
}

void PackageDetail::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool PackageDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string PackageDetail::GetPackageId() const
{
    return m_packageId;
}

void PackageDetail::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool PackageDetail::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string PackageDetail::GetInstanceId() const
{
    return m_instanceId;
}

void PackageDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PackageDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

double PackageDetail::GetSuccessDeductSpec() const
{
    return m_successDeductSpec;
}

void PackageDetail::SetSuccessDeductSpec(const double& _successDeductSpec)
{
    m_successDeductSpec = _successDeductSpec;
    m_successDeductSpecHasBeenSet = true;
}

bool PackageDetail::SuccessDeductSpecHasBeenSet() const
{
    return m_successDeductSpecHasBeenSet;
}

double PackageDetail::GetPackageTotalUsedSpec() const
{
    return m_packageTotalUsedSpec;
}

void PackageDetail::SetPackageTotalUsedSpec(const double& _packageTotalUsedSpec)
{
    m_packageTotalUsedSpec = _packageTotalUsedSpec;
    m_packageTotalUsedSpecHasBeenSet = true;
}

bool PackageDetail::PackageTotalUsedSpecHasBeenSet() const
{
    return m_packageTotalUsedSpecHasBeenSet;
}

string PackageDetail::GetStartTime() const
{
    return m_startTime;
}

void PackageDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PackageDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string PackageDetail::GetEndTime() const
{
    return m_endTime;
}

void PackageDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PackageDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string PackageDetail::GetExtendInfo() const
{
    return m_extendInfo;
}

void PackageDetail::SetExtendInfo(const string& _extendInfo)
{
    m_extendInfo = _extendInfo;
    m_extendInfoHasBeenSet = true;
}

bool PackageDetail::ExtendInfoHasBeenSet() const
{
    return m_extendInfoHasBeenSet;
}

