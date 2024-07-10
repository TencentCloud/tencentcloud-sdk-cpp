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

#include <tencentcloud/lke/v20231130/model/DocSegment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DocSegment::DocSegment() :
    m_idHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_segmentTypeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_pageContentHasBeenSet(false),
    m_orgDataHasBeenSet(false),
    m_docIdHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_docUrlHasBeenSet(false)
{
}

CoreInternalOutcome DocSegment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("SegmentType") && !value["SegmentType"].IsNull())
    {
        if (!value["SegmentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.SegmentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentType = string(value["SegmentType"].GetString());
        m_segmentTypeHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("PageContent") && !value["PageContent"].IsNull())
    {
        if (!value["PageContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.PageContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageContent = string(value["PageContent"].GetString());
        m_pageContentHasBeenSet = true;
    }

    if (value.HasMember("OrgData") && !value["OrgData"].IsNull())
    {
        if (!value["OrgData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.OrgData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgData = string(value["OrgData"].GetString());
        m_orgDataHasBeenSet = true;
    }

    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("DocBizId") && !value["DocBizId"].IsNull())
    {
        if (!value["DocBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.DocBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docBizId = string(value["DocBizId"].GetString());
        m_docBizIdHasBeenSet = true;
    }

    if (value.HasMember("DocUrl") && !value["DocUrl"].IsNull())
    {
        if (!value["DocUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocSegment.DocUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docUrl = string(value["DocUrl"].GetString());
        m_docUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocSegment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_pageContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageContent.c_str(), allocator).Move(), allocator);
    }

    if (m_orgDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgData.c_str(), allocator).Move(), allocator);
    }

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_docUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docUrl.c_str(), allocator).Move(), allocator);
    }

}


string DocSegment::GetId() const
{
    return m_id;
}

void DocSegment::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DocSegment::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DocSegment::GetBusinessId() const
{
    return m_businessId;
}

void DocSegment::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool DocSegment::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string DocSegment::GetFileType() const
{
    return m_fileType;
}

void DocSegment::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DocSegment::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string DocSegment::GetSegmentType() const
{
    return m_segmentType;
}

void DocSegment::SetSegmentType(const string& _segmentType)
{
    m_segmentType = _segmentType;
    m_segmentTypeHasBeenSet = true;
}

bool DocSegment::SegmentTypeHasBeenSet() const
{
    return m_segmentTypeHasBeenSet;
}

string DocSegment::GetTitle() const
{
    return m_title;
}

void DocSegment::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DocSegment::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string DocSegment::GetPageContent() const
{
    return m_pageContent;
}

void DocSegment::SetPageContent(const string& _pageContent)
{
    m_pageContent = _pageContent;
    m_pageContentHasBeenSet = true;
}

bool DocSegment::PageContentHasBeenSet() const
{
    return m_pageContentHasBeenSet;
}

string DocSegment::GetOrgData() const
{
    return m_orgData;
}

void DocSegment::SetOrgData(const string& _orgData)
{
    m_orgData = _orgData;
    m_orgDataHasBeenSet = true;
}

bool DocSegment::OrgDataHasBeenSet() const
{
    return m_orgDataHasBeenSet;
}

string DocSegment::GetDocId() const
{
    return m_docId;
}

void DocSegment::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool DocSegment::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

string DocSegment::GetDocBizId() const
{
    return m_docBizId;
}

void DocSegment::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool DocSegment::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string DocSegment::GetDocUrl() const
{
    return m_docUrl;
}

void DocSegment::SetDocUrl(const string& _docUrl)
{
    m_docUrl = _docUrl;
    m_docUrlHasBeenSet = true;
}

bool DocSegment::DocUrlHasBeenSet() const
{
    return m_docUrlHasBeenSet;
}

