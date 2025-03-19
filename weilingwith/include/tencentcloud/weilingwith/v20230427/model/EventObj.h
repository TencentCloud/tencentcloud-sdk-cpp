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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_EVENTOBJ_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_EVENTOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 事件对象
                */
                class EventObj : public AbstractModel
                {
                public:
                    EventObj();
                    ~EventObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件id
                     * @return Id 事件id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置事件id
                     * @param _id 事件id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取事件名称
                     * @return Name 事件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置事件名称
                     * @param _name 事件名称
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
                     * 获取事件触发类型名称
                     * @return Type 事件触发类型名称
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件触发类型名称
                     * @param _type 事件触发类型名称
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
                     * 获取时间触发条件
                     * @return Condition 时间触发条件
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置时间触发条件
                     * @param _condition 时间触发条件
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                private:

                    /**
                     * 事件id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件触发类型名称
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 时间触发条件
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_EVENTOBJ_H_
