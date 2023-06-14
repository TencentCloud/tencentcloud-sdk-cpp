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

#ifndef TENCENTCLOUD_TKGDQ_V20190411_MODEL_TRIPLECONTENT_H_
#define TENCENTCLOUD_TKGDQ_V20190411_MODEL_TRIPLECONTENT_H_

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
                * 三元组查询返回的元记录
                */
                class TripleContent : public AbstractModel
                {
                public:
                    TripleContent();
                    ~TripleContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实体id
                     * @return Id 实体id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置实体id
                     * @param _id 实体id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取实体名称
                     * @return Name 实体名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实体名称
                     * @param _name 实体名称
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
                     * 获取实体order
                     * @return Order 实体order
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置实体order
                     * @param _order 实体order
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取实体流行度
                     * @return Popular 实体流行度
                     * 
                     */
                    int64_t GetPopular() const;

                    /**
                     * 设置实体流行度
                     * @param _popular 实体流行度
                     * 
                     */
                    void SetPopular(const int64_t& _popular);

                    /**
                     * 判断参数 Popular 是否已赋值
                     * @return Popular 是否已赋值
                     * 
                     */
                    bool PopularHasBeenSet() const;

                private:

                    /**
                     * 实体id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 实体名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实体order
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 实体流行度
                     */
                    int64_t m_popular;
                    bool m_popularHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKGDQ_V20190411_MODEL_TRIPLECONTENT_H_
