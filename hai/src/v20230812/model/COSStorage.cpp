/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/hai/v20230812/model/COSStorage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

COSStorage::COSStorage() :
    m_uRIHasBeenSet(false)
{
}

CoreInternalOutcome COSStorage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("URI") && !value["URI"].IsNull())
    {
        if (!value["URI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSStorage.URI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRI = string(value["URI"].GetString());
        m_uRIHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void COSStorage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uRIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRI.c_str(), allocator).Move(), allocator);
    }

}


string COSStorage::GetURI() const
{
    return m_uRI;
}

void COSStorage::SetURI(const string& _uRI)
{
    m_uRI = _uRI;
    m_uRIHasBeenSet = true;
}

bool COSStorage::URIHasBeenSet() const
{
    return m_uRIHasBeenSet;
}

