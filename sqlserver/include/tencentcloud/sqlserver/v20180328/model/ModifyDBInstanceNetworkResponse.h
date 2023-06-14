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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENETWORKRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENETWORKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceNetwork返回参数结构体
                */
                class ModifyDBInstanceNetworkResponse : public AbstractModel
                {
                public:
                    ModifyDBInstanceNetworkResponse();
                    ~ModifyDBInstanceNetworkResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例转网流程id，可通过[DescribeFlowStatus](https://cloud.tencent.com/document/product/238/19967)接口查询流程状态
                     * @return FlowId 实例转网流程id，可通过[DescribeFlowStatus](https://cloud.tencent.com/document/product/238/19967)接口查询流程状态
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 实例转网流程id，可通过[DescribeFlowStatus](https://cloud.tencent.com/document/product/238/19967)接口查询流程状态
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCENETWORKRESPONSE_H_
