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
                     * 获取申请人id
                     * @return ApplicantId 申请人id
                     * 
                     */
                    std::string GetApplicantId() const;

                    /**
                     * 设置申请人id
                     * @param _applicantId 申请人id
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
                     * 获取申请人名称
                     * @return ApplicantName 申请人名称
                     * 
                     */
                    std::string GetApplicantName() const;

                    /**
                     * 设置申请人名称
                     * @param _applicantName 申请人名称
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
                     * 获取审批备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 审批备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置审批备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 审批备注
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
                     * 获取审批分类key
                     * @return ApproveClassification 审批分类key
                     * 
                     */
                    std::string GetApproveClassification() const;

                    /**
                     * 设置审批分类key
                     * @param _approveClassification 审批分类key
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
                     * 获取审批单id
                     * @return ApproveId 审批单id
                     * 
                     */
                    std::string GetApproveId() const;

                    /**
                     * 设置审批单id
                     * @param _approveId 审批单id
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
                     * 获取审批类型key
                     * @return ApproveType 审批类型key
                     * 
                     */
                    std::string GetApproveType() const;

                    /**
                     * 设置审批类型key
                     * @param _approveType 审批类型key
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
                     * 获取申请原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 申请原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置申请原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 申请原因
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveTime 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveTime 审批时间
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
                     * 获取审批分类名称
                     * @return ApproveClassificationName 审批分类名称
                     * 
                     */
                    std::string GetApproveClassificationName() const;

                    /**
                     * 设置审批分类名称
                     * @param _approveClassificationName 审批分类名称
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取审批类型名称
                     * @return ApproveTypeName 审批类型名称
                     * 
                     */
                    std::string GetApproveTypeName() const;

                    /**
                     * 设置审批类型名称
                     * @param _approveTypeName 审批类型名称
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
                     * 获取审批异常或者失败信息
                     * @return ErrorMessage 审批异常或者失败信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置审批异常或者失败信息
                     * @param _errorMessage 审批异常或者失败信息
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
                     * 获取申请名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplyName 申请名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplyName() const;

                    /**
                     * 设置申请名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applyName 申请名称
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
                     * 获取审批人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverId 审批人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproverId() const;

                    /**
                     * 设置审批人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approverId 审批人id
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
                     * 获取审批人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverName 审批人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置审批人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approverName 审批人名称
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
                     * 获取审批所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveProjectName 审批所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveProjectName() const;

                    /**
                     * 设置审批所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveProjectName 审批所属项目
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
                     * 获取审批id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplyId 审批id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplyId() const;

                    /**
                     * 设置审批id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applyId 审批id
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
                     * 获取扩展字段
                     * @return Metadata 扩展字段
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置扩展字段
                     * @param _metadata 扩展字段
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * 申请人id
                     */
                    std::string m_applicantId;
                    bool m_applicantIdHasBeenSet;

                    /**
                     * 申请人名称
                     */
                    std::string m_applicantName;
                    bool m_applicantNameHasBeenSet;

                    /**
                     * 审批备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 审批分类key
                     */
                    std::string m_approveClassification;
                    bool m_approveClassificationHasBeenSet;

                    /**
                     * 审批单id
                     */
                    std::string m_approveId;
                    bool m_approveIdHasBeenSet;

                    /**
                     * 审批类型key
                     */
                    std::string m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * 申请原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 审批时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * 审批分类名称
                     */
                    std::string m_approveClassificationName;
                    bool m_approveClassificationNameHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 审批类型名称
                     */
                    std::string m_approveTypeName;
                    bool m_approveTypeNameHasBeenSet;

                    /**
                     * 审批异常或者失败信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 申请名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applyName;
                    bool m_applyNameHasBeenSet;

                    /**
                     * 审批人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approverId;
                    bool m_approverIdHasBeenSet;

                    /**
                     * 审批人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 审批所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveProjectName;
                    bool m_approveProjectNameHasBeenSet;

                    /**
                     * 审批id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applyId;
                    bool m_applyIdHasBeenSet;

                    /**
                     * 扩展字段
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_APPLY_H_
