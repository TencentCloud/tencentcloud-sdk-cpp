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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYAUDITSERVICEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYAUDITSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAuditService请求参数结构体
                */
                class ModifyAuditServiceRequest : public AbstractModel
                {
                public:
                    ModifyAuditServiceRequest();
                    ~ModifyAuditServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>日志保存时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     * @return LogExpireDay <p>日志保存时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>日志保存时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     * @param _logExpireDay <p>日志保存时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     * 
                     */
                    void SetLogExpireDay(const uint64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>高频存储时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     * @return HotLogExpireDay <p>高频存储时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     * 
                     */
                    uint64_t GetHotLogExpireDay() const;

                    /**
                     * 设置<p>高频存储时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     * @param _hotLogExpireDay <p>高频存储时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     * 
                     */
                    void SetHotLogExpireDay(const uint64_t& _hotLogExpireDay);

                    /**
                     * 判断参数 HotLogExpireDay 是否已赋值
                     * @return HotLogExpireDay 是否已赋值
                     * 
                     */
                    bool HotLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>审计类型</p><p>枚举值：</p><ul><li>complex： 精细审计，审计日志更全面，包含对象类型、对象等，开启后对性能有一定影响</li><li>simple： 极速审计，审计日志覆盖绝大多数字段，开启审计后对性能影响较小</li></ul>
                     * @return AuditType <p>审计类型</p><p>枚举值：</p><ul><li>complex： 精细审计，审计日志更全面，包含对象类型、对象等，开启后对性能有一定影响</li><li>simple： 极速审计，审计日志覆盖绝大多数字段，开启审计后对性能影响较小</li></ul>
                     * 
                     */
                    std::string GetAuditType() const;

                    /**
                     * 设置<p>审计类型</p><p>枚举值：</p><ul><li>complex： 精细审计，审计日志更全面，包含对象类型、对象等，开启后对性能有一定影响</li><li>simple： 极速审计，审计日志覆盖绝大多数字段，开启审计后对性能影响较小</li></ul>
                     * @param _auditType <p>审计类型</p><p>枚举值：</p><ul><li>complex： 精细审计，审计日志更全面，包含对象类型、对象等，开启后对性能有一定影响</li><li>simple： 极速审计，审计日志覆盖绝大多数字段，开启审计后对性能影响较小</li></ul>
                     * 
                     */
                    void SetAuditType(const std::string& _auditType);

                    /**
                     * 判断参数 AuditType 是否已赋值
                     * @return AuditType 是否已赋值
                     * 
                     */
                    bool AuditTypeHasBeenSet() const;

                    /**
                     * 获取<p>产品名称</p><p>入参限制：postgres</p>
                     * @return Product <p>产品名称</p><p>入参限制：postgres</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品名称</p><p>入参限制：postgres</p>
                     * @param _product <p>产品名称</p><p>入参限制：postgres</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志保存时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>高频存储时长（天）</p><p>枚举值：</p><ul><li>7： 7天</li><li>30： 30天</li><li>90： 90天</li><li>180： 180天</li><li>365： 365天</li><li>1095： 1095天</li><li>1825： 1825天</li></ul>
                     */
                    uint64_t m_hotLogExpireDay;
                    bool m_hotLogExpireDayHasBeenSet;

                    /**
                     * <p>审计类型</p><p>枚举值：</p><ul><li>complex： 精细审计，审计日志更全面，包含对象类型、对象等，开启后对性能有一定影响</li><li>simple： 极速审计，审计日志覆盖绝大多数字段，开启审计后对性能影响较小</li></ul>
                     */
                    std::string m_auditType;
                    bool m_auditTypeHasBeenSet;

                    /**
                     * <p>产品名称</p><p>入参限制：postgres</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYAUDITSERVICEREQUEST_H_
