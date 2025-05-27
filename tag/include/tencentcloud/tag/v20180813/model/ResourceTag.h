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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCETAG_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/Tag.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * 资源标签
                */
                class ResourceTag : public AbstractModel
                {
                public:
                    ResourceTag();
                    ~ResourceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源所在地域
                     * @return ResourceRegion 资源所在地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在地域
                     * @param _resourceRegion 资源所在地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取业务类型
                     * @return ServiceType 业务类型
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置业务类型
                     * @param _serviceType 业务类型
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取资源前缀
                     * @return ResourcePrefix 资源前缀
                     * 
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置资源前缀
                     * @param _resourcePrefix 资源前缀
                     * 
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     * 
                     */
                    bool ResourcePrefixHasBeenSet() const;

                    /**
                     * 获取资源唯一标记
                     * @return ResourceId 资源唯一标记
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源唯一标记
                     * @param _resourceId 资源唯一标记
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
                     * 获取资源标签
                     * @return Tags 资源标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置资源标签
                     * @param _tags 资源标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 资源所在地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 业务类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 资源前缀
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * 资源唯一标记
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_RESOURCETAG_H_
