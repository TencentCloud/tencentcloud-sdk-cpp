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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_REQUESTSORT_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_REQUESTSORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 排序条件
                */
                class RequestSort : public AbstractModel
                {
                public:
                    RequestSort();
                    ~RequestSort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取排序字段名称。
                     * @return Name 排序字段名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置排序字段名称。
                     * @param _name 排序字段名称。
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
                     * 获取排序方向。取值：ASC（升序）、DESC（降序）。
                     * @return Order 排序方向。取值：ASC（升序）、DESC（降序）。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方向。取值：ASC（升序）、DESC（降序）。
                     * @param _order 排序方向。取值：ASC（升序）、DESC（降序）。
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
                     * 排序字段名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 排序方向。取值：ASC（升序）、DESC（降序）。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_REQUESTSORT_H_
