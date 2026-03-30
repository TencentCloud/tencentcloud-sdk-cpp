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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGINSTANCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DeliverSummary.h>
#include <tencentcloud/sqlserver/v20180328/model/InstanceInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 日志实例
                */
                class LogInstance : public AbstractModel
                {
                public:
                    LogInstance();
                    ~LogInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取日志状态，create：创建中；normal：开启；close：关闭中。
                     * @return Status 日志状态，create：创建中；normal：开启；close：关闭中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置日志状态，create：创建中；normal：开启；close：关闭中。
                     * @param _status 日志状态，create：创建中；normal：开启；close：关闭中。
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
                     * 获取	
是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。
                     * @return EnableQuery 	
是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。
                     * 
                     */
                    std::string GetEnableQuery() const;

                    /**
                     * 设置	
是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。
                     * @param _enableQuery 	
是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。
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
                     * 获取开启时间
                     * @return CreateAt 开启时间
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置开启时间
                     * @param _createAt 开启时间
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
                     * 获取高频存储天数
                     * @return HighLogExpireDay 高频存储天数
                     * 
                     */
                    int64_t GetHighLogExpireDay() const;

                    /**
                     * 设置高频存储天数
                     * @param _highLogExpireDay 高频存储天数
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
                     * 获取低频存储天数
                     * @return LowLogExpireDay 低频存储天数
                     * 
                     */
                    int64_t GetLowLogExpireDay() const;

                    /**
                     * 设置低频存储天数
                     * @param _lowLogExpireDay 低频存储天数
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
                     * 获取总存储时长
                     * @return LogExpireDay 总存储时长
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置总存储时长
                     * @param _logExpireDay 总存储时长
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
                     * 获取高频存储量，单位：MB
                     * @return HighStorage 高频存储量，单位：MB
                     * 
                     */
                    double GetHighStorage() const;

                    /**
                     * 设置高频存储量，单位：MB
                     * @param _highStorage 高频存储量，单位：MB
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
                     * 获取低频存储量，单位：MB
                     * @return LowStorage 低频存储量，单位：MB
                     * 
                     */
                    double GetLowStorage() const;

                    /**
                     * 设置低频存储量，单位：MB
                     * @param _lowStorage 低频存储量，单位：MB
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
                     * 获取总存储量
                     * @return LogStorage 总存储量
                     * 
                     */
                    double GetLogStorage() const;

                    /**
                     * 设置总存储量
                     * @param _logStorage 总存储量
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
                     * 获取是否开启投递：ON，OFF
                     * @return Deliver 是否开启投递：ON，OFF
                     * 
                     */
                    std::string GetDeliver() const;

                    /**
                     * 设置是否开启投递：ON，OFF
                     * @param _deliver 是否开启投递：ON，OFF
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
                     * 获取日志投递信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliverSummary 日志投递信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DeliverSummary> GetDeliverSummary() const;

                    /**
                     * 设置日志投递信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliverSummary 日志投递信息
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
                     * 获取业务侧实例相关信息，根据业务不同，返回相关信息不同。
                     * @return InstanceInfo 业务侧实例相关信息，根据业务不同，返回相关信息不同。
                     * 
                     */
                    InstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置业务侧实例相关信息，根据业务不同，返回相关信息不同。
                     * @param _instanceInfo 业务侧实例相关信息，根据业务不同，返回相关信息不同。
                     * 
                     */
                    void SetInstanceInfo(const InstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志状态，create：创建中；normal：开启；close：关闭中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 	
是否可以切换日志查询-取值：yes-可以，no-不可以。该参数主要为控制存量日志迁移到日志平台做查询使用，只有为yes状态才可以调用查询日志接口。
                     */
                    std::string m_enableQuery;
                    bool m_enableQueryHasBeenSet;

                    /**
                     * 开启时间
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 高频存储天数
                     */
                    int64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * 低频存储天数
                     */
                    int64_t m_lowLogExpireDay;
                    bool m_lowLogExpireDayHasBeenSet;

                    /**
                     * 总存储时长
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 高频存储量，单位：MB
                     */
                    double m_highStorage;
                    bool m_highStorageHasBeenSet;

                    /**
                     * 低频存储量，单位：MB
                     */
                    double m_lowStorage;
                    bool m_lowStorageHasBeenSet;

                    /**
                     * 总存储量
                     */
                    double m_logStorage;
                    bool m_logStorageHasBeenSet;

                    /**
                     * 是否开启投递：ON，OFF
                     */
                    std::string m_deliver;
                    bool m_deliverHasBeenSet;

                    /**
                     * 日志投递信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeliverSummary> m_deliverSummary;
                    bool m_deliverSummaryHasBeenSet;

                    /**
                     * 业务侧实例相关信息，根据业务不同，返回相关信息不同。
                     */
                    InstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGINSTANCE_H_
