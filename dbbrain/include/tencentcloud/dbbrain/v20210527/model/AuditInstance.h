/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITINSTANCE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditInstanceInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 实例详细信息
                */
                class AuditInstance : public AbstractModel
                {
                public:
                    AuditInstance();
                    ~AuditInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审计状态，已开通审计为：YES，未开通审计为：ON。
                     * @return AuditStatus 审计状态，已开通审计为：YES，未开通审计为：ON。
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置审计状态，已开通审计为：YES，未开通审计为：ON。
                     * @param _auditStatus 审计状态，已开通审计为：YES，未开通审计为：ON。
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
                     * 获取审计日志大小，为兼容老版本用。
                     * @return BillingAmount 审计日志大小，为兼容老版本用。
                     * 
                     */
                    int64_t GetBillingAmount() const;

                    /**
                     * 设置审计日志大小，为兼容老版本用。
                     * @param _billingAmount 审计日志大小，为兼容老版本用。
                     * 
                     */
                    void SetBillingAmount(const int64_t& _billingAmount);

                    /**
                     * 判断参数 BillingAmount 是否已赋值
                     * @return BillingAmount 是否已赋值
                     * 
                     */
                    bool BillingAmountHasBeenSet() const;

                    /**
                     * 获取计费确认状态，0-未确认；1-已确认。
                     * @return BillingConfirmed 计费确认状态，0-未确认；1-已确认。
                     * 
                     */
                    int64_t GetBillingConfirmed() const;

                    /**
                     * 设置计费确认状态，0-未确认；1-已确认。
                     * @param _billingConfirmed 计费确认状态，0-未确认；1-已确认。
                     * 
                     */
                    void SetBillingConfirmed(const int64_t& _billingConfirmed);

                    /**
                     * 判断参数 BillingConfirmed 是否已赋值
                     * @return BillingConfirmed 是否已赋值
                     * 
                     */
                    bool BillingConfirmedHasBeenSet() const;

                    /**
                     * 获取低频存储时长。
                     * @return ColdLogExpireDay 低频存储时长。
                     * 
                     */
                    int64_t GetColdLogExpireDay() const;

                    /**
                     * 设置低频存储时长。
                     * @param _coldLogExpireDay 低频存储时长。
                     * 
                     */
                    void SetColdLogExpireDay(const int64_t& _coldLogExpireDay);

                    /**
                     * 判断参数 ColdLogExpireDay 是否已赋值
                     * @return ColdLogExpireDay 是否已赋值
                     * 
                     */
                    bool ColdLogExpireDayHasBeenSet() const;

                    /**
                     * 获取低频日志存储量单位MB。
                     * @return ColdLogSize 低频日志存储量单位MB。
                     * 
                     */
                    int64_t GetColdLogSize() const;

                    /**
                     * 设置低频日志存储量单位MB。
                     * @param _coldLogSize 低频日志存储量单位MB。
                     * 
                     */
                    void SetColdLogSize(const int64_t& _coldLogSize);

                    /**
                     * 判断参数 ColdLogSize 是否已赋值
                     * @return ColdLogSize 是否已赋值
                     * 
                     */
                    bool ColdLogSizeHasBeenSet() const;

                    /**
                     * 获取高频日志存储天数。
                     * @return HotLogExpireDay 高频日志存储天数。
                     * 
                     */
                    int64_t GetHotLogExpireDay() const;

                    /**
                     * 设置高频日志存储天数。
                     * @param _hotLogExpireDay 高频日志存储天数。
                     * 
                     */
                    void SetHotLogExpireDay(const int64_t& _hotLogExpireDay);

                    /**
                     * 判断参数 HotLogExpireDay 是否已赋值
                     * @return HotLogExpireDay 是否已赋值
                     * 
                     */
                    bool HotLogExpireDayHasBeenSet() const;

                    /**
                     * 获取高频日志存储量，单位MB。
                     * @return HotLogSize 高频日志存储量，单位MB。
                     * 
                     */
                    int64_t GetHotLogSize() const;

                    /**
                     * 设置高频日志存储量，单位MB。
                     * @param _hotLogSize 高频日志存储量，单位MB。
                     * 
                     */
                    void SetHotLogSize(const int64_t& _hotLogSize);

                    /**
                     * 判断参数 HotLogSize 是否已赋值
                     * @return HotLogSize 是否已赋值
                     * 
                     */
                    bool HotLogSizeHasBeenSet() const;

                    /**
                     * 获取实例Id。
                     * @return InstanceId 实例Id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id。
                     * @param _instanceId 实例Id。
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
                     * 获取日志保存总天数，为高频存储时长+低频存储时长。
                     * @return LogExpireDay 日志保存总天数，为高频存储时长+低频存储时长。
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置日志保存总天数，为高频存储时长+低频存储时长。
                     * @param _logExpireDay 日志保存总天数，为高频存储时长+低频存储时长。
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
                     * 获取实例创建时间。
                     * @return CreateTime 实例创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间。
                     * @param _createTime 实例创建时间。
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
                     * 获取实例详细信息。
                     * @return InstanceInfo 实例详细信息。
                     * 
                     */
                    AuditInstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置实例详细信息。
                     * @param _instanceInfo 实例详细信息。
                     * 
                     */
                    void SetInstanceInfo(const AuditInstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                private:

                    /**
                     * 审计状态，已开通审计为：YES，未开通审计为：ON。
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 审计日志大小，为兼容老版本用。
                     */
                    int64_t m_billingAmount;
                    bool m_billingAmountHasBeenSet;

                    /**
                     * 计费确认状态，0-未确认；1-已确认。
                     */
                    int64_t m_billingConfirmed;
                    bool m_billingConfirmedHasBeenSet;

                    /**
                     * 低频存储时长。
                     */
                    int64_t m_coldLogExpireDay;
                    bool m_coldLogExpireDayHasBeenSet;

                    /**
                     * 低频日志存储量单位MB。
                     */
                    int64_t m_coldLogSize;
                    bool m_coldLogSizeHasBeenSet;

                    /**
                     * 高频日志存储天数。
                     */
                    int64_t m_hotLogExpireDay;
                    bool m_hotLogExpireDayHasBeenSet;

                    /**
                     * 高频日志存储量，单位MB。
                     */
                    int64_t m_hotLogSize;
                    bool m_hotLogSizeHasBeenSet;

                    /**
                     * 实例Id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志保存总天数，为高频存储时长+低频存储时长。
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 实例创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例详细信息。
                     */
                    AuditInstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITINSTANCE_H_
