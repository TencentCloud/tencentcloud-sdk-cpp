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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMSAMPLECONFIGREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMSAMPLECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/APMKVItem.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateApmSampleConfig请求参数结构体
                */
                class CreateApmSampleConfigRequest : public AbstractModel
                {
                public:
                    CreateApmSampleConfigRequest();
                    ~CreateApmSampleConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务系统ID
                     * @return InstanceId 业务系统ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统ID
                     * @param _instanceId 业务系统ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取采样率
                     * @return SampleRate 采样率
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置采样率
                     * @param _sampleRate 采样率
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取应用名
                     * @return ServiceName 应用名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置应用名
                     * @param _serviceName 应用名
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取采样规则名
                     * @return SampleName 采样规则名
                     * 
                     */
                    std::string GetSampleName() const;

                    /**
                     * 设置采样规则名
                     * @param _sampleName 采样规则名
                     * 
                     */
                    void SetSampleName(const std::string& _sampleName);

                    /**
                     * 判断参数 SampleName 是否已赋值
                     * @return SampleName 是否已赋值
                     * 
                     */
                    bool SampleNameHasBeenSet() const;

                    /**
                     * 获取采样Tags
                     * @return Tags 采样Tags
                     * 
                     */
                    std::vector<APMKVItem> GetTags() const;

                    /**
                     * 设置采样Tags
                     * @param _tags 采样Tags
                     * 
                     */
                    void SetTags(const std::vector<APMKVItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取接口名
                     * @return OperationName 接口名
                     * 
                     */
                    std::string GetOperationName() const;

                    /**
                     * 设置接口名
                     * @param _operationName 接口名
                     * 
                     */
                    void SetOperationName(const std::string& _operationName);

                    /**
                     * 判断参数 OperationName 是否已赋值
                     * @return OperationName 是否已赋值
                     * 
                     */
                    bool OperationNameHasBeenSet() const;

                    /**
                     * 获取0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
                     * @return OperationType 0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
                     * 
                     */
                    int64_t GetOperationType() const;

                    /**
                     * 设置0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
                     * @param _operationType 0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
                     * 
                     */
                    void SetOperationType(const int64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                private:

                    /**
                     * 业务系统ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 采样率
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 应用名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 采样规则名
                     */
                    std::string m_sampleName;
                    bool m_sampleNameHasBeenSet;

                    /**
                     * 采样Tags
                     */
                    std::vector<APMKVItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 接口名
                     */
                    std::string m_operationName;
                    bool m_operationNameHasBeenSet;

                    /**
                     * 0=精确匹配（默认）；1=前缀匹配；2=后缀匹配
                     */
                    int64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMSAMPLECONFIGREQUEST_H_
