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

#include <tencentcloud/cam/v20190116/model/PolicyVersionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

PolicyVersionDetail::PolicyVersionDetail() :
    m_versionIdHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_isDefaultVersionHasBeenSet(false),
    m_documentHasBeenSet(false)
{
}

CoreInternalOutcome PolicyVersionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyVersionDetail.VersionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = value["VersionId"].GetUint64();
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyVersionDetail.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultVersion") && !value["IsDefaultVersion"].IsNull())
    {
        if (!value["IsDefaultVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyVersionDetail.IsDefaultVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultVersion = value["IsDefaultVersion"].GetUint64();
        m_isDefaultVersionHasBeenSet = true;
    }

    if (value.HasMember("Document") && !value["Document"].IsNull())
    {
        if (!value["Document"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolicyVersionDetail.Document` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_document = string(value["Document"].GetString());
        m_documentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolicyVersionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionId, allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultVersion, allocator);
    }

    if (m_documentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Document";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_document.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PolicyVersionDetail::GetVersionId() const
{
    return m_versionId;
}

void PolicyVersionDetail::SetVersionId(const uint64_t& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool PolicyVersionDetail::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string PolicyVersionDetail::GetCreateDate() const
{
    return m_createDate;
}

void PolicyVersionDetail::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool PolicyVersionDetail::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

uint64_t PolicyVersionDetail::GetIsDefaultVersion() const
{
    return m_isDefaultVersion;
}

void PolicyVersionDetail::SetIsDefaultVersion(const uint64_t& _isDefaultVersion)
{
    m_isDefaultVersion = _isDefaultVersion;
    m_isDefaultVersionHasBeenSet = true;
}

bool PolicyVersionDetail::IsDefaultVersionHasBeenSet() const
{
    return m_isDefaultVersionHasBeenSet;
}

string PolicyVersionDetail::GetDocument() const
{
    return m_document;
}

void PolicyVersionDetail::SetDocument(const string& _document)
{
    m_document = _document;
    m_documentHasBeenSet = true;
}

bool PolicyVersionDetail::DocumentHasBeenSet() const
{
    return m_documentHasBeenSet;
}

