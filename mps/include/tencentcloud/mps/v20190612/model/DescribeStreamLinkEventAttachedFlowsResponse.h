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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKEVENTATTACHEDFLOWSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKEVENTATTACHEDFLOWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DescribeFlow.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamLinkEventAttachedFlows返回参数结构体
                */
                class DescribeStreamLinkEventAttachedFlowsResponse : public AbstractModel
                {
                public:
                    DescribeStreamLinkEventAttachedFlowsResponse();
                    ~DescribeStreamLinkEventAttachedFlowsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取流的配置信息列表。
                     * @return Infos 流的配置信息列表。
                     * 
                     */
                    std::vector<DescribeFlow> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                    /**
                     * 获取总数量。
                     * @return TotalNum 总数量。
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * 流的配置信息列表。
                     */
                    std::vector<DescribeFlow> m_infos;
                    bool m_infosHasBeenSet;

                    /**
                     * 总数量。
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKEVENTATTACHEDFLOWSRESPONSE_H_
