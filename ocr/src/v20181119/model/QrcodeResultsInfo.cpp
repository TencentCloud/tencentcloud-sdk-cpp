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

#include <tencentcloud/ocr/v20181119/model/QrcodeResultsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QrcodeResultsInfo::QrcodeResultsInfo() :
    m_typeNameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_positionHasBeenSet(false)
{
}

CoreInternalOutcome QrcodeResultsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodeResultsInfo.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodeResultsInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QrcodeResultsInfo.Position` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_position.Deserialize(value["Position"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_positionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QrcodeResultsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_position.ToJsonObject(value[key.c_str()], allocator);
    }

}


string QrcodeResultsInfo::GetTypeName() const
{
    return m_typeName;
}

void QrcodeResultsInfo::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool QrcodeResultsInfo::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string QrcodeResultsInfo::GetUrl() const
{
    return m_url;
}

void QrcodeResultsInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool QrcodeResultsInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

QrcodePositionObj QrcodeResultsInfo::GetPosition() const
{
    return m_position;
}

void QrcodeResultsInfo::SetPosition(const QrcodePositionObj& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool QrcodeResultsInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

