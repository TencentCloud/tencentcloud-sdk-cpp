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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADEPLAN_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADEPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 升级计划
                */
                class UpgradePlan : public AbstractModel
                {
                public:
                    UpgradePlan();
                    ~UpgradePlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取升级计划ID
                     * @return ID 升级计划ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置升级计划ID
                     * @param _iD 升级计划ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取预计开始时间
                     * @return PlanedStartAt 预计开始时间
                     * 
                     */
                    std::string GetPlanedStartAt() const;

                    /**
                     * 设置预计开始时间
                     * @param _planedStartAt 预计开始时间
                     * 
                     */
                    void SetPlanedStartAt(const std::string& _planedStartAt);

                    /**
                     * 判断参数 PlanedStartAt 是否已赋值
                     * @return PlanedStartAt 是否已赋值
                     * 
                     */
                    bool PlanedStartAtHasBeenSet() const;

                    /**
                     * 获取升级开始时间
                     * @return UpgradeStartAt 升级开始时间
                     * 
                     */
                    std::string GetUpgradeStartAt() const;

                    /**
                     * 设置升级开始时间
                     * @param _upgradeStartAt 升级开始时间
                     * 
                     */
                    void SetUpgradeStartAt(const std::string& _upgradeStartAt);

                    /**
                     * 判断参数 UpgradeStartAt 是否已赋值
                     * @return UpgradeStartAt 是否已赋值
                     * 
                     */
                    bool UpgradeStartAtHasBeenSet() const;

                    /**
                     * 获取升级结束时间
                     * @return UpgradeEndAt 升级结束时间
                     * 
                     */
                    std::string GetUpgradeEndAt() const;

                    /**
                     * 设置升级结束时间
                     * @param _upgradeEndAt 升级结束时间
                     * 
                     */
                    void SetUpgradeEndAt(const std::string& _upgradeEndAt);

                    /**
                     * 判断参数 UpgradeEndAt 是否已赋值
                     * @return UpgradeEndAt 是否已赋值
                     * 
                     */
                    bool UpgradeEndAtHasBeenSet() const;

                    /**
                     * 获取升级状态
                     * @return Status 升级状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置升级状态
                     * @param _status 升级状态
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
                     * 获取原因
                     * @return Reason 原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置原因
                     * @param _reason 原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 升级计划ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 预计开始时间
                     */
                    std::string m_planedStartAt;
                    bool m_planedStartAtHasBeenSet;

                    /**
                     * 升级开始时间
                     */
                    std::string m_upgradeStartAt;
                    bool m_upgradeStartAtHasBeenSet;

                    /**
                     * 升级结束时间
                     */
                    std::string m_upgradeEndAt;
                    bool m_upgradeEndAtHasBeenSet;

                    /**
                     * 升级状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADEPLAN_H_
