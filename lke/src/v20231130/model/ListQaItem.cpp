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

#include <tencentcloud/lke/v20231130/model/ListQaItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListQaItem::ListQaItem() :
    m_qaBizIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceDescHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isAllowEditHasBeenSet(false),
    m_isAllowDeleteHasBeenSet(false),
    m_isAllowAcceptHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_qaCharSizeHasBeenSet(false),
    m_expireStartHasBeenSet(false),
    m_expireEndHasBeenSet(false),
    m_attrRangeHasBeenSet(false),
    m_attrLabelsHasBeenSet(false),
    m_similarQuestionNumHasBeenSet(false),
    m_similarQuestionTipsHasBeenSet(false),
    m_isDisabledHasBeenSet(false)
{
}

CoreInternalOutcome ListQaItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QaBizId") && !value["QaBizId"].IsNull())
    {
        if (!value["QaBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.QaBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaBizId = string(value["QaBizId"].GetString());
        m_qaBizIdHasBeenSet = true;
    }

    if (value.HasMember("Question") && !value["Question"].IsNull())
    {
        if (!value["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(value["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (value.HasMember("Answer") && !value["Answer"].IsNull())
    {
        if (!value["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(value["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("SourceDesc") && !value["SourceDesc"].IsNull())
    {
        if (!value["SourceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.SourceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDesc = string(value["SourceDesc"].GetString());
        m_sourceDescHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("DocBizId") && !value["DocBizId"].IsNull())
    {
        if (!value["DocBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.DocBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docBizId = string(value["DocBizId"].GetString());
        m_docBizIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAllowEdit") && !value["IsAllowEdit"].IsNull())
    {
        if (!value["IsAllowEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.IsAllowEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowEdit = value["IsAllowEdit"].GetBool();
        m_isAllowEditHasBeenSet = true;
    }

    if (value.HasMember("IsAllowDelete") && !value["IsAllowDelete"].IsNull())
    {
        if (!value["IsAllowDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.IsAllowDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowDelete = value["IsAllowDelete"].GetBool();
        m_isAllowDeleteHasBeenSet = true;
    }

    if (value.HasMember("IsAllowAccept") && !value["IsAllowAccept"].IsNull())
    {
        if (!value["IsAllowAccept"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.IsAllowAccept` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowAccept = value["IsAllowAccept"].GetBool();
        m_isAllowAcceptHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("QaCharSize") && !value["QaCharSize"].IsNull())
    {
        if (!value["QaCharSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.QaCharSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaCharSize = string(value["QaCharSize"].GetString());
        m_qaCharSizeHasBeenSet = true;
    }

    if (value.HasMember("ExpireStart") && !value["ExpireStart"].IsNull())
    {
        if (!value["ExpireStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.ExpireStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireStart = string(value["ExpireStart"].GetString());
        m_expireStartHasBeenSet = true;
    }

    if (value.HasMember("ExpireEnd") && !value["ExpireEnd"].IsNull())
    {
        if (!value["ExpireEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.ExpireEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireEnd = string(value["ExpireEnd"].GetString());
        m_expireEndHasBeenSet = true;
    }

    if (value.HasMember("AttrRange") && !value["AttrRange"].IsNull())
    {
        if (!value["AttrRange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.AttrRange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attrRange = value["AttrRange"].GetInt64();
        m_attrRangeHasBeenSet = true;
    }

    if (value.HasMember("AttrLabels") && !value["AttrLabels"].IsNull())
    {
        if (!value["AttrLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListQaItem.AttrLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["AttrLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttrLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attrLabels.push_back(item);
        }
        m_attrLabelsHasBeenSet = true;
    }

    if (value.HasMember("SimilarQuestionNum") && !value["SimilarQuestionNum"].IsNull())
    {
        if (!value["SimilarQuestionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.SimilarQuestionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_similarQuestionNum = value["SimilarQuestionNum"].GetUint64();
        m_similarQuestionNumHasBeenSet = true;
    }

    if (value.HasMember("SimilarQuestionTips") && !value["SimilarQuestionTips"].IsNull())
    {
        if (!value["SimilarQuestionTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.SimilarQuestionTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_similarQuestionTips = string(value["SimilarQuestionTips"].GetString());
        m_similarQuestionTipsHasBeenSet = true;
    }

    if (value.HasMember("IsDisabled") && !value["IsDisabled"].IsNull())
    {
        if (!value["IsDisabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListQaItem.IsDisabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDisabled = value["IsDisabled"].GetBool();
        m_isDisabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListQaItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qaBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_questionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Question";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_question.c_str(), allocator).Move(), allocator);
    }

    if (m_answerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Answer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_answer.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_sourceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllowEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowEdit, allocator);
    }

    if (m_isAllowDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowDelete, allocator);
    }

    if (m_isAllowAcceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowAccept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowAccept, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_qaCharSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaCharSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qaCharSize.c_str(), allocator).Move(), allocator);
    }

    if (m_expireStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireStart.c_str(), allocator).Move(), allocator);
    }

    if (m_expireEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_attrRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attrRange, allocator);
    }

    if (m_attrLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attrLabels.begin(); itr != m_attrLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_similarQuestionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarQuestionNum, allocator);
    }

    if (m_similarQuestionTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestionTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_similarQuestionTips.c_str(), allocator).Move(), allocator);
    }

    if (m_isDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDisabled, allocator);
    }

}


string ListQaItem::GetQaBizId() const
{
    return m_qaBizId;
}

void ListQaItem::SetQaBizId(const string& _qaBizId)
{
    m_qaBizId = _qaBizId;
    m_qaBizIdHasBeenSet = true;
}

bool ListQaItem::QaBizIdHasBeenSet() const
{
    return m_qaBizIdHasBeenSet;
}

string ListQaItem::GetQuestion() const
{
    return m_question;
}

void ListQaItem::SetQuestion(const string& _question)
{
    m_question = _question;
    m_questionHasBeenSet = true;
}

bool ListQaItem::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string ListQaItem::GetAnswer() const
{
    return m_answer;
}

void ListQaItem::SetAnswer(const string& _answer)
{
    m_answer = _answer;
    m_answerHasBeenSet = true;
}

bool ListQaItem::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

int64_t ListQaItem::GetSource() const
{
    return m_source;
}

void ListQaItem::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ListQaItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ListQaItem::GetSourceDesc() const
{
    return m_sourceDesc;
}

void ListQaItem::SetSourceDesc(const string& _sourceDesc)
{
    m_sourceDesc = _sourceDesc;
    m_sourceDescHasBeenSet = true;
}

bool ListQaItem::SourceDescHasBeenSet() const
{
    return m_sourceDescHasBeenSet;
}

string ListQaItem::GetUpdateTime() const
{
    return m_updateTime;
}

void ListQaItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ListQaItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ListQaItem::GetStatus() const
{
    return m_status;
}

void ListQaItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListQaItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ListQaItem::GetStatusDesc() const
{
    return m_statusDesc;
}

void ListQaItem::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool ListQaItem::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string ListQaItem::GetDocBizId() const
{
    return m_docBizId;
}

void ListQaItem::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool ListQaItem::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string ListQaItem::GetCreateTime() const
{
    return m_createTime;
}

void ListQaItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ListQaItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool ListQaItem::GetIsAllowEdit() const
{
    return m_isAllowEdit;
}

void ListQaItem::SetIsAllowEdit(const bool& _isAllowEdit)
{
    m_isAllowEdit = _isAllowEdit;
    m_isAllowEditHasBeenSet = true;
}

bool ListQaItem::IsAllowEditHasBeenSet() const
{
    return m_isAllowEditHasBeenSet;
}

bool ListQaItem::GetIsAllowDelete() const
{
    return m_isAllowDelete;
}

void ListQaItem::SetIsAllowDelete(const bool& _isAllowDelete)
{
    m_isAllowDelete = _isAllowDelete;
    m_isAllowDeleteHasBeenSet = true;
}

bool ListQaItem::IsAllowDeleteHasBeenSet() const
{
    return m_isAllowDeleteHasBeenSet;
}

bool ListQaItem::GetIsAllowAccept() const
{
    return m_isAllowAccept;
}

void ListQaItem::SetIsAllowAccept(const bool& _isAllowAccept)
{
    m_isAllowAccept = _isAllowAccept;
    m_isAllowAcceptHasBeenSet = true;
}

bool ListQaItem::IsAllowAcceptHasBeenSet() const
{
    return m_isAllowAcceptHasBeenSet;
}

string ListQaItem::GetFileName() const
{
    return m_fileName;
}

void ListQaItem::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ListQaItem::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ListQaItem::GetFileType() const
{
    return m_fileType;
}

void ListQaItem::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ListQaItem::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string ListQaItem::GetQaCharSize() const
{
    return m_qaCharSize;
}

void ListQaItem::SetQaCharSize(const string& _qaCharSize)
{
    m_qaCharSize = _qaCharSize;
    m_qaCharSizeHasBeenSet = true;
}

bool ListQaItem::QaCharSizeHasBeenSet() const
{
    return m_qaCharSizeHasBeenSet;
}

string ListQaItem::GetExpireStart() const
{
    return m_expireStart;
}

void ListQaItem::SetExpireStart(const string& _expireStart)
{
    m_expireStart = _expireStart;
    m_expireStartHasBeenSet = true;
}

bool ListQaItem::ExpireStartHasBeenSet() const
{
    return m_expireStartHasBeenSet;
}

string ListQaItem::GetExpireEnd() const
{
    return m_expireEnd;
}

void ListQaItem::SetExpireEnd(const string& _expireEnd)
{
    m_expireEnd = _expireEnd;
    m_expireEndHasBeenSet = true;
}

bool ListQaItem::ExpireEndHasBeenSet() const
{
    return m_expireEndHasBeenSet;
}

int64_t ListQaItem::GetAttrRange() const
{
    return m_attrRange;
}

void ListQaItem::SetAttrRange(const int64_t& _attrRange)
{
    m_attrRange = _attrRange;
    m_attrRangeHasBeenSet = true;
}

bool ListQaItem::AttrRangeHasBeenSet() const
{
    return m_attrRangeHasBeenSet;
}

vector<AttrLabel> ListQaItem::GetAttrLabels() const
{
    return m_attrLabels;
}

void ListQaItem::SetAttrLabels(const vector<AttrLabel>& _attrLabels)
{
    m_attrLabels = _attrLabels;
    m_attrLabelsHasBeenSet = true;
}

bool ListQaItem::AttrLabelsHasBeenSet() const
{
    return m_attrLabelsHasBeenSet;
}

uint64_t ListQaItem::GetSimilarQuestionNum() const
{
    return m_similarQuestionNum;
}

void ListQaItem::SetSimilarQuestionNum(const uint64_t& _similarQuestionNum)
{
    m_similarQuestionNum = _similarQuestionNum;
    m_similarQuestionNumHasBeenSet = true;
}

bool ListQaItem::SimilarQuestionNumHasBeenSet() const
{
    return m_similarQuestionNumHasBeenSet;
}

string ListQaItem::GetSimilarQuestionTips() const
{
    return m_similarQuestionTips;
}

void ListQaItem::SetSimilarQuestionTips(const string& _similarQuestionTips)
{
    m_similarQuestionTips = _similarQuestionTips;
    m_similarQuestionTipsHasBeenSet = true;
}

bool ListQaItem::SimilarQuestionTipsHasBeenSet() const
{
    return m_similarQuestionTipsHasBeenSet;
}

bool ListQaItem::GetIsDisabled() const
{
    return m_isDisabled;
}

void ListQaItem::SetIsDisabled(const bool& _isDisabled)
{
    m_isDisabled = _isDisabled;
    m_isDisabledHasBeenSet = true;
}

bool ListQaItem::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}

