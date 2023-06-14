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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateRoInstanceIp返回参数结构体
                */
                class CreateRoInstanceIpResponse : public AbstractModel
                {
                public:
                    CreateRoInstanceIpResponse();
                    ~CreateRoInstanceIpResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取只读实例的私有网络的ID。
                     * @return RoVpcId 只读实例的私有网络的ID。
                     * 
                     */
                    int64_t GetRoVpcId() const;

                    /**
                     * 判断参数 RoVpcId 是否已赋值
                     * @return RoVpcId 是否已赋值
                     * 
                     */
                    bool RoVpcIdHasBeenSet() const;

                    /**
                     * 获取只读实例的子网ID。
                     * @return RoSubnetId 只读实例的子网ID。
                     * 
                     */
                    int64_t GetRoSubnetId() const;

                    /**
                     * 判断参数 RoSubnetId 是否已赋值
                     * @return RoSubnetId 是否已赋值
                     * 
                     */
                    bool RoSubnetIdHasBeenSet() const;

                    /**
                     * 获取只读实例的内网IP地址。
                     * @return RoVip 只读实例的内网IP地址。
                     * 
                     */
                    std::string GetRoVip() const;

                    /**
                     * 判断参数 RoVip 是否已赋值
                     * @return RoVip 是否已赋值
                     * 
                     */
                    bool RoVipHasBeenSet() const;

                    /**
                     * 获取只读实例的内网端口号。
                     * @return RoVport 只读实例的内网端口号。
                     * 
                     */
                    int64_t GetRoVport() const;

                    /**
                     * 判断参数 RoVport 是否已赋值
                     * @return RoVport 是否已赋值
                     * 
                     */
                    bool RoVportHasBeenSet() const;

                private:

                    /**
                     * 只读实例的私有网络的ID。
                     */
                    int64_t m_roVpcId;
                    bool m_roVpcIdHasBeenSet;

                    /**
                     * 只读实例的子网ID。
                     */
                    int64_t m_roSubnetId;
                    bool m_roSubnetIdHasBeenSet;

                    /**
                     * 只读实例的内网IP地址。
                     */
                    std::string m_roVip;
                    bool m_roVipHasBeenSet;

                    /**
                     * 只读实例的内网端口号。
                     */
                    int64_t m_roVport;
                    bool m_roVportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPRESPONSE_H_
