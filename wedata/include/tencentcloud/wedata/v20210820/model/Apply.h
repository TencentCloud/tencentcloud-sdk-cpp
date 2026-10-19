/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_APPLY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_APPLY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 审批列表信息
                */
                class Apply : public AbstractModel
                {
                public:
                    Apply();
                    ~Apply() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>申请人id</p>
                     * @return ApplicantId <p>申请人id</p>
                     * 
                     */
                    std::string GetApplicantId() const;

                    /**
                     * 设置<p>申请人id</p>
                     * @param _applicantId <p>申请人id</p>
                     * 
                     */
                    void SetApplicantId(const std::string& _applicantId);

                    /**
                     * 判断参数 ApplicantId 是否已赋值
                     * @return ApplicantId 是否已赋值
                     * 
                     */
                    bool ApplicantIdHasBeenSet() const;

                    /**
                     * 获取<p>申请人名称</p>
                     * @return ApplicantName <p>申请人名称</p>
                     * 
                     */
                    std::string GetApplicantName() const;

                    /**
                     * 设置<p>申请人名称</p>
                     * @param _applicantName <p>申请人名称</p>
                     * 
                     */
                    void SetApplicantName(const std::string& _applicantName);

                    /**
                     * 判断参数 ApplicantName 是否已赋值
                     * @return ApplicantName 是否已赋值
                     * 
                     */
                    bool ApplicantNameHasBeenSet() const;

                    /**
                     * 获取<p>审批备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>审批备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>审批备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>审批备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>审批分类key</p>
                     * @return ApproveClassification <p>审批分类key</p>
                     * 
                     */
                    std::string GetApproveClassification() const;

                    /**
                     * 设置<p>审批分类key</p>
                     * @param _approveClassification <p>审批分类key</p>
                     * 
                     */
                    void SetApproveClassification(const std::string& _approveClassification);

                    /**
                     * 判断参数 ApproveClassification 是否已赋值
                     * @return ApproveClassification 是否已赋值
                     * 
                     */
                    bool ApproveClassificationHasBeenSet() const;

                    /**
                     * 获取<p>审批单id</p>
                     * @return ApproveId <p>审批单id</p>
                     * 
                     */
                    std::string GetApproveId() const;

                    /**
                     * 设置<p>审批单id</p>
                     * @param _approveId <p>审批单id</p>
                     * 
                     */
                    void SetApproveId(const std::string& _approveId);

                    /**
                     * 判断参数 ApproveId 是否已赋值
                     * @return ApproveId 是否已赋值
                     * 
                     */
                    bool ApproveIdHasBeenSet() const;

                    /**
                     * 获取<p>审批类型key</p>
                     * @return ApproveType <p>审批类型key</p>
                     * 
                     */
                    std::string GetApproveType() const;

                    /**
                     * 设置<p>审批类型key</p>
                     * @param _approveType <p>审批类型key</p>
                     * 
                     */
                    void SetApproveType(const std::string& _approveType);

                    /**
                     * 判断参数 ApproveType 是否已赋值
                     * @return ApproveType 是否已赋值
                     * 
                     */
                    bool ApproveTypeHasBeenSet() const;

                    /**
                     * 获取<p>申请原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason <p>申请原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>申请原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason <p>申请原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveTime <p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置<p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveTime <p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveTime(const std::string& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     * 
                     */
                    bool ApproveTimeHasBeenSet() const;

                    /**
                     * 获取<p>审批分类名称</p>
                     * @return ApproveClassificationName <p>审批分类名称</p>
                     * 
                     */
                    std::string GetApproveClassificationName() const;

                    /**
                     * 设置<p>审批分类名称</p>
                     * @param _approveClassificationName <p>审批分类名称</p>
                     * 
                     */
                    void SetApproveClassificationName(const std::string& _approveClassificationName);

                    /**
                     * 判断参数 ApproveClassificationName 是否已赋值
                     * @return ApproveClassificationName 是否已赋值
                     * 
                     */
                    bool ApproveClassificationNameHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>审批类型名称</p>
                     * @return ApproveTypeName <p>审批类型名称</p>
                     * 
                     */
                    std::string GetApproveTypeName() const;

                    /**
                     * 设置<p>审批类型名称</p>
                     * @param _approveTypeName <p>审批类型名称</p>
                     * 
                     */
                    void SetApproveTypeName(const std::string& _approveTypeName);

                    /**
                     * 判断参数 ApproveTypeName 是否已赋值
                     * @return ApproveTypeName 是否已赋值
                     * 
                     */
                    bool ApproveTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>审批异常或者失败信息</p>
                     * @return ErrorMessage <p>审批异常或者失败信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>审批异常或者失败信息</p>
                     * @param _errorMessage <p>审批异常或者失败信息</p>
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>申请名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplyName <p>申请名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplyName() const;

                    /**
                     * 设置<p>申请名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applyName <p>申请名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplyName(const std::string& _applyName);

                    /**
                     * 判断参数 ApplyName 是否已赋值
                     * @return ApplyName 是否已赋值
                     * 
                     */
                    bool ApplyNameHasBeenSet() const;

                    /**
                     * 获取<p>审批人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverId <p>审批人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproverId() const;

                    /**
                     * 设置<p>审批人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approverId <p>审批人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproverId(const std::string& _approverId);

                    /**
                     * 判断参数 ApproverId 是否已赋值
                     * @return ApproverId 是否已赋值
                     * 
                     */
                    bool ApproverIdHasBeenSet() const;

                    /**
                     * 获取<p>审批人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverName <p>审批人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置<p>审批人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approverName <p>审批人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取<p>审批所属项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveProjectName <p>审批所属项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveProjectName() const;

                    /**
                     * 设置<p>审批所属项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveProjectName <p>审批所属项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveProjectName(const std::string& _approveProjectName);

                    /**
                     * 判断参数 ApproveProjectName 是否已赋值
                     * @return ApproveProjectName 是否已赋值
                     * 
                     */
                    bool ApproveProjectNameHasBeenSet() const;

                    /**
                     * 获取<p>审批id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplyId <p>审批id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplyId() const;

                    /**
                     * 设置<p>审批id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applyId <p>审批id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplyId(const std::string& _applyId);

                    /**
                     * 判断参数 ApplyId 是否已赋值
                     * @return ApplyId 是否已赋值
                     * 
                     */
                    bool ApplyIdHasBeenSet() const;

                    /**
                     * 获取<p>扩展字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadata <p>扩展字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置<p>扩展字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadata <p>扩展字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTimestamp <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTimestamp() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTimestamp <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTimestamp(const uint64_t& _createTimestamp);

                    /**
                     * 判断参数 CreateTimestamp 是否已赋值
                     * @return CreateTimestamp 是否已赋值
                     * 
                     */
                    bool CreateTimestampHasBeenSet() const;

                    /**
                     * 获取<p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveTimestamp <p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetApproveTimestamp() const;

                    /**
                     * 设置<p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveTimestamp <p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveTimestamp(const uint64_t& _approveTimestamp);

                    /**
                     * 判断参数 ApproveTimestamp 是否已赋值
                     * @return ApproveTimestamp 是否已赋值
                     * 
                     */
                    bool ApproveTimestampHasBeenSet() const;

                    /**
                     * 获取<p>审批扩展码</p>
                     * @return ApproveCode <p>审批扩展码</p>
                     * 
                     */
                    std::string GetApproveCode() const;

                    /**
                     * 设置<p>审批扩展码</p>
                     * @param _approveCode <p>审批扩展码</p>
                     * 
                     */
                    void SetApproveCode(const std::string& _approveCode);

                    /**
                     * 判断参数 ApproveCode 是否已赋值
                     * @return ApproveCode 是否已赋值
                     * 
                     */
                    bool ApproveCodeHasBeenSet() const;

                private:

                    /**
                     * <p>申请人id</p>
                     */
                    std::string m_applicantId;
                    bool m_applicantIdHasBeenSet;

                    /**
                     * <p>申请人名称</p>
                     */
                    std::string m_applicantName;
                    bool m_applicantNameHasBeenSet;

                    /**
                     * <p>审批备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>审批分类key</p>
                     */
                    std::string m_approveClassification;
                    bool m_approveClassificationHasBeenSet;

                    /**
                     * <p>审批单id</p>
                     */
                    std::string m_approveId;
                    bool m_approveIdHasBeenSet;

                    /**
                     * <p>审批类型key</p>
                     */
                    std::string m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * <p>申请原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * <p>审批分类名称</p>
                     */
                    std::string m_approveClassificationName;
                    bool m_approveClassificationNameHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>审批类型名称</p>
                     */
                    std::string m_approveTypeName;
                    bool m_approveTypeNameHasBeenSet;

                    /**
                     * <p>审批异常或者失败信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>申请名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applyName;
                    bool m_applyNameHasBeenSet;

                    /**
                     * <p>审批人id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approverId;
                    bool m_approverIdHasBeenSet;

                    /**
                     * <p>审批人名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * <p>审批所属项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveProjectName;
                    bool m_approveProjectNameHasBeenSet;

                    /**
                     * <p>审批id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applyId;
                    bool m_applyIdHasBeenSet;

                    /**
                     * <p>扩展字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTimestamp;
                    bool m_createTimestampHasBeenSet;

                    /**
                     * <p>审批时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_approveTimestamp;
                    bool m_approveTimestampHasBeenSet;

                    /**
                     * <p>审批扩展码</p>
                     */
                    std::string m_approveCode;
                    bool m_approveCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_APPLY_H_
