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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_JOB_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 异步任务信息
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作接口名称。
                     * @return ApiName 操作接口名称。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置操作接口名称。
                     * @param _apiName 操作接口名称。
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取任务流Id
                     * @return FlowId 任务流Id
                     * 
                     */
                    uint64_t GetFlowId() const;

                    /**
                     * 设置任务流Id
                     * @param _flowId 任务流Id
                     * 
                     */
                    void SetFlowId(const uint64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取任务请求Id。
                     * @return RequestId 任务请求Id。
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置任务请求Id。
                     * @param _requestId 任务请求Id。
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取资源ID列表
                     * @return ResourceIds 资源ID列表
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置资源ID列表
                     * @param _resourceIds 资源ID列表
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取任务状态。取值：Processing、Succeeded、Failed。
                     * @return Status 任务状态。取值：Processing、Succeeded、Failed。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态。取值：Processing、Succeeded、Failed。
                     * @param _status 任务状态。取值：Processing、Succeeded、Failed。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 操作接口名称。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 任务流Id
                     */
                    uint64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 任务请求Id。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 资源ID列表
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 任务状态。取值：Processing、Succeeded、Failed。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_JOB_H_
