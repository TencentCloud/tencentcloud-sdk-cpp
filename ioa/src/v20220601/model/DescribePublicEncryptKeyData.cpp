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

#include <tencentcloud/ioa/v20220601/model/DescribePublicEncryptKeyData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribePublicEncryptKeyData::DescribePublicEncryptKeyData() :
    m_publicEncryptKeyHasBeenSet(false)
{
}

CoreInternalOutcome DescribePublicEncryptKeyData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicEncryptKey") && !value["PublicEncryptKey"].IsNull())
    {
        if (!value["PublicEncryptKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePublicEncryptKeyData.PublicEncryptKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicEncryptKey = string(value["PublicEncryptKey"].GetString());
        m_publicEncryptKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePublicEncryptKeyData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicEncryptKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicEncryptKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicEncryptKey.c_str(), allocator).Move(), allocator);
    }

}


string DescribePublicEncryptKeyData::GetPublicEncryptKey() const
{
    return m_publicEncryptKey;
}

void DescribePublicEncryptKeyData::SetPublicEncryptKey(const string& _publicEncryptKey)
{
    m_publicEncryptKey = _publicEncryptKey;
    m_publicEncryptKeyHasBeenSet = true;
}

bool DescribePublicEncryptKeyData::PublicEncryptKeyHasBeenSet() const
{
    return m_publicEncryptKeyHasBeenSet;
}

