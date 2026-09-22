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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ENTITYINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ENTITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/EntityAttribute.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/RelatedTopicItem.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 实体详情
                */
                class EntityInfo : public AbstractModel
                {
                public:
                    EntityInfo();
                    ~EntityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实体 ID</p>
                     * @return EntityId <p>实体 ID</p>
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置<p>实体 ID</p>
                     * @param _entityId <p>实体 ID</p>
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取<p>实体所属域</p><p>默认值：实体所在域，如TC，App</p>
                     * @return Domain <p>实体所属域</p><p>默认值：实体所在域，如TC，App</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>实体所属域</p><p>默认值：实体所在域，如TC，App</p>
                     * @param _domain <p>实体所属域</p><p>默认值：实体所在域，如TC，App</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>实体所属产品</p><p>参数格式：实体归属的产品，如CDB, Application</p>
                     * @return Product <p>实体所属产品</p><p>参数格式：实体归属的产品，如CDB, Application</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>实体所属产品</p><p>参数格式：实体归属的产品，如CDB, Application</p>
                     * @param _product <p>实体所属产品</p><p>参数格式：实体归属的产品，如CDB, Application</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>实体名称</p>
                     * @return EntityName <p>实体名称</p>
                     * 
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置<p>实体名称</p>
                     * @param _entityName <p>实体名称</p>
                     * 
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     * 
                     */
                    bool EntityNameHasBeenSet() const;

                    /**
                     * 获取<p>实体类名称</p><p>参数格式：TC.CDB.Instance</p>
                     * @return EntityClassName <p>实体类名称</p><p>参数格式：TC.CDB.Instance</p>
                     * 
                     */
                    std::string GetEntityClassName() const;

                    /**
                     * 设置<p>实体类名称</p><p>参数格式：TC.CDB.Instance</p>
                     * @param _entityClassName <p>实体类名称</p><p>参数格式：TC.CDB.Instance</p>
                     * 
                     */
                    void SetEntityClassName(const std::string& _entityClassName);

                    /**
                     * 判断参数 EntityClassName 是否已赋值
                     * @return EntityClassName 是否已赋值
                     * 
                     */
                    bool EntityClassNameHasBeenSet() const;

                    /**
                     * 获取<p>动态属性（base 在前 + 字典序）</p>
                     * @return Attributes <p>动态属性（base 在前 + 字典序）</p>
                     * 
                     */
                    std::vector<EntityAttribute> GetAttributes() const;

                    /**
                     * 设置<p>动态属性（base 在前 + 字典序）</p>
                     * @param _attributes <p>动态属性（base 在前 + 字典序）</p>
                     * 
                     */
                    void SetAttributes(const std::vector<EntityAttribute>& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>关联日志主题</p>
                     * @return RelatedLogTopics <p>关联日志主题</p>
                     * 
                     */
                    std::vector<RelatedTopicItem> GetRelatedLogTopics() const;

                    /**
                     * 设置<p>关联日志主题</p>
                     * @param _relatedLogTopics <p>关联日志主题</p>
                     * 
                     */
                    void SetRelatedLogTopics(const std::vector<RelatedTopicItem>& _relatedLogTopics);

                    /**
                     * 判断参数 RelatedLogTopics 是否已赋值
                     * @return RelatedLogTopics 是否已赋值
                     * 
                     */
                    bool RelatedLogTopicsHasBeenSet() const;

                    /**
                     * 获取<p> 实体资源ID </p>
                     * @return ResourceId <p> 实体资源ID </p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p> 实体资源ID </p>
                     * @param _resourceId <p> 实体资源ID </p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>实体 ID</p>
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * <p>实体所属域</p><p>默认值：实体所在域，如TC，App</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>实体所属产品</p><p>参数格式：实体归属的产品，如CDB, Application</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>实体名称</p>
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * <p>实体类名称</p><p>参数格式：TC.CDB.Instance</p>
                     */
                    std::string m_entityClassName;
                    bool m_entityClassNameHasBeenSet;

                    /**
                     * <p>动态属性（base 在前 + 字典序）</p>
                     */
                    std::vector<EntityAttribute> m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>关联日志主题</p>
                     */
                    std::vector<RelatedTopicItem> m_relatedLogTopics;
                    bool m_relatedLogTopicsHasBeenSet;

                    /**
                     * <p> 实体资源ID </p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ENTITYINFO_H_
