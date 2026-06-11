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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERPERIODSCALEPOLICY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERPERIODSCALEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集群周期弹性策略
                */
                class ClusterPeriodScalePolicy : public AbstractModel
                {
                public:
                    ClusterPeriodScalePolicy();
                    ~ClusterPeriodScalePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略ID</p>
                     * @return PolicyId <p>策略ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>策略ID</p>
                     * @param _policyId <p>策略ID</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>实例类型。rw-读写类型，ro-只读类型。</p>
                     * @return InstanceType <p>实例类型。rw-读写类型，ro-只读类型。</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型。rw-读写类型，ro-只读类型。</p>
                     * @param _instanceType <p>实例类型。rw-读写类型，ro-只读类型。</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>弹性下限, 后续废弃, 请使用MinCcu</p>
                     * @return MinCpu <p>弹性下限, 后续废弃, 请使用MinCcu</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>弹性下限, 后续废弃, 请使用MinCcu</p>
                     * @param _minCpu <p>弹性下限, 后续废弃, 请使用MinCcu</p>
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取<p>弹性上限,后续废弃，请使用MaxCcu</p>
                     * @return MaxCpu <p>弹性上限,后续废弃，请使用MaxCcu</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>弹性上限,后续废弃，请使用MaxCcu</p>
                     * @param _maxCpu <p>弹性上限,后续废弃，请使用MaxCcu</p>
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取<p>弹性开始时间</p>
                     * @return ScaleStartTime <p>弹性开始时间</p>
                     * 
                     */
                    std::string GetScaleStartTime() const;

                    /**
                     * 设置<p>弹性开始时间</p>
                     * @param _scaleStartTime <p>弹性开始时间</p>
                     * 
                     */
                    void SetScaleStartTime(const std::string& _scaleStartTime);

                    /**
                     * 判断参数 ScaleStartTime 是否已赋值
                     * @return ScaleStartTime 是否已赋值
                     * 
                     */
                    bool ScaleStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>弹性结束时间</p>
                     * @return ScaleEndTime <p>弹性结束时间</p>
                     * 
                     */
                    std::string GetScaleEndTime() const;

                    /**
                     * 设置<p>弹性结束时间</p>
                     * @param _scaleEndTime <p>弹性结束时间</p>
                     * 
                     */
                    void SetScaleEndTime(const std::string& _scaleEndTime);

                    /**
                     * 判断参数 ScaleEndTime 是否已赋值
                     * @return ScaleEndTime 是否已赋值
                     * 
                     */
                    bool ScaleEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>策略有效起始日期时间</p>
                     * @return PolicyStartTime <p>策略有效起始日期时间</p>
                     * 
                     */
                    std::string GetPolicyStartTime() const;

                    /**
                     * 设置<p>策略有效起始日期时间</p>
                     * @param _policyStartTime <p>策略有效起始日期时间</p>
                     * 
                     */
                    void SetPolicyStartTime(const std::string& _policyStartTime);

                    /**
                     * 判断参数 PolicyStartTime 是否已赋值
                     * @return PolicyStartTime 是否已赋值
                     * 
                     */
                    bool PolicyStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>策略有效截止日期时间</p>
                     * @return PolicyEndTime <p>策略有效截止日期时间</p>
                     * 
                     */
                    std::string GetPolicyEndTime() const;

                    /**
                     * 设置<p>策略有效截止日期时间</p>
                     * @param _policyEndTime <p>策略有效截止日期时间</p>
                     * 
                     */
                    void SetPolicyEndTime(const std::string& _policyEndTime);

                    /**
                     * 判断参数 PolicyEndTime 是否已赋值
                     * @return PolicyEndTime 是否已赋值
                     * 
                     */
                    bool PolicyEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>周期类型。day-天， week-星期，month-月</p>
                     * @return PeriodType <p>周期类型。day-天， week-星期，month-月</p>
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置<p>周期类型。day-天， week-星期，month-月</p>
                     * @param _periodType <p>周期类型。day-天， week-星期，month-月</p>
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                    /**
                     * 获取<p>在周期内的时间配置。对于week，表示星期几；对于month，表示几号。对于day，此参数不生效。</p>
                     * @return PeriodConfig <p>在周期内的时间配置。对于week，表示星期几；对于month，表示几号。对于day，此参数不生效。</p>
                     * 
                     */
                    std::vector<int64_t> GetPeriodConfig() const;

                    /**
                     * 设置<p>在周期内的时间配置。对于week，表示星期几；对于month，表示几号。对于day，此参数不生效。</p>
                     * @param _periodConfig <p>在周期内的时间配置。对于week，表示星期几；对于month，表示几号。对于day，此参数不生效。</p>
                     * 
                     */
                    void SetPeriodConfig(const std::vector<int64_t>& _periodConfig);

                    /**
                     * 判断参数 PeriodConfig 是否已赋值
                     * @return PeriodConfig 是否已赋值
                     * 
                     */
                    bool PeriodConfigHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>策略状态。normal-正常，expired-过期, deleted-删除</p>
                     * @return Status <p>策略状态。normal-正常，expired-过期, deleted-删除</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>策略状态。normal-正常，expired-过期, deleted-删除</p>
                     * @param _status <p>策略状态。normal-正常，expired-过期, deleted-删除</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>策略ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>实例类型。rw-读写类型，ro-只读类型。</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>弹性下限, 后续废弃, 请使用MinCcu</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>弹性上限,后续废弃，请使用MaxCcu</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>弹性开始时间</p>
                     */
                    std::string m_scaleStartTime;
                    bool m_scaleStartTimeHasBeenSet;

                    /**
                     * <p>弹性结束时间</p>
                     */
                    std::string m_scaleEndTime;
                    bool m_scaleEndTimeHasBeenSet;

                    /**
                     * <p>策略有效起始日期时间</p>
                     */
                    std::string m_policyStartTime;
                    bool m_policyStartTimeHasBeenSet;

                    /**
                     * <p>策略有效截止日期时间</p>
                     */
                    std::string m_policyEndTime;
                    bool m_policyEndTimeHasBeenSet;

                    /**
                     * <p>周期类型。day-天， week-星期，month-月</p>
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * <p>在周期内的时间配置。对于week，表示星期几；对于month，表示几号。对于day，此参数不生效。</p>
                     */
                    std::vector<int64_t> m_periodConfig;
                    bool m_periodConfigHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>策略状态。normal-正常，expired-过期, deleted-删除</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERPERIODSCALEPOLICY_H_
