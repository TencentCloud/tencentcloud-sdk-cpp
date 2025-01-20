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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CHECKDEFAULTSUBNETREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CHECKDEFAULTSUBNETREQUEST_H_

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
                * CheckDefaultSubnet请求参数结构体
                */
                class CheckDefaultSubnetRequest : public AbstractModel
                {
                public:
                    CheckDefaultSubnetRequest();
                    ~CheckDefaultSubnetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
                     * @return Zone 子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
                     * @param _zone 子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CHECKDEFAULTSUBNETREQUEST_H_
