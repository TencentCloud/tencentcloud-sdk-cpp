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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ELASTICPLAN_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ELASTICPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 引擎资源弹性伸缩计划
                */
                class ElasticPlan : public AbstractModel
                {
                public:
                    ElasticPlan();
                    ~ElasticPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小集群数
                     * @return MinElasticClusters 最小集群数
                     * 
                     */
                    int64_t GetMinElasticClusters() const;

                    /**
                     * 设置最小集群数
                     * @param _minElasticClusters 最小集群数
                     * 
                     */
                    void SetMinElasticClusters(const int64_t& _minElasticClusters);

                    /**
                     * 判断参数 MinElasticClusters 是否已赋值
                     * @return MinElasticClusters 是否已赋值
                     * 
                     */
                    bool MinElasticClustersHasBeenSet() const;

                    /**
                     * 获取最大集群数
                     * @return MaxElasticClusters 最大集群数
                     * 
                     */
                    int64_t GetMaxElasticClusters() const;

                    /**
                     * 设置最大集群数
                     * @param _maxElasticClusters 最大集群数
                     * 
                     */
                    void SetMaxElasticClusters(const int64_t& _maxElasticClusters);

                    /**
                     * 判断参数 MaxElasticClusters 是否已赋值
                     * @return MaxElasticClusters 是否已赋值
                     * 
                     */
                    bool MaxElasticClustersHasBeenSet() const;

                    /**
                     * 获取最大排队时间
                     * @return TolerableQueueTime 最大排队时间
                     * 
                     */
                    int64_t GetTolerableQueueTime() const;

                    /**
                     * 设置最大排队时间
                     * @param _tolerableQueueTime 最大排队时间
                     * 
                     */
                    void SetTolerableQueueTime(const int64_t& _tolerableQueueTime);

                    /**
                     * 判断参数 TolerableQueueTime 是否已赋值
                     * @return TolerableQueueTime 是否已赋值
                     * 
                     */
                    bool TolerableQueueTimeHasBeenSet() const;

                    /**
                     * 获取开始时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
                     * @return StartTime 开始时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
                     * @param _startTime 开始时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
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
                     * 获取结束时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
                     * @return EndTime 结束时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
                     * @param _endTime 结束时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 最小集群数
                     */
                    int64_t m_minElasticClusters;
                    bool m_minElasticClustersHasBeenSet;

                    /**
                     * 最大集群数
                     */
                    int64_t m_maxElasticClusters;
                    bool m_maxElasticClustersHasBeenSet;

                    /**
                     * 最大排队时间
                     */
                    int64_t m_tolerableQueueTime;
                    bool m_tolerableQueueTimeHasBeenSet;

                    /**
                     * 开始时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，Once格式：yyyy-MM-dd HH:mm:ss; 非Once格式： HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ELASTICPLAN_H_
