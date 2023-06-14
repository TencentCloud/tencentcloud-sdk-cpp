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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DELETELOGSTASHPIPELINESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DELETELOGSTASHPIPELINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DeleteLogstashPipelines请求参数结构体
                */
                class DeleteLogstashPipelinesRequest : public AbstractModel
                {
                public:
                    DeleteLogstashPipelinesRequest();
                    ~DeleteLogstashPipelinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取管道ID列表
                     * @return PipelineIds 管道ID列表
                     * 
                     */
                    std::vector<std::string> GetPipelineIds() const;

                    /**
                     * 设置管道ID列表
                     * @param _pipelineIds 管道ID列表
                     * 
                     */
                    void SetPipelineIds(const std::vector<std::string>& _pipelineIds);

                    /**
                     * 判断参数 PipelineIds 是否已赋值
                     * @return PipelineIds 是否已赋值
                     * 
                     */
                    bool PipelineIdsHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 管道ID列表
                     */
                    std::vector<std::string> m_pipelineIds;
                    bool m_pipelineIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DELETELOGSTASHPIPELINESREQUEST_H_
