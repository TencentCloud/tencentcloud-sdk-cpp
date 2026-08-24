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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_SCALINGCONFIGURATION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_SCALINGCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * Deployment 活跃容量配置
                */
                class ScalingConfiguration : public AbstractModel
                {
                public:
                    ScalingConfiguration();
                    ~ScalingConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>活跃 Sandbox Instance 下限，必须大于等于 0。</p>
                     * @return MinInstanceCount <p>活跃 Sandbox Instance 下限，必须大于等于 0。</p>
                     * 
                     */
                    int64_t GetMinInstanceCount() const;

                    /**
                     * 设置<p>活跃 Sandbox Instance 下限，必须大于等于 0。</p>
                     * @param _minInstanceCount <p>活跃 Sandbox Instance 下限，必须大于等于 0。</p>
                     * 
                     */
                    void SetMinInstanceCount(const int64_t& _minInstanceCount);

                    /**
                     * 判断参数 MinInstanceCount 是否已赋值
                     * @return MinInstanceCount 是否已赋值
                     * 
                     */
                    bool MinInstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>活跃 Sandbox Instance 上限，必须大于等于 1，并且不小于 MinInstanceCount。</p>
                     * @return MaxInstanceCount <p>活跃 Sandbox Instance 上限，必须大于等于 1，并且不小于 MinInstanceCount。</p>
                     * 
                     */
                    int64_t GetMaxInstanceCount() const;

                    /**
                     * 设置<p>活跃 Sandbox Instance 上限，必须大于等于 1，并且不小于 MinInstanceCount。</p>
                     * @param _maxInstanceCount <p>活跃 Sandbox Instance 上限，必须大于等于 1，并且不小于 MinInstanceCount。</p>
                     * 
                     */
                    void SetMaxInstanceCount(const int64_t& _maxInstanceCount);

                    /**
                     * 判断参数 MaxInstanceCount 是否已赋值
                     * @return MaxInstanceCount 是否已赋值
                     * 
                     */
                    bool MaxInstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>每个活跃 Sandbox Instance 同时持有的 Deployment 请求或连接 Lease 上限，必须大于等于 1。</p>
                     * @return MaxInstanceRequestConcurrency <p>每个活跃 Sandbox Instance 同时持有的 Deployment 请求或连接 Lease 上限，必须大于等于 1。</p>
                     * 
                     */
                    int64_t GetMaxInstanceRequestConcurrency() const;

                    /**
                     * 设置<p>每个活跃 Sandbox Instance 同时持有的 Deployment 请求或连接 Lease 上限，必须大于等于 1。</p>
                     * @param _maxInstanceRequestConcurrency <p>每个活跃 Sandbox Instance 同时持有的 Deployment 请求或连接 Lease 上限，必须大于等于 1。</p>
                     * 
                     */
                    void SetMaxInstanceRequestConcurrency(const int64_t& _maxInstanceRequestConcurrency);

                    /**
                     * 判断参数 MaxInstanceRequestConcurrency 是否已赋值
                     * @return MaxInstanceRequestConcurrency 是否已赋值
                     * 
                     */
                    bool MaxInstanceRequestConcurrencyHasBeenSet() const;

                private:

                    /**
                     * <p>活跃 Sandbox Instance 下限，必须大于等于 0。</p>
                     */
                    int64_t m_minInstanceCount;
                    bool m_minInstanceCountHasBeenSet;

                    /**
                     * <p>活跃 Sandbox Instance 上限，必须大于等于 1，并且不小于 MinInstanceCount。</p>
                     */
                    int64_t m_maxInstanceCount;
                    bool m_maxInstanceCountHasBeenSet;

                    /**
                     * <p>每个活跃 Sandbox Instance 同时持有的 Deployment 请求或连接 Lease 上限，必须大于等于 1。</p>
                     */
                    int64_t m_maxInstanceRequestConcurrency;
                    bool m_maxInstanceRequestConcurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SCALINGCONFIGURATION_H_
