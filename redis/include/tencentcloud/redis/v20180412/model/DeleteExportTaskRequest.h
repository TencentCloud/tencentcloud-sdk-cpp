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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEEXPORTTASKREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEEXPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DeleteExportTask请求参数结构体
                */
                class DeleteExportTaskRequest : public AbstractModel
                {
                public:
                    DeleteExportTaskRequest();
                    ~DeleteExportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定删除的日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @return LogType <p>指定删除的日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>指定删除的日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @param _logType <p>指定删除的日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
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
                     * 获取<p>指定删除日志的文件名。</p>
                     * @return FileName <p>指定删除日志的文件名。</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>指定删除日志的文件名。</p>
                     * @param _fileName <p>指定删除日志的文件名。</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>指定删除的日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>指定删除日志的文件名。</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEEXPORTTASKREQUEST_H_
