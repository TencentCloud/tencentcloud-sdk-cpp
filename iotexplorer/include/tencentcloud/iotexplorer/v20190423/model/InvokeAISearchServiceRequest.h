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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEAISEARCHSERVICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEAISEARCHSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * InvokeAISearchService请求参数结构体
                */
                class InvokeAISearchServiceRequest : public AbstractModel
                {
                public:
                    InvokeAISearchServiceRequest();
                    ~InvokeAISearchServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductId <p>产品ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品ID</p>
                     * @param _productId <p>产品ID</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>自然语言查询</p>
                     * @return Query <p>自然语言查询</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>自然语言查询</p>
                     * @param _query <p>自然语言查询</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH</p>
                     * @return SummaryLang <p>搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH</p>
                     * 
                     */
                    std::string GetSummaryLang() const;

                    /**
                     * 设置<p>搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH</p>
                     * @param _summaryLang <p>搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH</p>
                     * 
                     */
                    void SetSummaryLang(const std::string& _summaryLang);

                    /**
                     * 判断参数 SummaryLang 是否已赋值
                     * @return SummaryLang 是否已赋值
                     * 
                     */
                    bool SummaryLangHasBeenSet() const;

                    /**
                     * 获取<p>通道ID</p>
                     * @return ChannelId <p>通道ID</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道ID</p>
                     * @param _channelId <p>通道ID</p>
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>是否需要返回总结，默认为True；  开启后会加大接口响应时长</p>
                     * @return EnableSummary <p>是否需要返回总结，默认为True；  开启后会加大接口响应时长</p>
                     * 
                     */
                    bool GetEnableSummary() const;

                    /**
                     * 设置<p>是否需要返回总结，默认为True；  开启后会加大接口响应时长</p>
                     * @param _enableSummary <p>是否需要返回总结，默认为True；  开启后会加大接口响应时长</p>
                     * 
                     */
                    void SetEnableSummary(const bool& _enableSummary);

                    /**
                     * 判断参数 EnableSummary 是否已赋值
                     * @return EnableSummary 是否已赋值
                     * 
                     */
                    bool EnableSummaryHasBeenSet() const;

                    /**
                     * 获取<p>开始时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     * @return StartTimeMs <p>开始时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     * 
                     */
                    int64_t GetStartTimeMs() const;

                    /**
                     * 设置<p>开始时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     * @param _startTimeMs <p>开始时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     * 
                     */
                    void SetStartTimeMs(const int64_t& _startTimeMs);

                    /**
                     * 判断参数 StartTimeMs 是否已赋值
                     * @return StartTimeMs 是否已赋值
                     * 
                     */
                    bool StartTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>结束时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     * @return EndTimeMs <p>结束时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     * 
                     */
                    int64_t GetEndTimeMs() const;

                    /**
                     * 设置<p>结束时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     * @param _endTimeMs <p>结束时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     * 
                     */
                    void SetEndTimeMs(const int64_t& _endTimeMs);

                    /**
                     * 判断参数 EndTimeMs 是否已赋值
                     * @return EndTimeMs 是否已赋值
                     * 
                     */
                    bool EndTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>时区。默认值：Asia/Shanghai</p><p>注：<br>符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok</p>
                     * @return TimeZone <p>时区。默认值：Asia/Shanghai</p><p>注：<br>符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>时区。默认值：Asia/Shanghai</p><p>注：<br>符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok</p>
                     * @param _timeZone <p>时区。默认值：Asia/Shanghai</p><p>注：<br>符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok</p>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>取值为1表示高级搜索，取值为2表示简单搜索，默认为1</p>
                     * @return SearchMode <p>取值为1表示高级搜索，取值为2表示简单搜索，默认为1</p>
                     * 
                     */
                    int64_t GetSearchMode() const;

                    /**
                     * 设置<p>取值为1表示高级搜索，取值为2表示简单搜索，默认为1</p>
                     * @param _searchMode <p>取值为1表示高级搜索，取值为2表示简单搜索，默认为1</p>
                     * 
                     */
                    void SetSearchMode(const int64_t& _searchMode);

                    /**
                     * 判断参数 SearchMode 是否已赋值
                     * @return SearchMode 是否已赋值
                     * 
                     */
                    bool SearchModeHasBeenSet() const;

                    /**
                     * 获取<p>最终输出的条数；仅当SearchMode为2时支持自定义设置，默认为50</p>
                     * @return Limit <p>最终输出的条数；仅当SearchMode为2时支持自定义设置，默认为50</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>最终输出的条数；仅当SearchMode为2时支持自定义设置，默认为50</p>
                     * @param _limit <p>最终输出的条数；仅当SearchMode为2时支持自定义设置，默认为50</p>
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
                     * 获取<p>向量搜索的相似度搜索半径，取值范围[-1, 1]；仅当SearchMode为2时支持自定义设置，默认为0.5</p>
                     * @return VectorSearchRadius <p>向量搜索的相似度搜索半径，取值范围[-1, 1]；仅当SearchMode为2时支持自定义设置，默认为0.5</p>
                     * 
                     */
                    double GetVectorSearchRadius() const;

                    /**
                     * 设置<p>向量搜索的相似度搜索半径，取值范围[-1, 1]；仅当SearchMode为2时支持自定义设置，默认为0.5</p>
                     * @param _vectorSearchRadius <p>向量搜索的相似度搜索半径，取值范围[-1, 1]；仅当SearchMode为2时支持自定义设置，默认为0.5</p>
                     * 
                     */
                    void SetVectorSearchRadius(const double& _vectorSearchRadius);

                    /**
                     * 判断参数 VectorSearchRadius 是否已赋值
                     * @return VectorSearchRadius 是否已赋值
                     * 
                     */
                    bool VectorSearchRadiusHasBeenSet() const;

                    /**
                     * 获取<p>指定向量搜索最相似的 Top K；仅当SearchMode为2时支持自定义设置，默认为100</p>
                     * @return VectorSearchTopK <p>指定向量搜索最相似的 Top K；仅当SearchMode为2时支持自定义设置，默认为100</p>
                     * 
                     */
                    int64_t GetVectorSearchTopK() const;

                    /**
                     * 设置<p>指定向量搜索最相似的 Top K；仅当SearchMode为2时支持自定义设置，默认为100</p>
                     * @param _vectorSearchTopK <p>指定向量搜索最相似的 Top K；仅当SearchMode为2时支持自定义设置，默认为100</p>
                     * 
                     */
                    void SetVectorSearchTopK(const int64_t& _vectorSearchTopK);

                    /**
                     * 判断参数 VectorSearchTopK 是否已赋值
                     * @return VectorSearchTopK 是否已赋值
                     * 
                     */
                    bool VectorSearchTopKHasBeenSet() const;

                    /**
                     * 获取<p>搜索结果的排序方式，可选值：</p><ul><li><code>CORRELATION</code>：按相关性（默认）</li><li><code>TIME_ASC</code>：按时间升序</li><li><code>TIME_DESC</code>：按时间降序</li></ul>
                     * @return Order <p>搜索结果的排序方式，可选值：</p><ul><li><code>CORRELATION</code>：按相关性（默认）</li><li><code>TIME_ASC</code>：按时间升序</li><li><code>TIME_DESC</code>：按时间降序</li></ul>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>搜索结果的排序方式，可选值：</p><ul><li><code>CORRELATION</code>：按相关性（默认）</li><li><code>TIME_ASC</code>：按时间升序</li><li><code>TIME_DESC</code>：按时间降序</li></ul>
                     * @param _order <p>搜索结果的排序方式，可选值：</p><ul><li><code>CORRELATION</code>：按相关性（默认）</li><li><code>TIME_ASC</code>：按时间升序</li><li><code>TIME_DESC</code>：按时间降序</li></ul>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * <p>产品ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>自然语言查询</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>搜索结果总结的语言类型，支持的类型有：en-US、zh-CN、id-ID、th-TH</p>
                     */
                    std::string m_summaryLang;
                    bool m_summaryLangHasBeenSet;

                    /**
                     * <p>通道ID</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>是否需要返回总结，默认为True；  开启后会加大接口响应时长</p>
                     */
                    bool m_enableSummary;
                    bool m_enableSummaryHasBeenSet;

                    /**
                     * <p>开始时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     */
                    int64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * <p>结束时间。</p><p>注：</p><ol><li>单位为毫秒（ms）</li><li>如果同时指定了StartTimeMs与EndTimeMs，时间区间不能大于7天；如果只指定其中一个（例如只指定StartTimeMs，则查询自StartTimeMs后1天内的数据， 反之EndTimeMs也一样）</li><li>只要指定了其中一个参数，接口则会忽略Query参数中关于时间的描述；（例如Query为&quot;过去三天关于猫咪的视频&quot;， 则会将&quot;过去三天忽略&quot;）</li></ol>
                     */
                    int64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * <p>时区。默认值：Asia/Shanghai</p><p>注：<br>符合iana标准 https://www.iana.org/time-zones，例如Asia/Shanghai、Asia/Bangkok</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>取值为1表示高级搜索，取值为2表示简单搜索，默认为1</p>
                     */
                    int64_t m_searchMode;
                    bool m_searchModeHasBeenSet;

                    /**
                     * <p>最终输出的条数；仅当SearchMode为2时支持自定义设置，默认为50</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>向量搜索的相似度搜索半径，取值范围[-1, 1]；仅当SearchMode为2时支持自定义设置，默认为0.5</p>
                     */
                    double m_vectorSearchRadius;
                    bool m_vectorSearchRadiusHasBeenSet;

                    /**
                     * <p>指定向量搜索最相似的 Top K；仅当SearchMode为2时支持自定义设置，默认为100</p>
                     */
                    int64_t m_vectorSearchTopK;
                    bool m_vectorSearchTopKHasBeenSet;

                    /**
                     * <p>搜索结果的排序方式，可选值：</p><ul><li><code>CORRELATION</code>：按相关性（默认）</li><li><code>TIME_ASC</code>：按时间升序</li><li><code>TIME_DESC</code>：按时间降序</li></ul>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEAISEARCHSERVICEREQUEST_H_
