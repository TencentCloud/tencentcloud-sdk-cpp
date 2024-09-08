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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DEPLOYYARNCONFRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DEPLOYYARNCONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DeployYarnConf返回参数结构体
                */
                class DeployYarnConfResponse : public AbstractModel
                {
                public:
                    DeployYarnConfResponse();
                    ~DeployYarnConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取启动流程后的流程ID，可以使用[DescribeClusterFlowStatusDetail](https://cloud.tencent.com/document/product/589/107224)接口来获取流程状态
                     * @return FlowId 启动流程后的流程ID，可以使用[DescribeClusterFlowStatusDetail](https://cloud.tencent.com/document/product/589/107224)接口来获取流程状态
                     * 
                     */
                    uint64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 启动流程后的流程ID，可以使用[DescribeClusterFlowStatusDetail](https://cloud.tencent.com/document/product/589/107224)接口来获取流程状态
                     */
                    uint64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DEPLOYYARNCONFRESPONSE_H_
