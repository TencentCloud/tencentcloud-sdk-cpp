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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPCOSINFOREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPCOSINFOREQUEST_H_

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
                * DescribeCloudAppCosInfo请求参数结构体
                */
                class DescribeCloudAppCosInfoRequest : public AbstractModel
                {
                public:
                    DescribeCloudAppCosInfoRequest();
                    ~DescribeCloudAppCosInfoRequest() = default;
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
                     * 获取部署类型
                     * @return DeployType 部署类型
                     * 
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置部署类型
                     * @param _deployType 部署类型
                     * 
                     */
                    void SetDeployType(const std::string& _deployType);

                    /**
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     * 
                     */
                    bool DeployTypeHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return UnixTimestamp 时间戳
                     * 
                     */
                    std::string GetUnixTimestamp() const;

                    /**
                     * 设置时间戳
                     * @param _unixTimestamp 时间戳
                     * 
                     */
                    void SetUnixTimestamp(const std::string& _unixTimestamp);

                    /**
                     * 判断参数 UnixTimestamp 是否已赋值
                     * @return UnixTimestamp 是否已赋值
                     * 
                     */
                    bool UnixTimestampHasBeenSet() const;

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

                    /**
                     * 获取是否需要下载
                     * @return NeedDownload 是否需要下载
                     * 
                     */
                    bool GetNeedDownload() const;

                    /**
                     * 设置是否需要下载
                     * @param _needDownload 是否需要下载
                     * 
                     */
                    void SetNeedDownload(const bool& _needDownload);

                    /**
                     * 判断参数 NeedDownload 是否已赋值
                     * @return NeedDownload 是否已赋值
                     * 
                     */
                    bool NeedDownloadHasBeenSet() const;

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
                     * 部署类型
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                    /**
                     * 时间戳
                     */
                    std::string m_unixTimestamp;
                    bool m_unixTimestampHasBeenSet;

                    /**
                     * 文件后缀
                     */
                    std::string m_suffix;
                    bool m_suffixHasBeenSet;

                    /**
                     * 是否需要下载
                     */
                    bool m_needDownload;
                    bool m_needDownloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPCOSINFOREQUEST_H_
