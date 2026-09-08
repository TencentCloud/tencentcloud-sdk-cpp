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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEHTTPSERVICECACHEPURGETASKREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEHTTPSERVICECACHEPURGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeHTTPServiceCachePurgeTask请求参数结构体
                */
                class DescribeHTTPServiceCachePurgeTaskRequest : public AbstractModel
                {
                public:
                    DescribeHTTPServiceCachePurgeTaskRequest();
                    ~DescribeHTTPServiceCachePurgeTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>HTTPService域名</p>
                     * @return Domain <p>HTTPService域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>HTTPService域名</p>
                     * @param _domain <p>HTTPService域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     * @return CacheType <p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     * 
                     */
                    std::string GetCacheType() const;

                    /**
                     * 设置<p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     * @param _cacheType <p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     * 
                     */
                    void SetCacheType(const std::string& _cacheType);

                    /**
                     * 判断参数 CacheType 是否已赋值
                     * @return CacheType 是否已赋值
                     * 
                     */
                    bool CacheTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务id，PurgeHTTPServiceCache返回的TaskId，可选</p>
                     * @return TaskId <p>任务id，PurgeHTTPServiceCache返回的TaskId，可选</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id，PurgeHTTPServiceCache返回的TaskId，可选</p>
                     * @param _taskId <p>任务id，PurgeHTTPServiceCache返回的TaskId，可选</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>按刷新类型过滤</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     * @return PurgeType <p>按刷新类型过滤</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置<p>按刷新类型过滤</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     * @param _purgeType <p>按刷新类型过滤</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     * 
                     */
                    void SetPurgeType(const std::string& _purgeType);

                    /**
                     * 判断参数 PurgeType 是否已赋值
                     * @return PurgeType 是否已赋值
                     * 
                     */
                    bool PurgeTypeHasBeenSet() const;

                    /**
                     * 获取<p>查询开始时间，TaskId为空时，默认开始时间是7天前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * @return StartTime <p>查询开始时间，TaskId为空时，默认开始时间是7天前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间，TaskId为空时，默认开始时间是7天前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * @param _startTime <p>查询开始时间，TaskId为空时，默认开始时间是7天前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询结束时间，TaskId为空时，默认结束时间是当前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * @return EndTime <p>查询结束时间，TaskId为空时，默认结束时间是当前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，TaskId为空时，默认结束时间是当前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * @param _endTime <p>查询结束时间，TaskId为空时，默认结束时间是当前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量。默认 0</p>
                     * @return Offset <p>分页偏移量。默认 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量。默认 0</p>
                     * @param _offset <p>分页偏移量。默认 0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页限制。默认20，最大值1000</p>
                     * @return Limit <p>分页限制。默认20，最大值1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页限制。默认20，最大值1000</p>
                     * @param _limit <p>分页限制。默认20，最大值1000</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>HTTPService域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul><p>默认值：EO</p>
                     */
                    std::string m_cacheType;
                    bool m_cacheTypeHasBeenSet;

                    /**
                     * <p>任务id，PurgeHTTPServiceCache返回的TaskId，可选</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>按刷新类型过滤</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                    /**
                     * <p>查询开始时间，TaskId为空时，默认开始时间是7天前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，TaskId为空时，默认结束时间是当前</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>分页偏移量。默认 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页限制。默认20，最大值1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEHTTPSERVICECACHEPURGETASKREQUEST_H_
