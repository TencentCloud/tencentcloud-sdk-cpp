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

#include <tencentcloud/cwp/v20180228/model/AssetUserKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetUserKeyInfo::AssetUserKeyInfo() :
    m_valueHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_encryptTypeHasBeenSet(false)
{
}

CoreInternalOutcome AssetUserKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserKeyInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserKeyInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("EncryptType") && !value["EncryptType"].IsNull())
    {
        if (!value["EncryptType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetUserKeyInfo.EncryptType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptType = string(value["EncryptType"].GetString());
        m_encryptTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetUserKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptType.c_str(), allocator).Move(), allocator);
    }

}


string AssetUserKeyInfo::GetValue() const
{
    return m_value;
}

void AssetUserKeyInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AssetUserKeyInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string AssetUserKeyInfo::GetComment() const
{
    return m_comment;
}

void AssetUserKeyInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool AssetUserKeyInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string AssetUserKeyInfo::GetEncryptType() const
{
    return m_encryptType;
}

void AssetUserKeyInfo::SetEncryptType(const string& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool AssetUserKeyInfo::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}

