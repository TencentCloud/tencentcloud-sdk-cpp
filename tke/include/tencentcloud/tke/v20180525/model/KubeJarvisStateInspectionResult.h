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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEINSPECTIONRESULT_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEINSPECTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateStatistic.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateDiagnostic.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群巡检检查结果
                */
                class KubeJarvisStateInspectionResult : public AbstractModel
                {
                public:
                    KubeJarvisStateInspectionResult();
                    ~KubeJarvisStateInspectionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取诊断开始时间
                     * @return StartTime 诊断开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置诊断开始时间
                     * @param _startTime 诊断开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取诊断结束时间
                     * @return EndTime 诊断结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置诊断结束时间
                     * @param _endTime 诊断结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取诊断结果统计
                     * @return Statistics 诊断结果统计
                     * 
                     */
                    std::vector<KubeJarvisStateStatistic> GetStatistics() const;

                    /**
                     * 设置诊断结果统计
                     * @param _statistics 诊断结果统计
                     * 
                     */
                    void SetStatistics(const std::vector<KubeJarvisStateStatistic>& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取诊断结果详情
                     * @return Diagnostics 诊断结果详情
                     * 
                     */
                    std::vector<KubeJarvisStateDiagnostic> GetDiagnostics() const;

                    /**
                     * 设置诊断结果详情
                     * @param _diagnostics 诊断结果详情
                     * 
                     */
                    void SetDiagnostics(const std::vector<KubeJarvisStateDiagnostic>& _diagnostics);

                    /**
                     * 判断参数 Diagnostics 是否已赋值
                     * @return Diagnostics 是否已赋值
                     * 
                     */
                    bool DiagnosticsHasBeenSet() const;

                    /**
                     * 获取查询巡检报告相关报错
                     * @return Error 查询巡检报告相关报错
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置查询巡检报告相关报错
                     * @param _error 查询巡检报告相关报错
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 诊断开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 诊断结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 诊断结果统计
                     */
                    std::vector<KubeJarvisStateStatistic> m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * 诊断结果详情
                     */
                    std::vector<KubeJarvisStateDiagnostic> m_diagnostics;
                    bool m_diagnosticsHasBeenSet;

                    /**
                     * 查询巡检报告相关报错
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEINSPECTIONRESULT_H_
