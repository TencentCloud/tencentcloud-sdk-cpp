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

#ifndef TENCENTCLOUD_TKGDQ_V20190411_MODEL_ENTITYRELATIONSUBJECT_H_
#define TENCENTCLOUD_TKGDQ_V20190411_MODEL_ENTITYRELATIONSUBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tkgdq
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * 实体关系查询返回Subject
                */
                class EntityRelationSubject : public AbstractModel
                {
                public:
                    EntityRelationSubject();
                    ~EntityRelationSubject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subject对应id
                     * @return Id Subject对应id
                     * 
                     */
                    std::vector<std::string> GetId() const;

                    /**
                     * 设置Subject对应id
                     * @param _id Subject对应id
                     * 
                     */
                    void SetId(const std::vector<std::string>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Subject对应name
                     * @return Name Subject对应name
                     * 
                     */
                    std::vector<std::string> GetName() const;

                    /**
                     * 设置Subject对应name
                     * @param _name Subject对应name
                     * 
                     */
                    void SetName(const std::vector<std::string>& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Subject对应popular
                     * @return Popular Subject对应popular
                     * 
                     */
                    std::vector<int64_t> GetPopular() const;

                    /**
                     * 设置Subject对应popular
                     * @param _popular Subject对应popular
                     * 
                     */
                    void SetPopular(const std::vector<int64_t>& _popular);

                    /**
                     * 判断参数 Popular 是否已赋值
                     * @return Popular 是否已赋值
                     * 
                     */
                    bool PopularHasBeenSet() const;

                private:

                    /**
                     * Subject对应id
                     */
                    std::vector<std::string> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Subject对应name
                     */
                    std::vector<std::string> m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subject对应popular
                     */
                    std::vector<int64_t> m_popular;
                    bool m_popularHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKGDQ_V20190411_MODEL_ENTITYRELATIONSUBJECT_H_
