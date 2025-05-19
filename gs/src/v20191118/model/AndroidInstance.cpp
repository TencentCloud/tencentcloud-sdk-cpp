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

#include <tencentcloud/gs/v20191118/model/AndroidInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstance::AndroidInstance() :
    m_androidInstanceIdHasBeenSet(false),
    m_androidInstanceRegionHasBeenSet(false),
    m_androidInstanceZoneHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_androidInstanceTypeHasBeenSet(false),
    m_androidInstanceImageIdHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_hostSerialNumberHasBeenSet(false),
    m_androidInstanceGroupIdHasBeenSet(false),
    m_androidInstanceLabelsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_privateIPHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_hostServerSerialNumberHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidInstanceId") && !value["AndroidInstanceId"].IsNull())
    {
        if (!value["AndroidInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.AndroidInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceId = string(value["AndroidInstanceId"].GetString());
        m_androidInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceRegion") && !value["AndroidInstanceRegion"].IsNull())
    {
        if (!value["AndroidInstanceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.AndroidInstanceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceRegion = string(value["AndroidInstanceRegion"].GetString());
        m_androidInstanceRegionHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceZone") && !value["AndroidInstanceZone"].IsNull())
    {
        if (!value["AndroidInstanceZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.AndroidInstanceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceZone = string(value["AndroidInstanceZone"].GetString());
        m_androidInstanceZoneHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceType") && !value["AndroidInstanceType"].IsNull())
    {
        if (!value["AndroidInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.AndroidInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceType = string(value["AndroidInstanceType"].GetString());
        m_androidInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceImageId") && !value["AndroidInstanceImageId"].IsNull())
    {
        if (!value["AndroidInstanceImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.AndroidInstanceImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceImageId = string(value["AndroidInstanceImageId"].GetString());
        m_androidInstanceImageIdHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("HostSerialNumber") && !value["HostSerialNumber"].IsNull())
    {
        if (!value["HostSerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.HostSerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostSerialNumber = string(value["HostSerialNumber"].GetString());
        m_hostSerialNumberHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceGroupId") && !value["AndroidInstanceGroupId"].IsNull())
    {
        if (!value["AndroidInstanceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.AndroidInstanceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceGroupId = string(value["AndroidInstanceGroupId"].GetString());
        m_androidInstanceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceLabels") && !value["AndroidInstanceLabels"].IsNull())
    {
        if (!value["AndroidInstanceLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.AndroidInstanceLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["AndroidInstanceLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AndroidInstanceLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_androidInstanceLabels.push_back(item);
        }
        m_androidInstanceLabelsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("PrivateIP") && !value["PrivateIP"].IsNull())
    {
        if (!value["PrivateIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.PrivateIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIP = string(value["PrivateIP"].GetString());
        m_privateIPHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("HostServerSerialNumber") && !value["HostServerSerialNumber"].IsNull())
    {
        if (!value["HostServerSerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstance.HostServerSerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostServerSerialNumber = string(value["HostServerSerialNumber"].GetString());
        m_hostServerSerialNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceZone.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceImageId.c_str(), allocator).Move(), allocator);
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

    if (m_hostSerialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostSerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostSerialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_androidInstanceLabels.begin(); itr != m_androidInstanceLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIP.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostServerSerialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostServerSerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostServerSerialNumber.c_str(), allocator).Move(), allocator);
    }

}


string AndroidInstance::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void AndroidInstance::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool AndroidInstance::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

string AndroidInstance::GetAndroidInstanceRegion() const
{
    return m_androidInstanceRegion;
}

void AndroidInstance::SetAndroidInstanceRegion(const string& _androidInstanceRegion)
{
    m_androidInstanceRegion = _androidInstanceRegion;
    m_androidInstanceRegionHasBeenSet = true;
}

bool AndroidInstance::AndroidInstanceRegionHasBeenSet() const
{
    return m_androidInstanceRegionHasBeenSet;
}

string AndroidInstance::GetAndroidInstanceZone() const
{
    return m_androidInstanceZone;
}

void AndroidInstance::SetAndroidInstanceZone(const string& _androidInstanceZone)
{
    m_androidInstanceZone = _androidInstanceZone;
    m_androidInstanceZoneHasBeenSet = true;
}

bool AndroidInstance::AndroidInstanceZoneHasBeenSet() const
{
    return m_androidInstanceZoneHasBeenSet;
}

string AndroidInstance::GetState() const
{
    return m_state;
}

void AndroidInstance::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AndroidInstance::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string AndroidInstance::GetAndroidInstanceType() const
{
    return m_androidInstanceType;
}

void AndroidInstance::SetAndroidInstanceType(const string& _androidInstanceType)
{
    m_androidInstanceType = _androidInstanceType;
    m_androidInstanceTypeHasBeenSet = true;
}

bool AndroidInstance::AndroidInstanceTypeHasBeenSet() const
{
    return m_androidInstanceTypeHasBeenSet;
}

string AndroidInstance::GetAndroidInstanceImageId() const
{
    return m_androidInstanceImageId;
}

void AndroidInstance::SetAndroidInstanceImageId(const string& _androidInstanceImageId)
{
    m_androidInstanceImageId = _androidInstanceImageId;
    m_androidInstanceImageIdHasBeenSet = true;
}

bool AndroidInstance::AndroidInstanceImageIdHasBeenSet() const
{
    return m_androidInstanceImageIdHasBeenSet;
}

uint64_t AndroidInstance::GetWidth() const
{
    return m_width;
}

void AndroidInstance::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool AndroidInstance::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t AndroidInstance::GetHeight() const
{
    return m_height;
}

void AndroidInstance::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool AndroidInstance::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string AndroidInstance::GetHostSerialNumber() const
{
    return m_hostSerialNumber;
}

void AndroidInstance::SetHostSerialNumber(const string& _hostSerialNumber)
{
    m_hostSerialNumber = _hostSerialNumber;
    m_hostSerialNumberHasBeenSet = true;
}

bool AndroidInstance::HostSerialNumberHasBeenSet() const
{
    return m_hostSerialNumberHasBeenSet;
}

string AndroidInstance::GetAndroidInstanceGroupId() const
{
    return m_androidInstanceGroupId;
}

void AndroidInstance::SetAndroidInstanceGroupId(const string& _androidInstanceGroupId)
{
    m_androidInstanceGroupId = _androidInstanceGroupId;
    m_androidInstanceGroupIdHasBeenSet = true;
}

bool AndroidInstance::AndroidInstanceGroupIdHasBeenSet() const
{
    return m_androidInstanceGroupIdHasBeenSet;
}

vector<AndroidInstanceLabel> AndroidInstance::GetAndroidInstanceLabels() const
{
    return m_androidInstanceLabels;
}

void AndroidInstance::SetAndroidInstanceLabels(const vector<AndroidInstanceLabel>& _androidInstanceLabels)
{
    m_androidInstanceLabels = _androidInstanceLabels;
    m_androidInstanceLabelsHasBeenSet = true;
}

bool AndroidInstance::AndroidInstanceLabelsHasBeenSet() const
{
    return m_androidInstanceLabelsHasBeenSet;
}

string AndroidInstance::GetName() const
{
    return m_name;
}

void AndroidInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AndroidInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AndroidInstance::GetUserId() const
{
    return m_userId;
}

void AndroidInstance::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool AndroidInstance::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string AndroidInstance::GetPrivateIP() const
{
    return m_privateIP;
}

void AndroidInstance::SetPrivateIP(const string& _privateIP)
{
    m_privateIP = _privateIP;
    m_privateIPHasBeenSet = true;
}

bool AndroidInstance::PrivateIPHasBeenSet() const
{
    return m_privateIPHasBeenSet;
}

string AndroidInstance::GetCreateTime() const
{
    return m_createTime;
}

void AndroidInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AndroidInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AndroidInstance::GetHostServerSerialNumber() const
{
    return m_hostServerSerialNumber;
}

void AndroidInstance::SetHostServerSerialNumber(const string& _hostServerSerialNumber)
{
    m_hostServerSerialNumber = _hostServerSerialNumber;
    m_hostServerSerialNumberHasBeenSet = true;
}

bool AndroidInstance::HostServerSerialNumberHasBeenSet() const
{
    return m_hostServerSerialNumberHasBeenSet;
}

