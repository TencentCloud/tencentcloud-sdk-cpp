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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICBYGROUPREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICBYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetFlowStatisticByGroup请求参数结构体
                */
                class GetFlowStatisticByGroupRequest : public AbstractModel
                {
                public:
                    GetFlowStatisticByGroupRequest();
                    ~GetFlowStatisticByGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分组ID</p>
                     * @return GroupId <p>分组ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>分组ID</p>
                     * @param _groupId <p>分组ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>开始查找时间</p>
                     * @return BeginTime <p>开始查找时间</p>
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置<p>开始查找时间</p>
                     * @param _beginTime <p>开始查找时间</p>
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>截止时间</p>
                     * @return EndTime <p>截止时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>截止时间</p>
                     * @param _endTime <p>截止时间</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>流量种类（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     * @return Type <p>流量种类（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>流量种类（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     * @param _type <p>流量种类（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     * @return TimeGranularity <p>时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     * 
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置<p>时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     * @param _timeGranularity <p>时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     * 
                     */
                    void SetTimeGranularity(const int64_t& _timeGranularity);

                    /**
                     * 判断参数 TimeGranularity 是否已赋值
                     * @return TimeGranularity 是否已赋值
                     * 
                     */
                    bool TimeGranularityHasBeenSet() const;

                    /**
                     * 获取<p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     * @return AccessRegion <p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置<p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     * @param _accessRegion <p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     * 
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取<p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * @return GatewayType <p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * 
                     */
                    int64_t GetGatewayType() const;

                    /**
                     * 设置<p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * @param _gatewayType <p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * 
                     */
                    void SetGatewayType(const int64_t& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取<p>应用ID, 查询分组流量时无需使用。 查询应用流量时该字段为应用ID，GroupId 填写 &quot;-1&quot;</p>
                     * @return MpApplicationId <p>应用ID, 查询分组流量时无需使用。 查询应用流量时该字段为应用ID，GroupId 填写 &quot;-1&quot;</p>
                     * 
                     */
                    std::string GetMpApplicationId() const;

                    /**
                     * 设置<p>应用ID, 查询分组流量时无需使用。 查询应用流量时该字段为应用ID，GroupId 填写 &quot;-1&quot;</p>
                     * @param _mpApplicationId <p>应用ID, 查询分组流量时无需使用。 查询应用流量时该字段为应用ID，GroupId 填写 &quot;-1&quot;</p>
                     * 
                     */
                    void SetMpApplicationId(const std::string& _mpApplicationId);

                    /**
                     * 判断参数 MpApplicationId 是否已赋值
                     * @return MpApplicationId 是否已赋值
                     * 
                     */
                    bool MpApplicationIdHasBeenSet() const;

                private:

                    /**
                     * <p>分组ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>开始查找时间</p>
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>截止时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>流量种类（1：上行流量，2：下行流量， 3: 上下行总和）</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>时间粒度</p><p>枚举值：</p><ul><li>1： 按小时统计</li><li>2： 按天统计</li><li>3： 按分钟统计</li><li>4： 按5分钟统计</li></ul>
                     */
                    int64_t m_timeGranularity;
                    bool m_timeGranularityHasBeenSet;

                    /**
                     * <p>接入区域。取值范围：[&#39;MC&#39;,&#39;AP&#39;,&#39;EU&#39;,&#39;AM&#39;] MC=中国大陆 AP=亚太 EU=欧洲 AM=美洲。不填代表全量区域。</p>
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * <p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     */
                    int64_t m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * <p>应用ID, 查询分组流量时无需使用。 查询应用流量时该字段为应用ID，GroupId 填写 &quot;-1&quot;</p>
                     */
                    std::string m_mpApplicationId;
                    bool m_mpApplicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICBYGROUPREQUEST_H_
