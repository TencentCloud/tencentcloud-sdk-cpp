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

#include <tencentcloud/ms/v20180408/model/ScanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

ScanInfo::ScanInfo() :
    m_callbackUrlHasBeenSet(false),
    m_scanTypesHasBeenSet(false)
{
}

CoreInternalOutcome ScanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScanInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("ScanTypes") && !value["ScanTypes"].IsNull())
    {
        if (!value["ScanTypes"].IsArray())
            return CoreInternalOutcome(Error("response `ScanInfo.ScanTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ScanTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scanTypes.push_back((*itr).GetString());
        }
        m_scanTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_scanTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanTypes.begin(); itr != m_scanTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ScanInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ScanInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ScanInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

vector<string> ScanInfo::GetScanTypes() const
{
    return m_scanTypes;
}

void ScanInfo::SetScanTypes(const vector<string>& _scanTypes)
{
    m_scanTypes = _scanTypes;
    m_scanTypesHasBeenSet = true;
}

bool ScanInfo::ScanTypesHasBeenSet() const
{
    return m_scanTypesHasBeenSet;
}

