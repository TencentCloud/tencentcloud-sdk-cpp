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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCENUMBER_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCENUMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 操作资源包数量
                */
                class ResourceNumber : public AbstractModel
                {
                public:
                    ResourceNumber();
                    ~ResourceNumber() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取增加/减少枚举

- ADD -- 增加
- DELETE -- 减少
                     * @return Type 增加/减少枚举

- ADD -- 增加
- DELETE -- 减少
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置增加/减少枚举

- ADD -- 增加
- DELETE -- 减少
                     * @param _type 增加/减少枚举

- ADD -- 增加
- DELETE -- 减少
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取增加/减少资源包的数量
                     * @return Quantity 增加/减少资源包的数量
                     * 
                     */
                    int64_t GetQuantity() const;

                    /**
                     * 设置增加/减少资源包的数量
                     * @param _quantity 增加/减少资源包的数量
                     * 
                     */
                    void SetQuantity(const int64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                private:

                    /**
                     * 增加/减少枚举

- ADD -- 增加
- DELETE -- 减少
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 增加/减少资源包的数量
                     */
                    int64_t m_quantity;
                    bool m_quantityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCENUMBER_H_
