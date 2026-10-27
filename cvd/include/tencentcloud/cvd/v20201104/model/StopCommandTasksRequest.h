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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_STOPCOMMANDTASKSREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_STOPCOMMANDTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Filter.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * StopCommandTasks请求参数结构体
                */
                class StopCommandTasksRequest : public AbstractModel
                {
                public:
                    StopCommandTasksRequest();
                    ~StopCommandTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>删除命令任务条件<br>Filter.name 目前支持 CommandId</p>
                     * @return Filters <p>删除命令任务条件<br>Filter.name 目前支持 CommandId</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>删除命令任务条件<br>Filter.name 目前支持 CommandId</p>
                     * @param _filters <p>删除命令任务条件<br>Filter.name 目前支持 CommandId</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>删除命令任务条件<br>Filter.name 目前支持 CommandId</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_STOPCOMMANDTASKSREQUEST_H_
