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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCEQUOTADETAIL_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCEQUOTADETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus实例创建配额信息
                */
                class PrometheusInstanceQuotaDetail : public AbstractModel
                {
                public:
                    PrometheusInstanceQuotaDetail();
                    ~PrometheusInstanceQuotaDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>prometheus实例创建总限制数量</p>
                     * @return Limit <p>prometheus实例创建总限制数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>prometheus实例创建总限制数量</p>
                     * @param _limit <p>prometheus实例创建总限制数量</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>当前账号下创建prometheus实例数量</p>
                     * @return Usage <p>当前账号下创建prometheus实例数量</p>
                     * 
                     */
                    int64_t GetUsage() const;

                    /**
                     * 设置<p>当前账号下创建prometheus实例数量</p>
                     * @param _usage <p>当前账号下创建prometheus实例数量</p>
                     * 
                     */
                    void SetUsage(const int64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取<p>剩余可用prometheus实例创建数量</p>
                     * @return Available <p>剩余可用prometheus实例创建数量</p>
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置<p>剩余可用prometheus实例创建数量</p>
                     * @param _available <p>剩余可用prometheus实例创建数量</p>
                     * 
                     */
                    void SetAvailable(const int64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * <p>prometheus实例创建总限制数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>当前账号下创建prometheus实例数量</p>
                     */
                    int64_t m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * <p>剩余可用prometheus实例创建数量</p>
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCEQUOTADETAIL_H_
