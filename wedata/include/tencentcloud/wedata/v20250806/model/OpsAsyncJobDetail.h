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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSASYNCJOBDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSASYNCJOBDETAIL_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 异步操作详情
                */
                class OpsAsyncJobDetail : public AbstractModel
                {
                public:
                    OpsAsyncJobDetail();
                    ~OpsAsyncJobDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取操作id
                     * @return AsyncId 操作id
                     * 
                     */
                    std::string GetAsyncId() const;

                    /**
                     * 设置操作id
                     * @param _asyncId 操作id
                     * 
                     */
                    void SetAsyncId(const std::string& _asyncId);

                    /**
                     * 判断参数 AsyncId 是否已赋值
                     * @return AsyncId 是否已赋值
                     * 
                     */
                    bool AsyncIdHasBeenSet() const;

                    /**
                     * 获取异步操作类型
                     * @return AsyncType 异步操作类型
                     * 
                     */
                    std::string GetAsyncType() const;

                    /**
                     * 设置异步操作类型
                     * @param _asyncType 异步操作类型
                     * 
                     */
                    void SetAsyncType(const std::string& _asyncType);

                    /**
                     * 判断参数 AsyncType 是否已赋值
                     * @return AsyncType 是否已赋值
                     * 
                     */
                    bool AsyncTypeHasBeenSet() const;

                    /**
                     * 获取异步操作状态：初始状态: INIT; 运行中: RUNNING; 成功: SUCCESS; 失败: FAIL; 部分成功: PART_SUCCESS
                     * @return Status 异步操作状态：初始状态: INIT; 运行中: RUNNING; 成功: SUCCESS; 失败: FAIL; 部分成功: PART_SUCCESS
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置异步操作状态：初始状态: INIT; 运行中: RUNNING; 成功: SUCCESS; 失败: FAIL; 部分成功: PART_SUCCESS
                     * @param _status 异步操作状态：初始状态: INIT; 运行中: RUNNING; 成功: SUCCESS; 失败: FAIL; 部分成功: PART_SUCCESS
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
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorDesc 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorDesc 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorDesc(const std::string& _errorDesc);

                    /**
                     * 判断参数 ErrorDesc 是否已赋值
                     * @return ErrorDesc 是否已赋值
                     * 
                     */
                    bool ErrorDescHasBeenSet() const;

                    /**
                     * 获取子操作总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalSubProcessCount 子操作总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalSubProcessCount() const;

                    /**
                     * 设置子操作总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalSubProcessCount 子操作总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalSubProcessCount(const uint64_t& _totalSubProcessCount);

                    /**
                     * 判断参数 TotalSubProcessCount 是否已赋值
                     * @return TotalSubProcessCount 是否已赋值
                     * 
                     */
                    bool TotalSubProcessCountHasBeenSet() const;

                    /**
                     * 获取已完成的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishedSubProcessCount 已完成的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFinishedSubProcessCount() const;

                    /**
                     * 设置已完成的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishedSubProcessCount 已完成的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinishedSubProcessCount(const uint64_t& _finishedSubProcessCount);

                    /**
                     * 判断参数 FinishedSubProcessCount 是否已赋值
                     * @return FinishedSubProcessCount 是否已赋值
                     * 
                     */
                    bool FinishedSubProcessCountHasBeenSet() const;

                    /**
                     * 获取已成功的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessSubProcessCount 已成功的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessSubProcessCount() const;

                    /**
                     * 设置已成功的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successSubProcessCount 已成功的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessSubProcessCount(const uint64_t& _successSubProcessCount);

                    /**
                     * 判断参数 SuccessSubProcessCount 是否已赋值
                     * @return SuccessSubProcessCount 是否已赋值
                     * 
                     */
                    bool SuccessSubProcessCountHasBeenSet() const;

                    /**
                     * 获取操作人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserUin 操作人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置操作人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserUin 操作人id
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
                     * 获取操作创建时间
                     * @return CreateTime 操作创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置操作创建时间
                     * @param _createTime 操作创建时间
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 操作id
                     */
                    std::string m_asyncId;
                    bool m_asyncIdHasBeenSet;

                    /**
                     * 异步操作类型
                     */
                    std::string m_asyncType;
                    bool m_asyncTypeHasBeenSet;

                    /**
                     * 异步操作状态：初始状态: INIT; 运行中: RUNNING; 成功: SUCCESS; 失败: FAIL; 部分成功: PART_SUCCESS
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * 子操作总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalSubProcessCount;
                    bool m_totalSubProcessCountHasBeenSet;

                    /**
                     * 已完成的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_finishedSubProcessCount;
                    bool m_finishedSubProcessCountHasBeenSet;

                    /**
                     * 已成功的子操作个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successSubProcessCount;
                    bool m_successSubProcessCountHasBeenSet;

                    /**
                     * 操作人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 操作创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSASYNCJOBDETAIL_H_
