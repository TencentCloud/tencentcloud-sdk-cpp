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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCUPDATEPERIOD_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCUPDATEPERIOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档更新周期配置
                */
                class DocUpdatePeriod : public AbstractModel
                {
                public:
                    DocUpdatePeriod();
                    ~DocUpdatePeriod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启周期性更新</p>
                     * @return Enabled <p>是否开启周期性更新</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否开启周期性更新</p>
                     * @param _enabled <p>是否开启周期性更新</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>更新周期（小时）</p>
                     * @return PeriodHour <p>更新周期（小时）</p>
                     * 
                     */
                    uint64_t GetPeriodHour() const;

                    /**
                     * 设置<p>更新周期（小时）</p>
                     * @param _periodHour <p>更新周期（小时）</p>
                     * 
                     */
                    void SetPeriodHour(const uint64_t& _periodHour);

                    /**
                     * 判断参数 PeriodHour 是否已赋值
                     * @return PeriodHour 是否已赋值
                     * 
                     */
                    bool PeriodHourHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启周期性更新</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>更新周期（小时）</p>
                     */
                    uint64_t m_periodHour;
                    bool m_periodHourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCUPDATEPERIOD_H_
