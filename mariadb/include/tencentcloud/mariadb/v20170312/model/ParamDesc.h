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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMDESC_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ParamConstraint.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DB参数描述
                */
                class ParamDesc : public AbstractModel
                {
                public:
                    ParamDesc();
                    ~ParamDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名字
                     * @return Param 参数名字
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置参数名字
                     * @param _param 参数名字
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取当前参数值
                     * @return Value 当前参数值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置当前参数值
                     * @param _value 当前参数值
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
                     * 获取设置过的值，参数生效后，该值和value一样。
                     * @return SetValue 设置过的值，参数生效后，该值和value一样。
                     * 
                     */
                    std::string GetSetValue() const;

                    /**
                     * 设置设置过的值，参数生效后，该值和value一样。
                     * @param _setValue 设置过的值，参数生效后，该值和value一样。
                     * 
                     */
                    void SetSetValue(const std::string& _setValue);

                    /**
                     * 判断参数 SetValue 是否已赋值
                     * @return SetValue 是否已赋值
                     * 
                     */
                    bool SetValueHasBeenSet() const;

                    /**
                     * 获取系统默认值
                     * @return Default 系统默认值
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置系统默认值
                     * @param _default 系统默认值
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取参数限制
                     * @return Constraint 参数限制
                     * 
                     */
                    ParamConstraint GetConstraint() const;

                    /**
                     * 设置参数限制
                     * @param _constraint 参数限制
                     * 
                     */
                    void SetConstraint(const ParamConstraint& _constraint);

                    /**
                     * 判断参数 Constraint 是否已赋值
                     * @return Constraint 是否已赋值
                     * 
                     */
                    bool ConstraintHasBeenSet() const;

                    /**
                     * 获取是否有设置过值，false:没有设置过值，true:有设置过值。
                     * @return HaveSetValue 是否有设置过值，false:没有设置过值，true:有设置过值。
                     * 
                     */
                    bool GetHaveSetValue() const;

                    /**
                     * 设置是否有设置过值，false:没有设置过值，true:有设置过值。
                     * @param _haveSetValue 是否有设置过值，false:没有设置过值，true:有设置过值。
                     * 
                     */
                    void SetHaveSetValue(const bool& _haveSetValue);

                    /**
                     * 判断参数 HaveSetValue 是否已赋值
                     * @return HaveSetValue 是否已赋值
                     * 
                     */
                    bool HaveSetValueHasBeenSet() const;

                    /**
                     * 获取是否需要重启生效，false:不需要重启，
true:需要重启
                     * @return NeedRestart 是否需要重启生效，false:不需要重启，
true:需要重启
                     * 
                     */
                    bool GetNeedRestart() const;

                    /**
                     * 设置是否需要重启生效，false:不需要重启，
true:需要重启
                     * @param _needRestart 是否需要重启生效，false:不需要重启，
true:需要重启
                     * 
                     */
                    void SetNeedRestart(const bool& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                private:

                    /**
                     * 参数名字
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * 当前参数值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 设置过的值，参数生效后，该值和value一样。
                     */
                    std::string m_setValue;
                    bool m_setValueHasBeenSet;

                    /**
                     * 系统默认值
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 参数限制
                     */
                    ParamConstraint m_constraint;
                    bool m_constraintHasBeenSet;

                    /**
                     * 是否有设置过值，false:没有设置过值，true:有设置过值。
                     */
                    bool m_haveSetValue;
                    bool m_haveSetValueHasBeenSet;

                    /**
                     * 是否需要重启生效，false:不需要重启，
true:需要重启
                     */
                    bool m_needRestart;
                    bool m_needRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMDESC_H_
