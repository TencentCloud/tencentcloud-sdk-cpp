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

#include <tencentcloud/emr/v20190103/model/ImagePullSecret.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ImagePullSecret::ImagePullSecret() :
    m_sourceNamespaceHasBeenSet(false),
    m_secretNamesHasBeenSet(false)
{
}

CoreInternalOutcome ImagePullSecret::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceNamespace") && !value["SourceNamespace"].IsNull())
    {
        if (!value["SourceNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagePullSecret.SourceNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceNamespace = string(value["SourceNamespace"].GetString());
        m_sourceNamespaceHasBeenSet = true;
    }

    if (value.HasMember("SecretNames") && !value["SecretNames"].IsNull())
    {
        if (!value["SecretNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImagePullSecret.SecretNames` is not array type"));

        const rapidjson::Value &tmpValue = value["SecretNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_secretNames.push_back((*itr).GetString());
        }
        m_secretNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImagePullSecret::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_secretNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_secretNames.begin(); itr != m_secretNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ImagePullSecret::GetSourceNamespace() const
{
    return m_sourceNamespace;
}

void ImagePullSecret::SetSourceNamespace(const string& _sourceNamespace)
{
    m_sourceNamespace = _sourceNamespace;
    m_sourceNamespaceHasBeenSet = true;
}

bool ImagePullSecret::SourceNamespaceHasBeenSet() const
{
    return m_sourceNamespaceHasBeenSet;
}

vector<string> ImagePullSecret::GetSecretNames() const
{
    return m_secretNames;
}

void ImagePullSecret::SetSecretNames(const vector<string>& _secretNames)
{
    m_secretNames = _secretNames;
    m_secretNamesHasBeenSet = true;
}

bool ImagePullSecret::SecretNamesHasBeenSet() const
{
    return m_secretNamesHasBeenSet;
}

