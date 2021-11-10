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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PARAMETERINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PARAMETERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 独享实例配置参数
                */
                class ParameterInfo : public AbstractModel
                {
                public:
                    ParameterInfo();
                    ~ParameterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名字
                     * @return Name 名字
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param Name 名字
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取当前值
                     * @return Value 当前值
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置当前值
                     * @param Value 当前值
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取默认值
                     * @return Default 默认值
                     */
                    int64_t GetDefault() const;

                    /**
                     * 设置默认值
                     * @param Default 默认值
                     */
                    void SetDefault(const int64_t& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param Unit 单位
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param Type 类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取最小
                     * @return Minimum 最小
                     */
                    int64_t GetMinimum() const;

                    /**
                     * 设置最小
                     * @param Minimum 最小
                     */
                    void SetMinimum(const int64_t& _minimum);

                    /**
                     * 判断参数 Minimum 是否已赋值
                     * @return Minimum 是否已赋值
                     */
                    bool MinimumHasBeenSet() const;

                    /**
                     * 获取最大
                     * @return Maximum 最大
                     */
                    int64_t GetMaximum() const;

                    /**
                     * 设置最大
                     * @param Maximum 最大
                     */
                    void SetMaximum(const int64_t& _maximum);

                    /**
                     * 判断参数 Maximum 是否已赋值
                     * @return Maximum 是否已赋值
                     */
                    bool MaximumHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifedTime 修改时间
                     */
                    std::string GetModifedTime() const;

                    /**
                     * 设置修改时间
                     * @param ModifedTime 修改时间
                     */
                    void SetModifedTime(const std::string& _modifedTime);

                    /**
                     * 判断参数 ModifedTime 是否已赋值
                     * @return ModifedTime 是否已赋值
                     */
                    bool ModifedTimeHasBeenSet() const;

                private:

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 当前值
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 默认值
                     */
                    int64_t m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 最小
                     */
                    int64_t m_minimum;
                    bool m_minimumHasBeenSet;

                    /**
                     * 最大
                     */
                    int64_t m_maximum;
                    bool m_maximumHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifedTime;
                    bool m_modifedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PARAMETERINFO_H_
