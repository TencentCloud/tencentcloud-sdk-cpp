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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBCONFIGREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ResourceRef.h>
#include <tencentcloud/oceanus/v20190422/model/Property.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CreateJobConfig请求参数结构体
                */
                class CreateJobConfigRequest : public AbstractModel
                {
                public:
                    CreateJobConfigRequest();
                    ~CreateJobConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业Id
                     * @return JobId 作业Id
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业Id
                     * @param JobId 作业Id
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取主类
                     * @return EntrypointClass 主类
                     */
                    std::string GetEntrypointClass() const;

                    /**
                     * 设置主类
                     * @param EntrypointClass 主类
                     */
                    void SetEntrypointClass(const std::string& _entrypointClass);

                    /**
                     * 判断参数 EntrypointClass 是否已赋值
                     * @return EntrypointClass 是否已赋值
                     */
                    bool EntrypointClassHasBeenSet() const;

                    /**
                     * 获取主类入参
                     * @return ProgramArgs 主类入参
                     */
                    std::string GetProgramArgs() const;

                    /**
                     * 设置主类入参
                     * @param ProgramArgs 主类入参
                     */
                    void SetProgramArgs(const std::string& _programArgs);

                    /**
                     * 判断参数 ProgramArgs 是否已赋值
                     * @return ProgramArgs 是否已赋值
                     */
                    bool ProgramArgsHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取资源引用数组
                     * @return ResourceRefs 资源引用数组
                     */
                    std::vector<ResourceRef> GetResourceRefs() const;

                    /**
                     * 设置资源引用数组
                     * @param ResourceRefs 资源引用数组
                     */
                    void SetResourceRefs(const std::vector<ResourceRef>& _resourceRefs);

                    /**
                     * 判断参数 ResourceRefs 是否已赋值
                     * @return ResourceRefs 是否已赋值
                     */
                    bool ResourceRefsHasBeenSet() const;

                    /**
                     * 获取作业默认并行度
                     * @return DefaultParallelism 作业默认并行度
                     */
                    uint64_t GetDefaultParallelism() const;

                    /**
                     * 设置作业默认并行度
                     * @param DefaultParallelism 作业默认并行度
                     */
                    void SetDefaultParallelism(const uint64_t& _defaultParallelism);

                    /**
                     * 判断参数 DefaultParallelism 是否已赋值
                     * @return DefaultParallelism 是否已赋值
                     */
                    bool DefaultParallelismHasBeenSet() const;

                    /**
                     * 获取系统参数
                     * @return Properties 系统参数
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置系统参数
                     * @param Properties 系统参数
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取1: 作业配置达到上限之后，自动删除可删除的最早版本
                     * @return AutoDelete 1: 作业配置达到上限之后，自动删除可删除的最早版本
                     */
                    int64_t GetAutoDelete() const;

                    /**
                     * 设置1: 作业配置达到上限之后，自动删除可删除的最早版本
                     * @param AutoDelete 1: 作业配置达到上限之后，自动删除可删除的最早版本
                     */
                    void SetAutoDelete(const int64_t& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取作业使用的 COS 存储桶名
                     * @return COSBucket 作业使用的 COS 存储桶名
                     */
                    std::string GetCOSBucket() const;

                    /**
                     * 设置作业使用的 COS 存储桶名
                     * @param COSBucket 作业使用的 COS 存储桶名
                     */
                    void SetCOSBucket(const std::string& _cOSBucket);

                    /**
                     * 判断参数 COSBucket 是否已赋值
                     * @return COSBucket 是否已赋值
                     */
                    bool COSBucketHasBeenSet() const;

                    /**
                     * 获取是否采集作业日志
                     * @return LogCollect 是否采集作业日志
                     */
                    bool GetLogCollect() const;

                    /**
                     * 设置是否采集作业日志
                     * @param LogCollect 是否采集作业日志
                     */
                    void SetLogCollect(const bool& _logCollect);

                    /**
                     * 判断参数 LogCollect 是否已赋值
                     * @return LogCollect 是否已赋值
                     */
                    bool LogCollectHasBeenSet() const;

                    /**
                     * 获取JobManager规格
                     * @return JobManagerSpec JobManager规格
                     */
                    double GetJobManagerSpec() const;

                    /**
                     * 设置JobManager规格
                     * @param JobManagerSpec JobManager规格
                     */
                    void SetJobManagerSpec(const double& _jobManagerSpec);

                    /**
                     * 判断参数 JobManagerSpec 是否已赋值
                     * @return JobManagerSpec 是否已赋值
                     */
                    bool JobManagerSpecHasBeenSet() const;

                    /**
                     * 获取TaskManager规格
                     * @return TaskManagerSpec TaskManager规格
                     */
                    double GetTaskManagerSpec() const;

                    /**
                     * 设置TaskManager规格
                     * @param TaskManagerSpec TaskManager规格
                     */
                    void SetTaskManagerSpec(const double& _taskManagerSpec);

                    /**
                     * 判断参数 TaskManagerSpec 是否已赋值
                     * @return TaskManagerSpec 是否已赋值
                     */
                    bool TaskManagerSpecHasBeenSet() const;

                private:

                    /**
                     * 作业Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 主类
                     */
                    std::string m_entrypointClass;
                    bool m_entrypointClassHasBeenSet;

                    /**
                     * 主类入参
                     */
                    std::string m_programArgs;
                    bool m_programArgsHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 资源引用数组
                     */
                    std::vector<ResourceRef> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * 作业默认并行度
                     */
                    uint64_t m_defaultParallelism;
                    bool m_defaultParallelismHasBeenSet;

                    /**
                     * 系统参数
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 1: 作业配置达到上限之后，自动删除可删除的最早版本
                     */
                    int64_t m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 作业使用的 COS 存储桶名
                     */
                    std::string m_cOSBucket;
                    bool m_cOSBucketHasBeenSet;

                    /**
                     * 是否采集作业日志
                     */
                    bool m_logCollect;
                    bool m_logCollectHasBeenSet;

                    /**
                     * JobManager规格
                     */
                    double m_jobManagerSpec;
                    bool m_jobManagerSpecHasBeenSet;

                    /**
                     * TaskManager规格
                     */
                    double m_taskManagerSpec;
                    bool m_taskManagerSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEJOBCONFIGREQUEST_H_
