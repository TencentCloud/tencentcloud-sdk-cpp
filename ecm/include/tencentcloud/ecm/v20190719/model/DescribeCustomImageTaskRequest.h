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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECUSTOMIMAGETASKREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECUSTOMIMAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCustomImageTask请求参数结构体
                */
                class DescribeCustomImageTaskRequest : public AbstractModel
                {
                public:
                    DescribeCustomImageTaskRequest();
                    ~DescribeCustomImageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取支持key,value查询
task-id: 异步任务ID
image-id: 镜像ID
image-name: 镜像名称
                     * @return Filters 支持key,value查询
task-id: 异步任务ID
image-id: 镜像ID
image-name: 镜像名称
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置支持key,value查询
task-id: 异步任务ID
image-id: 镜像ID
image-name: 镜像名称
                     * @param _filters 支持key,value查询
task-id: 异步任务ID
image-id: 镜像ID
image-name: 镜像名称
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
                     * 支持key,value查询
task-id: 异步任务ID
image-id: 镜像ID
image-name: 镜像名称
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECUSTOMIMAGETASKREQUEST_H_
