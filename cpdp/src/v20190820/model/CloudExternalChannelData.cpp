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

#include <tencentcloud/cpdp/v20190820/model/CloudExternalChannelData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudExternalChannelData::CloudExternalChannelData() :
    m_externalChannelDataNameHasBeenSet(false),
    m_externalChannelDataValueHasBeenSet(false)
{
}

CoreInternalOutcome CloudExternalChannelData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalChannelDataName") && !value["ExternalChannelDataName"].IsNull())
    {
        if (!value["ExternalChannelDataName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudExternalChannelData.ExternalChannelDataName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalChannelDataName = string(value["ExternalChannelDataName"].GetString());
        m_externalChannelDataNameHasBeenSet = true;
    }

    if (value.HasMember("ExternalChannelDataValue") && !value["ExternalChannelDataValue"].IsNull())
    {
        if (!value["ExternalChannelDataValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudExternalChannelData.ExternalChannelDataValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalChannelDataValue = string(value["ExternalChannelDataValue"].GetString());
        m_externalChannelDataValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudExternalChannelData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalChannelDataNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalChannelDataName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalChannelDataName.c_str(), allocator).Move(), allocator);
    }

    if (m_externalChannelDataValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalChannelDataValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalChannelDataValue.c_str(), allocator).Move(), allocator);
    }

}


string CloudExternalChannelData::GetExternalChannelDataName() const
{
    return m_externalChannelDataName;
}

void CloudExternalChannelData::SetExternalChannelDataName(const string& _externalChannelDataName)
{
    m_externalChannelDataName = _externalChannelDataName;
    m_externalChannelDataNameHasBeenSet = true;
}

bool CloudExternalChannelData::ExternalChannelDataNameHasBeenSet() const
{
    return m_externalChannelDataNameHasBeenSet;
}

string CloudExternalChannelData::GetExternalChannelDataValue() const
{
    return m_externalChannelDataValue;
}

void CloudExternalChannelData::SetExternalChannelDataValue(const string& _externalChannelDataValue)
{
    m_externalChannelDataValue = _externalChannelDataValue;
    m_externalChannelDataValueHasBeenSet = true;
}

bool CloudExternalChannelData::ExternalChannelDataValueHasBeenSet() const
{
    return m_externalChannelDataValueHasBeenSet;
}

