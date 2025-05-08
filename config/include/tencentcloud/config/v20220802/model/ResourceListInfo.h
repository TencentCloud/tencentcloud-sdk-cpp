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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_RESOURCELISTINFO_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_RESOURCELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 资源列列表信息
                */
                class ResourceListInfo : public AbstractModel
                {
                public:
                    ResourceListInfo();
                    ~ResourceListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param _resourceType 资源类型
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
                     * 获取资源名称
                     * @return ResourceName 资源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
                     * @param _resourceName 资源名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
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
                     * 获取地域
                     * @return ResourceRegion 地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置地域
                     * @param _resourceRegion 地域
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
                     * 获取资源状态
                     * @return ResourceStatus 资源状态
                     * 
                     */
                    std::string GetResourceStatus() const;

                    /**
                     * 设置资源状态
                     * @param _resourceStatus 资源状态
                     * 
                     */
                    void SetResourceStatus(const std::string& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取1 :已删除 2：未删除
                     * @return ResourceDelete 1 :已删除 2：未删除
                     * 
                     */
                    uint64_t GetResourceDelete() const;

                    /**
                     * 设置1 :已删除 2：未删除
                     * @param _resourceDelete 1 :已删除 2：未删除
                     * 
                     */
                    void SetResourceDelete(const uint64_t& _resourceDelete);

                    /**
                     * 判断参数 ResourceDelete 是否已赋值
                     * @return ResourceDelete 是否已赋值
                     * 
                     */
                    bool ResourceDeleteHasBeenSet() const;

                    /**
                     * 获取资源创建时间
                     * @return ResourceCreateTime 资源创建时间
                     * 
                     */
                    std::string GetResourceCreateTime() const;

                    /**
                     * 设置资源创建时间
                     * @param _resourceCreateTime 资源创建时间
                     * 
                     */
                    void SetResourceCreateTime(const std::string& _resourceCreateTime);

                    /**
                     * 判断参数 ResourceCreateTime 是否已赋值
                     * @return ResourceCreateTime 是否已赋值
                     * 
                     */
                    bool ResourceCreateTimeHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Tags 标签信息
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签信息
                     * @param _tags 标签信息
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return ResourceZone 可用区
                     * 
                     */
                    std::string GetResourceZone() const;

                    /**
                     * 设置可用区
                     * @param _resourceZone 可用区
                     * 
                     */
                    void SetResourceZone(const std::string& _resourceZone);

                    /**
                     * 判断参数 ResourceZone 是否已赋值
                     * @return ResourceZone 是否已赋值
                     * 
                     */
                    bool ResourceZoneHasBeenSet() const;

                    /**
                     * 获取合规状态
                     * @return ComplianceResult 合规状态
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置合规状态
                     * @param _complianceResult 合规状态
                     * 
                     */
                    void SetComplianceResult(const std::string& _complianceResult);

                    /**
                     * 判断参数 ComplianceResult 是否已赋值
                     * @return ComplianceResult 是否已赋值
                     * 
                     */
                    bool ComplianceResultHasBeenSet() const;

                private:

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源状态
                     */
                    std::string m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * 1 :已删除 2：未删除
                     */
                    uint64_t m_resourceDelete;
                    bool m_resourceDeleteHasBeenSet;

                    /**
                     * 资源创建时间
                     */
                    std::string m_resourceCreateTime;
                    bool m_resourceCreateTimeHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_resourceZone;
                    bool m_resourceZoneHasBeenSet;

                    /**
                     * 合规状态
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_RESOURCELISTINFO_H_
