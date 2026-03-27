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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_LOGINSTANCE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_LOGINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/DeliverSummary.h>
#include <tencentcloud/redis/v20180412/model/InstanceInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例
                */
                class LogInstance : public AbstractModel
                {
                public:
                    LogInstance();
                    ~LogInstance() = default;
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
                     * 获取<p>日志状态，create：创建中；normal：开启；close：关闭中。</p>
                     * @return Status <p>日志状态，create：创建中；normal：开启；close：关闭中。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>日志状态，create：创建中；normal：开启；close：关闭中。</p>
                     * @param _status <p>日志状态，create：创建中；normal：开启；close：关闭中。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。</p>
                     * @return EnableQuery <p>是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。</p>
                     * 
                     */
                    std::string GetEnableQuery() const;

                    /**
                     * 设置<p>是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。</p>
                     * @param _enableQuery <p>是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。</p>
                     * 
                     */
                    void SetEnableQuery(const std::string& _enableQuery);

                    /**
                     * 判断参数 EnableQuery 是否已赋值
                     * @return EnableQuery 是否已赋值
                     * 
                     */
                    bool EnableQueryHasBeenSet() const;

                    /**
                     * 获取<p>开启时间</p>
                     * @return CreateAt <p>开启时间</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>开启时间</p>
                     * @param _createAt <p>开启时间</p>
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取<p>高频存储天数</p>
                     * @return HighLogExpireDay <p>高频存储天数</p>
                     * 
                     */
                    int64_t GetHighLogExpireDay() const;

                    /**
                     * 设置<p>高频存储天数</p>
                     * @param _highLogExpireDay <p>高频存储天数</p>
                     * 
                     */
                    void SetHighLogExpireDay(const int64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>低频存储天数</p>
                     * @return LowLogExpireDay <p>低频存储天数</p>
                     * 
                     */
                    int64_t GetLowLogExpireDay() const;

                    /**
                     * 设置<p>低频存储天数</p>
                     * @param _lowLogExpireDay <p>低频存储天数</p>
                     * 
                     */
                    void SetLowLogExpireDay(const int64_t& _lowLogExpireDay);

                    /**
                     * 判断参数 LowLogExpireDay 是否已赋值
                     * @return LowLogExpireDay 是否已赋值
                     * 
                     */
                    bool LowLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>总存储时长</p>
                     * @return LogExpireDay <p>总存储时长</p>
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>总存储时长</p>
                     * @param _logExpireDay <p>总存储时长</p>
                     * 
                     */
                    void SetLogExpireDay(const int64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>高频存储量，单位：MB</p>
                     * @return HighStorage <p>高频存储量，单位：MB</p>
                     * 
                     */
                    double GetHighStorage() const;

                    /**
                     * 设置<p>高频存储量，单位：MB</p>
                     * @param _highStorage <p>高频存储量，单位：MB</p>
                     * 
                     */
                    void SetHighStorage(const double& _highStorage);

                    /**
                     * 判断参数 HighStorage 是否已赋值
                     * @return HighStorage 是否已赋值
                     * 
                     */
                    bool HighStorageHasBeenSet() const;

                    /**
                     * 获取<p>低频存储量，单位：MB</p>
                     * @return LowStorage <p>低频存储量，单位：MB</p>
                     * 
                     */
                    double GetLowStorage() const;

                    /**
                     * 设置<p>低频存储量，单位：MB</p>
                     * @param _lowStorage <p>低频存储量，单位：MB</p>
                     * 
                     */
                    void SetLowStorage(const double& _lowStorage);

                    /**
                     * 判断参数 LowStorage 是否已赋值
                     * @return LowStorage 是否已赋值
                     * 
                     */
                    bool LowStorageHasBeenSet() const;

                    /**
                     * 获取<p>总存储量</p>
                     * @return LogStorage <p>总存储量</p>
                     * 
                     */
                    double GetLogStorage() const;

                    /**
                     * 设置<p>总存储量</p>
                     * @param _logStorage <p>总存储量</p>
                     * 
                     */
                    void SetLogStorage(const double& _logStorage);

                    /**
                     * 判断参数 LogStorage 是否已赋值
                     * @return LogStorage 是否已赋值
                     * 
                     */
                    bool LogStorageHasBeenSet() const;

                    /**
                     * 获取<p>是否开启投递：ON，OFF</p>
                     * @return Deliver <p>是否开启投递：ON，OFF</p>
                     * 
                     */
                    std::string GetDeliver() const;

                    /**
                     * 设置<p>是否开启投递：ON，OFF</p>
                     * @param _deliver <p>是否开启投递：ON，OFF</p>
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
                     * 获取<p>日志投递信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverSummary <p>日志投递信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeliverSummary> GetDeliverSummary() const;

                    /**
                     * 设置<p>日志投递信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliverSummary <p>日志投递信息</p>
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
                     * 获取<p>业务侧实例相关信息，根据业务不同，返回相关信息不同。</p>
                     * @return InstanceInfo <p>业务侧实例相关信息，根据业务不同，返回相关信息不同。</p>
                     * 
                     */
                    InstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置<p>业务侧实例相关信息，根据业务不同，返回相关信息不同。</p>
                     * @param _instanceInfo <p>业务侧实例相关信息，根据业务不同，返回相关信息不同。</p>
                     * 
                     */
                    void SetInstanceInfo(const InstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取<p>审计子类型</p>
                     * @return LogSubType <p>审计子类型</p>
                     * 
                     */
                    std::string GetLogSubType() const;

                    /**
                     * 设置<p>审计子类型</p>
                     * @param _logSubType <p>审计子类型</p>
                     * 
                     */
                    void SetLogSubType(const std::string& _logSubType);

                    /**
                     * 判断参数 LogSubType 是否已赋值
                     * @return LogSubType 是否已赋值
                     * 
                     */
                    bool LogSubTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志状态，create：创建中；normal：开启；close：关闭中。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。</p>
                     */
                    std::string m_enableQuery;
                    bool m_enableQueryHasBeenSet;

                    /**
                     * <p>开启时间</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>高频存储天数</p>
                     */
                    int64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * <p>低频存储天数</p>
                     */
                    int64_t m_lowLogExpireDay;
                    bool m_lowLogExpireDayHasBeenSet;

                    /**
                     * <p>总存储时长</p>
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>高频存储量，单位：MB</p>
                     */
                    double m_highStorage;
                    bool m_highStorageHasBeenSet;

                    /**
                     * <p>低频存储量，单位：MB</p>
                     */
                    double m_lowStorage;
                    bool m_lowStorageHasBeenSet;

                    /**
                     * <p>总存储量</p>
                     */
                    double m_logStorage;
                    bool m_logStorageHasBeenSet;

                    /**
                     * <p>是否开启投递：ON，OFF</p>
                     */
                    std::string m_deliver;
                    bool m_deliverHasBeenSet;

                    /**
                     * <p>日志投递信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeliverSummary> m_deliverSummary;
                    bool m_deliverSummaryHasBeenSet;

                    /**
                     * <p>业务侧实例相关信息，根据业务不同，返回相关信息不同。</p>
                     */
                    InstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * <p>审计子类型</p>
                     */
                    std::string m_logSubType;
                    bool m_logSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_LOGINSTANCE_H_
