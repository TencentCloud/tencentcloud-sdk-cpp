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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWQUOTADETAIL_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWQUOTADETAIL_H_

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
                * AI 网关配额详情
                */
                class AIGWQuotaDetail : public AbstractModel
                {
                public:
                    AIGWQuotaDetail();
                    ~AIGWQuotaDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>id</p>
                     * @return Id <p>id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>id</p>
                     * @param _id <p>id</p>
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
                     * 获取<p>资源id</p>
                     * @return ResourceId <p>资源id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源id</p>
                     * @param _resourceId <p>资源id</p>
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
                     * 获取<p>资源名字</p>
                     * @return ResourceName <p>资源名字</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>资源名字</p>
                     * @param _resourceName <p>资源名字</p>
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
                     * 获取<p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： token总数</li><li>Cost： 成本</li></ul>
                     * @return QuotaType <p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： token总数</li><li>Cost： 成本</li></ul>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置<p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： token总数</li><li>Cost： 成本</li></ul>
                     * @param _quotaType <p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： token总数</li><li>Cost： 成本</li></ul>
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
                     * 获取<p>配额单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
                     * @return PeriodUnit <p>配额单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
                     * 
                     */
                    std::string GetPeriodUnit() const;

                    /**
                     * 设置<p>配额单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
                     * @param _periodUnit <p>配额单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
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
                     * 获取<p>配额</p><p>如果是成本则数值单位是分，如 1000 表示 10.00 元</p>
                     * @return QuotaLimit <p>配额</p><p>如果是成本则数值单位是分，如 1000 表示 10.00 元</p>
                     * 
                     */
                    int64_t GetQuotaLimit() const;

                    /**
                     * 设置<p>配额</p><p>如果是成本则数值单位是分，如 1000 表示 10.00 元</p>
                     * @param _quotaLimit <p>配额</p><p>如果是成本则数值单位是分，如 1000 表示 10.00 元</p>
                     * 
                     */
                    void SetQuotaLimit(const int64_t& _quotaLimit);

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
                     * 获取<p>用量</p>
                     * @return Used <p>用量</p>
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 设置<p>用量</p>
                     * @param _used <p>用量</p>
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
                     * 获取<p>使用率</p>
                     * @return UsageRate <p>使用率</p>
                     * 
                     */
                    double GetUsageRate() const;

                    /**
                     * 设置<p>使用率</p>
                     * @param _usageRate <p>使用率</p>
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
                     * 获取<p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
                     * @return AlarmLevel <p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
                     * 
                     */
                    std::string GetAlarmLevel() const;

                    /**
                     * 设置<p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
                     * @param _alarmLevel <p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
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
                     * 获取<p>配额规则来源</p><p>枚举值：</p><ul><li>Manual： 手动配置</li><li>Default： 默认配额</li></ul>
                     * @return Source <p>配额规则来源</p><p>枚举值：</p><ul><li>Manual： 手动配置</li><li>Default： 默认配额</li></ul>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>配额规则来源</p><p>枚举值：</p><ul><li>Manual： 手动配置</li><li>Default： 默认配额</li></ul>
                     * @param _source <p>配额规则来源</p><p>枚举值：</p><ul><li>Manual： 手动配置</li><li>Default： 默认配额</li></ul>
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
                     * 获取<p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝请求</li><li>AllowOverage： 允许超支</li></ul>
                     * @return ExceedAction <p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝请求</li><li>AllowOverage： 允许超支</li></ul>
                     * 
                     */
                    std::string GetExceedAction() const;

                    /**
                     * 设置<p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝请求</li><li>AllowOverage： 允许超支</li></ul>
                     * @param _exceedAction <p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝请求</li><li>AllowOverage： 允许超支</li></ul>
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
                     * 获取<p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime <p>更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime <p>更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
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

                private:

                    /**
                     * <p>id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>Consumer： 消费者</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源名字</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>配额类型</p><p>枚举值：</p><ul><li>RequestCount： 请求数</li><li>TotalToken： token总数</li><li>Cost： 成本</li></ul>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * <p>配额单位</p><p>枚举值：</p><ul><li>Day： 天</li><li>Week： 周</li><li>Month： 月</li></ul>
                     */
                    std::string m_periodUnit;
                    bool m_periodUnitHasBeenSet;

                    /**
                     * <p>配额</p><p>如果是成本则数值单位是分，如 1000 表示 10.00 元</p>
                     */
                    int64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                    /**
                     * <p>启用</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>用量</p>
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * <p>使用率</p>
                     */
                    double m_usageRate;
                    bool m_usageRateHasBeenSet;

                    /**
                     * <p>预警级别</p><p>枚举值：</p><ul><li>Normal： 正常</li><li>Warning： 预警</li><li>NearLimit： 临近超限</li><li>Exceeded： 超限</li></ul>
                     */
                    std::string m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * <p>配额规则来源</p><p>枚举值：</p><ul><li>Manual： 手动配置</li><li>Default： 默认配额</li></ul>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>配额超限行为</p><p>枚举值：</p><ul><li>Reject： 拒绝请求</li><li>AllowOverage： 允许超支</li></ul>
                     */
                    std::string m_exceedAction;
                    bool m_exceedActionHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>缓存是否计入限额</p><p>枚举值：</p><ul><li>Full： 全量计入</li><li>Exclude： 不计入网关缓存命中部分</li></ul>
                     */
                    std::string m_cacheHitStat;
                    bool m_cacheHitStatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWQUOTADETAIL_H_
