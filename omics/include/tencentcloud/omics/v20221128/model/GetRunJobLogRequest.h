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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNJOBLOGREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNJOBLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * GetRunJobLog请求参数结构体
                */
                class GetRunJobLogRequest : public AbstractModel
                {
                public:
                    GetRunJobLogRequest();
                    ~GetRunJobLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务Uuid。</p>
                     * @return RunUuid <p>任务Uuid。</p>
                     * 
                     */
                    std::string GetRunUuid() const;

                    /**
                     * 设置<p>任务Uuid。</p>
                     * @param _runUuid <p>任务Uuid。</p>
                     * 
                     */
                    void SetRunUuid(const std::string& _runUuid);

                    /**
                     * 判断参数 RunUuid 是否已赋值
                     * @return RunUuid 是否已赋值
                     * 
                     */
                    bool RunUuidHasBeenSet() const;

                    /**
                     * 获取<p>子任务id</p>
                     * @return JobId <p>子任务id</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>子任务id</p>
                     * @param _jobId <p>子任务id</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>日志类型</p><p>枚举值：</p><ul><li>stdout： 标准输出</li><li>stderr： 标准错误</li></ul>
                     * @return LogType <p>日志类型</p><p>枚举值：</p><ul><li>stdout： 标准输出</li><li>stderr： 标准错误</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型</p><p>枚举值：</p><ul><li>stdout： 标准输出</li><li>stderr： 标准错误</li></ul>
                     * @param _logType <p>日志类型</p><p>枚举值：</p><ul><li>stdout： 标准输出</li><li>stderr： 标准错误</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID。<br>（不填使用指定地域下的默认项目）</p>
                     * @return ProjectId <p>项目ID。<br>（不填使用指定地域下的默认项目）</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目ID。<br>（不填使用指定地域下的默认项目）</p>
                     * @param _projectId <p>项目ID。<br>（不填使用指定地域下的默认项目）</p>
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
                     * 获取<p>子任务路径，无子任务可填空</p>
                     * @return Path <p>子任务路径，无子任务可填空</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>子任务路径，无子任务可填空</p>
                     * @param _path <p>子任务路径，无子任务可填空</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * <p>任务Uuid。</p>
                     */
                    std::string m_runUuid;
                    bool m_runUuidHasBeenSet;

                    /**
                     * <p>子任务id</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>日志类型</p><p>枚举值：</p><ul><li>stdout： 标准输出</li><li>stderr： 标准错误</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>项目ID。<br>（不填使用指定地域下的默认项目）</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>子任务路径，无子任务可填空</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNJOBLOGREQUEST_H_
