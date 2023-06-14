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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_ORDERBY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_ORDERBY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 排序字段
                */
                class OrderBy : public AbstractModel
                {
                public:
                    OrderBy();
                    ~OrderBy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取排序字段名称，取值[
bandwidth（带宽），
overloadCount（超峰值次数）
]
                     * @return Field 排序字段名称，取值[
bandwidth（带宽），
overloadCount（超峰值次数）
]
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置排序字段名称，取值[
bandwidth（带宽），
overloadCount（超峰值次数）
]
                     * @param _field 排序字段名称，取值[
bandwidth（带宽），
overloadCount（超峰值次数）
]
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取升降序，取值为[asc（升序），（升序），desc（降序）， DESC（降序）]
                     * @return Order 升降序，取值为[asc（升序），（升序），desc（降序）， DESC（降序）]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置升降序，取值为[asc（升序），（升序），desc（降序）， DESC（降序）]
                     * @param _order 升降序，取值为[asc（升序），（升序），desc（降序）， DESC（降序）]
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 排序字段名称，取值[
bandwidth（带宽），
overloadCount（超峰值次数）
]
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 升降序，取值为[asc（升序），（升序），desc（降序）， DESC（降序）]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_ORDERBY_H_
