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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERPERIODSCALEPOLICYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERPERIODSCALEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateClusterPeriodScalePolicy请求参数结构体
                */
                class CreateClusterPeriodScalePolicyRequest : public AbstractModel
                {
                public:
                    CreateClusterPeriodScalePolicyRequest();
                    ~CreateClusterPeriodScalePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>实例类型。rw读写，ro-只读</p>
                     * @return InstanceType <p>实例类型。rw读写，ro-只读</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型。rw读写，ro-只读</p>
                     * @param _instanceType <p>实例类型。rw读写，ro-只读</p>
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
                     * 获取<p>当天开始弹性时间。格式是小时:分钟</p>
                     * @return ScaleStartTime <p>当天开始弹性时间。格式是小时:分钟</p>
                     * 
                     */
                    std::string GetScaleStartTime() const;

                    /**
                     * 设置<p>当天开始弹性时间。格式是小时:分钟</p>
                     * @param _scaleStartTime <p>当天开始弹性时间。格式是小时:分钟</p>
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
                     * 获取<p>当天结束弹性时间。格式是小时:分钟</p>
                     * @return ScaleEndTime <p>当天结束弹性时间。格式是小时:分钟</p>
                     * 
                     */
                    std::string GetScaleEndTime() const;

                    /**
                     * 设置<p>当天结束弹性时间。格式是小时:分钟</p>
                     * @param _scaleEndTime <p>当天结束弹性时间。格式是小时:分钟</p>
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
                     * 获取<p>策略生效的起始日期时间</p>
                     * @return PolicyStartTime <p>策略生效的起始日期时间</p>
                     * 
                     */
                    std::string GetPolicyStartTime() const;

                    /**
                     * 设置<p>策略生效的起始日期时间</p>
                     * @param _policyStartTime <p>策略生效的起始日期时间</p>
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
                     * 获取<p>策略生效的截止日期时间</p>
                     * @return PolicyEndTime <p>策略生效的截止日期时间</p>
                     * 
                     */
                    std::string GetPolicyEndTime() const;

                    /**
                     * 设置<p>策略生效的截止日期时间</p>
                     * @param _policyEndTime <p>策略生效的截止日期时间</p>
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
                     * 获取<p>周期类型。day-天，week-周，month-月。</p>
                     * @return PeriodType <p>周期类型。day-天，week-周，month-月。</p>
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置<p>周期类型。day-天，week-周，month-月。</p>
                     * @param _periodType <p>周期类型。day-天，week-周，month-月。</p>
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
                     * 获取<p>弹性规格下限</p>
                     * @return MinCpu <p>弹性规格下限</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>弹性规格下限</p>
                     * @param _minCpu <p>弹性规格下限</p>
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
                     * 获取<p>弹性规格上限</p>
                     * @return MaxCpu <p>弹性规格上限</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>弹性规格上限</p>
                     * @param _maxCpu <p>弹性规格上限</p>
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
                     * 获取<p>周期内的时间列表。针对PeriodType=week， 表示星期几，比如[1,3]表示星期一、星期三。同理，对于PeriodType=month，[1,3,10]表示每月的1、3、10号。PeriodType=day则该字段无效。</p>
                     * @return PeriodConfig <p>周期内的时间列表。针对PeriodType=week， 表示星期几，比如[1,3]表示星期一、星期三。同理，对于PeriodType=month，[1,3,10]表示每月的1、3、10号。PeriodType=day则该字段无效。</p>
                     * 
                     */
                    std::vector<int64_t> GetPeriodConfig() const;

                    /**
                     * 设置<p>周期内的时间列表。针对PeriodType=week， 表示星期几，比如[1,3]表示星期一、星期三。同理，对于PeriodType=month，[1,3,10]表示每月的1、3、10号。PeriodType=day则该字段无效。</p>
                     * @param _periodConfig <p>周期内的时间列表。针对PeriodType=week， 表示星期几，比如[1,3]表示星期一、星期三。同理，对于PeriodType=month，[1,3,10]表示每月的1、3、10号。PeriodType=day则该字段无效。</p>
                     * 
                     */
                    void SetPeriodConfig(const std::vector<int64_t>& _periodConfig);

                    /**
                     * 判断参数 PeriodConfig 是否已赋值
                     * @return PeriodConfig 是否已赋值
                     * 
                     */
                    bool PeriodConfigHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>实例类型。rw读写，ro-只读</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>当天开始弹性时间。格式是小时:分钟</p>
                     */
                    std::string m_scaleStartTime;
                    bool m_scaleStartTimeHasBeenSet;

                    /**
                     * <p>当天结束弹性时间。格式是小时:分钟</p>
                     */
                    std::string m_scaleEndTime;
                    bool m_scaleEndTimeHasBeenSet;

                    /**
                     * <p>策略生效的起始日期时间</p>
                     */
                    std::string m_policyStartTime;
                    bool m_policyStartTimeHasBeenSet;

                    /**
                     * <p>策略生效的截止日期时间</p>
                     */
                    std::string m_policyEndTime;
                    bool m_policyEndTimeHasBeenSet;

                    /**
                     * <p>周期类型。day-天，week-周，month-月。</p>
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * <p>弹性规格下限</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>弹性规格上限</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>周期内的时间列表。针对PeriodType=week， 表示星期几，比如[1,3]表示星期一、星期三。同理，对于PeriodType=month，[1,3,10]表示每月的1、3、10号。PeriodType=day则该字段无效。</p>
                     */
                    std::vector<int64_t> m_periodConfig;
                    bool m_periodConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERPERIODSCALEPOLICYREQUEST_H_
