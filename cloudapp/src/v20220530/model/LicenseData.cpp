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

#include <tencentcloud/cloudapp/v20220530/model/LicenseData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudapp::V20220530::Model;
using namespace std;

LicenseData::LicenseData() :
    m_textHasBeenSet(false),
    m_deploymentOutputHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

CoreInternalOutcome LicenseData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseData.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("DeploymentOutput") && !value["DeploymentOutput"].IsNull())
    {
        if (!value["DeploymentOutput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseData.DeploymentOutput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentOutput = string(value["DeploymentOutput"].GetString());
        m_deploymentOutputHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LicenseData.Metadata` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadata"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DisplayMetadata item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metadata.push_back(item);
        }
        m_metadataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentOutput.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LicenseData::GetText() const
{
    return m_text;
}

void LicenseData::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool LicenseData::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string LicenseData::GetDeploymentOutput() const
{
    return m_deploymentOutput;
}

void LicenseData::SetDeploymentOutput(const string& _deploymentOutput)
{
    m_deploymentOutput = _deploymentOutput;
    m_deploymentOutputHasBeenSet = true;
}

bool LicenseData::DeploymentOutputHasBeenSet() const
{
    return m_deploymentOutputHasBeenSet;
}

vector<DisplayMetadata> LicenseData::GetMetadata() const
{
    return m_metadata;
}

void LicenseData::SetMetadata(const vector<DisplayMetadata>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool LicenseData::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

