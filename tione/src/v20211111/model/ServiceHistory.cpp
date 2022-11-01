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

#include <tencentcloud/tione/v20211111/model/ServiceHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ServiceHistory::ServiceHistory() :
    m_revisionHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_modelFileHasBeenSet(false),
    m_rawDataHasBeenSet(false)
{
}

CoreInternalOutcome ServiceHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Revision") && !value["Revision"].IsNull())
    {
        if (!value["Revision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceHistory.Revision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revision = string(value["Revision"].GetString());
        m_revisionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceHistory.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceHistory.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("ModelFile") && !value["ModelFile"].IsNull())
    {
        if (!value["ModelFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceHistory.ModelFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelFile = string(value["ModelFile"].GetString());
        m_modelFileHasBeenSet = true;
    }

    if (value.HasMember("RawData") && !value["RawData"].IsNull())
    {
        if (!value["RawData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceHistory.RawData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawData = string(value["RawData"].GetString());
        m_rawDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_revisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revision.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_modelFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelFile.c_str(), allocator).Move(), allocator);
    }

    if (m_rawDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawData.c_str(), allocator).Move(), allocator);
    }

}


string ServiceHistory::GetRevision() const
{
    return m_revision;
}

void ServiceHistory::SetRevision(const string& _revision)
{
    m_revision = _revision;
    m_revisionHasBeenSet = true;
}

bool ServiceHistory::RevisionHasBeenSet() const
{
    return m_revisionHasBeenSet;
}

string ServiceHistory::GetUpdateTime() const
{
    return m_updateTime;
}

void ServiceHistory::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ServiceHistory::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ServiceHistory::GetImage() const
{
    return m_image;
}

void ServiceHistory::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ServiceHistory::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string ServiceHistory::GetModelFile() const
{
    return m_modelFile;
}

void ServiceHistory::SetModelFile(const string& _modelFile)
{
    m_modelFile = _modelFile;
    m_modelFileHasBeenSet = true;
}

bool ServiceHistory::ModelFileHasBeenSet() const
{
    return m_modelFileHasBeenSet;
}

string ServiceHistory::GetRawData() const
{
    return m_rawData;
}

void ServiceHistory::SetRawData(const string& _rawData)
{
    m_rawData = _rawData;
    m_rawDataHasBeenSet = true;
}

bool ServiceHistory::RawDataHasBeenSet() const
{
    return m_rawDataHasBeenSet;
}

