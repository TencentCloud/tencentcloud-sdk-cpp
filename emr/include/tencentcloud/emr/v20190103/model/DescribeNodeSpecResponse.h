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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPECRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DescribeNodeSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeNodeSpec返回参数结构体
                */
                class DescribeNodeSpecResponse : public AbstractModel
                {
                public:
                    DescribeNodeSpecResponse();
                    ~DescribeNodeSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节点规格类型
                     * @return NodeSpecs 节点规格类型
                     * 
                     */
                    std::vector<DescribeNodeSpec> GetNodeSpecs() const;

                    /**
                     * 判断参数 NodeSpecs 是否已赋值
                     * @return NodeSpecs 是否已赋值
                     * 
                     */
                    bool NodeSpecsHasBeenSet() const;

                private:

                    /**
                     * 节点规格类型
                     */
                    std::vector<DescribeNodeSpec> m_nodeSpecs;
                    bool m_nodeSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPECRESPONSE_H_
