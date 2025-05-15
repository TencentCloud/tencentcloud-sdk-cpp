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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DELETETASKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DELETETASKTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteTaskTemplates请求参数结构体
                */
                class DeleteTaskTemplatesRequest : public AbstractModel
                {
                public:
                    DeleteTaskTemplatesRequest();
                    ~DeleteTaskTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于删除任务模板信息，最大数量上限100，环境模版ID通过调用接口 [DescribeTaskTemplates](https://cloud.tencent.com/document/api/599/15902)获取。
                     * @return TaskTemplateIds 用于删除任务模板信息，最大数量上限100，环境模版ID通过调用接口 [DescribeTaskTemplates](https://cloud.tencent.com/document/api/599/15902)获取。
                     * 
                     */
                    std::vector<std::string> GetTaskTemplateIds() const;

                    /**
                     * 设置用于删除任务模板信息，最大数量上限100，环境模版ID通过调用接口 [DescribeTaskTemplates](https://cloud.tencent.com/document/api/599/15902)获取。
                     * @param _taskTemplateIds 用于删除任务模板信息，最大数量上限100，环境模版ID通过调用接口 [DescribeTaskTemplates](https://cloud.tencent.com/document/api/599/15902)获取。
                     * 
                     */
                    void SetTaskTemplateIds(const std::vector<std::string>& _taskTemplateIds);

                    /**
                     * 判断参数 TaskTemplateIds 是否已赋值
                     * @return TaskTemplateIds 是否已赋值
                     * 
                     */
                    bool TaskTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * 用于删除任务模板信息，最大数量上限100，环境模版ID通过调用接口 [DescribeTaskTemplates](https://cloud.tencent.com/document/api/599/15902)获取。
                     */
                    std::vector<std::string> m_taskTemplateIds;
                    bool m_taskTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DELETETASKTEMPLATESREQUEST_H_
