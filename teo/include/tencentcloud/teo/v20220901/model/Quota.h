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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_QUOTA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_QUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 刷新/预热 可用量及配额
                */
                class Quota : public AbstractModel
                {
                public:
                    Quota();
                    ~Quota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单次批量提交配额上限。
                     * @return Batch 单次批量提交配额上限。
                     * 
                     */
                    int64_t GetBatch() const;

                    /**
                     * 设置单次批量提交配额上限。
                     * @param _batch 单次批量提交配额上限。
                     * 
                     */
                    void SetBatch(const int64_t& _batch);

                    /**
                     * 判断参数 Batch 是否已赋值
                     * @return Batch 是否已赋值
                     * 
                     */
                    bool BatchHasBeenSet() const;

                    /**
                     * 获取每日提交配额上限。
                     * @return Daily 每日提交配额上限。
                     * 
                     */
                    int64_t GetDaily() const;

                    /**
                     * 设置每日提交配额上限。
                     * @param _daily 每日提交配额上限。
                     * 
                     */
                    void SetDaily(const int64_t& _daily);

                    /**
                     * 判断参数 Daily 是否已赋值
                     * @return Daily 是否已赋值
                     * 
                     */
                    bool DailyHasBeenSet() const;

                    /**
                     * 获取每日剩余的可提交配额。
                     * @return DailyAvailable 每日剩余的可提交配额。
                     * 
                     */
                    int64_t GetDailyAvailable() const;

                    /**
                     * 设置每日剩余的可提交配额。
                     * @param _dailyAvailable 每日剩余的可提交配额。
                     * 
                     */
                    void SetDailyAvailable(const int64_t& _dailyAvailable);

                    /**
                     * 判断参数 DailyAvailable 是否已赋值
                     * @return DailyAvailable 是否已赋值
                     * 
                     */
                    bool DailyAvailableHasBeenSet() const;

                    /**
                     * 获取刷新预热缓存类型，取值有：
<li> purge_prefix：按前缀刷新；</li>
<li> purge_url：按URL刷新；</li>
<li> purge_host：按Hostname刷新；</li>
<li> purge_all：刷新全部缓存内容；</li>
<li> purge_cache_tag：按CacheTag刷新；</li><li> prefetch_url：按URL预热。</li>
                     * @return Type 刷新预热缓存类型，取值有：
<li> purge_prefix：按前缀刷新；</li>
<li> purge_url：按URL刷新；</li>
<li> purge_host：按Hostname刷新；</li>
<li> purge_all：刷新全部缓存内容；</li>
<li> purge_cache_tag：按CacheTag刷新；</li><li> prefetch_url：按URL预热。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置刷新预热缓存类型，取值有：
<li> purge_prefix：按前缀刷新；</li>
<li> purge_url：按URL刷新；</li>
<li> purge_host：按Hostname刷新；</li>
<li> purge_all：刷新全部缓存内容；</li>
<li> purge_cache_tag：按CacheTag刷新；</li><li> prefetch_url：按URL预热。</li>
                     * @param _type 刷新预热缓存类型，取值有：
<li> purge_prefix：按前缀刷新；</li>
<li> purge_url：按URL刷新；</li>
<li> purge_host：按Hostname刷新；</li>
<li> purge_all：刷新全部缓存内容；</li>
<li> purge_cache_tag：按CacheTag刷新；</li><li> prefetch_url：按URL预热。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 单次批量提交配额上限。
                     */
                    int64_t m_batch;
                    bool m_batchHasBeenSet;

                    /**
                     * 每日提交配额上限。
                     */
                    int64_t m_daily;
                    bool m_dailyHasBeenSet;

                    /**
                     * 每日剩余的可提交配额。
                     */
                    int64_t m_dailyAvailable;
                    bool m_dailyAvailableHasBeenSet;

                    /**
                     * 刷新预热缓存类型，取值有：
<li> purge_prefix：按前缀刷新；</li>
<li> purge_url：按URL刷新；</li>
<li> purge_host：按Hostname刷新；</li>
<li> purge_all：刷新全部缓存内容；</li>
<li> purge_cache_tag：按CacheTag刷新；</li><li> prefetch_url：按URL预热。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_QUOTA_H_
