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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBEVIPVPORTREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBEVIPVPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * ModifySubscribeVipVport请求参数结构体
                */
                class ModifySubscribeVipVportRequest : public AbstractModel
                {
                public:
                    ModifySubscribeVipVportRequest();
                    ~ModifySubscribeVipVportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅实例的ID
                     * @return SubscribeId 数据订阅实例的ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅实例的ID
                     * @param _subscribeId 数据订阅实例的ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取指定目的子网，如果传此参数，DstIp必须在目的子网内
                     * @return DstUniqSubnetId 指定目的子网，如果传此参数，DstIp必须在目的子网内
                     * 
                     */
                    std::string GetDstUniqSubnetId() const;

                    /**
                     * 设置指定目的子网，如果传此参数，DstIp必须在目的子网内
                     * @param _dstUniqSubnetId 指定目的子网，如果传此参数，DstIp必须在目的子网内
                     * 
                     */
                    void SetDstUniqSubnetId(const std::string& _dstUniqSubnetId);

                    /**
                     * 判断参数 DstUniqSubnetId 是否已赋值
                     * @return DstUniqSubnetId 是否已赋值
                     * 
                     */
                    bool DstUniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取目标IP，与DstPort至少传一个
                     * @return DstIp 目标IP，与DstPort至少传一个
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目标IP，与DstPort至少传一个
                     * @param _dstIp 目标IP，与DstPort至少传一个
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取目标PORT，支持范围为：[1025-65535]
                     * @return DstPort 目标PORT，支持范围为：[1025-65535]
                     * 
                     */
                    int64_t GetDstPort() const;

                    /**
                     * 设置目标PORT，支持范围为：[1025-65535]
                     * @param _dstPort 目标PORT，支持范围为：[1025-65535]
                     * 
                     */
                    void SetDstPort(const int64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                private:

                    /**
                     * 数据订阅实例的ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 指定目的子网，如果传此参数，DstIp必须在目的子网内
                     */
                    std::string m_dstUniqSubnetId;
                    bool m_dstUniqSubnetIdHasBeenSet;

                    /**
                     * 目标IP，与DstPort至少传一个
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 目标PORT，支持范围为：[1025-65535]
                     */
                    int64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBEVIPVPORTREQUEST_H_
