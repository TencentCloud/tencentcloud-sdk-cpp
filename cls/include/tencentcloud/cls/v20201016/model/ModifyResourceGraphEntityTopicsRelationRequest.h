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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRESOURCEGRAPHENTITYTOPICSRELATIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRESOURCEGRAPHENTITYTOPICSRELATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ResourceGraphEntityRelatedTopic.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyResourceGraphEntityTopicsRelation请求参数结构体
                */
                class ModifyResourceGraphEntityTopicsRelationRequest : public AbstractModel
                {
                public:
                    ModifyResourceGraphEntityTopicsRelationRequest();
                    ~ModifyResourceGraphEntityTopicsRelationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源图谱id</p>
                     * @return ResourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    std::string GetResourceGraphId() const;

                    /**
                     * 设置<p>资源图谱id</p>
                     * @param _resourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    void SetResourceGraphId(const std::string& _resourceGraphId);

                    /**
                     * 判断参数 ResourceGraphId 是否已赋值
                     * @return ResourceGraphId 是否已赋值
                     * 
                     */
                    bool ResourceGraphIdHasBeenSet() const;

                    /**
                     * 获取<p>实体id</p><p>仅支持手动关联tke以下实体：node、pod、deployment、statefulset、daemonset</p>
                     * @return EntityId <p>实体id</p><p>仅支持手动关联tke以下实体：node、pod、deployment、statefulset、daemonset</p>
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置<p>实体id</p><p>仅支持手动关联tke以下实体：node、pod、deployment、statefulset、daemonset</p>
                     * @param _entityId <p>实体id</p><p>仅支持手动关联tke以下实体：node、pod、deployment、statefulset、daemonset</p>
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
                     * 获取<p>资源图谱实体关联的topic</p>
                     * @return TopicInfos <p>资源图谱实体关联的topic</p>
                     * 
                     */
                    std::vector<ResourceGraphEntityRelatedTopic> GetTopicInfos() const;

                    /**
                     * 设置<p>资源图谱实体关联的topic</p>
                     * @param _topicInfos <p>资源图谱实体关联的topic</p>
                     * 
                     */
                    void SetTopicInfos(const std::vector<ResourceGraphEntityRelatedTopic>& _topicInfos);

                    /**
                     * 判断参数 TopicInfos 是否已赋值
                     * @return TopicInfos 是否已赋值
                     * 
                     */
                    bool TopicInfosHasBeenSet() const;

                private:

                    /**
                     * <p>资源图谱id</p>
                     */
                    std::string m_resourceGraphId;
                    bool m_resourceGraphIdHasBeenSet;

                    /**
                     * <p>实体id</p><p>仅支持手动关联tke以下实体：node、pod、deployment、statefulset、daemonset</p>
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * <p>资源图谱实体关联的topic</p>
                     */
                    std::vector<ResourceGraphEntityRelatedTopic> m_topicInfos;
                    bool m_topicInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRESOURCEGRAPHENTITYTOPICSRELATIONREQUEST_H_
