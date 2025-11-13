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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTasks请求参数结构体
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取根据filter做过滤，支持ClusterId（取值示例：cls-xxxx）、TaskType（任务类型，取值示例：add_cluster_cidr、node_upgrade、node_upgrade_ctl等）其中任务类型必传
                     * @return Filter 根据filter做过滤，支持ClusterId（取值示例：cls-xxxx）、TaskType（任务类型，取值示例：add_cluster_cidr、node_upgrade、node_upgrade_ctl等）其中任务类型必传
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置根据filter做过滤，支持ClusterId（取值示例：cls-xxxx）、TaskType（任务类型，取值示例：add_cluster_cidr、node_upgrade、node_upgrade_ctl等）其中任务类型必传
                     * @param _filter 根据filter做过滤，支持ClusterId（取值示例：cls-xxxx）、TaskType（任务类型，取值示例：add_cluster_cidr、node_upgrade、node_upgrade_ctl等）其中任务类型必传
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取表示最新的任务条目，此值为true的话，输出任务列表中只会有最新的一条
                     * @return Latest 表示最新的任务条目，此值为true的话，输出任务列表中只会有最新的一条
                     * 
                     */
                    bool GetLatest() const;

                    /**
                     * 设置表示最新的任务条目，此值为true的话，输出任务列表中只会有最新的一条
                     * @param _latest 表示最新的任务条目，此值为true的话，输出任务列表中只会有最新的一条
                     * 
                     */
                    void SetLatest(const bool& _latest);

                    /**
                     * 判断参数 Latest 是否已赋值
                     * @return Latest 是否已赋值
                     * 
                     */
                    bool LatestHasBeenSet() const;

                private:

                    /**
                     * 根据filter做过滤，支持ClusterId（取值示例：cls-xxxx）、TaskType（任务类型，取值示例：add_cluster_cidr、node_upgrade、node_upgrade_ctl等）其中任务类型必传
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 表示最新的任务条目，此值为true的话，输出任务列表中只会有最新的一条
                     */
                    bool m_latest;
                    bool m_latestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETASKSREQUEST_H_
