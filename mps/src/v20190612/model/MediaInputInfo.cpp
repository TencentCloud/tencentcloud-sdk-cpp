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

#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaInputInfo::MediaInputInfo() :
    m_typeHasBeenSet(false),
    m_cosInputInfoHasBeenSet(false),
    m_urlInputInfoHasBeenSet(false),
    m_s3InputInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInputInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CosInputInfo") && !value["CosInputInfo"].IsNull())
    {
        if (!value["CosInputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInputInfo.CosInputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosInputInfo.Deserialize(value["CosInputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosInputInfoHasBeenSet = true;
    }

    if (value.HasMember("UrlInputInfo") && !value["UrlInputInfo"].IsNull())
    {
        if (!value["UrlInputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInputInfo.UrlInputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_urlInputInfo.Deserialize(value["UrlInputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_urlInputInfoHasBeenSet = true;
    }

    if (value.HasMember("S3InputInfo") && !value["S3InputInfo"].IsNull())
    {
        if (!value["S3InputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInputInfo.S3InputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_s3InputInfo.Deserialize(value["S3InputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_s3InputInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cosInputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosInputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosInputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urlInputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlInputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_urlInputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_s3InputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S3InputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_s3InputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaInputInfo::GetType() const
{
    return m_type;
}

void MediaInputInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaInputInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

CosInputInfo MediaInputInfo::GetCosInputInfo() const
{
    return m_cosInputInfo;
}

void MediaInputInfo::SetCosInputInfo(const CosInputInfo& _cosInputInfo)
{
    m_cosInputInfo = _cosInputInfo;
    m_cosInputInfoHasBeenSet = true;
}

bool MediaInputInfo::CosInputInfoHasBeenSet() const
{
    return m_cosInputInfoHasBeenSet;
}

UrlInputInfo MediaInputInfo::GetUrlInputInfo() const
{
    return m_urlInputInfo;
}

void MediaInputInfo::SetUrlInputInfo(const UrlInputInfo& _urlInputInfo)
{
    m_urlInputInfo = _urlInputInfo;
    m_urlInputInfoHasBeenSet = true;
}

bool MediaInputInfo::UrlInputInfoHasBeenSet() const
{
    return m_urlInputInfoHasBeenSet;
}

S3InputInfo MediaInputInfo::GetS3InputInfo() const
{
    return m_s3InputInfo;
}

void MediaInputInfo::SetS3InputInfo(const S3InputInfo& _s3InputInfo)
{
    m_s3InputInfo = _s3InputInfo;
    m_s3InputInfoHasBeenSet = true;
}

bool MediaInputInfo::S3InputInfoHasBeenSet() const
{
    return m_s3InputInfoHasBeenSet;
}

