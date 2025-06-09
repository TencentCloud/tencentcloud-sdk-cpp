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

#include <tencentcloud/lke/v20231130/model/DescribeDocResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeDocResponse::DescribeDocResponse() :
    m_docBizIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_cosUrlHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_isReferHasBeenSet(false),
    m_qaNumHasBeenSet(false),
    m_isDeletedHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceDescHasBeenSet(false),
    m_isAllowRestartHasBeenSet(false),
    m_isDeletedQaHasBeenSet(false),
    m_isCreatingQaHasBeenSet(false),
    m_isAllowDeleteHasBeenSet(false),
    m_isAllowReferHasBeenSet(false),
    m_isCreatedQaHasBeenSet(false),
    m_docCharSizeHasBeenSet(false),
    m_isAllowEditHasBeenSet(false),
    m_attrRangeHasBeenSet(false),
    m_attrLabelsHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_isDisabledHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDocResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("CosUrl") && !rsp["CosUrl"].IsNull())
    {
        if (!rsp["CosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosUrl = string(rsp["CosUrl"].GetString());
        m_cosUrlHasBeenSet = true;
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

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("IsRefer") && !rsp["IsRefer"].IsNull())
    {
        if (!rsp["IsRefer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsRefer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRefer = rsp["IsRefer"].GetBool();
        m_isReferHasBeenSet = true;
    }

    if (rsp.HasMember("QaNum") && !rsp["QaNum"].IsNull())
    {
        if (!rsp["QaNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QaNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qaNum = rsp["QaNum"].GetInt64();
        m_qaNumHasBeenSet = true;
    }

    if (rsp.HasMember("IsDeleted") && !rsp["IsDeleted"].IsNull())
    {
        if (!rsp["IsDeleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsDeleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDeleted = rsp["IsDeleted"].GetBool();
        m_isDeletedHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = rsp["Source"].GetInt64();
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

    if (rsp.HasMember("IsAllowRestart") && !rsp["IsAllowRestart"].IsNull())
    {
        if (!rsp["IsAllowRestart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAllowRestart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowRestart = rsp["IsAllowRestart"].GetBool();
        m_isAllowRestartHasBeenSet = true;
    }

    if (rsp.HasMember("IsDeletedQa") && !rsp["IsDeletedQa"].IsNull())
    {
        if (!rsp["IsDeletedQa"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsDeletedQa` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDeletedQa = rsp["IsDeletedQa"].GetBool();
        m_isDeletedQaHasBeenSet = true;
    }

    if (rsp.HasMember("IsCreatingQa") && !rsp["IsCreatingQa"].IsNull())
    {
        if (!rsp["IsCreatingQa"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsCreatingQa` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreatingQa = rsp["IsCreatingQa"].GetBool();
        m_isCreatingQaHasBeenSet = true;
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

    if (rsp.HasMember("IsAllowRefer") && !rsp["IsAllowRefer"].IsNull())
    {
        if (!rsp["IsAllowRefer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsAllowRefer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowRefer = rsp["IsAllowRefer"].GetBool();
        m_isAllowReferHasBeenSet = true;
    }

    if (rsp.HasMember("IsCreatedQa") && !rsp["IsCreatedQa"].IsNull())
    {
        if (!rsp["IsCreatedQa"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsCreatedQa` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreatedQa = rsp["IsCreatedQa"].GetBool();
        m_isCreatedQaHasBeenSet = true;
    }

    if (rsp.HasMember("DocCharSize") && !rsp["DocCharSize"].IsNull())
    {
        if (!rsp["DocCharSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocCharSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docCharSize = string(rsp["DocCharSize"].GetString());
        m_docCharSizeHasBeenSet = true;
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

    if (rsp.HasMember("CateBizId") && !rsp["CateBizId"].IsNull())
    {
        if (!rsp["CateBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CateBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cateBizId = string(rsp["CateBizId"].GetString());
        m_cateBizIdHasBeenSet = true;
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

string DescribeDocResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_cosUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosUrl.c_str(), allocator).Move(), allocator);
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

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_isReferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRefer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRefer, allocator);
    }

    if (m_qaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qaNum, allocator);
    }

    if (m_isDeletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDeleted, allocator);
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

    if (m_isAllowRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowRestart, allocator);
    }

    if (m_isDeletedQaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeletedQa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDeletedQa, allocator);
    }

    if (m_isCreatingQaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreatingQa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCreatingQa, allocator);
    }

    if (m_isAllowDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowDelete, allocator);
    }

    if (m_isAllowReferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowRefer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowRefer, allocator);
    }

    if (m_isCreatedQaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreatedQa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCreatedQa, allocator);
    }

    if (m_docCharSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocCharSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docCharSize.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllowEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowEdit, allocator);
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

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
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


string DescribeDocResponse::GetDocBizId() const
{
    return m_docBizId;
}

bool DescribeDocResponse::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string DescribeDocResponse::GetFileName() const
{
    return m_fileName;
}

bool DescribeDocResponse::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DescribeDocResponse::GetFileType() const
{
    return m_fileType;
}

bool DescribeDocResponse::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string DescribeDocResponse::GetCosUrl() const
{
    return m_cosUrl;
}

bool DescribeDocResponse::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

string DescribeDocResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeDocResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribeDocResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDocResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDocResponse::GetStatusDesc() const
{
    return m_statusDesc;
}

bool DescribeDocResponse::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DescribeDocResponse::GetReason() const
{
    return m_reason;
}

bool DescribeDocResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

bool DescribeDocResponse::GetIsRefer() const
{
    return m_isRefer;
}

bool DescribeDocResponse::IsReferHasBeenSet() const
{
    return m_isReferHasBeenSet;
}

int64_t DescribeDocResponse::GetQaNum() const
{
    return m_qaNum;
}

bool DescribeDocResponse::QaNumHasBeenSet() const
{
    return m_qaNumHasBeenSet;
}

bool DescribeDocResponse::GetIsDeleted() const
{
    return m_isDeleted;
}

bool DescribeDocResponse::IsDeletedHasBeenSet() const
{
    return m_isDeletedHasBeenSet;
}

int64_t DescribeDocResponse::GetSource() const
{
    return m_source;
}

bool DescribeDocResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribeDocResponse::GetSourceDesc() const
{
    return m_sourceDesc;
}

bool DescribeDocResponse::SourceDescHasBeenSet() const
{
    return m_sourceDescHasBeenSet;
}

bool DescribeDocResponse::GetIsAllowRestart() const
{
    return m_isAllowRestart;
}

bool DescribeDocResponse::IsAllowRestartHasBeenSet() const
{
    return m_isAllowRestartHasBeenSet;
}

bool DescribeDocResponse::GetIsDeletedQa() const
{
    return m_isDeletedQa;
}

bool DescribeDocResponse::IsDeletedQaHasBeenSet() const
{
    return m_isDeletedQaHasBeenSet;
}

bool DescribeDocResponse::GetIsCreatingQa() const
{
    return m_isCreatingQa;
}

bool DescribeDocResponse::IsCreatingQaHasBeenSet() const
{
    return m_isCreatingQaHasBeenSet;
}

bool DescribeDocResponse::GetIsAllowDelete() const
{
    return m_isAllowDelete;
}

bool DescribeDocResponse::IsAllowDeleteHasBeenSet() const
{
    return m_isAllowDeleteHasBeenSet;
}

bool DescribeDocResponse::GetIsAllowRefer() const
{
    return m_isAllowRefer;
}

bool DescribeDocResponse::IsAllowReferHasBeenSet() const
{
    return m_isAllowReferHasBeenSet;
}

bool DescribeDocResponse::GetIsCreatedQa() const
{
    return m_isCreatedQa;
}

bool DescribeDocResponse::IsCreatedQaHasBeenSet() const
{
    return m_isCreatedQaHasBeenSet;
}

string DescribeDocResponse::GetDocCharSize() const
{
    return m_docCharSize;
}

bool DescribeDocResponse::DocCharSizeHasBeenSet() const
{
    return m_docCharSizeHasBeenSet;
}

bool DescribeDocResponse::GetIsAllowEdit() const
{
    return m_isAllowEdit;
}

bool DescribeDocResponse::IsAllowEditHasBeenSet() const
{
    return m_isAllowEditHasBeenSet;
}

int64_t DescribeDocResponse::GetAttrRange() const
{
    return m_attrRange;
}

bool DescribeDocResponse::AttrRangeHasBeenSet() const
{
    return m_attrRangeHasBeenSet;
}

vector<AttrLabel> DescribeDocResponse::GetAttrLabels() const
{
    return m_attrLabels;
}

bool DescribeDocResponse::AttrLabelsHasBeenSet() const
{
    return m_attrLabelsHasBeenSet;
}

string DescribeDocResponse::GetCateBizId() const
{
    return m_cateBizId;
}

bool DescribeDocResponse::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

bool DescribeDocResponse::GetIsDisabled() const
{
    return m_isDisabled;
}

bool DescribeDocResponse::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}


