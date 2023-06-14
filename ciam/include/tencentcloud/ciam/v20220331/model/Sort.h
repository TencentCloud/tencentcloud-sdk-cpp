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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_SORT_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_SORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 查询用户排序
                */
                class Sort : public AbstractModel
                {
                public:
                    Sort();
                    ~Sort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取排序字段的key，参考自定义属性
                     * @return PropertyKey 排序字段的key，参考自定义属性
                     * 
                     */
                    std::string GetPropertyKey() const;

                    /**
                     * 设置排序字段的key，参考自定义属性
                     * @param _propertyKey 排序字段的key，参考自定义属性
                     * 
                     */
                    void SetPropertyKey(const std::string& _propertyKey);

                    /**
                     * 判断参数 PropertyKey 是否已赋值
                     * @return PropertyKey 是否已赋值
                     * 
                     */
                    bool PropertyKeyHasBeenSet() const;

                    /**
                     * 获取升序或者降序，ASC/DESC
                     * @return Order 升序或者降序，ASC/DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置升序或者降序，ASC/DESC
                     * @param _order 升序或者降序，ASC/DESC
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
                     * 排序字段的key，参考自定义属性
                     */
                    std::string m_propertyKey;
                    bool m_propertyKeyHasBeenSet;

                    /**
                     * 升序或者降序，ASC/DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_SORT_H_
