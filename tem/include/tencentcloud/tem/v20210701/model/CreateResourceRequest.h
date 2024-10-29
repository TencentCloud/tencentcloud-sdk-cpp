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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CREATERESOURCEREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CREATERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * CreateResource请求参数结构体
                */
                class CreateResourceRequest : public AbstractModel
                {
                public:
                    CreateResourceRequest();
                    ~CreateResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 Id
                     * @return EnvironmentId 环境 Id
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境 Id
                     * @param _environmentId 环境 Id
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取资源类型，目前支持文件系统：CFS；注册中心：TSE_SRE
                     * @return ResourceType 资源类型，目前支持文件系统：CFS；注册中心：TSE_SRE
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型，目前支持文件系统：CFS；注册中心：TSE_SRE
                     * @param _resourceType 资源类型，目前支持文件系统：CFS；注册中心：TSE_SRE
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源 Id
                     * @return ResourceId 资源 Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源 Id
                     * @param _resourceId 资源 Id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取来源渠道
                     * @return SourceChannel 来源渠道
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道
                     * @param _sourceChannel 来源渠道
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                    /**
                     * 获取资源来源，目前支持：existing，已有资源；creating，自动创建
                     * @return ResourceFrom 资源来源，目前支持：existing，已有资源；creating，自动创建
                     * 
                     */
                    std::string GetResourceFrom() const;

                    /**
                     * 设置资源来源，目前支持：existing，已有资源；creating，自动创建
                     * @param _resourceFrom 资源来源，目前支持：existing，已有资源；creating，自动创建
                     * 
                     */
                    void SetResourceFrom(const std::string& _resourceFrom);

                    /**
                     * 判断参数 ResourceFrom 是否已赋值
                     * @return ResourceFrom 是否已赋值
                     * 
                     */
                    bool ResourceFromHasBeenSet() const;

                    /**
                     * 获取设置 resource 的额外配置
                     * @return ResourceConfig 设置 resource 的额外配置
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 设置设置 resource 的额外配置
                     * @param _resourceConfig 设置 resource 的额外配置
                     * 
                     */
                    void SetResourceConfig(const std::string& _resourceConfig);

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                private:

                    /**
                     * 环境 Id
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 资源类型，目前支持文件系统：CFS；注册中心：TSE_SRE
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源 Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                    /**
                     * 资源来源，目前支持：existing，已有资源；creating，自动创建
                     */
                    std::string m_resourceFrom;
                    bool m_resourceFromHasBeenSet;

                    /**
                     * 设置 resource 的额外配置
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CREATERESOURCEREQUEST_H_
