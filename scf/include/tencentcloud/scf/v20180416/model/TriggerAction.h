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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERACTION_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 预置定时任务动作
                */
                class TriggerAction : public AbstractModel
                {
                public:
                    TriggerAction();
                    ~TriggerAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时预置名称
                     * @return TriggerName 定时预置名称
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置定时预置名称
                     * @param _triggerName 定时预置名称
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取定时预置并发数量
                     * @return TriggerProvisionedConcurrencyNum 定时预置并发数量
                     * 
                     */
                    uint64_t GetTriggerProvisionedConcurrencyNum() const;

                    /**
                     * 设置定时预置并发数量
                     * @param _triggerProvisionedConcurrencyNum 定时预置并发数量
                     * 
                     */
                    void SetTriggerProvisionedConcurrencyNum(const uint64_t& _triggerProvisionedConcurrencyNum);

                    /**
                     * 判断参数 TriggerProvisionedConcurrencyNum 是否已赋值
                     * @return TriggerProvisionedConcurrencyNum 是否已赋值
                     * 
                     */
                    bool TriggerProvisionedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取设置定时触发器的时间配置，cron表达式。Cron 表达式有七个必需字段，按空格分隔。
                     * @return TriggerCronConfig 设置定时触发器的时间配置，cron表达式。Cron 表达式有七个必需字段，按空格分隔。
                     * 
                     */
                    std::string GetTriggerCronConfig() const;

                    /**
                     * 设置设置定时触发器的时间配置，cron表达式。Cron 表达式有七个必需字段，按空格分隔。
                     * @param _triggerCronConfig 设置定时触发器的时间配置，cron表达式。Cron 表达式有七个必需字段，按空格分隔。
                     * 
                     */
                    void SetTriggerCronConfig(const std::string& _triggerCronConfig);

                    /**
                     * 判断参数 TriggerCronConfig 是否已赋值
                     * @return TriggerCronConfig 是否已赋值
                     * 
                     */
                    bool TriggerCronConfigHasBeenSet() const;

                    /**
                     * 获取预置类型 Default
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProvisionedType 预置类型 Default
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvisionedType() const;

                    /**
                     * 设置预置类型 Default
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _provisionedType 预置类型 Default
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProvisionedType(const std::string& _provisionedType);

                    /**
                     * 判断参数 ProvisionedType 是否已赋值
                     * @return ProvisionedType 是否已赋值
                     * 
                     */
                    bool ProvisionedTypeHasBeenSet() const;

                private:

                    /**
                     * 定时预置名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 定时预置并发数量
                     */
                    uint64_t m_triggerProvisionedConcurrencyNum;
                    bool m_triggerProvisionedConcurrencyNumHasBeenSet;

                    /**
                     * 设置定时触发器的时间配置，cron表达式。Cron 表达式有七个必需字段，按空格分隔。
                     */
                    std::string m_triggerCronConfig;
                    bool m_triggerCronConfigHasBeenSet;

                    /**
                     * 预置类型 Default
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_provisionedType;
                    bool m_provisionedTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERACTION_H_
