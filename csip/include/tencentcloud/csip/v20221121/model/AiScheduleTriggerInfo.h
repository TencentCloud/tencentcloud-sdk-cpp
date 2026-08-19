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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULETRIGGERINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULETRIGGERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 触发器配置
                */
                class AiScheduleTriggerInfo : public AbstractModel
                {
                public:
                    AiScheduleTriggerInfo();
                    ~AiScheduleTriggerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>触发器 ID。</p>
                     * @return TriggerId <p>触发器 ID。</p>
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>触发器 ID。</p>
                     * @param _triggerId <p>触发器 ID。</p>
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取<p>触发器类型。取值：1（Cron 表达式）、2（固定时间）。</p>
                     * @return TriggerType <p>触发器类型。取值：1（Cron 表达式）、2（固定时间）。</p>
                     * 
                     */
                    int64_t GetTriggerType() const;

                    /**
                     * 设置<p>触发器类型。取值：1（Cron 表达式）、2（固定时间）。</p>
                     * @param _triggerType <p>触发器类型。取值：1（Cron 表达式）、2（固定时间）。</p>
                     * 
                     */
                    void SetTriggerType(const int64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                private:

                    /**
                     * <p>触发器 ID。</p>
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * <p>触发器类型。取值：1（Cron 表达式）、2（固定时间）。</p>
                     */
                    int64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULETRIGGERINFO_H_
