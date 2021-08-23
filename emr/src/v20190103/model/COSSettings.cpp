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

#include <tencentcloud/emr/v20190103/model/COSSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

COSSettings::COSSettings() :
    m_cosSecretIdHasBeenSet(false),
    m_cosSecretKeyHasBeenSet(false),
    m_logOnCosPathHasBeenSet(false)
{
}

CoreInternalOutcome COSSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosSecretId") && !value["CosSecretId"].IsNull())
    {
        if (!value["CosSecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSSettings.CosSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosSecretId = string(value["CosSecretId"].GetString());
        m_cosSecretIdHasBeenSet = true;
    }

    if (value.HasMember("CosSecretKey") && !value["CosSecretKey"].IsNull())
    {
        if (!value["CosSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSSettings.CosSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosSecretKey = string(value["CosSecretKey"].GetString());
        m_cosSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("LogOnCosPath") && !value["LogOnCosPath"].IsNull())
    {
        if (!value["LogOnCosPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSSettings.LogOnCosPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logOnCosPath = string(value["LogOnCosPath"].GetString());
        m_logOnCosPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void COSSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_cosSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_logOnCosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogOnCosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logOnCosPath.c_str(), allocator).Move(), allocator);
    }

}


string COSSettings::GetCosSecretId() const
{
    return m_cosSecretId;
}

void COSSettings::SetCosSecretId(const string& _cosSecretId)
{
    m_cosSecretId = _cosSecretId;
    m_cosSecretIdHasBeenSet = true;
}

bool COSSettings::CosSecretIdHasBeenSet() const
{
    return m_cosSecretIdHasBeenSet;
}

string COSSettings::GetCosSecretKey() const
{
    return m_cosSecretKey;
}

void COSSettings::SetCosSecretKey(const string& _cosSecretKey)
{
    m_cosSecretKey = _cosSecretKey;
    m_cosSecretKeyHasBeenSet = true;
}

bool COSSettings::CosSecretKeyHasBeenSet() const
{
    return m_cosSecretKeyHasBeenSet;
}

string COSSettings::GetLogOnCosPath() const
{
    return m_logOnCosPath;
}

void COSSettings::SetLogOnCosPath(const string& _logOnCosPath)
{
    m_logOnCosPath = _logOnCosPath;
    m_logOnCosPathHasBeenSet = true;
}

bool COSSettings::LogOnCosPathHasBeenSet() const
{
    return m_logOnCosPathHasBeenSet;
}

