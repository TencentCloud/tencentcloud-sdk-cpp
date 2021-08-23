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

#include <tencentcloud/ams/v20200608/model/AmsDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace std;

AmsDetailInfo::AmsDetailInfo() :
    m_labelHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_dataFormHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_originalLabelHasBeenSet(false),
    m_operateTimeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_thumbnailHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_detailCountHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AmsDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.Label` is not array type"));

        const rapidjson::Value &tmpValue = value["Label"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_label.push_back((*itr).GetString());
        }
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("DataForm") && !value["DataForm"].IsNull())
    {
        if (!value["DataForm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.DataForm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataForm = value["DataForm"].GetInt64();
        m_dataFormHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("OriginalLabel") && !value["OriginalLabel"].IsNull())
    {
        if (!value["OriginalLabel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.OriginalLabel` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginalLabel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originalLabel.push_back((*itr).GetString());
        }
        m_originalLabelHasBeenSet = true;
    }

    if (value.HasMember("OperateTime") && !value["OperateTime"].IsNull())
    {
        if (!value["OperateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.OperateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateTime = string(value["OperateTime"].GetString());
        m_operateTimeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Thumbnail") && !value["Thumbnail"].IsNull())
    {
        if (!value["Thumbnail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.Thumbnail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbnail = string(value["Thumbnail"].GetString());
        m_thumbnailHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("DetailCount") && !value["DetailCount"].IsNull())
    {
        if (!value["DetailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.DetailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detailCount = value["DetailCount"].GetInt64();
        m_detailCountHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmsDetailInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AmsDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_label.begin(); itr != m_label.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataForm, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_originalLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originalLabel.begin(); itr != m_originalLabel.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_thumbnailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thumbnail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thumbnail.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_detailCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detailCount, allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


vector<string> AmsDetailInfo::GetLabel() const
{
    return m_label;
}

void AmsDetailInfo::SetLabel(const vector<string>& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AmsDetailInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

int64_t AmsDetailInfo::GetDuration() const
{
    return m_duration;
}

void AmsDetailInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AmsDetailInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string AmsDetailInfo::GetName() const
{
    return m_name;
}

void AmsDetailInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AmsDetailInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AmsDetailInfo::GetTaskID() const
{
    return m_taskID;
}

void AmsDetailInfo::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool AmsDetailInfo::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string AmsDetailInfo::GetInsertTime() const
{
    return m_insertTime;
}

void AmsDetailInfo::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool AmsDetailInfo::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

int64_t AmsDetailInfo::GetDataForm() const
{
    return m_dataForm;
}

void AmsDetailInfo::SetDataForm(const int64_t& _dataForm)
{
    m_dataForm = _dataForm;
    m_dataFormHasBeenSet = true;
}

bool AmsDetailInfo::DataFormHasBeenSet() const
{
    return m_dataFormHasBeenSet;
}

string AmsDetailInfo::GetOperator() const
{
    return m_operator;
}

void AmsDetailInfo::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AmsDetailInfo::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> AmsDetailInfo::GetOriginalLabel() const
{
    return m_originalLabel;
}

void AmsDetailInfo::SetOriginalLabel(const vector<string>& _originalLabel)
{
    m_originalLabel = _originalLabel;
    m_originalLabelHasBeenSet = true;
}

bool AmsDetailInfo::OriginalLabelHasBeenSet() const
{
    return m_originalLabelHasBeenSet;
}

string AmsDetailInfo::GetOperateTime() const
{
    return m_operateTime;
}

void AmsDetailInfo::SetOperateTime(const string& _operateTime)
{
    m_operateTime = _operateTime;
    m_operateTimeHasBeenSet = true;
}

bool AmsDetailInfo::OperateTimeHasBeenSet() const
{
    return m_operateTimeHasBeenSet;
}

string AmsDetailInfo::GetUrl() const
{
    return m_url;
}

void AmsDetailInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AmsDetailInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string AmsDetailInfo::GetThumbnail() const
{
    return m_thumbnail;
}

void AmsDetailInfo::SetThumbnail(const string& _thumbnail)
{
    m_thumbnail = _thumbnail;
    m_thumbnailHasBeenSet = true;
}

bool AmsDetailInfo::ThumbnailHasBeenSet() const
{
    return m_thumbnailHasBeenSet;
}

string AmsDetailInfo::GetContent() const
{
    return m_content;
}

void AmsDetailInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AmsDetailInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t AmsDetailInfo::GetDetailCount() const
{
    return m_detailCount;
}

void AmsDetailInfo::SetDetailCount(const int64_t& _detailCount)
{
    m_detailCount = _detailCount;
    m_detailCountHasBeenSet = true;
}

bool AmsDetailInfo::DetailCountHasBeenSet() const
{
    return m_detailCountHasBeenSet;
}

string AmsDetailInfo::GetRequestId() const
{
    return m_requestId;
}

void AmsDetailInfo::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool AmsDetailInfo::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string AmsDetailInfo::GetStatus() const
{
    return m_status;
}

void AmsDetailInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AmsDetailInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

