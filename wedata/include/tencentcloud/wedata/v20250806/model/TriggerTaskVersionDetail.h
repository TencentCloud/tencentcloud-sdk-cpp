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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKVERSIONDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKVERSIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 任务版本列表信息
                */
                class TriggerTaskVersionDetail : public AbstractModel
                {
                public:
                    TriggerTaskVersionDetail();
                    ~TriggerTaskVersionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionNum 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionNum 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionNum(const std::string& _versionNum);

                    /**
                     * 判断参数 VersionNum 是否已赋值
                     * @return VersionNum 是否已赋值
                     * 
                     */
                    bool VersionNumHasBeenSet() const;

                    /**
                     * 获取版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin 版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin 版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取保存版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId 保存版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置保存版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId 保存版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取版本描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionRemark 版本描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置版本描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionRemark 版本描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     * 
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取审批状态（只有提交版本有）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveStatus 审批状态（只有提交版本有）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveStatus() const;

                    /**
                     * 设置审批状态（只有提交版本有）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveStatus 审批状态（只有提交版本有）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveStatus(const std::string& _approveStatus);

                    /**
                     * 判断参数 ApproveStatus 是否已赋值
                     * @return ApproveStatus 是否已赋值
                     * 
                     */
                    bool ApproveStatusHasBeenSet() const;

                    /**
                     * 获取生产状态（只有提交版本有）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveTime 生产状态（只有提交版本有）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置生产状态（只有提交版本有）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveTime 生产状态（只有提交版本有）
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
                     * 获取审批人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproveUserUin 审批人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApproveUserUin() const;

                    /**
                     * 设置审批人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _approveUserUin 审批人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApproveUserUin(const std::string& _approveUserUin);

                    /**
                     * 判断参数 ApproveUserUin 是否已赋值
                     * @return ApproveUserUin 是否已赋值
                     * 
                     */
                    bool ApproveUserUinHasBeenSet() const;

                    /**
                     * 获取版本的任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Task 版本的任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TriggerTask GetTask() const;

                    /**
                     * 设置版本的任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _task 版本的任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTask(const TriggerTask& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                private:

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * 版本创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 保存版本Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 版本描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * 审批状态（只有提交版本有）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * 生产状态（只有提交版本有）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * 审批人Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approveUserUin;
                    bool m_approveUserUinHasBeenSet;

                    /**
                     * 版本的任务详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TriggerTask m_task;
                    bool m_taskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKVERSIONDETAIL_H_
