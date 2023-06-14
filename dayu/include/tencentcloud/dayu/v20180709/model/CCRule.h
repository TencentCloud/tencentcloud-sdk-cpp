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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CCRULE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CCRULE_H_

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
                * cc自定义策略配置的规则
                */
                class CCRule : public AbstractModel
                {
                public:
                    CCRule();
                    ~CCRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则的key, 可以为host、cgi、ua、referer
                     * @return Skey 规则的key, 可以为host、cgi、ua、referer
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置规则的key, 可以为host、cgi、ua、referer
                     * @param _skey 规则的key, 可以为host、cgi、ua、referer
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取规则的条件，可以为include、not_include、equal
                     * @return Operator 规则的条件，可以为include、not_include、equal
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置规则的条件，可以为include、not_include、equal
                     * @param _operator 规则的条件，可以为include、not_include、equal
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
                     * 获取规则的值，长度小于31字节
                     * @return Value 规则的值，长度小于31字节
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置规则的值，长度小于31字节
                     * @param _value 规则的值，长度小于31字节
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
                     * 规则的key, 可以为host、cgi、ua、referer
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * 规则的条件，可以为include、not_include、equal
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 规则的值，长度小于31字节
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CCRULE_H_
