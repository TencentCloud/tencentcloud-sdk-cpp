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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCLIMITSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCLIMITSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpcLimits请求参数结构体
                */
                class DescribeVpcLimitsRequest : public AbstractModel
                {
                public:
                    DescribeVpcLimitsRequest();
                    ~DescribeVpcLimitsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配额名称。每次最大查询100个配额类型。
                     * @return LimitTypes 配额名称。每次最大查询100个配额类型。
                     * 
                     */
                    std::vector<std::string> GetLimitTypes() const;

                    /**
                     * 设置配额名称。每次最大查询100个配额类型。
                     * @param _limitTypes 配额名称。每次最大查询100个配额类型。
                     * 
                     */
                    void SetLimitTypes(const std::vector<std::string>& _limitTypes);

                    /**
                     * 判断参数 LimitTypes 是否已赋值
                     * @return LimitTypes 是否已赋值
                     * 
                     */
                    bool LimitTypesHasBeenSet() const;

                private:

                    /**
                     * 配额名称。每次最大查询100个配额类型。
                     */
                    std::vector<std::string> m_limitTypes;
                    bool m_limitTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCLIMITSREQUEST_H_
