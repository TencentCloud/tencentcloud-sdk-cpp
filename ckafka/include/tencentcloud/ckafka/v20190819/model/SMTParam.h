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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SMTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SMTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ValueParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 数据处理——数据处理参数
                */
                class SMTParam : public AbstractModel
                {
                public:
                    SMTParam();
                    ~SMTParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据处理KEY
                     * @return Key 数据处理KEY
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置数据处理KEY
                     * @param _key 数据处理KEY
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
                     * 获取操作，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射，JSONPATH
                     * @return Operate 操作，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射，JSONPATH
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置操作，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射，JSONPATH
                     * @param _operate 操作，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射，JSONPATH
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取数据类型，ORIGINAL原始，STRING，INT64，FLOAT64，BOOLEAN，MAP，ARRAY
                     * @return SchemeType 数据类型，ORIGINAL原始，STRING，INT64，FLOAT64，BOOLEAN，MAP，ARRAY
                     * 
                     */
                    std::string GetSchemeType() const;

                    /**
                     * 设置数据类型，ORIGINAL原始，STRING，INT64，FLOAT64，BOOLEAN，MAP，ARRAY
                     * @param _schemeType 数据类型，ORIGINAL原始，STRING，INT64，FLOAT64，BOOLEAN，MAP，ARRAY
                     * 
                     */
                    void SetSchemeType(const std::string& _schemeType);

                    /**
                     * 判断参数 SchemeType 是否已赋值
                     * @return SchemeType 是否已赋值
                     * 
                     */
                    bool SchemeTypeHasBeenSet() const;

                    /**
                     * 获取数据处理VALUE
                     * @return Value 数据处理VALUE
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置数据处理VALUE
                     * @param _value 数据处理VALUE
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
                     * 获取VALUE处理
                     * @return ValueOperate VALUE处理
                     * 
                     */
                    ValueParam GetValueOperate() const;

                    /**
                     * 设置VALUE处理
                     * @param _valueOperate VALUE处理
                     * 
                     */
                    void SetValueOperate(const ValueParam& _valueOperate);

                    /**
                     * 判断参数 ValueOperate 是否已赋值
                     * @return ValueOperate 是否已赋值
                     * 
                     */
                    bool ValueOperateHasBeenSet() const;

                    /**
                     * 获取原始VALUE
                     * @return OriginalValue 原始VALUE
                     * 
                     */
                    std::string GetOriginalValue() const;

                    /**
                     * 设置原始VALUE
                     * @param _originalValue 原始VALUE
                     * 
                     */
                    void SetOriginalValue(const std::string& _originalValue);

                    /**
                     * 判断参数 OriginalValue 是否已赋值
                     * @return OriginalValue 是否已赋值
                     * 
                     */
                    bool OriginalValueHasBeenSet() const;

                    /**
                     * 获取VALUE处理链
                     * @return ValueOperates VALUE处理链
                     * 
                     */
                    std::vector<ValueParam> GetValueOperates() const;

                    /**
                     * 设置VALUE处理链
                     * @param _valueOperates VALUE处理链
                     * 
                     */
                    void SetValueOperates(const std::vector<ValueParam>& _valueOperates);

                    /**
                     * 判断参数 ValueOperates 是否已赋值
                     * @return ValueOperates 是否已赋值
                     * 
                     */
                    bool ValueOperatesHasBeenSet() const;

                private:

                    /**
                     * 数据处理KEY
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 操作，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射，JSONPATH
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 数据类型，ORIGINAL原始，STRING，INT64，FLOAT64，BOOLEAN，MAP，ARRAY
                     */
                    std::string m_schemeType;
                    bool m_schemeTypeHasBeenSet;

                    /**
                     * 数据处理VALUE
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * VALUE处理
                     */
                    ValueParam m_valueOperate;
                    bool m_valueOperateHasBeenSet;

                    /**
                     * 原始VALUE
                     */
                    std::string m_originalValue;
                    bool m_originalValueHasBeenSet;

                    /**
                     * VALUE处理链
                     */
                    std::vector<ValueParam> m_valueOperates;
                    bool m_valueOperatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SMTPARAM_H_
