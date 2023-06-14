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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PARAMETERDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PARAMETERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 实例参数的详细描述
                */
                class ParameterDetail : public AbstractModel
                {
                public:
                    ParameterDetail();
                    ~ParameterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称
                     * @return Name 参数名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名称
                     * @param _name 参数名称
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
                     * 获取参数类型，integer-整型，enum-枚举型
                     * @return ParamType 参数类型，integer-整型，enum-枚举型
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置参数类型，integer-整型，enum-枚举型
                     * @param _paramType 参数类型，integer-整型，enum-枚举型
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取参数默认值
                     * @return Default 参数默认值
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置参数默认值
                     * @param _default 参数默认值
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
                     * 获取参数描述
                     * @return Description 参数描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置参数描述
                     * @param _description 参数描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取参数当前值
                     * @return CurrentValue 参数当前值
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置参数当前值
                     * @param _currentValue 参数当前值
                     * 
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     * 
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取修改参数后，是否需要重启数据库以使参数生效，0-不需要重启，1-需要重启
                     * @return NeedReboot 修改参数后，是否需要重启数据库以使参数生效，0-不需要重启，1-需要重启
                     * 
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置修改参数后，是否需要重启数据库以使参数生效，0-不需要重启，1-需要重启
                     * @param _needReboot 修改参数后，是否需要重启数据库以使参数生效，0-不需要重启，1-需要重启
                     * 
                     */
                    void SetNeedReboot(const int64_t& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     * 
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取参数允许的最大值
                     * @return Max 参数允许的最大值
                     * 
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置参数允许的最大值
                     * @param _max 参数允许的最大值
                     * 
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取参数允许的最小值
                     * @return Min 参数允许的最小值
                     * 
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置参数允许的最小值
                     * @param _min 参数允许的最小值
                     * 
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取参数允许的枚举类型
                     * @return EnumValue 参数允许的枚举类型
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置参数允许的枚举类型
                     * @param _enumValue 参数允许的枚举类型
                     * 
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     * 
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取参数状态 0-状态正常 1-在修改中
                     * @return Status 参数状态 0-状态正常 1-在修改中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置参数状态 0-状态正常 1-在修改中
                     * @param _status 参数状态 0-状态正常 1-在修改中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 参数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数类型，integer-整型，enum-枚举型
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * 参数默认值
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 参数描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 参数当前值
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 修改参数后，是否需要重启数据库以使参数生效，0-不需要重启，1-需要重启
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * 参数允许的最大值
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 参数允许的最小值
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 参数允许的枚举类型
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * 参数状态 0-状态正常 1-在修改中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PARAMETERDETAIL_H_
