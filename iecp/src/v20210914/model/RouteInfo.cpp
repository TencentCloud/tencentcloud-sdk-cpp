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

#include <tencentcloud/iecp/v20210914/model/RouteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

RouteInfo::RouteInfo() :
    m_routeIDHasBeenSet(false),
    m_routeNameHasBeenSet(false),
    m_sourceProductIDHasBeenSet(false),
    m_topicFilterHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_targetOptionsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageCountHasBeenSet(false),
    m_messageLastTimeHasBeenSet(false),
    m_sourceProductNameHasBeenSet(false),
    m_sourceUnitIDListHasBeenSet(false),
    m_sourceUnitNameListHasBeenSet(false),
    m_sourceDeviceNameListHasBeenSet(false)
{
}

CoreInternalOutcome RouteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteID") && !value["RouteID"].IsNull())
    {
        if (!value["RouteID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.RouteID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_routeID = value["RouteID"].GetInt64();
        m_routeIDHasBeenSet = true;
    }

    if (value.HasMember("RouteName") && !value["RouteName"].IsNull())
    {
        if (!value["RouteName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.RouteName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeName = string(value["RouteName"].GetString());
        m_routeNameHasBeenSet = true;
    }

    if (value.HasMember("SourceProductID") && !value["SourceProductID"].IsNull())
    {
        if (!value["SourceProductID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.SourceProductID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceProductID = string(value["SourceProductID"].GetString());
        m_sourceProductIDHasBeenSet = true;
    }

    if (value.HasMember("TopicFilter") && !value["TopicFilter"].IsNull())
    {
        if (!value["TopicFilter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.TopicFilter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicFilter = string(value["TopicFilter"].GetString());
        m_topicFilterHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("TargetOptions") && !value["TargetOptions"].IsNull())
    {
        if (!value["TargetOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.TargetOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetOptions = string(value["TargetOptions"].GetString());
        m_targetOptionsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Descript") && !value["Descript"].IsNull())
    {
        if (!value["Descript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.Descript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descript = string(value["Descript"].GetString());
        m_descriptHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.Healthy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = string(value["Healthy"].GetString());
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MessageCount") && !value["MessageCount"].IsNull())
    {
        if (!value["MessageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.MessageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageCount = value["MessageCount"].GetInt64();
        m_messageCountHasBeenSet = true;
    }

    if (value.HasMember("MessageLastTime") && !value["MessageLastTime"].IsNull())
    {
        if (!value["MessageLastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.MessageLastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageLastTime = string(value["MessageLastTime"].GetString());
        m_messageLastTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceProductName") && !value["SourceProductName"].IsNull())
    {
        if (!value["SourceProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.SourceProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceProductName = string(value["SourceProductName"].GetString());
        m_sourceProductNameHasBeenSet = true;
    }

    if (value.HasMember("SourceUnitIDList") && !value["SourceUnitIDList"].IsNull())
    {
        if (!value["SourceUnitIDList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RouteInfo.SourceUnitIDList` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceUnitIDList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceUnitIDList.push_back((*itr).GetString());
        }
        m_sourceUnitIDListHasBeenSet = true;
    }

    if (value.HasMember("SourceUnitNameList") && !value["SourceUnitNameList"].IsNull())
    {
        if (!value["SourceUnitNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RouteInfo.SourceUnitNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceUnitNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceUnitNameList.push_back((*itr).GetString());
        }
        m_sourceUnitNameListHasBeenSet = true;
    }

    if (value.HasMember("SourceDeviceNameList") && !value["SourceDeviceNameList"].IsNull())
    {
        if (!value["SourceDeviceNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RouteInfo.SourceDeviceNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceDeviceNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceDeviceNameList.push_back((*itr).GetString());
        }
        m_sourceDeviceNameListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeID, allocator);
    }

    if (m_routeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceProductIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceProductID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceProductID.c_str(), allocator).Move(), allocator);
    }

    if (m_topicFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_targetOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descript.c_str(), allocator).Move(), allocator);
    }

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthy.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageCount, allocator);
    }

    if (m_messageLastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageLastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageLastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceProductNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceProductName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUnitIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUnitIDList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceUnitIDList.begin(); itr != m_sourceUnitIDList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceUnitNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUnitNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceUnitNameList.begin(); itr != m_sourceUnitNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceDeviceNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDeviceNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceDeviceNameList.begin(); itr != m_sourceDeviceNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t RouteInfo::GetRouteID() const
{
    return m_routeID;
}

void RouteInfo::SetRouteID(const int64_t& _routeID)
{
    m_routeID = _routeID;
    m_routeIDHasBeenSet = true;
}

bool RouteInfo::RouteIDHasBeenSet() const
{
    return m_routeIDHasBeenSet;
}

string RouteInfo::GetRouteName() const
{
    return m_routeName;
}

void RouteInfo::SetRouteName(const string& _routeName)
{
    m_routeName = _routeName;
    m_routeNameHasBeenSet = true;
}

bool RouteInfo::RouteNameHasBeenSet() const
{
    return m_routeNameHasBeenSet;
}

string RouteInfo::GetSourceProductID() const
{
    return m_sourceProductID;
}

void RouteInfo::SetSourceProductID(const string& _sourceProductID)
{
    m_sourceProductID = _sourceProductID;
    m_sourceProductIDHasBeenSet = true;
}

bool RouteInfo::SourceProductIDHasBeenSet() const
{
    return m_sourceProductIDHasBeenSet;
}

string RouteInfo::GetTopicFilter() const
{
    return m_topicFilter;
}

void RouteInfo::SetTopicFilter(const string& _topicFilter)
{
    m_topicFilter = _topicFilter;
    m_topicFilterHasBeenSet = true;
}

bool RouteInfo::TopicFilterHasBeenSet() const
{
    return m_topicFilterHasBeenSet;
}

string RouteInfo::GetMode() const
{
    return m_mode;
}

void RouteInfo::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool RouteInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string RouteInfo::GetTargetOptions() const
{
    return m_targetOptions;
}

void RouteInfo::SetTargetOptions(const string& _targetOptions)
{
    m_targetOptions = _targetOptions;
    m_targetOptionsHasBeenSet = true;
}

bool RouteInfo::TargetOptionsHasBeenSet() const
{
    return m_targetOptionsHasBeenSet;
}

string RouteInfo::GetCreateTime() const
{
    return m_createTime;
}

void RouteInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RouteInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RouteInfo::GetDescript() const
{
    return m_descript;
}

void RouteInfo::SetDescript(const string& _descript)
{
    m_descript = _descript;
    m_descriptHasBeenSet = true;
}

bool RouteInfo::DescriptHasBeenSet() const
{
    return m_descriptHasBeenSet;
}

string RouteInfo::GetHealthy() const
{
    return m_healthy;
}

void RouteInfo::SetHealthy(const string& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool RouteInfo::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

string RouteInfo::GetStatus() const
{
    return m_status;
}

void RouteInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RouteInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RouteInfo::GetMessageCount() const
{
    return m_messageCount;
}

void RouteInfo::SetMessageCount(const int64_t& _messageCount)
{
    m_messageCount = _messageCount;
    m_messageCountHasBeenSet = true;
}

bool RouteInfo::MessageCountHasBeenSet() const
{
    return m_messageCountHasBeenSet;
}

string RouteInfo::GetMessageLastTime() const
{
    return m_messageLastTime;
}

void RouteInfo::SetMessageLastTime(const string& _messageLastTime)
{
    m_messageLastTime = _messageLastTime;
    m_messageLastTimeHasBeenSet = true;
}

bool RouteInfo::MessageLastTimeHasBeenSet() const
{
    return m_messageLastTimeHasBeenSet;
}

string RouteInfo::GetSourceProductName() const
{
    return m_sourceProductName;
}

void RouteInfo::SetSourceProductName(const string& _sourceProductName)
{
    m_sourceProductName = _sourceProductName;
    m_sourceProductNameHasBeenSet = true;
}

bool RouteInfo::SourceProductNameHasBeenSet() const
{
    return m_sourceProductNameHasBeenSet;
}

vector<string> RouteInfo::GetSourceUnitIDList() const
{
    return m_sourceUnitIDList;
}

void RouteInfo::SetSourceUnitIDList(const vector<string>& _sourceUnitIDList)
{
    m_sourceUnitIDList = _sourceUnitIDList;
    m_sourceUnitIDListHasBeenSet = true;
}

bool RouteInfo::SourceUnitIDListHasBeenSet() const
{
    return m_sourceUnitIDListHasBeenSet;
}

vector<string> RouteInfo::GetSourceUnitNameList() const
{
    return m_sourceUnitNameList;
}

void RouteInfo::SetSourceUnitNameList(const vector<string>& _sourceUnitNameList)
{
    m_sourceUnitNameList = _sourceUnitNameList;
    m_sourceUnitNameListHasBeenSet = true;
}

bool RouteInfo::SourceUnitNameListHasBeenSet() const
{
    return m_sourceUnitNameListHasBeenSet;
}

vector<string> RouteInfo::GetSourceDeviceNameList() const
{
    return m_sourceDeviceNameList;
}

void RouteInfo::SetSourceDeviceNameList(const vector<string>& _sourceDeviceNameList)
{
    m_sourceDeviceNameList = _sourceDeviceNameList;
    m_sourceDeviceNameListHasBeenSet = true;
}

bool RouteInfo::SourceDeviceNameListHasBeenSet() const
{
    return m_sourceDeviceNameListHasBeenSet;
}

