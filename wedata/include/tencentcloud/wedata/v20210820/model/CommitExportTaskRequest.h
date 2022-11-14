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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITEXPORTTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITEXPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CommitExportTask请求参数结构体
                */
                class CommitExportTaskRequest : public AbstractModel
                {
                public:
                    CommitExportTaskRequest();
                    ~CommitExportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param ProjectId 项目id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取规则执行Id
                     * @return RuleExecId 规则执行Id
                     */
                    uint64_t GetRuleExecId() const;

                    /**
                     * 设置规则执行Id
                     * @param RuleExecId 规则执行Id
                     */
                    void SetRuleExecId(const uint64_t& _ruleExecId);

                    /**
                     * 判断参数 RuleExecId 是否已赋值
                     * @return RuleExecId 是否已赋值
                     */
                    bool RuleExecIdHasBeenSet() const;

                    /**
                     * 获取导出类型(1.全部,2.触发行,3.通过行)
                     * @return ExportType 导出类型(1.全部,2.触发行,3.通过行)
                     */
                    uint64_t GetExportType() const;

                    /**
                     * 设置导出类型(1.全部,2.触发行,3.通过行)
                     * @param ExportType 导出类型(1.全部,2.触发行,3.通过行)
                     */
                    void SetExportType(const uint64_t& _exportType);

                    /**
                     * 判断参数 ExportType 是否已赋值
                     * @return ExportType 是否已赋值
                     */
                    bool ExportTypeHasBeenSet() const;

                    /**
                     * 获取执行资源组id
                     * @return ExecutorGroupId 执行资源组id
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组id
                     * @param ExecutorGroupId 执行资源组id
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取计算资源队列
                     * @return QueueName 计算资源队列
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置计算资源队列
                     * @param QueueName 计算资源队列
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     */
                    bool QueueNameHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 规则执行Id
                     */
                    uint64_t m_ruleExecId;
                    bool m_ruleExecIdHasBeenSet;

                    /**
                     * 导出类型(1.全部,2.触发行,3.通过行)
                     */
                    uint64_t m_exportType;
                    bool m_exportTypeHasBeenSet;

                    /**
                     * 执行资源组id
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 计算资源队列
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITEXPORTTASKREQUEST_H_
