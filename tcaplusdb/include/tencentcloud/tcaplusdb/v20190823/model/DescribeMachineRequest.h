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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEMACHINEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeMachine请求参数结构体
                */
                class DescribeMachineRequest : public AbstractModel
                {
                public:
                    DescribeMachineRequest();
                    ~DescribeMachineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取不为0，表示查询支持ipv6的机器
                     * @return Ipv6Enable 不为0，表示查询支持ipv6的机器
                     * 
                     */
                    int64_t GetIpv6Enable() const;

                    /**
                     * 设置不为0，表示查询支持ipv6的机器
                     * @param _ipv6Enable 不为0，表示查询支持ipv6的机器
                     * 
                     */
                    void SetIpv6Enable(const int64_t& _ipv6Enable);

                    /**
                     * 判断参数 Ipv6Enable 是否已赋值
                     * @return Ipv6Enable 是否已赋值
                     * 
                     */
                    bool Ipv6EnableHasBeenSet() const;

                private:

                    /**
                     * 不为0，表示查询支持ipv6的机器
                     */
                    int64_t m_ipv6Enable;
                    bool m_ipv6EnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEMACHINEREQUEST_H_
