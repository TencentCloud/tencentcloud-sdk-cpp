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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEBUILDSERVICEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEBUILDSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseBuildService请求参数结构体
                */
                class DescribeCloudBaseBuildServiceRequest : public AbstractModel
                {
                public:
                    DescribeCloudBaseBuildServiceRequest();
                    ~DescribeCloudBaseBuildServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return ServiceName 服务名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名
                     * @param _serviceName 服务名
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
                     * 获取build类型,枚举值有: cloudbaserun, framework-ci
                     * @return CIBusiness build类型,枚举值有: cloudbaserun, framework-ci
                     * 
                     */
                    std::string GetCIBusiness() const;

                    /**
                     * 设置build类型,枚举值有: cloudbaserun, framework-ci
                     * @param _cIBusiness build类型,枚举值有: cloudbaserun, framework-ci
                     * 
                     */
                    void SetCIBusiness(const std::string& _cIBusiness);

                    /**
                     * 判断参数 CIBusiness 是否已赋值
                     * @return CIBusiness 是否已赋值
                     * 
                     */
                    bool CIBusinessHasBeenSet() const;

                    /**
                     * 获取服务版本
                     * @return ServiceVersion 服务版本
                     * 
                     */
                    std::string GetServiceVersion() const;

                    /**
                     * 设置服务版本
                     * @param _serviceVersion 服务版本
                     * 
                     */
                    void SetServiceVersion(const std::string& _serviceVersion);

                    /**
                     * 判断参数 ServiceVersion 是否已赋值
                     * @return ServiceVersion 是否已赋值
                     * 
                     */
                    bool ServiceVersionHasBeenSet() const;

                    /**
                     * 获取文件后缀
                     * @return Suffix 文件后缀
                     * 
                     */
                    std::string GetSuffix() const;

                    /**
                     * 设置文件后缀
                     * @param _suffix 文件后缀
                     * 
                     */
                    void SetSuffix(const std::string& _suffix);

                    /**
                     * 判断参数 Suffix 是否已赋值
                     * @return Suffix 是否已赋值
                     * 
                     */
                    bool SuffixHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * build类型,枚举值有: cloudbaserun, framework-ci
                     */
                    std::string m_cIBusiness;
                    bool m_cIBusinessHasBeenSet;

                    /**
                     * 服务版本
                     */
                    std::string m_serviceVersion;
                    bool m_serviceVersionHasBeenSet;

                    /**
                     * 文件后缀
                     */
                    std::string m_suffix;
                    bool m_suffixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEBUILDSERVICEREQUEST_H_
