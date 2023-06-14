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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPREQUEST_H_

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
                * CreateRoInstanceIp请求参数结构体
                */
                class CreateRoInstanceIpRequest : public AbstractModel
                {
                public:
                    CreateRoInstanceIpRequest();
                    ~CreateRoInstanceIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取只读实例ID，格式如：cdbro-3i70uj0k，与云数据库控制台页面中显示的只读实例ID相同。
                     * @return InstanceId 只读实例ID，格式如：cdbro-3i70uj0k，与云数据库控制台页面中显示的只读实例ID相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置只读实例ID，格式如：cdbro-3i70uj0k，与云数据库控制台页面中显示的只读实例ID相同。
                     * @param _instanceId 只读实例ID，格式如：cdbro-3i70uj0k，与云数据库控制台页面中显示的只读实例ID相同。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取子网描述符，例如：subnet-1typ0s7d。
                     * @return UniqSubnetId 子网描述符，例如：subnet-1typ0s7d。
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网描述符，例如：subnet-1typ0s7d。
                     * @param _uniqSubnetId 子网描述符，例如：subnet-1typ0s7d。
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取vpc描述符，例如：vpc-a23yt67j,如果传了该字段则UniqSubnetId必传
                     * @return UniqVpcId vpc描述符，例如：vpc-a23yt67j,如果传了该字段则UniqSubnetId必传
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpc描述符，例如：vpc-a23yt67j,如果传了该字段则UniqSubnetId必传
                     * @param _uniqVpcId vpc描述符，例如：vpc-a23yt67j,如果传了该字段则UniqSubnetId必传
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                private:

                    /**
                     * 只读实例ID，格式如：cdbro-3i70uj0k，与云数据库控制台页面中显示的只读实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 子网描述符，例如：subnet-1typ0s7d。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * vpc描述符，例如：vpc-a23yt67j,如果传了该字段则UniqSubnetId必传
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEROINSTANCEIPREQUEST_H_
