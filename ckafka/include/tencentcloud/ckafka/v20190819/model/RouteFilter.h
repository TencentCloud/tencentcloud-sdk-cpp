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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTEFILTER_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 路由列表过滤器
                */
                class RouteFilter : public AbstractModel
                {
                public:
                    RouteFilter();
                    ~RouteFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤名称,目前支持security-group-id,按安全组关联过滤
                     * @return Name 过滤名称,目前支持security-group-id,按安全组关联过滤
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤名称,目前支持security-group-id,按安全组关联过滤
                     * @param _name 过滤名称,目前支持security-group-id,按安全组关联过滤
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取过滤值,当过滤名称为security-group-id时仅支持传单个value
                     * @return Values 过滤值,当过滤名称为security-group-id时仅支持传单个value
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置过滤值,当过滤名称为security-group-id时仅支持传单个value
                     * @param _values 过滤值,当过滤名称为security-group-id时仅支持传单个value
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取过滤关系,支持IN和NOT_IN,默认为IN
                     * @return Relation 过滤关系,支持IN和NOT_IN,默认为IN
                     * 
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置过滤关系,支持IN和NOT_IN,默认为IN
                     * @param _relation 过滤关系,支持IN和NOT_IN,默认为IN
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
                     * 过滤名称,目前支持security-group-id,按安全组关联过滤
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 过滤值,当过滤名称为security-group-id时仅支持传单个value
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 过滤关系,支持IN和NOT_IN,默认为IN
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROUTEFILTER_H_
