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

#include <tencentcloud/lowcode/v20210108/model/DataSourceLinkApp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DataSourceLinkApp::DataSourceLinkApp() :
    m_idHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_editStatusUseHasBeenSet(false),
    m_previewStatusUseHasBeenSet(false),
    m_onlineStatusUseHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceLinkApp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceLinkApp.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceLinkApp.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("EditStatusUse") && !value["EditStatusUse"].IsNull())
    {
        if (!value["EditStatusUse"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceLinkApp.EditStatusUse` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_editStatusUse = value["EditStatusUse"].GetInt64();
        m_editStatusUseHasBeenSet = true;
    }

    if (value.HasMember("PreviewStatusUse") && !value["PreviewStatusUse"].IsNull())
    {
        if (!value["PreviewStatusUse"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceLinkApp.PreviewStatusUse` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_previewStatusUse = value["PreviewStatusUse"].GetInt64();
        m_previewStatusUseHasBeenSet = true;
    }

    if (value.HasMember("OnlineStatusUse") && !value["OnlineStatusUse"].IsNull())
    {
        if (!value["OnlineStatusUse"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceLinkApp.OnlineStatusUse` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineStatusUse = value["OnlineStatusUse"].GetInt64();
        m_onlineStatusUseHasBeenSet = true;
    }

    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceLinkApp.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceLinkApp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_editStatusUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditStatusUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_editStatusUse, allocator);
    }

    if (m_previewStatusUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewStatusUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_previewStatusUse, allocator);
    }

    if (m_onlineStatusUseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatusUse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineStatusUse, allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

}


string DataSourceLinkApp::GetId() const
{
    return m_id;
}

void DataSourceLinkApp::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DataSourceLinkApp::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DataSourceLinkApp::GetTitle() const
{
    return m_title;
}

void DataSourceLinkApp::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DataSourceLinkApp::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t DataSourceLinkApp::GetEditStatusUse() const
{
    return m_editStatusUse;
}

void DataSourceLinkApp::SetEditStatusUse(const int64_t& _editStatusUse)
{
    m_editStatusUse = _editStatusUse;
    m_editStatusUseHasBeenSet = true;
}

bool DataSourceLinkApp::EditStatusUseHasBeenSet() const
{
    return m_editStatusUseHasBeenSet;
}

int64_t DataSourceLinkApp::GetPreviewStatusUse() const
{
    return m_previewStatusUse;
}

void DataSourceLinkApp::SetPreviewStatusUse(const int64_t& _previewStatusUse)
{
    m_previewStatusUse = _previewStatusUse;
    m_previewStatusUseHasBeenSet = true;
}

bool DataSourceLinkApp::PreviewStatusUseHasBeenSet() const
{
    return m_previewStatusUseHasBeenSet;
}

int64_t DataSourceLinkApp::GetOnlineStatusUse() const
{
    return m_onlineStatusUse;
}

void DataSourceLinkApp::SetOnlineStatusUse(const int64_t& _onlineStatusUse)
{
    m_onlineStatusUse = _onlineStatusUse;
    m_onlineStatusUseHasBeenSet = true;
}

bool DataSourceLinkApp::OnlineStatusUseHasBeenSet() const
{
    return m_onlineStatusUseHasBeenSet;
}

string DataSourceLinkApp::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DataSourceLinkApp::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DataSourceLinkApp::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

