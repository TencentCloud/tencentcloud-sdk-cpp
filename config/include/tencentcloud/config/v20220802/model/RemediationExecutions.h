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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_REMEDIATIONEXECUTIONS_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_REMEDIATIONEXECUTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 修正记录
                */
                class RemediationExecutions : public AbstractModel
                {
                public:
                    RemediationExecutions();
                    ~RemediationExecutions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修正状态 1：运行中 2：成功 3：失败
                     * @return ExecutionStatus 修正状态 1：运行中 2：成功 3：失败
                     * 
                     */
                    uint64_t GetExecutionStatus() const;

                    /**
                     * 设置修正状态 1：运行中 2：成功 3：失败
                     * @param _executionStatus 修正状态 1：运行中 2：成功 3：失败
                     * 
                     */
                    void SetExecutionStatus(const uint64_t& _executionStatus);

                    /**
                     * 判断参数 ExecutionStatus 是否已赋值
                     * @return ExecutionStatus 是否已赋值
                     * 
                     */
                    bool ExecutionStatusHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ExecutionResourceType 资源类型
                     * 
                     */
                    std::string GetExecutionResourceType() const;

                    /**
                     * 设置资源类型
                     * @param _executionResourceType 资源类型
                     * 
                     */
                    void SetExecutionResourceType(const std::string& _executionResourceType);

                    /**
                     * 判断参数 ExecutionResourceType 是否已赋值
                     * @return ExecutionResourceType 是否已赋值
                     * 
                     */
                    bool ExecutionResourceTypeHasBeenSet() const;

                    /**
                     * 获取修复时间
                     * @return ExecutionCreateDate 修复时间
                     * 
                     */
                    std::string GetExecutionCreateDate() const;

                    /**
                     * 设置修复时间
                     * @param _executionCreateDate 修复时间
                     * 
                     */
                    void SetExecutionCreateDate(const std::string& _executionCreateDate);

                    /**
                     * 判断参数 ExecutionCreateDate 是否已赋值
                     * @return ExecutionCreateDate 是否已赋值
                     * 
                     */
                    bool ExecutionCreateDateHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ExecutionStatusMessage 错误信息
                     * 
                     */
                    std::string GetExecutionStatusMessage() const;

                    /**
                     * 设置错误信息
                     * @param _executionStatusMessage 错误信息
                     * 
                     */
                    void SetExecutionStatusMessage(const std::string& _executionStatusMessage);

                    /**
                     * 判断参数 ExecutionStatusMessage 是否已赋值
                     * @return ExecutionStatusMessage 是否已赋值
                     * 
                     */
                    bool ExecutionStatusMessageHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ExecutionResourceIds 资源ID
                     * 
                     */
                    std::string GetExecutionResourceIds() const;

                    /**
                     * 设置资源ID
                     * @param _executionResourceIds 资源ID
                     * 
                     */
                    void SetExecutionResourceIds(const std::string& _executionResourceIds);

                    /**
                     * 判断参数 ExecutionResourceIds 是否已赋值
                     * @return ExecutionResourceIds 是否已赋值
                     * 
                     */
                    bool ExecutionResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 修正状态 1：运行中 2：成功 3：失败
                     */
                    uint64_t m_executionStatus;
                    bool m_executionStatusHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_executionResourceType;
                    bool m_executionResourceTypeHasBeenSet;

                    /**
                     * 修复时间
                     */
                    std::string m_executionCreateDate;
                    bool m_executionCreateDateHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_executionStatusMessage;
                    bool m_executionStatusMessageHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_executionResourceIds;
                    bool m_executionResourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_REMEDIATIONEXECUTIONS_H_
