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

#include <tencentcloud/lke/v20231130/model/DescribeQAResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeQAResponse::DescribeQAResponse() :
    m_qaBizIdHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_customParamHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceDescHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_isAllowAcceptHasBeenSet(false),
    m_isAllowDeleteHasBeenSet(false),
    m_isAllowEditHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_segmentBizIdHasBeenSet(false),
    m_pageContentHasBeenSet(false),
    m_highlightsHasBeenSet(false),
    m_orgDataHasBeenSet(false),
    m_attrRangeHasBeenSet(false),
    m_attrLabelsHasBeenSet(false),
    m_expireStartHasBeenSet(false),
    m_expireEndHasBeenSet(false),
    m_similarQuestionsHasBeenSet(false),
    m_qaAuditStatusHasBeenSet(false),
    m_picAuditStatusHasBeenSet(false),
    m_videoAuditStatusHasBeenSet(false),
    m_questionDescHasBeenSet(false),
    m_isDisabledHasBeenSet(false)
{
}

CoreInternalOutcome DescribeQAResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("QaBizId") && !rsp["QaBizId"].IsNull())
    {
        if (!rsp["QaBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QaBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qaBizId = string(rsp["QaBizId"].GetString());
        m_qaBizIdHasBeenSet = true;
    }

    if (rsp.HasMember("Question") && !rsp["Question"].IsNull())
    {
        if (!rsp["Question"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Question` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_question = string(rsp["Question"].GetString());
        m_questionHasBeenSet = true;
    }

    if (rsp.HasMember("Answer") && !rsp["Answer"].IsNull())
    {
        if (!rsp["Answer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Answer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_answer = string(rsp["Answer"].GetString());
        m_answerHasBeenSet = true;
    }

    if (rsp.HasMember("CustomParam") && !rsp["CustomParam"].IsNull())
    {
        if (!rsp["CustomParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customParam = string(rsp["CustomParam"].GetString());
        m_customParamHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = rsp["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (rsp.HasMember("SourceDesc") && !rsp["SourceDesc"].IsNull())
    {
        if (!rsp["SourceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDesc = string(rsp["SourceDesc"].GetString());
        m_sourceDescHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StatusDesc") && !rsp["StatusDesc"].IsNull())
    {
        if (!rsp["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(rsp["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (rsp.HasMember("CateBizId") && !rsp["CateBizId"].IsNull())
    {
        if (!rsp["CateBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CateBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cateBizId = string(rsp["CateBizId"].GetString());
        m_cateBizIdHasBeenSet = true;
    }

    if (rsp.HasMember("IsAllowAccept") && !rsp["IsAllowAccept"].IsNull())
    {
        if (!rsp["IsAllowAccept"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAllowAccept` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowAccept = rsp["IsAllowAccept"].GetBool();
        m_isAllowAcceptHasBeenSet = true;
    }

    if (rsp.HasMember("IsAllowDelete") && !rsp["IsAllowDelete"].IsNull())
    {
        if (!rsp["IsAllowDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAllowDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowDelete = rsp["IsAllowDelete"].GetBool();
        m_isAllowDeleteHasBeenSet = true;
    }

    if (rsp.HasMember("IsAllowEdit") && !rsp["IsAllowEdit"].IsNull())
    {
        if (!rsp["IsAllowEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAllowEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowEdit = rsp["IsAllowEdit"].GetBool();
        m_isAllowEditHasBeenSet = true;
    }

    if (rsp.HasMember("DocBizId") && !rsp["DocBizId"].IsNull())
    {
        if (!rsp["DocBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docBizId = string(rsp["DocBizId"].GetString());
        m_docBizIdHasBeenSet = true;
    }

    if (rsp.HasMember("FileName") && !rsp["FileName"].IsNull())
    {
        if (!rsp["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(rsp["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (rsp.HasMember("FileType") && !rsp["FileType"].IsNull())
    {
        if (!rsp["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(rsp["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SegmentBizId") && !rsp["SegmentBizId"].IsNull())
    {
        if (!rsp["SegmentBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentBizId = string(rsp["SegmentBizId"].GetString());
        m_segmentBizIdHasBeenSet = true;
    }

    if (rsp.HasMember("PageContent") && !rsp["PageContent"].IsNull())
    {
        if (!rsp["PageContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PageContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageContent = string(rsp["PageContent"].GetString());
        m_pageContentHasBeenSet = true;
    }

    if (rsp.HasMember("Highlights") && !rsp["Highlights"].IsNull())
    {
        if (!rsp["Highlights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Highlights` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Highlights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Highlight item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highlights.push_back(item);
        }
        m_highlightsHasBeenSet = true;
    }

    if (rsp.HasMember("OrgData") && !rsp["OrgData"].IsNull())
    {
        if (!rsp["OrgData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgData = string(rsp["OrgData"].GetString());
        m_orgDataHasBeenSet = true;
    }

    if (rsp.HasMember("AttrRange") && !rsp["AttrRange"].IsNull())
    {
        if (!rsp["AttrRange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttrRange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attrRange = rsp["AttrRange"].GetInt64();
        m_attrRangeHasBeenSet = true;
    }

    if (rsp.HasMember("AttrLabels") && !rsp["AttrLabels"].IsNull())
    {
        if (!rsp["AttrLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttrLabels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AttrLabels"];
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

    if (rsp.HasMember("ExpireStart") && !rsp["ExpireStart"].IsNull())
    {
        if (!rsp["ExpireStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireStart = string(rsp["ExpireStart"].GetString());
        m_expireStartHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireEnd") && !rsp["ExpireEnd"].IsNull())
    {
        if (!rsp["ExpireEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireEnd = string(rsp["ExpireEnd"].GetString());
        m_expireEndHasBeenSet = true;
    }

    if (rsp.HasMember("SimilarQuestions") && !rsp["SimilarQuestions"].IsNull())
    {
        if (!rsp["SimilarQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SimilarQuestions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SimilarQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SimilarQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_similarQuestions.push_back(item);
        }
        m_similarQuestionsHasBeenSet = true;
    }

    if (rsp.HasMember("QaAuditStatus") && !rsp["QaAuditStatus"].IsNull())
    {
        if (!rsp["QaAuditStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QaAuditStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qaAuditStatus = rsp["QaAuditStatus"].GetUint64();
        m_qaAuditStatusHasBeenSet = true;
    }

    if (rsp.HasMember("PicAuditStatus") && !rsp["PicAuditStatus"].IsNull())
    {
        if (!rsp["PicAuditStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PicAuditStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_picAuditStatus = rsp["PicAuditStatus"].GetUint64();
        m_picAuditStatusHasBeenSet = true;
    }

    if (rsp.HasMember("VideoAuditStatus") && !rsp["VideoAuditStatus"].IsNull())
    {
        if (!rsp["VideoAuditStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoAuditStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoAuditStatus = rsp["VideoAuditStatus"].GetUint64();
        m_videoAuditStatusHasBeenSet = true;
    }

    if (rsp.HasMember("QuestionDesc") && !rsp["QuestionDesc"].IsNull())
    {
        if (!rsp["QuestionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_questionDesc = string(rsp["QuestionDesc"].GetString());
        m_questionDescHasBeenSet = true;
    }

    if (rsp.HasMember("IsDisabled") && !rsp["IsDisabled"].IsNull())
    {
        if (!rsp["IsDisabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsDisabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDisabled = rsp["IsDisabled"].GetBool();
        m_isDisabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeQAResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_customParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customParam.c_str(), allocator).Move(), allocator);
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

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllowAcceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowAccept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowAccept, allocator);
    }

    if (m_isAllowDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowDelete, allocator);
    }

    if (m_isAllowEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowEdit, allocator);
    }

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
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

    if (m_segmentBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageContent.c_str(), allocator).Move(), allocator);
    }

    if (m_highlightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Highlights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highlights.begin(); itr != m_highlights.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_orgDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgData.c_str(), allocator).Move(), allocator);
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

    if (m_similarQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimilarQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_similarQuestions.begin(); itr != m_similarQuestions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_qaAuditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaAuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qaAuditStatus, allocator);
    }

    if (m_picAuditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicAuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_picAuditStatus, allocator);
    }

    if (m_videoAuditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoAuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoAuditStatus, allocator);
    }

    if (m_questionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuestionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_questionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_isDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDisabled, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeQAResponse::GetQaBizId() const
{
    return m_qaBizId;
}

bool DescribeQAResponse::QaBizIdHasBeenSet() const
{
    return m_qaBizIdHasBeenSet;
}

string DescribeQAResponse::GetQuestion() const
{
    return m_question;
}

bool DescribeQAResponse::QuestionHasBeenSet() const
{
    return m_questionHasBeenSet;
}

string DescribeQAResponse::GetAnswer() const
{
    return m_answer;
}

bool DescribeQAResponse::AnswerHasBeenSet() const
{
    return m_answerHasBeenSet;
}

string DescribeQAResponse::GetCustomParam() const
{
    return m_customParam;
}

bool DescribeQAResponse::CustomParamHasBeenSet() const
{
    return m_customParamHasBeenSet;
}

uint64_t DescribeQAResponse::GetSource() const
{
    return m_source;
}

bool DescribeQAResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribeQAResponse::GetSourceDesc() const
{
    return m_sourceDesc;
}

bool DescribeQAResponse::SourceDescHasBeenSet() const
{
    return m_sourceDescHasBeenSet;
}

string DescribeQAResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeQAResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribeQAResponse::GetStatus() const
{
    return m_status;
}

bool DescribeQAResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeQAResponse::GetStatusDesc() const
{
    return m_statusDesc;
}

bool DescribeQAResponse::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DescribeQAResponse::GetCateBizId() const
{
    return m_cateBizId;
}

bool DescribeQAResponse::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

bool DescribeQAResponse::GetIsAllowAccept() const
{
    return m_isAllowAccept;
}

bool DescribeQAResponse::IsAllowAcceptHasBeenSet() const
{
    return m_isAllowAcceptHasBeenSet;
}

bool DescribeQAResponse::GetIsAllowDelete() const
{
    return m_isAllowDelete;
}

bool DescribeQAResponse::IsAllowDeleteHasBeenSet() const
{
    return m_isAllowDeleteHasBeenSet;
}

bool DescribeQAResponse::GetIsAllowEdit() const
{
    return m_isAllowEdit;
}

bool DescribeQAResponse::IsAllowEditHasBeenSet() const
{
    return m_isAllowEditHasBeenSet;
}

string DescribeQAResponse::GetDocBizId() const
{
    return m_docBizId;
}

bool DescribeQAResponse::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string DescribeQAResponse::GetFileName() const
{
    return m_fileName;
}

bool DescribeQAResponse::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DescribeQAResponse::GetFileType() const
{
    return m_fileType;
}

bool DescribeQAResponse::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string DescribeQAResponse::GetSegmentBizId() const
{
    return m_segmentBizId;
}

bool DescribeQAResponse::SegmentBizIdHasBeenSet() const
{
    return m_segmentBizIdHasBeenSet;
}

string DescribeQAResponse::GetPageContent() const
{
    return m_pageContent;
}

bool DescribeQAResponse::PageContentHasBeenSet() const
{
    return m_pageContentHasBeenSet;
}

vector<Highlight> DescribeQAResponse::GetHighlights() const
{
    return m_highlights;
}

bool DescribeQAResponse::HighlightsHasBeenSet() const
{
    return m_highlightsHasBeenSet;
}

string DescribeQAResponse::GetOrgData() const
{
    return m_orgData;
}

bool DescribeQAResponse::OrgDataHasBeenSet() const
{
    return m_orgDataHasBeenSet;
}

int64_t DescribeQAResponse::GetAttrRange() const
{
    return m_attrRange;
}

bool DescribeQAResponse::AttrRangeHasBeenSet() const
{
    return m_attrRangeHasBeenSet;
}

vector<AttrLabel> DescribeQAResponse::GetAttrLabels() const
{
    return m_attrLabels;
}

bool DescribeQAResponse::AttrLabelsHasBeenSet() const
{
    return m_attrLabelsHasBeenSet;
}

string DescribeQAResponse::GetExpireStart() const
{
    return m_expireStart;
}

bool DescribeQAResponse::ExpireStartHasBeenSet() const
{
    return m_expireStartHasBeenSet;
}

string DescribeQAResponse::GetExpireEnd() const
{
    return m_expireEnd;
}

bool DescribeQAResponse::ExpireEndHasBeenSet() const
{
    return m_expireEndHasBeenSet;
}

vector<SimilarQuestion> DescribeQAResponse::GetSimilarQuestions() const
{
    return m_similarQuestions;
}

bool DescribeQAResponse::SimilarQuestionsHasBeenSet() const
{
    return m_similarQuestionsHasBeenSet;
}

uint64_t DescribeQAResponse::GetQaAuditStatus() const
{
    return m_qaAuditStatus;
}

bool DescribeQAResponse::QaAuditStatusHasBeenSet() const
{
    return m_qaAuditStatusHasBeenSet;
}

uint64_t DescribeQAResponse::GetPicAuditStatus() const
{
    return m_picAuditStatus;
}

bool DescribeQAResponse::PicAuditStatusHasBeenSet() const
{
    return m_picAuditStatusHasBeenSet;
}

uint64_t DescribeQAResponse::GetVideoAuditStatus() const
{
    return m_videoAuditStatus;
}

bool DescribeQAResponse::VideoAuditStatusHasBeenSet() const
{
    return m_videoAuditStatusHasBeenSet;
}

string DescribeQAResponse::GetQuestionDesc() const
{
    return m_questionDesc;
}

bool DescribeQAResponse::QuestionDescHasBeenSet() const
{
    return m_questionDescHasBeenSet;
}

bool DescribeQAResponse::GetIsDisabled() const
{
    return m_isDisabled;
}

bool DescribeQAResponse::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}


