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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITINSTANCEINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DeliverSummary.h>
#include <tencentcloud/postgres/v20170312/model/LogInstanceInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 审计实例信息
                */
                class AuditInstanceInfo : public AbstractModel
                {
                public:
                    AuditInstanceInfo();
                    ~AuditInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>开启状态</p><p>枚举值：</p><ul><li>OFF： 关闭</li><li>ON： 打开</li></ul>
                     * @return AuditStatus <p>开启状态</p><p>枚举值：</p><ul><li>OFF： 关闭</li><li>ON： 打开</li></ul>
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置<p>开启状态</p><p>枚举值：</p><ul><li>OFF： 关闭</li><li>ON： 打开</li></ul>
                     * @param _auditStatus <p>开启状态</p><p>枚举值：</p><ul><li>OFF： 关闭</li><li>ON： 打开</li></ul>
                     * 
                     */
                    void SetAuditStatus(const std::string& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取<p>日志存储有效期</p><p>单位：天</p>
                     * @return LogExpireDay <p>日志存储有效期</p><p>单位：天</p>
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>日志存储有效期</p><p>单位：天</p>
                     * @param _logExpireDay <p>日志存储有效期</p><p>单位：天</p>
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
                     * 获取<p>热存储有效期</p><p>单位：天</p>
                     * @return HotLogExpireDay <p>热存储有效期</p><p>单位：天</p>
                     * 
                     */
                    uint64_t GetHotLogExpireDay() const;

                    /**
                     * 设置<p>热存储有效期</p><p>单位：天</p>
                     * @param _hotLogExpireDay <p>热存储有效期</p><p>单位：天</p>
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
                     * 获取<p>冷存储有效期</p><p>单位：天</p>
                     * @return ColdLogExpireDay <p>冷存储有效期</p><p>单位：天</p>
                     * 
                     */
                    uint64_t GetColdLogExpireDay() const;

                    /**
                     * 设置<p>冷存储有效期</p><p>单位：天</p>
                     * @param _coldLogExpireDay <p>冷存储有效期</p><p>单位：天</p>
                     * 
                     */
                    void SetColdLogExpireDay(const uint64_t& _coldLogExpireDay);

                    /**
                     * 判断参数 ColdLogExpireDay 是否已赋值
                     * @return ColdLogExpireDay 是否已赋值
                     * 
                     */
                    bool ColdLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>热存储大小</p><p>单位：MB</p>
                     * @return HotLogSize <p>热存储大小</p><p>单位：MB</p>
                     * 
                     */
                    double GetHotLogSize() const;

                    /**
                     * 设置<p>热存储大小</p><p>单位：MB</p>
                     * @param _hotLogSize <p>热存储大小</p><p>单位：MB</p>
                     * 
                     */
                    void SetHotLogSize(const double& _hotLogSize);

                    /**
                     * 判断参数 HotLogSize 是否已赋值
                     * @return HotLogSize 是否已赋值
                     * 
                     */
                    bool HotLogSizeHasBeenSet() const;

                    /**
                     * 获取<p>冷存储大小</p><p>单位：MB</p>
                     * @return ColdLogSize <p>冷存储大小</p><p>单位：MB</p>
                     * 
                     */
                    double GetColdLogSize() const;

                    /**
                     * 设置<p>冷存储大小</p><p>单位：MB</p>
                     * @param _coldLogSize <p>冷存储大小</p><p>单位：MB</p>
                     * 
                     */
                    void SetColdLogSize(const double& _coldLogSize);

                    /**
                     * 判断参数 ColdLogSize 是否已赋值
                     * @return ColdLogSize 是否已赋值
                     * 
                     */
                    bool ColdLogSizeHasBeenSet() const;

                    /**
                     * 获取<p>开启时间</p>
                     * @return CreateTime <p>开启时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>开启时间</p>
                     * @param _createTime <p>开启时间</p>
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
                     * 获取<p>投递状态</p>
                     * @return Deliver <p>投递状态</p>
                     * 
                     */
                    std::string GetDeliver() const;

                    /**
                     * 设置<p>投递状态</p>
                     * @param _deliver <p>投递状态</p>
                     * 
                     */
                    void SetDeliver(const std::string& _deliver);

                    /**
                     * 判断参数 Deliver 是否已赋值
                     * @return Deliver 是否已赋值
                     * 
                     */
                    bool DeliverHasBeenSet() const;

                    /**
                     * 获取<p>投递信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverSummary <p>投递信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeliverSummary> GetDeliverSummary() const;

                    /**
                     * 设置<p>投递信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliverSummary <p>投递信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliverSummary(const std::vector<DeliverSummary>& _deliverSummary);

                    /**
                     * 判断参数 DeliverSummary 是否已赋值
                     * @return DeliverSummary 是否已赋值
                     * 
                     */
                    bool DeliverSummaryHasBeenSet() const;

                    /**
                     * 获取<p>实例信息</p>
                     * @return InstanceInfo <p>实例信息</p>
                     * 
                     */
                    LogInstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置<p>实例信息</p>
                     * @param _instanceInfo <p>实例信息</p>
                     * 
                     */
                    void SetInstanceInfo(const LogInstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>开启状态</p><p>枚举值：</p><ul><li>OFF： 关闭</li><li>ON： 打开</li></ul>
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * <p>日志存储有效期</p><p>单位：天</p>
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>热存储有效期</p><p>单位：天</p>
                     */
                    uint64_t m_hotLogExpireDay;
                    bool m_hotLogExpireDayHasBeenSet;

                    /**
                     * <p>冷存储有效期</p><p>单位：天</p>
                     */
                    uint64_t m_coldLogExpireDay;
                    bool m_coldLogExpireDayHasBeenSet;

                    /**
                     * <p>热存储大小</p><p>单位：MB</p>
                     */
                    double m_hotLogSize;
                    bool m_hotLogSizeHasBeenSet;

                    /**
                     * <p>冷存储大小</p><p>单位：MB</p>
                     */
                    double m_coldLogSize;
                    bool m_coldLogSizeHasBeenSet;

                    /**
                     * <p>开启时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>投递状态</p>
                     */
                    std::string m_deliver;
                    bool m_deliverHasBeenSet;

                    /**
                     * <p>投递信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeliverSummary> m_deliverSummary;
                    bool m_deliverSummaryHasBeenSet;

                    /**
                     * <p>实例信息</p>
                     */
                    LogInstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITINSTANCEINFO_H_
