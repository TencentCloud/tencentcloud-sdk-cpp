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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEDISCOVEREDRESOURCERESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEDISCOVEREDRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Tag.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * DescribeDiscoveredResource返回参数结构体
                */
                class DescribeDiscoveredResourceResponse : public AbstractModel
                {
                public:
                    DescribeDiscoveredResourceResponse();
                    ~DescribeDiscoveredResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源Id
                     * @return ResourceId 资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源名
                     * @return ResourceName 资源名
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源地域
                     * @return ResourceRegion 资源地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取资源可用区
                     * @return ResourceZone 资源可用区
                     * 
                     */
                    std::string GetResourceZone() const;

                    /**
                     * 判断参数 ResourceZone 是否已赋值
                     * @return ResourceZone 是否已赋值
                     * 
                     */
                    bool ResourceZoneHasBeenSet() const;

                    /**
                     * 获取资源配置
                     * @return Configuration 资源配置
                     * 
                     */
                    std::string GetConfiguration() const;

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                    /**
                     * 获取资源创建时间
                     * @return ResourceCreateTime 资源创建时间
                     * 
                     */
                    std::string GetResourceCreateTime() const;

                    /**
                     * 判断参数 ResourceCreateTime 是否已赋值
                     * @return ResourceCreateTime 是否已赋值
                     * 
                     */
                    bool ResourceCreateTimeHasBeenSet() const;

                    /**
                     * 获取资源标签
                     * @return Tags 资源标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取资源更新时间
                     * @return UpdateTime 资源更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源名
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源可用区
                     */
                    std::string m_resourceZone;
                    bool m_resourceZoneHasBeenSet;

                    /**
                     * 资源配置
                     */
                    std::string m_configuration;
                    bool m_configurationHasBeenSet;

                    /**
                     * 资源创建时间
                     */
                    std::string m_resourceCreateTime;
                    bool m_resourceCreateTimeHasBeenSet;

                    /**
                     * 资源标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 资源更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEDISCOVEREDRESOURCERESPONSE_H_
