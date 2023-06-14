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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_LISTCLUSTERINSPECTIONRESULTSITEMSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_LISTCLUSTERINSPECTIONRESULTSITEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ListClusterInspectionResultsItems请求参数结构体
                */
                class ListClusterInspectionResultsItemsRequest : public AbstractModel
                {
                public:
                    ListClusterInspectionResultsItemsRequest();
                    ~ListClusterInspectionResultsItemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标集群ID
                     * @return ClusterId 目标集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置目标集群ID
                     * @param _clusterId 目标集群ID
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
                     * 获取查询历史结果的开始时间，Unix时间戳
                     * @return StartTime 查询历史结果的开始时间，Unix时间戳
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询历史结果的开始时间，Unix时间戳
                     * @param _startTime 查询历史结果的开始时间，Unix时间戳
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
                     * 获取查询历史结果的结束时间，默认当前距离开始时间3天，Unix时间戳
                     * @return EndTime 查询历史结果的结束时间，默认当前距离开始时间3天，Unix时间戳
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询历史结果的结束时间，默认当前距离开始时间3天，Unix时间戳
                     * @param _endTime 查询历史结果的结束时间，默认当前距离开始时间3天，Unix时间戳
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
                     * 目标集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 查询历史结果的开始时间，Unix时间戳
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询历史结果的结束时间，默认当前距离开始时间3天，Unix时间戳
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_LISTCLUSTERINSPECTIONRESULTSITEMSREQUEST_H_
