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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_RESOURCETAGMAPPING_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_RESOURCETAGMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/TagComplianceDetails.h>
#include <tencentcloud/organization/v20210331/model/Tags.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 资源及关联的标签
                */
                class ResourceTagMapping : public AbstractModel
                {
                public:
                    ResourceTagMapping();
                    ~ResourceTagMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源六段式。腾讯云使用资源六段式描述一个资源。
例如：qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
                     * @return Resource 资源六段式。腾讯云使用资源六段式描述一个资源。
例如：qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置资源六段式。腾讯云使用资源六段式描述一个资源。
例如：qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
                     * @param _resource 资源六段式。腾讯云使用资源六段式描述一个资源。
例如：qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取合规详情。
                     * @return ComplianceDetails 合规详情。
                     * 
                     */
                    TagComplianceDetails GetComplianceDetails() const;

                    /**
                     * 设置合规详情。
                     * @param _complianceDetails 合规详情。
                     * 
                     */
                    void SetComplianceDetails(const TagComplianceDetails& _complianceDetails);

                    /**
                     * 判断参数 ComplianceDetails 是否已赋值
                     * @return ComplianceDetails 是否已赋值
                     * 
                     */
                    bool ComplianceDetailsHasBeenSet() const;

                    /**
                     * 获取资源标签。
                     * @return Tags 资源标签。
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置资源标签。
                     * @param _tags 资源标签。
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 资源六段式。腾讯云使用资源六段式描述一个资源。
例如：qcs::${ServiceType}:${Region}:${Account}:${ResourcePreifx}/${ResourceId}。
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 合规详情。
                     */
                    TagComplianceDetails m_complianceDetails;
                    bool m_complianceDetailsHasBeenSet;

                    /**
                     * 资源标签。
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_RESOURCETAGMAPPING_H_
