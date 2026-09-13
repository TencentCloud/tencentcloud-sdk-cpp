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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ORDERBY_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ORDERBY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
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
                     * 获取排序方向，Asc（升序）或 Desc（降序），大小写不敏感
                     * @return Direction 排序方向，Asc（升序）或 Desc（降序），大小写不敏感
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置排序方向，Asc（升序）或 Desc（降序），大小写不敏感
                     * @param _direction 排序方向，Asc（升序）或 Desc（降序），大小写不敏感
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取排序字段名
                     * @return Name 排序字段名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置排序字段名
                     * @param _name 排序字段名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 排序方向，Asc（升序）或 Desc（降序），大小写不敏感
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 排序字段名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ORDERBY_H_
