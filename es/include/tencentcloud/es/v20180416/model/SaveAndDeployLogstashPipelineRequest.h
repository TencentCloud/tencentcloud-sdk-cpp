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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SAVEANDDEPLOYLOGSTASHPIPELINEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SAVEANDDEPLOYLOGSTASHPIPELINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/LogstashPipeline.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * SaveAndDeployLogstashPipeline请求参数结构体
                */
                class SaveAndDeployLogstashPipelineRequest : public AbstractModel
                {
                public:
                    SaveAndDeployLogstashPipelineRequest();
                    ~SaveAndDeployLogstashPipelineRequest() = default;
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
                     * 获取实例管道信息
                     * @return Pipeline 实例管道信息
                     * 
                     */
                    LogstashPipeline GetPipeline() const;

                    /**
                     * 设置实例管道信息
                     * @param _pipeline 实例管道信息
                     * 
                     */
                    void SetPipeline(const LogstashPipeline& _pipeline);

                    /**
                     * 判断参数 Pipeline 是否已赋值
                     * @return Pipeline 是否已赋值
                     * 
                     */
                    bool PipelineHasBeenSet() const;

                    /**
                     * 获取操作类型<li>1：只保存</li><li>2：保存并部署</li>
                     * @return OpType 操作类型<li>1：只保存</li><li>2：保存并部署</li>
                     * 
                     */
                    uint64_t GetOpType() const;

                    /**
                     * 设置操作类型<li>1：只保存</li><li>2：保存并部署</li>
                     * @param _opType 操作类型<li>1：只保存</li><li>2：保存并部署</li>
                     * 
                     */
                    void SetOpType(const uint64_t& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例管道信息
                     */
                    LogstashPipeline m_pipeline;
                    bool m_pipelineHasBeenSet;

                    /**
                     * 操作类型<li>1：只保存</li><li>2：保存并部署</li>
                     */
                    uint64_t m_opType;
                    bool m_opTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SAVEANDDEPLOYLOGSTASHPIPELINEREQUEST_H_
