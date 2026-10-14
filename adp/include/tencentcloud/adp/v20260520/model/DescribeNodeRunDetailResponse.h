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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODERUNDETAILRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODERUNDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/NodeRunDetail.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeNodeRunDetail返回参数结构体
                */
                class DescribeNodeRunDetailResponse : public AbstractModel
                {
                public:
                    DescribeNodeRunDetailResponse();
                    ~DescribeNodeRunDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点运行实例详情</p>
                     * @return NodeRunDetail <p>节点运行实例详情</p>
                     * 
                     */
                    NodeRunDetail GetNodeRunDetail() const;

                    /**
                     * 判断参数 NodeRunDetail 是否已赋值
                     * @return NodeRunDetail 是否已赋值
                     * 
                     */
                    bool NodeRunDetailHasBeenSet() const;

                private:

                    /**
                     * <p>节点运行实例详情</p>
                     */
                    NodeRunDetail m_nodeRunDetail;
                    bool m_nodeRunDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODERUNDETAILRESPONSE_H_
