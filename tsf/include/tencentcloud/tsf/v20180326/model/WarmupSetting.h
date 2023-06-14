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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_WARMUPSETTING_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_WARMUPSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 预热配置
                */
                class WarmupSetting : public AbstractModel
                {
                public:
                    WarmupSetting();
                    ~WarmupSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启预热
                     * @return Enabled 是否开启预热
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启预热
                     * @param _enabled 是否开启预热
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
                     * 获取预热时间
                     * @return WarmupTime 预热时间
                     * 
                     */
                    uint64_t GetWarmupTime() const;

                    /**
                     * 设置预热时间
                     * @param _warmupTime 预热时间
                     * 
                     */
                    void SetWarmupTime(const uint64_t& _warmupTime);

                    /**
                     * 判断参数 WarmupTime 是否已赋值
                     * @return WarmupTime 是否已赋值
                     * 
                     */
                    bool WarmupTimeHasBeenSet() const;

                    /**
                     * 获取预热曲率，取值 1~5
                     * @return Curvature 预热曲率，取值 1~5
                     * 
                     */
                    uint64_t GetCurvature() const;

                    /**
                     * 设置预热曲率，取值 1~5
                     * @param _curvature 预热曲率，取值 1~5
                     * 
                     */
                    void SetCurvature(const uint64_t& _curvature);

                    /**
                     * 判断参数 Curvature 是否已赋值
                     * @return Curvature 是否已赋值
                     * 
                     */
                    bool CurvatureHasBeenSet() const;

                    /**
                     * 获取是否开启预热保护，在开启保护的情况下，超过 50% 的节点处于预热中，则会中止预热
                     * @return EnabledProtection 是否开启预热保护，在开启保护的情况下，超过 50% 的节点处于预热中，则会中止预热
                     * 
                     */
                    bool GetEnabledProtection() const;

                    /**
                     * 设置是否开启预热保护，在开启保护的情况下，超过 50% 的节点处于预热中，则会中止预热
                     * @param _enabledProtection 是否开启预热保护，在开启保护的情况下，超过 50% 的节点处于预热中，则会中止预热
                     * 
                     */
                    void SetEnabledProtection(const bool& _enabledProtection);

                    /**
                     * 判断参数 EnabledProtection 是否已赋值
                     * @return EnabledProtection 是否已赋值
                     * 
                     */
                    bool EnabledProtectionHasBeenSet() const;

                private:

                    /**
                     * 是否开启预热
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 预热时间
                     */
                    uint64_t m_warmupTime;
                    bool m_warmupTimeHasBeenSet;

                    /**
                     * 预热曲率，取值 1~5
                     */
                    uint64_t m_curvature;
                    bool m_curvatureHasBeenSet;

                    /**
                     * 是否开启预热保护，在开启保护的情况下，超过 50% 的节点处于预热中，则会中止预热
                     */
                    bool m_enabledProtection;
                    bool m_enabledProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_WARMUPSETTING_H_
