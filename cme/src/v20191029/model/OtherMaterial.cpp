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

#include <tencentcloud/cme/v20191029/model/OtherMaterial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

OtherMaterial::OtherMaterial() :
    m_materialUrlHasBeenSet(false),
    m_vodFileIdHasBeenSet(false)
{
}

CoreInternalOutcome OtherMaterial::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialUrl") && !value["MaterialUrl"].IsNull())
    {
        if (!value["MaterialUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherMaterial.MaterialUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialUrl = string(value["MaterialUrl"].GetString());
        m_materialUrlHasBeenSet = true;
    }

    if (value.HasMember("VodFileId") && !value["VodFileId"].IsNull())
    {
        if (!value["VodFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherMaterial.VodFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodFileId = string(value["VodFileId"].GetString());
        m_vodFileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherMaterial::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_materialUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_vodFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodFileId.c_str(), allocator).Move(), allocator);
    }

}


string OtherMaterial::GetMaterialUrl() const
{
    return m_materialUrl;
}

void OtherMaterial::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool OtherMaterial::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}

string OtherMaterial::GetVodFileId() const
{
    return m_vodFileId;
}

void OtherMaterial::SetVodFileId(const string& _vodFileId)
{
    m_vodFileId = _vodFileId;
    m_vodFileIdHasBeenSet = true;
}

bool OtherMaterial::VodFileIdHasBeenSet() const
{
    return m_vodFileIdHasBeenSet;
}

