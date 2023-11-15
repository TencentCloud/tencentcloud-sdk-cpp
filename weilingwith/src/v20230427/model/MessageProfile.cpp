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

#include <tencentcloud/weilingwith/v20230427/model/MessageProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

MessageProfile::MessageProfile() :
    m_appTypeHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_poiCodeHasBeenSet(false)
{
}

CoreInternalOutcome MessageProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppType") && !value["AppType"].IsNull())
    {
        if (!value["AppType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageProfile.AppType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appType = string(value["AppType"].GetString());
        m_appTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageProfile.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("PoiCode") && !value["PoiCode"].IsNull())
    {
        if (!value["PoiCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageProfile.PoiCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poiCode = string(value["PoiCode"].GetString());
        m_poiCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_poiCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoiCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_poiCode.c_str(), allocator).Move(), allocator);
    }

}


string MessageProfile::GetAppType() const
{
    return m_appType;
}

void MessageProfile::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool MessageProfile::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string MessageProfile::GetModelId() const
{
    return m_modelId;
}

void MessageProfile::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool MessageProfile::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string MessageProfile::GetPoiCode() const
{
    return m_poiCode;
}

void MessageProfile::SetPoiCode(const string& _poiCode)
{
    m_poiCode = _poiCode;
    m_poiCodeHasBeenSet = true;
}

bool MessageProfile::PoiCodeHasBeenSet() const
{
    return m_poiCodeHasBeenSet;
}

