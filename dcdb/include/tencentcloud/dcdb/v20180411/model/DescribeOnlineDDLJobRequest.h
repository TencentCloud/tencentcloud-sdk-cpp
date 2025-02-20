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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEONLINEDDLJOBREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEONLINEDDLJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeOnlineDDLJob请求参数结构体
                */
                class DescribeOnlineDDLJobRequest : public AbstractModel
                {
                public:
                    DescribeOnlineDDLJobRequest();
                    ~DescribeOnlineDDLJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取Online DDL 对应的流程Id。创建任务时，CreateOnlineDDLJob 会返回此流程Id
                     * @return FlowId Online DDL 对应的流程Id。创建任务时，CreateOnlineDDLJob 会返回此流程Id
                     * 
                     */
                    uint64_t GetFlowId() const;

                    /**
                     * 设置Online DDL 对应的流程Id。创建任务时，CreateOnlineDDLJob 会返回此流程Id
                     * @param _flowId Online DDL 对应的流程Id。创建任务时，CreateOnlineDDLJob 会返回此流程Id
                     * 
                     */
                    void SetFlowId(const uint64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Online DDL 对应的流程Id。创建任务时，CreateOnlineDDLJob 会返回此流程Id
                     */
                    uint64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEONLINEDDLJOBREQUEST_H_
