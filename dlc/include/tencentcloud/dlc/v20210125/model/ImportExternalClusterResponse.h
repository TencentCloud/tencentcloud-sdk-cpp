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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_IMPORTEXTERNALCLUSTERRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_IMPORTEXTERNALCLUSTERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * ImportExternalCluster返回参数结构体
                */
                class ImportExternalClusterResponse : public AbstractModel
                {
                public:
                    ImportExternalClusterResponse();
                    ~ImportExternalClusterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>已落库的 resource_pool 主行 ID。</p>
                     * @return ResourcePoolId <p>已落库的 resource_pool 主行 ID。</p>
                     * 
                     */
                    int64_t GetResourcePoolId() const;

                    /**
                     * 判断参数 ResourcePoolId 是否已赋值
                     * @return ResourcePoolId 是否已赋值
                     * 
                     */
                    bool ResourcePoolIdHasBeenSet() const;

                    /**
                     * 获取<p>资源池唯一编码。</p>
                     * @return ResourcePoolCode <p>资源池唯一编码。</p>
                     * 
                     */
                    std::string GetResourcePoolCode() const;

                    /**
                     * 判断参数 ResourcePoolCode 是否已赋值
                     * @return ResourcePoolCode 是否已赋值
                     * 
                     */
                    bool ResourcePoolCodeHasBeenSet() const;

                    /**
                     * 获取<p>注册工作流 ID，可用于查询进度。</p>
                     * @return WorkflowId <p>注册工作流 ID，可用于查询进度。</p>
                     * 
                     */
                    int64_t GetWorkflowId() const;

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                private:

                    /**
                     * <p>已落库的 resource_pool 主行 ID。</p>
                     */
                    int64_t m_resourcePoolId;
                    bool m_resourcePoolIdHasBeenSet;

                    /**
                     * <p>资源池唯一编码。</p>
                     */
                    std::string m_resourcePoolCode;
                    bool m_resourcePoolCodeHasBeenSet;

                    /**
                     * <p>注册工作流 ID，可用于查询进度。</p>
                     */
                    int64_t m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_IMPORTEXTERNALCLUSTERRESPONSE_H_
