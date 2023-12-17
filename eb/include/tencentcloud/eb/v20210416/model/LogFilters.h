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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_LOGFILTERS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_LOGFILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 日志存储过滤条件
                */
                class LogFilters : public AbstractModel
                {
                public:
                    LogFilters();
                    ~LogFilters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤字段名称，取值范围如下:region(地域)，type(事件类型)，source(事件源)，status(事件状态)
                     * @return Key 过滤字段名称，取值范围如下:region(地域)，type(事件类型)，source(事件源)，status(事件状态)
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置过滤字段名称，取值范围如下:region(地域)，type(事件类型)，source(事件源)，status(事件状态)
                     * @param _key 过滤字段名称，取值范围如下:region(地域)，type(事件类型)，source(事件源)，status(事件状态)
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取运算符, 全等 eq，不等 neq，相似 like，排除相似 not like,  小于 lt，小于且等于 lte，大于 gt，大于且等于 gte，在范围内 range，不在范围内 norange
                     * @return Operator 运算符, 全等 eq，不等 neq，相似 like，排除相似 not like,  小于 lt，小于且等于 lte，大于 gt，大于且等于 gte，在范围内 range，不在范围内 norange
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置运算符, 全等 eq，不等 neq，相似 like，排除相似 not like,  小于 lt，小于且等于 lte，大于 gt，大于且等于 gte，在范围内 range，不在范围内 norange
                     * @param _operator 运算符, 全等 eq，不等 neq，相似 like，排除相似 not like,  小于 lt，小于且等于 lte，大于 gt，大于且等于 gte，在范围内 range，不在范围内 norange
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取过滤值，范围运算需要同时输入两个值，以英文逗号分隔

                     * @return Value 过滤值，范围运算需要同时输入两个值，以英文逗号分隔

                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置过滤值，范围运算需要同时输入两个值，以英文逗号分隔

                     * @param _value 过滤值，范围运算需要同时输入两个值，以英文逗号分隔

                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 过滤字段名称，取值范围如下:region(地域)，type(事件类型)，source(事件源)，status(事件状态)
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 运算符, 全等 eq，不等 neq，相似 like，排除相似 not like,  小于 lt，小于且等于 lte，大于 gt，大于且等于 gte，在范围内 range，不在范围内 norange
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 过滤值，范围运算需要同时输入两个值，以英文逗号分隔

                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_LOGFILTERS_H_
