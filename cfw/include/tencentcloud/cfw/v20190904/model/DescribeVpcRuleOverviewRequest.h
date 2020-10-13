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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCRULEOVERVIEWREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCRULEOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeVpcRuleOverview请求参数结构体
                */
                class DescribeVpcRuleOverviewRequest : public AbstractModel
                {
                public:
                    DescribeVpcRuleOverviewRequest();
                    ~DescribeVpcRuleOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取边id
                     * @return EdgeId 边id
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置边id
                     * @param EdgeId 边id
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     */
                    bool EdgeIdHasBeenSet() const;

                private:

                    /**
                     * 边id
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCRULEOVERVIEWREQUEST_H_
