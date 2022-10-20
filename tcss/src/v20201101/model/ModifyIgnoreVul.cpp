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

#include <tencentcloud/tcss/v20201101/model/ModifyIgnoreVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyIgnoreVul::ModifyIgnoreVul() :
    m_pocIDHasBeenSet(false),
    m_imageIDsHasBeenSet(false),
    m_imageTypeHasBeenSet(false)
{
}

CoreInternalOutcome ModifyIgnoreVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyIgnoreVul.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }

    if (value.HasMember("ImageIDs") && !value["ImageIDs"].IsNull())
    {
        if (!value["ImageIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyIgnoreVul.ImageIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIDs.push_back((*itr).GetString());
        }
        m_imageIDsHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyIgnoreVul.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyIgnoreVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pocIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocID.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIDs.begin(); itr != m_imageIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

}


string ModifyIgnoreVul::GetPocID() const
{
    return m_pocID;
}

void ModifyIgnoreVul::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool ModifyIgnoreVul::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

vector<string> ModifyIgnoreVul::GetImageIDs() const
{
    return m_imageIDs;
}

void ModifyIgnoreVul::SetImageIDs(const vector<string>& _imageIDs)
{
    m_imageIDs = _imageIDs;
    m_imageIDsHasBeenSet = true;
}

bool ModifyIgnoreVul::ImageIDsHasBeenSet() const
{
    return m_imageIDsHasBeenSet;
}

string ModifyIgnoreVul::GetImageType() const
{
    return m_imageType;
}

void ModifyIgnoreVul::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool ModifyIgnoreVul::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

