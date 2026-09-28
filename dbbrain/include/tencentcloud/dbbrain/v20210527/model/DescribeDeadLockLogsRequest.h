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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDEADLOCKLOGSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDEADLOCKLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDeadLockLogs请求参数结构体
                */
                class DescribeDeadLockLogsRequest : public AbstractModel
                {
                public:
                    DescribeDeadLockLogsRequest();
                    ~DescribeDeadLockLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
                     * @return Product <p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
                     * @param _product <p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID。SQLServer: mssql-xxxx。</p>
                     * @return InstanceId <p>实例 ID。SQLServer: mssql-xxxx。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。SQLServer: mssql-xxxx。</p>
                     * @param _instanceId <p>实例 ID。SQLServer: mssql-xxxx。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>查询开始时间，格式 yyyy-MM-dd HH:mm:ss，按 UTC+8 解析；也兼容带偏移的 ISO-8601（如 2026-09-16T00:00:00+08:00）。半开区间左闭。</p><p>参数格式：2026-09-16 00:00:00</p>
                     * @return StartTime <p>查询开始时间，格式 yyyy-MM-dd HH:mm:ss，按 UTC+8 解析；也兼容带偏移的 ISO-8601（如 2026-09-16T00:00:00+08:00）。半开区间左闭。</p><p>参数格式：2026-09-16 00:00:00</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间，格式 yyyy-MM-dd HH:mm:ss，按 UTC+8 解析；也兼容带偏移的 ISO-8601（如 2026-09-16T00:00:00+08:00）。半开区间左闭。</p><p>参数格式：2026-09-16 00:00:00</p>
                     * @param _startTime <p>查询开始时间，格式 yyyy-MM-dd HH:mm:ss，按 UTC+8 解析；也兼容带偏移的 ISO-8601（如 2026-09-16T00:00:00+08:00）。半开区间左闭。</p><p>参数格式：2026-09-16 00:00:00</p>
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
                     * 获取<p>查询结束时间，格式同 StartTime。EndTime 必须大于 StartTime，且总查询窗口不超过 24 小时。半开区间右开。</p><p>参数格式：2026-09-16 23:59:59</p>
                     * @return EndTime <p>查询结束时间，格式同 StartTime。EndTime 必须大于 StartTime，且总查询窗口不超过 24 小时。半开区间右开。</p><p>参数格式：2026-09-16 23:59:59</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，格式同 StartTime。EndTime 必须大于 StartTime，且总查询窗口不超过 24 小时。半开区间右开。</p><p>参数格式：2026-09-16 23:59:59</p>
                     * @param _endTime <p>查询结束时间，格式同 StartTime。EndTime 必须大于 StartTime，且总查询窗口不超过 24 小时。半开区间右开。</p><p>参数格式：2026-09-16 23:59:59</p>
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
                     * 获取<p>分页偏移量，非负整数，默认 0。当 Offset&gt;0 时必须同时传入 ResultVersion，否则报 INVALID_PARAMETER。</p>
                     * @return Offset <p>分页偏移量，非负整数，默认 0。当 Offset&gt;0 时必须同时传入 ResultVersion，否则报 INVALID_PARAMETER。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，非负整数，默认 0。当 Offset&gt;0 时必须同时传入 ResultVersion，否则报 INVALID_PARAMETER。</p>
                     * @param _offset <p>分页偏移量，非负整数，默认 0。当 Offset&gt;0 时必须同时传入 ResultVersion，否则报 INVALID_PARAMETER。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>单页返回死锁事件数量，范围 [1, 100]。默认 20。</p>
                     * @return Limit <p>单页返回死锁事件数量，范围 [1, 100]。默认 20。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页返回死锁事件数量，范围 [1, 100]。默认 20。</p>
                     * @param _limit <p>单页返回死锁事件数量，范围 [1, 100]。默认 20。</p>
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
                     * 获取<p>是否在响应中包含原始死锁图 XML（XmlReport）。默认 false，避免响应体过大。仅在需要绘制完整死锁环时置 true。</p>
                     * @return IncludeXml <p>是否在响应中包含原始死锁图 XML（XmlReport）。默认 false，避免响应体过大。仅在需要绘制完整死锁环时置 true。</p>
                     * 
                     */
                    bool GetIncludeXml() const;

                    /**
                     * 设置<p>是否在响应中包含原始死锁图 XML（XmlReport）。默认 false，避免响应体过大。仅在需要绘制完整死锁环时置 true。</p>
                     * @param _includeXml <p>是否在响应中包含原始死锁图 XML（XmlReport）。默认 false，避免响应体过大。仅在需要绘制完整死锁环时置 true。</p>
                     * 
                     */
                    void SetIncludeXml(const bool& _includeXml);

                    /**
                     * 判断参数 IncludeXml 是否已赋值
                     * @return IncludeXml 是否已赋值
                     * 
                     */
                    bool IncludeXmlHasBeenSet() const;

                    /**
                     * 获取<p>结果集版本号，最大 128 字符。首次查询无需传入；翻页时必须透传首次响应中的 ResultVersion，服务端会校验结果集是否发生变化，变化时返回 RESULT_CHANGED 提示重新拉取首页。</p>
                     * @return ResultVersion <p>结果集版本号，最大 128 字符。首次查询无需传入；翻页时必须透传首次响应中的 ResultVersion，服务端会校验结果集是否发生变化，变化时返回 RESULT_CHANGED 提示重新拉取首页。</p>
                     * 
                     */
                    std::string GetResultVersion() const;

                    /**
                     * 设置<p>结果集版本号，最大 128 字符。首次查询无需传入；翻页时必须透传首次响应中的 ResultVersion，服务端会校验结果集是否发生变化，变化时返回 RESULT_CHANGED 提示重新拉取首页。</p>
                     * @param _resultVersion <p>结果集版本号，最大 128 字符。首次查询无需传入；翻页时必须透传首次响应中的 ResultVersion，服务端会校验结果集是否发生变化，变化时返回 RESULT_CHANGED 提示重新拉取首页。</p>
                     * 
                     */
                    void SetResultVersion(const std::string& _resultVersion);

                    /**
                     * 判断参数 ResultVersion 是否已赋值
                     * @return ResultVersion 是否已赋值
                     * 
                     */
                    bool ResultVersionHasBeenSet() const;

                private:

                    /**
                     * <p>服务产品类型。取值：sqlserver（云数据库 Sqlserver）。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>实例 ID。SQLServer: mssql-xxxx。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>查询开始时间，格式 yyyy-MM-dd HH:mm:ss，按 UTC+8 解析；也兼容带偏移的 ISO-8601（如 2026-09-16T00:00:00+08:00）。半开区间左闭。</p><p>参数格式：2026-09-16 00:00:00</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，格式同 StartTime。EndTime 必须大于 StartTime，且总查询窗口不超过 24 小时。半开区间右开。</p><p>参数格式：2026-09-16 23:59:59</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>分页偏移量，非负整数，默认 0。当 Offset&gt;0 时必须同时传入 ResultVersion，否则报 INVALID_PARAMETER。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单页返回死锁事件数量，范围 [1, 100]。默认 20。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>是否在响应中包含原始死锁图 XML（XmlReport）。默认 false，避免响应体过大。仅在需要绘制完整死锁环时置 true。</p>
                     */
                    bool m_includeXml;
                    bool m_includeXmlHasBeenSet;

                    /**
                     * <p>结果集版本号，最大 128 字符。首次查询无需传入；翻页时必须透传首次响应中的 ResultVersion，服务端会校验结果集是否发生变化，变化时返回 RESULT_CHANGED 提示重新拉取首页。</p>
                     */
                    std::string m_resultVersion;
                    bool m_resultVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDEADLOCKLOGSREQUEST_H_
