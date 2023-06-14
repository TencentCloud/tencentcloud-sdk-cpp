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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATELOGSTASHPIPELINEDESCREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATELOGSTASHPIPELINEDESCREQUEST_H_

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
                * UpdateLogstashPipelineDesc请求参数结构体
                */
                class UpdateLogstashPipelineDescRequest : public AbstractModel
                {
                public:
                    UpdateLogstashPipelineDescRequest();
                    ~UpdateLogstashPipelineDescRequest() = default;
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
                     * 获取实例管道ID
                     * @return PipelineId 实例管道ID
                     * 
                     */
                    std::string GetPipelineId() const;

                    /**
                     * 设置实例管道ID
                     * @param _pipelineId 实例管道ID
                     * 
                     */
                    void SetPipelineId(const std::string& _pipelineId);

                    /**
                     * 判断参数 PipelineId 是否已赋值
                     * @return PipelineId 是否已赋值
                     * 
                     */
                    bool PipelineIdHasBeenSet() const;

                    /**
                     * 获取管道描述信息
                     * @return PipelineDesc 管道描述信息
                     * 
                     */
                    std::string GetPipelineDesc() const;

                    /**
                     * 设置管道描述信息
                     * @param _pipelineDesc 管道描述信息
                     * 
                     */
                    void SetPipelineDesc(const std::string& _pipelineDesc);

                    /**
                     * 判断参数 PipelineDesc 是否已赋值
                     * @return PipelineDesc 是否已赋值
                     * 
                     */
                    bool PipelineDescHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例管道ID
                     */
                    std::string m_pipelineId;
                    bool m_pipelineIdHasBeenSet;

                    /**
                     * 管道描述信息
                     */
                    std::string m_pipelineDesc;
                    bool m_pipelineDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATELOGSTASHPIPELINEDESCREQUEST_H_
