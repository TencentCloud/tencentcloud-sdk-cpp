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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESQLEXECUTIONPLANREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESQLEXECUTIONPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeSQLExecutionPlan请求参数结构体
                */
                class DescribeSQLExecutionPlanRequest : public AbstractModel
                {
                public:
                    DescribeSQLExecutionPlanRequest();
                    ~DescribeSQLExecutionPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>SQL模板ID</p>
                     * @return TemplateID <p>SQL模板ID</p>
                     * 
                     */
                    std::string GetTemplateID() const;

                    /**
                     * 设置<p>SQL模板ID</p>
                     * @param _templateID <p>SQL模板ID</p>
                     * 
                     */
                    void SetTemplateID(const std::string& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     * 
                     */
                    bool TemplateIDHasBeenSet() const;

                    /**
                     * 获取<p>计划详情序列号</p>
                     * @return PlanDetailId <p>计划详情序列号</p>
                     * 
                     */
                    int64_t GetPlanDetailId() const;

                    /**
                     * 设置<p>计划详情序列号</p>
                     * @param _planDetailId <p>计划详情序列号</p>
                     * 
                     */
                    void SetPlanDetailId(const int64_t& _planDetailId);

                    /**
                     * 判断参数 PlanDetailId 是否已赋值
                     * @return PlanDetailId 是否已赋值
                     * 
                     */
                    bool PlanDetailIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>SQL模板ID</p>
                     */
                    std::string m_templateID;
                    bool m_templateIDHasBeenSet;

                    /**
                     * <p>计划详情序列号</p>
                     */
                    int64_t m_planDetailId;
                    bool m_planDetailIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESQLEXECUTIONPLANREQUEST_H_
