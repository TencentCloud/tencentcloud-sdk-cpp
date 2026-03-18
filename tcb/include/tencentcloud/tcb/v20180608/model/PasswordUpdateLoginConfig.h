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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PASSWORDUPDATELOGINCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PASSWORDUPDATELOGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 登录配置中密码更新配置策略，用于管理使用用户名密码登录方式时，密码的过期策略和更新策略。例如，首次登录需要更新密码、定期过期密码等策略。
                */
                class PasswordUpdateLoginConfig : public AbstractModel
                {
                public:
                    PasswordUpdateLoginConfig();
                    ~PasswordUpdateLoginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取首次登录强制修改密码开关。开启后，用户首次登录时将强制要求修改密码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstLoginUpdate 首次登录强制修改密码开关。开启后，用户首次登录时将强制要求修改密码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetFirstLoginUpdate() const;

                    /**
                     * 设置首次登录强制修改密码开关。开启后，用户首次登录时将强制要求修改密码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstLoginUpdate 首次登录强制修改密码开关。开启后，用户首次登录时将强制要求修改密码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstLoginUpdate(const bool& _firstLoginUpdate);

                    /**
                     * 判断参数 FirstLoginUpdate 是否已赋值
                     * @return FirstLoginUpdate 是否已赋值
                     * 
                     */
                    bool FirstLoginUpdateHasBeenSet() const;

                    /**
                     * 获取定期强制修改密码开关。开启后，用户需按照 PeriodValue 和 PeriodType 指定的周期定期修改密码，超过周期未修改将在登录时强制要求修改。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodUpdate 定期强制修改密码开关。开启后，用户需按照 PeriodValue 和 PeriodType 指定的周期定期修改密码，超过周期未修改将在登录时强制要求修改。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPeriodUpdate() const;

                    /**
                     * 设置定期强制修改密码开关。开启后，用户需按照 PeriodValue 和 PeriodType 指定的周期定期修改密码，超过周期未修改将在登录时强制要求修改。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodUpdate 定期强制修改密码开关。开启后，用户需按照 PeriodValue 和 PeriodType 指定的周期定期修改密码，超过周期未修改将在登录时强制要求修改。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriodUpdate(const bool& _periodUpdate);

                    /**
                     * 判断参数 PeriodUpdate 是否已赋值
                     * @return PeriodUpdate 是否已赋值
                     * 
                     */
                    bool PeriodUpdateHasBeenSet() const;

                    /**
                     * 获取定期修改密码的周期数值，与 PeriodType 配合使用。例如 PeriodValue 为 6，PeriodType 为 MONTH，表示每 6 个月需修改一次密码。当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodValue 定期修改密码的周期数值，与 PeriodType 配合使用。例如 PeriodValue 为 6，PeriodType 为 MONTH，表示每 6 个月需修改一次密码。当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPeriodValue() const;

                    /**
                     * 设置定期修改密码的周期数值，与 PeriodType 配合使用。例如 PeriodValue 为 6，PeriodType 为 MONTH，表示每 6 个月需修改一次密码。当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodValue 定期修改密码的周期数值，与 PeriodType 配合使用。例如 PeriodValue 为 6，PeriodType 为 MONTH，表示每 6 个月需修改一次密码。当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriodValue(const int64_t& _periodValue);

                    /**
                     * 判断参数 PeriodValue 是否已赋值
                     * @return PeriodValue 是否已赋值
                     * 
                     */
                    bool PeriodValueHasBeenSet() const;

                    /**
                     * 获取定期修改密码的周期时间单位，与 PeriodValue 配合使用。取值范围：
WEEK：周
MONTH：月
YEAR：年
当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodType 定期修改密码的周期时间单位，与 PeriodValue 配合使用。取值范围：
WEEK：周
MONTH：月
YEAR：年
当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置定期修改密码的周期时间单位，与 PeriodValue 配合使用。取值范围：
WEEK：周
MONTH：月
YEAR：年
当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodType 定期修改密码的周期时间单位，与 PeriodValue 配合使用。取值范围：
WEEK：周
MONTH：月
YEAR：年
当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                private:

                    /**
                     * 首次登录强制修改密码开关。开启后，用户首次登录时将强制要求修改密码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_firstLoginUpdate;
                    bool m_firstLoginUpdateHasBeenSet;

                    /**
                     * 定期强制修改密码开关。开启后，用户需按照 PeriodValue 和 PeriodType 指定的周期定期修改密码，超过周期未修改将在登录时强制要求修改。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_periodUpdate;
                    bool m_periodUpdateHasBeenSet;

                    /**
                     * 定期修改密码的周期数值，与 PeriodType 配合使用。例如 PeriodValue 为 6，PeriodType 为 MONTH，表示每 6 个月需修改一次密码。当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_periodValue;
                    bool m_periodValueHasBeenSet;

                    /**
                     * 定期修改密码的周期时间单位，与 PeriodValue 配合使用。取值范围：
WEEK：周
MONTH：月
YEAR：年
当 PeriodUpdate 为 true 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PASSWORDUPDATELOGINCONFIG_H_
