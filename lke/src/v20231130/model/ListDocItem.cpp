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

#include <tencentcloud/lke/v20231130/model/ListDocItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListDocItem::ListDocItem() :
    m_docBizIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_newNameHasBeenSet(false),
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
    m_attrRangeHasBeenSet(false),
    m_attrLabelsHasBeenSet(false),
    m_isAllowEditHasBeenSet(false),
    m_referUrlTypeHasBeenSet(false),
    m_webUrlHasBeenSet(false),
    m_expireStartHasBeenSet(false),
    m_expireEndHasBeenSet(false),
    m_isAllowRetryHasBeenSet(false),
    m_processingHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_customerKnowledgeIdHasBeenSet(false),
    m_attributeFlagsHasBeenSet(false),
    m_isDisabledHasBeenSet(false)
{
}

CoreInternalOutcome ListDocItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocBizId") && !value["DocBizId"].IsNull())
    {
        if (!value["DocBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.DocBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docBizId = string(value["DocBizId"].GetString());
        m_docBizIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("NewName") && !value["NewName"].IsNull())
    {
        if (!value["NewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.NewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newName = string(value["NewName"].GetString());
        m_newNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("CosUrl") && !value["CosUrl"].IsNull())
    {
        if (!value["CosUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.CosUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosUrl = string(value["CosUrl"].GetString());
        m_cosUrlHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("IsRefer") && !value["IsRefer"].IsNull())
    {
        if (!value["IsRefer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsRefer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRefer = value["IsRefer"].GetBool();
        m_isReferHasBeenSet = true;
    }

    if (value.HasMember("QaNum") && !value["QaNum"].IsNull())
    {
        if (!value["QaNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.QaNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qaNum = value["QaNum"].GetInt64();
        m_qaNumHasBeenSet = true;
    }

    if (value.HasMember("IsDeleted") && !value["IsDeleted"].IsNull())
    {
        if (!value["IsDeleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsDeleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDeleted = value["IsDeleted"].GetBool();
        m_isDeletedHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("SourceDesc") && !value["SourceDesc"].IsNull())
    {
        if (!value["SourceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.SourceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDesc = string(value["SourceDesc"].GetString());
        m_sourceDescHasBeenSet = true;
    }

    if (value.HasMember("IsAllowRestart") && !value["IsAllowRestart"].IsNull())
    {
        if (!value["IsAllowRestart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsAllowRestart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowRestart = value["IsAllowRestart"].GetBool();
        m_isAllowRestartHasBeenSet = true;
    }

    if (value.HasMember("IsDeletedQa") && !value["IsDeletedQa"].IsNull())
    {
        if (!value["IsDeletedQa"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsDeletedQa` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDeletedQa = value["IsDeletedQa"].GetBool();
        m_isDeletedQaHasBeenSet = true;
    }

    if (value.HasMember("IsCreatingQa") && !value["IsCreatingQa"].IsNull())
    {
        if (!value["IsCreatingQa"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsCreatingQa` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreatingQa = value["IsCreatingQa"].GetBool();
        m_isCreatingQaHasBeenSet = true;
    }

    if (value.HasMember("IsAllowDelete") && !value["IsAllowDelete"].IsNull())
    {
        if (!value["IsAllowDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsAllowDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowDelete = value["IsAllowDelete"].GetBool();
        m_isAllowDeleteHasBeenSet = true;
    }

    if (value.HasMember("IsAllowRefer") && !value["IsAllowRefer"].IsNull())
    {
        if (!value["IsAllowRefer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsAllowRefer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowRefer = value["IsAllowRefer"].GetBool();
        m_isAllowReferHasBeenSet = true;
    }

    if (value.HasMember("IsCreatedQa") && !value["IsCreatedQa"].IsNull())
    {
        if (!value["IsCreatedQa"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsCreatedQa` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreatedQa = value["IsCreatedQa"].GetBool();
        m_isCreatedQaHasBeenSet = true;
    }

    if (value.HasMember("DocCharSize") && !value["DocCharSize"].IsNull())
    {
        if (!value["DocCharSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.DocCharSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docCharSize = string(value["DocCharSize"].GetString());
        m_docCharSizeHasBeenSet = true;
    }

    if (value.HasMember("AttrRange") && !value["AttrRange"].IsNull())
    {
        if (!value["AttrRange"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.AttrRange` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attrRange = value["AttrRange"].GetUint64();
        m_attrRangeHasBeenSet = true;
    }

    if (value.HasMember("AttrLabels") && !value["AttrLabels"].IsNull())
    {
        if (!value["AttrLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListDocItem.AttrLabels` is not array type"));

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

    if (value.HasMember("IsAllowEdit") && !value["IsAllowEdit"].IsNull())
    {
        if (!value["IsAllowEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsAllowEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowEdit = value["IsAllowEdit"].GetBool();
        m_isAllowEditHasBeenSet = true;
    }

    if (value.HasMember("ReferUrlType") && !value["ReferUrlType"].IsNull())
    {
        if (!value["ReferUrlType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.ReferUrlType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_referUrlType = value["ReferUrlType"].GetUint64();
        m_referUrlTypeHasBeenSet = true;
    }

    if (value.HasMember("WebUrl") && !value["WebUrl"].IsNull())
    {
        if (!value["WebUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.WebUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webUrl = string(value["WebUrl"].GetString());
        m_webUrlHasBeenSet = true;
    }

    if (value.HasMember("ExpireStart") && !value["ExpireStart"].IsNull())
    {
        if (!value["ExpireStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.ExpireStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireStart = string(value["ExpireStart"].GetString());
        m_expireStartHasBeenSet = true;
    }

    if (value.HasMember("ExpireEnd") && !value["ExpireEnd"].IsNull())
    {
        if (!value["ExpireEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.ExpireEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireEnd = string(value["ExpireEnd"].GetString());
        m_expireEndHasBeenSet = true;
    }

    if (value.HasMember("IsAllowRetry") && !value["IsAllowRetry"].IsNull())
    {
        if (!value["IsAllowRetry"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsAllowRetry` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowRetry = value["IsAllowRetry"].GetBool();
        m_isAllowRetryHasBeenSet = true;
    }

    if (value.HasMember("Processing") && !value["Processing"].IsNull())
    {
        if (!value["Processing"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListDocItem.Processing` is not array type"));

        const rapidjson::Value &tmpValue = value["Processing"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_processing.push_back((*itr).GetInt64());
        }
        m_processingHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CateBizId") && !value["CateBizId"].IsNull())
    {
        if (!value["CateBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.CateBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cateBizId = string(value["CateBizId"].GetString());
        m_cateBizIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerKnowledgeId") && !value["CustomerKnowledgeId"].IsNull())
    {
        if (!value["CustomerKnowledgeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.CustomerKnowledgeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerKnowledgeId = string(value["CustomerKnowledgeId"].GetString());
        m_customerKnowledgeIdHasBeenSet = true;
    }

    if (value.HasMember("AttributeFlags") && !value["AttributeFlags"].IsNull())
    {
        if (!value["AttributeFlags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListDocItem.AttributeFlags` is not array type"));

        const rapidjson::Value &tmpValue = value["AttributeFlags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attributeFlags.push_back((*itr).GetUint64());
        }
        m_attributeFlagsHasBeenSet = true;
    }

    if (value.HasMember("IsDisabled") && !value["IsDisabled"].IsNull())
    {
        if (!value["IsDisabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListDocItem.IsDisabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDisabled = value["IsDisabled"].GetBool();
        m_isDisabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListDocItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_newNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newName.c_str(), allocator).Move(), allocator);
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

    if (m_isAllowEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowEdit, allocator);
    }

    if (m_referUrlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferUrlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referUrlType, allocator);
    }

    if (m_webUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webUrl.c_str(), allocator).Move(), allocator);
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

    if (m_isAllowRetryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowRetry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowRetry, allocator);
    }

    if (m_processingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Processing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_processing.begin(); itr != m_processing.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerKnowledgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerKnowledgeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerKnowledgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeFlagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeFlags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attributeFlags.begin(); itr != m_attributeFlags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_isDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDisabled, allocator);
    }

}


string ListDocItem::GetDocBizId() const
{
    return m_docBizId;
}

void ListDocItem::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool ListDocItem::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string ListDocItem::GetFileName() const
{
    return m_fileName;
}

void ListDocItem::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ListDocItem::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ListDocItem::GetNewName() const
{
    return m_newName;
}

void ListDocItem::SetNewName(const string& _newName)
{
    m_newName = _newName;
    m_newNameHasBeenSet = true;
}

bool ListDocItem::NewNameHasBeenSet() const
{
    return m_newNameHasBeenSet;
}

string ListDocItem::GetFileType() const
{
    return m_fileType;
}

void ListDocItem::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ListDocItem::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string ListDocItem::GetCosUrl() const
{
    return m_cosUrl;
}

void ListDocItem::SetCosUrl(const string& _cosUrl)
{
    m_cosUrl = _cosUrl;
    m_cosUrlHasBeenSet = true;
}

bool ListDocItem::CosUrlHasBeenSet() const
{
    return m_cosUrlHasBeenSet;
}

string ListDocItem::GetUpdateTime() const
{
    return m_updateTime;
}

void ListDocItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ListDocItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ListDocItem::GetStatus() const
{
    return m_status;
}

void ListDocItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListDocItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ListDocItem::GetStatusDesc() const
{
    return m_statusDesc;
}

void ListDocItem::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool ListDocItem::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string ListDocItem::GetReason() const
{
    return m_reason;
}

void ListDocItem::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ListDocItem::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

bool ListDocItem::GetIsRefer() const
{
    return m_isRefer;
}

void ListDocItem::SetIsRefer(const bool& _isRefer)
{
    m_isRefer = _isRefer;
    m_isReferHasBeenSet = true;
}

bool ListDocItem::IsReferHasBeenSet() const
{
    return m_isReferHasBeenSet;
}

int64_t ListDocItem::GetQaNum() const
{
    return m_qaNum;
}

void ListDocItem::SetQaNum(const int64_t& _qaNum)
{
    m_qaNum = _qaNum;
    m_qaNumHasBeenSet = true;
}

bool ListDocItem::QaNumHasBeenSet() const
{
    return m_qaNumHasBeenSet;
}

bool ListDocItem::GetIsDeleted() const
{
    return m_isDeleted;
}

void ListDocItem::SetIsDeleted(const bool& _isDeleted)
{
    m_isDeleted = _isDeleted;
    m_isDeletedHasBeenSet = true;
}

bool ListDocItem::IsDeletedHasBeenSet() const
{
    return m_isDeletedHasBeenSet;
}

int64_t ListDocItem::GetSource() const
{
    return m_source;
}

void ListDocItem::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ListDocItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ListDocItem::GetSourceDesc() const
{
    return m_sourceDesc;
}

void ListDocItem::SetSourceDesc(const string& _sourceDesc)
{
    m_sourceDesc = _sourceDesc;
    m_sourceDescHasBeenSet = true;
}

bool ListDocItem::SourceDescHasBeenSet() const
{
    return m_sourceDescHasBeenSet;
}

bool ListDocItem::GetIsAllowRestart() const
{
    return m_isAllowRestart;
}

void ListDocItem::SetIsAllowRestart(const bool& _isAllowRestart)
{
    m_isAllowRestart = _isAllowRestart;
    m_isAllowRestartHasBeenSet = true;
}

bool ListDocItem::IsAllowRestartHasBeenSet() const
{
    return m_isAllowRestartHasBeenSet;
}

bool ListDocItem::GetIsDeletedQa() const
{
    return m_isDeletedQa;
}

void ListDocItem::SetIsDeletedQa(const bool& _isDeletedQa)
{
    m_isDeletedQa = _isDeletedQa;
    m_isDeletedQaHasBeenSet = true;
}

bool ListDocItem::IsDeletedQaHasBeenSet() const
{
    return m_isDeletedQaHasBeenSet;
}

bool ListDocItem::GetIsCreatingQa() const
{
    return m_isCreatingQa;
}

void ListDocItem::SetIsCreatingQa(const bool& _isCreatingQa)
{
    m_isCreatingQa = _isCreatingQa;
    m_isCreatingQaHasBeenSet = true;
}

bool ListDocItem::IsCreatingQaHasBeenSet() const
{
    return m_isCreatingQaHasBeenSet;
}

bool ListDocItem::GetIsAllowDelete() const
{
    return m_isAllowDelete;
}

void ListDocItem::SetIsAllowDelete(const bool& _isAllowDelete)
{
    m_isAllowDelete = _isAllowDelete;
    m_isAllowDeleteHasBeenSet = true;
}

bool ListDocItem::IsAllowDeleteHasBeenSet() const
{
    return m_isAllowDeleteHasBeenSet;
}

bool ListDocItem::GetIsAllowRefer() const
{
    return m_isAllowRefer;
}

void ListDocItem::SetIsAllowRefer(const bool& _isAllowRefer)
{
    m_isAllowRefer = _isAllowRefer;
    m_isAllowReferHasBeenSet = true;
}

bool ListDocItem::IsAllowReferHasBeenSet() const
{
    return m_isAllowReferHasBeenSet;
}

bool ListDocItem::GetIsCreatedQa() const
{
    return m_isCreatedQa;
}

void ListDocItem::SetIsCreatedQa(const bool& _isCreatedQa)
{
    m_isCreatedQa = _isCreatedQa;
    m_isCreatedQaHasBeenSet = true;
}

bool ListDocItem::IsCreatedQaHasBeenSet() const
{
    return m_isCreatedQaHasBeenSet;
}

string ListDocItem::GetDocCharSize() const
{
    return m_docCharSize;
}

void ListDocItem::SetDocCharSize(const string& _docCharSize)
{
    m_docCharSize = _docCharSize;
    m_docCharSizeHasBeenSet = true;
}

bool ListDocItem::DocCharSizeHasBeenSet() const
{
    return m_docCharSizeHasBeenSet;
}

uint64_t ListDocItem::GetAttrRange() const
{
    return m_attrRange;
}

void ListDocItem::SetAttrRange(const uint64_t& _attrRange)
{
    m_attrRange = _attrRange;
    m_attrRangeHasBeenSet = true;
}

bool ListDocItem::AttrRangeHasBeenSet() const
{
    return m_attrRangeHasBeenSet;
}

vector<AttrLabel> ListDocItem::GetAttrLabels() const
{
    return m_attrLabels;
}

void ListDocItem::SetAttrLabels(const vector<AttrLabel>& _attrLabels)
{
    m_attrLabels = _attrLabels;
    m_attrLabelsHasBeenSet = true;
}

bool ListDocItem::AttrLabelsHasBeenSet() const
{
    return m_attrLabelsHasBeenSet;
}

bool ListDocItem::GetIsAllowEdit() const
{
    return m_isAllowEdit;
}

void ListDocItem::SetIsAllowEdit(const bool& _isAllowEdit)
{
    m_isAllowEdit = _isAllowEdit;
    m_isAllowEditHasBeenSet = true;
}

bool ListDocItem::IsAllowEditHasBeenSet() const
{
    return m_isAllowEditHasBeenSet;
}

uint64_t ListDocItem::GetReferUrlType() const
{
    return m_referUrlType;
}

void ListDocItem::SetReferUrlType(const uint64_t& _referUrlType)
{
    m_referUrlType = _referUrlType;
    m_referUrlTypeHasBeenSet = true;
}

bool ListDocItem::ReferUrlTypeHasBeenSet() const
{
    return m_referUrlTypeHasBeenSet;
}

string ListDocItem::GetWebUrl() const
{
    return m_webUrl;
}

void ListDocItem::SetWebUrl(const string& _webUrl)
{
    m_webUrl = _webUrl;
    m_webUrlHasBeenSet = true;
}

bool ListDocItem::WebUrlHasBeenSet() const
{
    return m_webUrlHasBeenSet;
}

string ListDocItem::GetExpireStart() const
{
    return m_expireStart;
}

void ListDocItem::SetExpireStart(const string& _expireStart)
{
    m_expireStart = _expireStart;
    m_expireStartHasBeenSet = true;
}

bool ListDocItem::ExpireStartHasBeenSet() const
{
    return m_expireStartHasBeenSet;
}

string ListDocItem::GetExpireEnd() const
{
    return m_expireEnd;
}

void ListDocItem::SetExpireEnd(const string& _expireEnd)
{
    m_expireEnd = _expireEnd;
    m_expireEndHasBeenSet = true;
}

bool ListDocItem::ExpireEndHasBeenSet() const
{
    return m_expireEndHasBeenSet;
}

bool ListDocItem::GetIsAllowRetry() const
{
    return m_isAllowRetry;
}

void ListDocItem::SetIsAllowRetry(const bool& _isAllowRetry)
{
    m_isAllowRetry = _isAllowRetry;
    m_isAllowRetryHasBeenSet = true;
}

bool ListDocItem::IsAllowRetryHasBeenSet() const
{
    return m_isAllowRetryHasBeenSet;
}

vector<int64_t> ListDocItem::GetProcessing() const
{
    return m_processing;
}

void ListDocItem::SetProcessing(const vector<int64_t>& _processing)
{
    m_processing = _processing;
    m_processingHasBeenSet = true;
}

bool ListDocItem::ProcessingHasBeenSet() const
{
    return m_processingHasBeenSet;
}

string ListDocItem::GetCreateTime() const
{
    return m_createTime;
}

void ListDocItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ListDocItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ListDocItem::GetCateBizId() const
{
    return m_cateBizId;
}

void ListDocItem::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool ListDocItem::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

string ListDocItem::GetCustomerKnowledgeId() const
{
    return m_customerKnowledgeId;
}

void ListDocItem::SetCustomerKnowledgeId(const string& _customerKnowledgeId)
{
    m_customerKnowledgeId = _customerKnowledgeId;
    m_customerKnowledgeIdHasBeenSet = true;
}

bool ListDocItem::CustomerKnowledgeIdHasBeenSet() const
{
    return m_customerKnowledgeIdHasBeenSet;
}

vector<uint64_t> ListDocItem::GetAttributeFlags() const
{
    return m_attributeFlags;
}

void ListDocItem::SetAttributeFlags(const vector<uint64_t>& _attributeFlags)
{
    m_attributeFlags = _attributeFlags;
    m_attributeFlagsHasBeenSet = true;
}

bool ListDocItem::AttributeFlagsHasBeenSet() const
{
    return m_attributeFlagsHasBeenSet;
}

bool ListDocItem::GetIsDisabled() const
{
    return m_isDisabled;
}

void ListDocItem::SetIsDisabled(const bool& _isDisabled)
{
    m_isDisabled = _isDisabled;
    m_isDisabledHasBeenSet = true;
}

bool ListDocItem::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}

