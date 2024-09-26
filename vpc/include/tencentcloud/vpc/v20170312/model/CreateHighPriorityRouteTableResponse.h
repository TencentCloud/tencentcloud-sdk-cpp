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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHIGHPRIORITYROUTETABLERESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHIGHPRIORITYROUTETABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/HighPriorityRouteTable.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateHighPriorityRouteTable返回参数结构体
                */
                class CreateHighPriorityRouteTableResponse : public AbstractModel
                {
                public:
                    CreateHighPriorityRouteTableResponse();
                    ~CreateHighPriorityRouteTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取高优路由表信息
                     * @return HighPriorityRouteTable 高优路由表信息
                     * 
                     */
                    HighPriorityRouteTable GetHighPriorityRouteTable() const;

                    /**
                     * 判断参数 HighPriorityRouteTable 是否已赋值
                     * @return HighPriorityRouteTable 是否已赋值
                     * 
                     */
                    bool HighPriorityRouteTableHasBeenSet() const;

                private:

                    /**
                     * 高优路由表信息
                     */
                    HighPriorityRouteTable m_highPriorityRouteTable;
                    bool m_highPriorityRouteTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHIGHPRIORITYROUTETABLERESPONSE_H_
