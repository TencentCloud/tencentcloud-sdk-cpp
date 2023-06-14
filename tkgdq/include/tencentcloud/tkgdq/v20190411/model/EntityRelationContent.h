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

#ifndef TENCENTCLOUD_TKGDQ_V20190411_MODEL_ENTITYRELATIONCONTENT_H_
#define TENCENTCLOUD_TKGDQ_V20190411_MODEL_ENTITYRELATIONCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tkgdq/v20190411/model/EntityRelationObject.h>
#include <tencentcloud/tkgdq/v20190411/model/EntityRelationSubject.h>


namespace TencentCloud
{
    namespace Tkgdq
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * 返回的实体关系查询结果详细内容
                */
                class EntityRelationContent : public AbstractModel
                {
                public:
                    EntityRelationContent();
                    ~EntityRelationContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实体关系查询返回关系的object
                     * @return Object 实体关系查询返回关系的object
                     * 
                     */
                    std::vector<EntityRelationObject> GetObject() const;

                    /**
                     * 设置实体关系查询返回关系的object
                     * @param _object 实体关系查询返回关系的object
                     * 
                     */
                    void SetObject(const std::vector<EntityRelationObject>& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取实体关系查询返回关系的subject
                     * @return Subject 实体关系查询返回关系的subject
                     * 
                     */
                    std::vector<EntityRelationSubject> GetSubject() const;

                    /**
                     * 设置实体关系查询返回关系的subject
                     * @param _subject 实体关系查询返回关系的subject
                     * 
                     */
                    void SetSubject(const std::vector<EntityRelationSubject>& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取实体关系查询返回的关系名称
                     * @return Relation 实体关系查询返回的关系名称
                     * 
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置实体关系查询返回的关系名称
                     * @param _relation 实体关系查询返回的关系名称
                     * 
                     */
                    void SetRelation(const std::string& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                private:

                    /**
                     * 实体关系查询返回关系的object
                     */
                    std::vector<EntityRelationObject> m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * 实体关系查询返回关系的subject
                     */
                    std::vector<EntityRelationSubject> m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * 实体关系查询返回的关系名称
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKGDQ_V20190411_MODEL_ENTITYRELATIONCONTENT_H_
