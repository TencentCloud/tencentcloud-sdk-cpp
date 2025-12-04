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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_AVAILABLEZONEAFFINITYINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_AVAILABLEZONEAFFINITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 可用区转发亲和信息
                */
                class AvailableZoneAffinityInfo : public AbstractModel
                {
                public:
                    AvailableZoneAffinityInfo();
                    ~AvailableZoneAffinityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启可用区转发亲和。true：开启可用区转发亲和；false：开启可用区转发亲和。
                     * @return Enable 是否开启可用区转发亲和。true：开启可用区转发亲和；false：开启可用区转发亲和。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启可用区转发亲和。true：开启可用区转发亲和；false：开启可用区转发亲和。
                     * @param _enable 是否开启可用区转发亲和。true：开启可用区转发亲和；false：开启可用区转发亲和。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取可用区转发亲和失效阈值，当可用区内后端服务健康比例小于该阈值时，负载均衡会退出可用区转发亲和，转为全可用区转发。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExitRatio 可用区转发亲和失效阈值，当可用区内后端服务健康比例小于该阈值时，负载均衡会退出可用区转发亲和，转为全可用区转发。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExitRatio() const;

                    /**
                     * 设置可用区转发亲和失效阈值，当可用区内后端服务健康比例小于该阈值时，负载均衡会退出可用区转发亲和，转为全可用区转发。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exitRatio 可用区转发亲和失效阈值，当可用区内后端服务健康比例小于该阈值时，负载均衡会退出可用区转发亲和，转为全可用区转发。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExitRatio(const uint64_t& _exitRatio);

                    /**
                     * 判断参数 ExitRatio 是否已赋值
                     * @return ExitRatio 是否已赋值
                     * 
                     */
                    bool ExitRatioHasBeenSet() const;

                    /**
                     * 获取可用区转发亲和的重新生效阈值，当处于全可用区转发，且负载均衡可用区内的后端服务健康比例大于等于该阈值时，负载均衡会重新进入可用区转发亲和。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReentryRatio 可用区转发亲和的重新生效阈值，当处于全可用区转发，且负载均衡可用区内的后端服务健康比例大于等于该阈值时，负载均衡会重新进入可用区转发亲和。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReentryRatio() const;

                    /**
                     * 设置可用区转发亲和的重新生效阈值，当处于全可用区转发，且负载均衡可用区内的后端服务健康比例大于等于该阈值时，负载均衡会重新进入可用区转发亲和。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reentryRatio 可用区转发亲和的重新生效阈值，当处于全可用区转发，且负载均衡可用区内的后端服务健康比例大于等于该阈值时，负载均衡会重新进入可用区转发亲和。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReentryRatio(const uint64_t& _reentryRatio);

                    /**
                     * 判断参数 ReentryRatio 是否已赋值
                     * @return ReentryRatio 是否已赋值
                     * 
                     */
                    bool ReentryRatioHasBeenSet() const;

                private:

                    /**
                     * 是否开启可用区转发亲和。true：开启可用区转发亲和；false：开启可用区转发亲和。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 可用区转发亲和失效阈值，当可用区内后端服务健康比例小于该阈值时，负载均衡会退出可用区转发亲和，转为全可用区转发。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_exitRatio;
                    bool m_exitRatioHasBeenSet;

                    /**
                     * 可用区转发亲和的重新生效阈值，当处于全可用区转发，且负载均衡可用区内的后端服务健康比例大于等于该阈值时，负载均衡会重新进入可用区转发亲和。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_reentryRatio;
                    bool m_reentryRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_AVAILABLEZONEAFFINITYINFO_H_
