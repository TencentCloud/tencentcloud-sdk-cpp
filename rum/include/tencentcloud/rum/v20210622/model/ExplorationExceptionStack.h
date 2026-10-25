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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_EXPLORATIONEXCEPTIONSTACK_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_EXPLORATIONEXCEPTIONSTACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 探索列表异常栈摘要
                */
                class ExplorationExceptionStack : public AbstractModel
                {
                public:
                    ExplorationExceptionStack();
                    ~ExplorationExceptionStack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>异常类型</p>
                     * @return Type <p>异常类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>异常类型</p>
                     * @param _type <p>异常类型</p>
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
                     * 获取<p>异常信息</p>
                     * @return Value <p>异常信息</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>异常信息</p>
                     * @param _value <p>异常信息</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>mechanism 类型</p>
                     * @return MechanismType <p>mechanism 类型</p>
                     * 
                     */
                    std::string GetMechanismType() const;

                    /**
                     * 设置<p>mechanism 类型</p>
                     * @param _mechanismType <p>mechanism 类型</p>
                     * 
                     */
                    void SetMechanismType(const std::string& _mechanismType);

                    /**
                     * 判断参数 MechanismType 是否已赋值
                     * @return MechanismType 是否已赋值
                     * 
                     */
                    bool MechanismTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否已处理 0/1</p>
                     * @return MechanismHandled <p>是否已处理 0/1</p>
                     * 
                     */
                    int64_t GetMechanismHandled() const;

                    /**
                     * 设置<p>是否已处理 0/1</p>
                     * @param _mechanismHandled <p>是否已处理 0/1</p>
                     * 
                     */
                    void SetMechanismHandled(const int64_t& _mechanismHandled);

                    /**
                     * 判断参数 MechanismHandled 是否已赋值
                     * @return MechanismHandled 是否已赋值
                     * 
                     */
                    bool MechanismHandledHasBeenSet() const;

                private:

                    /**
                     * <p>异常类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>异常信息</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>mechanism 类型</p>
                     */
                    std::string m_mechanismType;
                    bool m_mechanismTypeHasBeenSet;

                    /**
                     * <p>是否已处理 0/1</p>
                     */
                    int64_t m_mechanismHandled;
                    bool m_mechanismHandledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_EXPLORATIONEXCEPTIONSTACK_H_
