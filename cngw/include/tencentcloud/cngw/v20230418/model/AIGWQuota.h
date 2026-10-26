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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWQUOTA_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI网关配额
                */
                class AIGWQuota : public AbstractModel
                {
                public:
                    AIGWQuota();
                    ~AIGWQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Id</p>
                     * @return Id <p>Id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Id</p>
                     * @param _id <p>Id</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p><p>枚举值：</p><ul><li>Consumer： 消费者</li></ul>
                     * @return ResourceType <p>资源类型</p><p>枚举值：</p><ul><li>Consumer： 消费者</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p><p>枚举值：</p><ul><li>Consumer： 消费者</li></ul>
                     * @param _resourceType <p>资源类型</p><p>枚举值：</p><ul><li>Consumer： 消费者</li></ul>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源 id</p>
                     * @return ResourceId <p>资源 id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源 id</p>
                     * @param _resourceId <p>资源 id</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>资源名字</p><p>如消费者名字</p>
                     * @return ResourceName <p>资源名字</p><p>如消费者名字</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>资源名字</p><p>如消费者名字</p>
                     * @param _resourceName <p>资源名字</p><p>如消费者名字</p>
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： 总 token</li><li>Cost： 成本</li></ul>
                     * @return QuotaType <p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： 总 token</li><li>Cost： 成本</li></ul>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置<p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： 总 token</li><li>Cost： 成本</li></ul>
                     * @param _quotaType <p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： 总 token</li><li>Cost： 成本</li></ul>
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取<p>配额周期单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
                     * @return PeriodUnit <p>配额周期单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
                     * 
                     */
                    std::string GetPeriodUnit() const;

                    /**
                     * 设置<p>配额周期单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
                     * @param _periodUnit <p>配额周期单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
                     * 
                     */
                    void SetPeriodUnit(const std::string& _periodUnit);

                    /**
                     * 判断参数 PeriodUnit 是否已赋值
                     * @return PeriodUnit 是否已赋值
                     * 
                     */
                    bool PeriodUnitHasBeenSet() const;

                    /**
                     * 获取<p>配额</p>
                     * @return QuotaLimit <p>配额</p>
                     * 
                     */
                    uint64_t GetQuotaLimit() const;

                    /**
                     * 设置<p>配额</p>
                     * @param _quotaLimit <p>配额</p>
                     * 
                     */
                    void SetQuotaLimit(const uint64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                    /**
                     * 获取<p>启用</p>
                     * @return Enabled <p>启用</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>启用</p>
                     * @param _enabled <p>启用</p>
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
                     * 获取<p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return CreateTime <p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _createTime <p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return ModifyTime <p>更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _modifyTime <p>更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>配额类型，手动配额还是默认配额</p>
                     * @return Source <p>配额类型，手动配额还是默认配额</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>配额类型，手动配额还是默认配额</p>
                     * @param _source <p>配额类型，手动配额还是默认配额</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝消费者请求</li><li>AllowOverage： 允许超限</li></ul>
                     * @return ExceedAction <p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝消费者请求</li><li>AllowOverage： 允许超限</li></ul>
                     * 
                     */
                    std::string GetExceedAction() const;

                    /**
                     * 设置<p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝消费者请求</li><li>AllowOverage： 允许超限</li></ul>
                     * @param _exceedAction <p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝消费者请求</li><li>AllowOverage： 允许超限</li></ul>
                     * 
                     */
                    void SetExceedAction(const std::string& _exceedAction);

                    /**
                     * 判断参数 ExceedAction 是否已赋值
                     * @return ExceedAction 是否已赋值
                     * 
                     */
                    bool ExceedActionHasBeenSet() const;

                    /**
                     * 获取<p>缓存是否计入限额</p><p>枚举值：</p><ul><li>Full： 全量计入</li><li>Exclude： 不计入网关缓存命中部分</li></ul>
                     * @return CacheHitStat <p>缓存是否计入限额</p><p>枚举值：</p><ul><li>Full： 全量计入</li><li>Exclude： 不计入网关缓存命中部分</li></ul>
                     * 
                     */
                    std::string GetCacheHitStat() const;

                    /**
                     * 设置<p>缓存是否计入限额</p><p>枚举值：</p><ul><li>Full： 全量计入</li><li>Exclude： 不计入网关缓存命中部分</li></ul>
                     * @param _cacheHitStat <p>缓存是否计入限额</p><p>枚举值：</p><ul><li>Full： 全量计入</li><li>Exclude： 不计入网关缓存命中部分</li></ul>
                     * 
                     */
                    void SetCacheHitStat(const std::string& _cacheHitStat);

                    /**
                     * 判断参数 CacheHitStat 是否已赋值
                     * @return CacheHitStat 是否已赋值
                     * 
                     */
                    bool CacheHitStatHasBeenSet() const;

                    /**
                     * 获取<p>超限百分比</p><p>默认值：0</p><p>Consumer 的超量百分比，指定模型服务配额默认为 0；ConsumerGroup 固定为 0。</p><p>举例：20，超出设置额度的20%，可用额度为（1+20%）*QuotaLimit。当SetExceedPercentage=true时，条件必选。</p>
                     * @return ExceedPercentage <p>超限百分比</p><p>默认值：0</p><p>Consumer 的超量百分比，指定模型服务配额默认为 0；ConsumerGroup 固定为 0。</p><p>举例：20，超出设置额度的20%，可用额度为（1+20%）*QuotaLimit。当SetExceedPercentage=true时，条件必选。</p>
                     * 
                     */
                    uint64_t GetExceedPercentage() const;

                    /**
                     * 设置<p>超限百分比</p><p>默认值：0</p><p>Consumer 的超量百分比，指定模型服务配额默认为 0；ConsumerGroup 固定为 0。</p><p>举例：20，超出设置额度的20%，可用额度为（1+20%）*QuotaLimit。当SetExceedPercentage=true时，条件必选。</p>
                     * @param _exceedPercentage <p>超限百分比</p><p>默认值：0</p><p>Consumer 的超量百分比，指定模型服务配额默认为 0；ConsumerGroup 固定为 0。</p><p>举例：20，超出设置额度的20%，可用额度为（1+20%）*QuotaLimit。当SetExceedPercentage=true时，条件必选。</p>
                     * 
                     */
                    void SetExceedPercentage(const uint64_t& _exceedPercentage);

                    /**
                     * 判断参数 ExceedPercentage 是否已赋值
                     * @return ExceedPercentage 是否已赋值
                     * 
                     */
                    bool ExceedPercentageHasBeenSet() const;

                    /**
                     * 获取<p>是否设置超限百分比</p><p>仅 Consumer 的 AllowOverage 场景可用，指定模型服务的配额必须为 false；ConsumerGroup 必须为 false。</p><p>枚举值：</p><ul><li>true： 设置超限百分比</li><li>false： 不设置超限百分比，即不设上限</li></ul><p>默认值：false</p><p>当ExceedAction=AllowOverage时，条件必选。</p>
                     * @return SetExceedPercentage <p>是否设置超限百分比</p><p>仅 Consumer 的 AllowOverage 场景可用，指定模型服务的配额必须为 false；ConsumerGroup 必须为 false。</p><p>枚举值：</p><ul><li>true： 设置超限百分比</li><li>false： 不设置超限百分比，即不设上限</li></ul><p>默认值：false</p><p>当ExceedAction=AllowOverage时，条件必选。</p>
                     * 
                     */
                    bool GetSetExceedPercentage() const;

                    /**
                     * 设置<p>是否设置超限百分比</p><p>仅 Consumer 的 AllowOverage 场景可用，指定模型服务的配额必须为 false；ConsumerGroup 必须为 false。</p><p>枚举值：</p><ul><li>true： 设置超限百分比</li><li>false： 不设置超限百分比，即不设上限</li></ul><p>默认值：false</p><p>当ExceedAction=AllowOverage时，条件必选。</p>
                     * @param _setExceedPercentage <p>是否设置超限百分比</p><p>仅 Consumer 的 AllowOverage 场景可用，指定模型服务的配额必须为 false；ConsumerGroup 必须为 false。</p><p>枚举值：</p><ul><li>true： 设置超限百分比</li><li>false： 不设置超限百分比，即不设上限</li></ul><p>默认值：false</p><p>当ExceedAction=AllowOverage时，条件必选。</p>
                     * 
                     */
                    void SetSetExceedPercentage(const bool& _setExceedPercentage);

                    /**
                     * 判断参数 SetExceedPercentage 是否已赋值
                     * @return SetExceedPercentage 是否已赋值
                     * 
                     */
                    bool SetExceedPercentageHasBeenSet() const;

                    /**
                     * 获取<p>Consumer粒度某资源对象的配额范围，支持：全部模型服务（all）、指定模型服务（specified）</p><p>枚举值：</p><ul><li>All： 全部</li><li>Specified： 指定</li></ul><p>默认值：All</p>
                     * @return Scope <p>Consumer粒度某资源对象的配额范围，支持：全部模型服务（all）、指定模型服务（specified）</p><p>枚举值：</p><ul><li>All： 全部</li><li>Specified： 指定</li></ul><p>默认值：All</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>Consumer粒度某资源对象的配额范围，支持：全部模型服务（all）、指定模型服务（specified）</p><p>枚举值：</p><ul><li>All： 全部</li><li>Specified： 指定</li></ul><p>默认值：All</p>
                     * @param _scope <p>Consumer粒度某资源对象的配额范围，支持：全部模型服务（all）、指定模型服务（specified）</p><p>枚举值：</p><ul><li>All： 全部</li><li>Specified： 指定</li></ul><p>默认值：All</p>
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Consumer粒度配额的资源类型，如“模型服务”</p><p>枚举值：</p><ul><li>ModelService： 模型服务</li></ul><p>默认值：ModelService</p>
                     * @return SubResourceType <p>Consumer粒度配额的资源类型，如“模型服务”</p><p>枚举值：</p><ul><li>ModelService： 模型服务</li></ul><p>默认值：ModelService</p>
                     * 
                     */
                    std::string GetSubResourceType() const;

                    /**
                     * 设置<p>Consumer粒度配额的资源类型，如“模型服务”</p><p>枚举值：</p><ul><li>ModelService： 模型服务</li></ul><p>默认值：ModelService</p>
                     * @param _subResourceType <p>Consumer粒度配额的资源类型，如“模型服务”</p><p>枚举值：</p><ul><li>ModelService： 模型服务</li></ul><p>默认值：ModelService</p>
                     * 
                     */
                    void SetSubResourceType(const std::string& _subResourceType);

                    /**
                     * 判断参数 SubResourceType 是否已赋值
                     * @return SubResourceType 是否已赋值
                     * 
                     */
                    bool SubResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Consumer粒度配额若支持指定子资源配额，则该项为子资源配额个数</p>
                     * @return SubResourceCount <p>Consumer粒度配额若支持指定子资源配额，则该项为子资源配额个数</p>
                     * 
                     */
                    int64_t GetSubResourceCount() const;

                    /**
                     * 设置<p>Consumer粒度配额若支持指定子资源配额，则该项为子资源配额个数</p>
                     * @param _subResourceCount <p>Consumer粒度配额若支持指定子资源配额，则该项为子资源配额个数</p>
                     * 
                     */
                    void SetSubResourceCount(const int64_t& _subResourceCount);

                    /**
                     * 判断参数 SubResourceCount 是否已赋值
                     * @return SubResourceCount 是否已赋值
                     * 
                     */
                    bool SubResourceCountHasBeenSet() const;

                    /**
                     * 获取<p>消费者组完整层级路径。仅 ResourceType=ConsumerGroup 返回，未知时为空字符串；Consumer 行省略。</p>
                     * @return ConsumerGroupPath <p>消费者组完整层级路径。仅 ResourceType=ConsumerGroup 返回，未知时为空字符串；Consumer 行省略。</p>
                     * 
                     */
                    std::string GetConsumerGroupPath() const;

                    /**
                     * 设置<p>消费者组完整层级路径。仅 ResourceType=ConsumerGroup 返回，未知时为空字符串；Consumer 行省略。</p>
                     * @param _consumerGroupPath <p>消费者组完整层级路径。仅 ResourceType=ConsumerGroup 返回，未知时为空字符串；Consumer 行省略。</p>
                     * 
                     */
                    void SetConsumerGroupPath(const std::string& _consumerGroupPath);

                    /**
                     * 判断参数 ConsumerGroupPath 是否已赋值
                     * @return ConsumerGroupPath 是否已赋值
                     * 
                     */
                    bool ConsumerGroupPathHasBeenSet() const;

                    /**
                     * 获取<p>消费者组是否有效。仅 ResourceType=ConsumerGroup 返回；组不存在或非 active 时为 false。与配额规则 Enabled 区分，字段省略与 false 含义不同。</p>
                     * @return ConsumerGroupActive <p>消费者组是否有效。仅 ResourceType=ConsumerGroup 返回；组不存在或非 active 时为 false。与配额规则 Enabled 区分，字段省略与 false 含义不同。</p>
                     * 
                     */
                    bool GetConsumerGroupActive() const;

                    /**
                     * 设置<p>消费者组是否有效。仅 ResourceType=ConsumerGroup 返回；组不存在或非 active 时为 false。与配额规则 Enabled 区分，字段省略与 false 含义不同。</p>
                     * @param _consumerGroupActive <p>消费者组是否有效。仅 ResourceType=ConsumerGroup 返回；组不存在或非 active 时为 false。与配额规则 Enabled 区分，字段省略与 false 含义不同。</p>
                     * 
                     */
                    void SetConsumerGroupActive(const bool& _consumerGroupActive);

                    /**
                     * 判断参数 ConsumerGroupActive 是否已赋值
                     * @return ConsumerGroupActive 是否已赋值
                     * 
                     */
                    bool ConsumerGroupActiveHasBeenSet() const;

                    /**
                     * 获取<p>兼容用量字段。Cost 为向下取整的整数元；TotalToken 单位为 token；RequestCount 单位为次。精确显示优先使用 UsedExact。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * @return Used <p>兼容用量字段。Cost 为向下取整的整数元；TotalToken 单位为 token；RequestCount 单位为次。精确显示优先使用 UsedExact。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 设置<p>兼容用量字段。Cost 为向下取整的整数元；TotalToken 单位为 token；RequestCount 单位为次。精确显示优先使用 UsedExact。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * @param _used <p>兼容用量字段。Cost 为向下取整的整数元；TotalToken 单位为 token；RequestCount 单位为次。精确显示优先使用 UsedExact。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * 
                     */
                    void SetUsed(const int64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取<p>精确使用量。Cost 单位为元，保留 1e-7 元精度；TotalToken 单位为 token；RequestCount 单位为次。旧版插件不提供精确值时省略，调用方可回退使用 Used；该值已换算为业务单位，不要再除以 ValueScale。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedExact <p>精确使用量。Cost 单位为元，保留 1e-7 元精度；TotalToken 单位为 token；RequestCount 单位为次。旧版插件不提供精确值时省略，调用方可回退使用 Used；该值已换算为业务单位，不要再除以 ValueScale。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUsedExact() const;

                    /**
                     * 设置<p>精确使用量。Cost 单位为元，保留 1e-7 元精度；TotalToken 单位为 token；RequestCount 单位为次。旧版插件不提供精确值时省略，调用方可回退使用 Used；该值已换算为业务单位，不要再除以 ValueScale。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedExact <p>精确使用量。Cost 单位为元，保留 1e-7 元精度；TotalToken 单位为 token；RequestCount 单位为次。旧版插件不提供精确值时省略，调用方可回退使用 Used；该值已换算为业务单位，不要再除以 ValueScale。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedExact(const double& _usedExact);

                    /**
                     * 判断参数 UsedExact 是否已赋值
                     * @return UsedExact 是否已赋值
                     * 
                     */
                    bool UsedExactHasBeenSet() const;

                    /**
                     * 获取<p>使用率</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * @return UsageRate <p>使用率</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * 
                     */
                    double GetUsageRate() const;

                    /**
                     * 设置<p>使用率</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * @param _usageRate <p>使用率</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * 
                     */
                    void SetUsageRate(const double& _usageRate);

                    /**
                     * 判断参数 UsageRate 是否已赋值
                     * @return UsageRate 是否已赋值
                     * 
                     */
                    bool UsageRateHasBeenSet() const;

                    /**
                     * 获取<p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * @return AlarmLevel <p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * 
                     */
                    std::string GetAlarmLevel() const;

                    /**
                     * 设置<p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * @param _alarmLevel <p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     * 
                     */
                    void SetAlarmLevel(const std::string& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取<p>关联消费者密钥数量。ConsumerGroup 规则固定为 0。</p>
                     * @return SecretKeyCount <p>关联消费者密钥数量。ConsumerGroup 规则固定为 0。</p>
                     * 
                     */
                    int64_t GetSecretKeyCount() const;

                    /**
                     * 设置<p>关联消费者密钥数量。ConsumerGroup 规则固定为 0。</p>
                     * @param _secretKeyCount <p>关联消费者密钥数量。ConsumerGroup 规则固定为 0。</p>
                     * 
                     */
                    void SetSecretKeyCount(const int64_t& _secretKeyCount);

                    /**
                     * 判断参数 SecretKeyCount 是否已赋值
                     * @return SecretKeyCount 是否已赋值
                     * 
                     */
                    bool SecretKeyCountHasBeenSet() const;

                private:

                    /**
                     * <p>Id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>Consumer： 消费者</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源 id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源名字</p><p>如消费者名字</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： 总 token</li><li>Cost： 成本</li></ul>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * <p>配额周期单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
                     */
                    std::string m_periodUnit;
                    bool m_periodUnitHasBeenSet;

                    /**
                     * <p>配额</p>
                     */
                    uint64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                    /**
                     * <p>启用</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>配额类型，手动配额还是默认配额</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝消费者请求</li><li>AllowOverage： 允许超限</li></ul>
                     */
                    std::string m_exceedAction;
                    bool m_exceedActionHasBeenSet;

                    /**
                     * <p>缓存是否计入限额</p><p>枚举值：</p><ul><li>Full： 全量计入</li><li>Exclude： 不计入网关缓存命中部分</li></ul>
                     */
                    std::string m_cacheHitStat;
                    bool m_cacheHitStatHasBeenSet;

                    /**
                     * <p>超限百分比</p><p>默认值：0</p><p>Consumer 的超量百分比，指定模型服务配额默认为 0；ConsumerGroup 固定为 0。</p><p>举例：20，超出设置额度的20%，可用额度为（1+20%）*QuotaLimit。当SetExceedPercentage=true时，条件必选。</p>
                     */
                    uint64_t m_exceedPercentage;
                    bool m_exceedPercentageHasBeenSet;

                    /**
                     * <p>是否设置超限百分比</p><p>仅 Consumer 的 AllowOverage 场景可用，指定模型服务的配额必须为 false；ConsumerGroup 必须为 false。</p><p>枚举值：</p><ul><li>true： 设置超限百分比</li><li>false： 不设置超限百分比，即不设上限</li></ul><p>默认值：false</p><p>当ExceedAction=AllowOverage时，条件必选。</p>
                     */
                    bool m_setExceedPercentage;
                    bool m_setExceedPercentageHasBeenSet;

                    /**
                     * <p>Consumer粒度某资源对象的配额范围，支持：全部模型服务（all）、指定模型服务（specified）</p><p>枚举值：</p><ul><li>All： 全部</li><li>Specified： 指定</li></ul><p>默认值：All</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Consumer粒度配额的资源类型，如“模型服务”</p><p>枚举值：</p><ul><li>ModelService： 模型服务</li></ul><p>默认值：ModelService</p>
                     */
                    std::string m_subResourceType;
                    bool m_subResourceTypeHasBeenSet;

                    /**
                     * <p>Consumer粒度配额若支持指定子资源配额，则该项为子资源配额个数</p>
                     */
                    int64_t m_subResourceCount;
                    bool m_subResourceCountHasBeenSet;

                    /**
                     * <p>消费者组完整层级路径。仅 ResourceType=ConsumerGroup 返回，未知时为空字符串；Consumer 行省略。</p>
                     */
                    std::string m_consumerGroupPath;
                    bool m_consumerGroupPathHasBeenSet;

                    /**
                     * <p>消费者组是否有效。仅 ResourceType=ConsumerGroup 返回；组不存在或非 active 时为 false。与配额规则 Enabled 区分，字段省略与 false 含义不同。</p>
                     */
                    bool m_consumerGroupActive;
                    bool m_consumerGroupActiveHasBeenSet;

                    /**
                     * <p>兼容用量字段。Cost 为向下取整的整数元；TotalToken 单位为 token；RequestCount 单位为次。精确显示优先使用 UsedExact。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * <p>精确使用量。Cost 单位为元，保留 1e-7 元精度；TotalToken 单位为 token；RequestCount 单位为次。旧版插件不提供精确值时省略，调用方可回退使用 Used；该值已换算为业务单位，不要再除以 ValueScale。</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_usedExact;
                    bool m_usedExactHasBeenSet;

                    /**
                     * <p>使用率</p> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     */
                    double m_usageRate;
                    bool m_usageRateHasBeenSet;

                    /**
                     * <p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul> 仅支持用量查询的实际规则返回；旧 Consumer 网关和 DefaultPolicy 模板可省略。
                     */
                    std::string m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * <p>关联消费者密钥数量。ConsumerGroup 规则固定为 0。</p>
                     */
                    int64_t m_secretKeyCount;
                    bool m_secretKeyCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWQUOTA_H_
