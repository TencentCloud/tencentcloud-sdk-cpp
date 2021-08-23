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

#include <tencentcloud/apigateway/v20180808/model/DocumentSDK.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

DocumentSDK::DocumentSDK() :
    m_documentURLHasBeenSet(false),
    m_sdkURLHasBeenSet(false)
{
}

CoreInternalOutcome DocumentSDK::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocumentURL") && !value["DocumentURL"].IsNull())
    {
        if (!value["DocumentURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentSDK.DocumentURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentURL = string(value["DocumentURL"].GetString());
        m_documentURLHasBeenSet = true;
    }

    if (value.HasMember("SdkURL") && !value["SdkURL"].IsNull())
    {
        if (!value["SdkURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentSDK.SdkURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkURL = string(value["SdkURL"].GetString());
        m_sdkURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocumentSDK::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_documentURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentURL.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkURL.c_str(), allocator).Move(), allocator);
    }

}


string DocumentSDK::GetDocumentURL() const
{
    return m_documentURL;
}

void DocumentSDK::SetDocumentURL(const string& _documentURL)
{
    m_documentURL = _documentURL;
    m_documentURLHasBeenSet = true;
}

bool DocumentSDK::DocumentURLHasBeenSet() const
{
    return m_documentURLHasBeenSet;
}

string DocumentSDK::GetSdkURL() const
{
    return m_sdkURL;
}

void DocumentSDK::SetSdkURL(const string& _sdkURL)
{
    m_sdkURL = _sdkURL;
    m_sdkURLHasBeenSet = true;
}

bool DocumentSDK::SdkURLHasBeenSet() const
{
    return m_sdkURLHasBeenSet;
}

