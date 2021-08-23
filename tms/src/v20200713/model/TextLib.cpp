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

#include <tencentcloud/tms/v20200713/model/TextLib.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20200713::Model;
using namespace std;

TextLib::TextLib() :
    m_libIdHasBeenSet(false),
    m_libNameHasBeenSet(false)
{
}

CoreInternalOutcome TextLib::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LibId") && !value["LibId"].IsNull())
    {
        if (!value["LibId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextLib.LibId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_libId = value["LibId"].GetInt64();
        m_libIdHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextLib.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextLib::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_libIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_libId, allocator);
    }

    if (m_libNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libName.c_str(), allocator).Move(), allocator);
    }

}


int64_t TextLib::GetLibId() const
{
    return m_libId;
}

void TextLib::SetLibId(const int64_t& _libId)
{
    m_libId = _libId;
    m_libIdHasBeenSet = true;
}

bool TextLib::LibIdHasBeenSet() const
{
    return m_libIdHasBeenSet;
}

string TextLib::GetLibName() const
{
    return m_libName;
}

void TextLib::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool TextLib::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

