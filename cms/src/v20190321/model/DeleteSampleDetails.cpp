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

#include <tencentcloud/cms/v20190321/model/DeleteSampleDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

DeleteSampleDetails::DeleteSampleDetails() :
    m_sampleIDHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_errorInfoHasBeenSet(false)
{
}

CoreInternalOutcome DeleteSampleDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SampleID") && !value["SampleID"].IsNull())
    {
        if (!value["SampleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteSampleDetails.SampleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleID = string(value["SampleID"].GetString());
        m_sampleIDHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteSampleDetails.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteSampleDetails.Deleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetBool();
        m_deletedHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteSampleDetails.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteSampleDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sampleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sampleID.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

}


string DeleteSampleDetails::GetSampleID() const
{
    return m_sampleID;
}

void DeleteSampleDetails::SetSampleID(const string& _sampleID)
{
    m_sampleID = _sampleID;
    m_sampleIDHasBeenSet = true;
}

bool DeleteSampleDetails::SampleIDHasBeenSet() const
{
    return m_sampleIDHasBeenSet;
}

string DeleteSampleDetails::GetContent() const
{
    return m_content;
}

void DeleteSampleDetails::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DeleteSampleDetails::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

bool DeleteSampleDetails::GetDeleted() const
{
    return m_deleted;
}

void DeleteSampleDetails::SetDeleted(const bool& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool DeleteSampleDetails::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

string DeleteSampleDetails::GetErrorInfo() const
{
    return m_errorInfo;
}

void DeleteSampleDetails::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool DeleteSampleDetails::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

