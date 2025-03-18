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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUTONOMYUSERPROFILEINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUTONOMYUSERPROFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MetricThreshold.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 自治用户配置详情
                */
                class AutonomyUserProfileInfo : public AbstractModel
                {
                public:
                    AutonomyUserProfileInfo();
                    ~AutonomyUserProfileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启自治。
                     * @return Enabled 是否开启自治。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启自治。
                     * @param _enabled 是否开启自治。
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
                     * 获取用户Uin。
                     * @return Uin 用户Uin。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin。
                     * @param _uin 用户Uin。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取内存上限。
                     * @return MemoryUpperLimit 内存上限。
                     * 
                     */
                    int64_t GetMemoryUpperLimit() const;

                    /**
                     * 设置内存上限。
                     * @param _memoryUpperLimit 内存上限。
                     * 
                     */
                    void SetMemoryUpperLimit(const int64_t& _memoryUpperLimit);

                    /**
                     * 判断参数 MemoryUpperLimit 是否已赋值
                     * @return MemoryUpperLimit 是否已赋值
                     * 
                     */
                    bool MemoryUpperLimitHasBeenSet() const;

                    /**
                     * 获取指标阈值规则。
                     * @return ThresholdRule 指标阈值规则。
                     * 
                     */
                    MetricThreshold GetThresholdRule() const;

                    /**
                     * 设置指标阈值规则。
                     * @param _thresholdRule 指标阈值规则。
                     * 
                     */
                    void SetThresholdRule(const MetricThreshold& _thresholdRule);

                    /**
                     * 判断参数 ThresholdRule 是否已赋值
                     * @return ThresholdRule 是否已赋值
                     * 
                     */
                    bool ThresholdRuleHasBeenSet() const;

                    /**
                     * 获取自治功能类型。
                     * @return EnabledItems 自治功能类型。
                     * 
                     */
                    std::vector<std::string> GetEnabledItems() const;

                    /**
                     * 设置自治功能类型。
                     * @param _enabledItems 自治功能类型。
                     * 
                     */
                    void SetEnabledItems(const std::vector<std::string>& _enabledItems);

                    /**
                     * 判断参数 EnabledItems 是否已赋值
                     * @return EnabledItems 是否已赋值
                     * 
                     */
                    bool EnabledItemsHasBeenSet() const;

                private:

                    /**
                     * 是否开启自治。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 用户Uin。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 内存上限。
                     */
                    int64_t m_memoryUpperLimit;
                    bool m_memoryUpperLimitHasBeenSet;

                    /**
                     * 指标阈值规则。
                     */
                    MetricThreshold m_thresholdRule;
                    bool m_thresholdRuleHasBeenSet;

                    /**
                     * 自治功能类型。
                     */
                    std::vector<std::string> m_enabledItems;
                    bool m_enabledItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUTONOMYUSERPROFILEINFO_H_
