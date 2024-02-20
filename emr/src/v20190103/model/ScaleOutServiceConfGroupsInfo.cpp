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

#include <tencentcloud/emr/v20190103/model/ScaleOutServiceConfGroupsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ScaleOutServiceConfGroupsInfo::ScaleOutServiceConfGroupsInfo() :
    m_serviceComponentNameHasBeenSet(false),
    m_confGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome ScaleOutServiceConfGroupsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceComponentName") && !value["ServiceComponentName"].IsNull())
    {
        if (!value["ServiceComponentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleOutServiceConfGroupsInfo.ServiceComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceComponentName = string(value["ServiceComponentName"].GetString());
        m_serviceComponentNameHasBeenSet = true;
    }

    if (value.HasMember("ConfGroupName") && !value["ConfGroupName"].IsNull())
    {
        if (!value["ConfGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleOutServiceConfGroupsInfo.ConfGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confGroupName = string(value["ConfGroupName"].GetString());
        m_confGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScaleOutServiceConfGroupsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceComponentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceComponentName.c_str(), allocator).Move(), allocator);
    }

    if (m_confGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confGroupName.c_str(), allocator).Move(), allocator);
    }

}


string ScaleOutServiceConfGroupsInfo::GetServiceComponentName() const
{
    return m_serviceComponentName;
}

void ScaleOutServiceConfGroupsInfo::SetServiceComponentName(const string& _serviceComponentName)
{
    m_serviceComponentName = _serviceComponentName;
    m_serviceComponentNameHasBeenSet = true;
}

bool ScaleOutServiceConfGroupsInfo::ServiceComponentNameHasBeenSet() const
{
    return m_serviceComponentNameHasBeenSet;
}

string ScaleOutServiceConfGroupsInfo::GetConfGroupName() const
{
    return m_confGroupName;
}

void ScaleOutServiceConfGroupsInfo::SetConfGroupName(const string& _confGroupName)
{
    m_confGroupName = _confGroupName;
    m_confGroupNameHasBeenSet = true;
}

bool ScaleOutServiceConfGroupsInfo::ConfGroupNameHasBeenSet() const
{
    return m_confGroupNameHasBeenSet;
}

