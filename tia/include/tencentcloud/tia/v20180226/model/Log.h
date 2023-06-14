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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_LOG_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_LOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * 日志
                */
                class Log : public AbstractModel
                {
                public:
                    Log();
                    ~Log() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器名
                     * @return ContainerName 容器名
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名
                     * @param _containerName 容器名
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取日志内容
                     * @return Log 日志内容
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置日志内容
                     * @param _log 日志内容
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取空间名
                     * @return Namespace 空间名
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置空间名
                     * @param _namespace 空间名
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Pod Id
                     * @return PodId Pod Id
                     * 
                     */
                    std::string GetPodId() const;

                    /**
                     * 设置Pod Id
                     * @param _podId Pod Id
                     * 
                     */
                    void SetPodId(const std::string& _podId);

                    /**
                     * 判断参数 PodId 是否已赋值
                     * @return PodId 是否已赋值
                     * 
                     */
                    bool PodIdHasBeenSet() const;

                    /**
                     * 获取Pod名
                     * @return PodName Pod名
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod名
                     * @param _podName Pod名
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取日志日期，格式为“2018-07-02T09:10:04.916553368Z”
                     * @return Time 日志日期，格式为“2018-07-02T09:10:04.916553368Z”
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置日志日期，格式为“2018-07-02T09:10:04.916553368Z”
                     * @param _time 日志日期，格式为“2018-07-02T09:10:04.916553368Z”
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * 容器名
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 日志内容
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 空间名
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Pod Id
                     */
                    std::string m_podId;
                    bool m_podIdHasBeenSet;

                    /**
                     * Pod名
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 日志日期，格式为“2018-07-02T09:10:04.916553368Z”
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_LOG_H_
