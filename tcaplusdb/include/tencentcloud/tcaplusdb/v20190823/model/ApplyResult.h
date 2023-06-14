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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYRESULT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 更新申请单结果
                */
                class ApplyResult : public AbstractModel
                {
                public:
                    ApplyResult();
                    ~ApplyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取申请单id
                     * @return ApplicationId 申请单id
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置申请单id
                     * @param _applicationId 申请单id
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取申请类型
                     * @return ApplicationType 申请类型
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置申请类型
                     * @param _applicationType 申请类型
                     * 
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取处理状态 0-待审核 1-已经审核并提交任务 2-已驳回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationStatus 处理状态 0-待审核 1-已经审核并提交任务 2-已驳回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetApplicationStatus() const;

                    /**
                     * 设置处理状态 0-待审核 1-已经审核并提交任务 2-已驳回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationStatus 处理状态 0-待审核 1-已经审核并提交任务 2-已驳回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationStatus(const int64_t& _applicationStatus);

                    /**
                     * 判断参数 ApplicationStatus 是否已赋值
                     * @return ApplicationStatus 是否已赋值
                     * 
                     */
                    bool ApplicationStatusHasBeenSet() const;

                    /**
                     * 获取已提交的任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 已提交的任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置已提交的任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 已提交的任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 申请单id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 申请类型
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 处理状态 0-待审核 1-已经审核并提交任务 2-已驳回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_applicationStatus;
                    bool m_applicationStatusHasBeenSet;

                    /**
                     * 已提交的任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYRESULT_H_
