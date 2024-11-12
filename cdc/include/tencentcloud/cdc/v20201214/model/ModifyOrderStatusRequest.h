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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYORDERSTATUSREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYORDERSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * ModifyOrderStatus请求参数结构体
                */
                class ModifyOrderStatusRequest : public AbstractModel
                {
                public:
                    ModifyOrderStatusRequest();
                    ~ModifyOrderStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要更新成的状态
                     * @return Status 要更新成的状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置要更新成的状态
                     * @param _status 要更新成的状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取大订单ID，可以在本地专用集群的基础信息页获取大订单ID
                     * @return DedicatedClusterOrderId 大订单ID，可以在本地专用集群的基础信息页获取大订单ID
                     * 
                     */
                    std::string GetDedicatedClusterOrderId() const;

                    /**
                     * 设置大订单ID，可以在本地专用集群的基础信息页获取大订单ID
                     * @param _dedicatedClusterOrderId 大订单ID，可以在本地专用集群的基础信息页获取大订单ID
                     * 
                     */
                    void SetDedicatedClusterOrderId(const std::string& _dedicatedClusterOrderId);

                    /**
                     * 判断参数 DedicatedClusterOrderId 是否已赋值
                     * @return DedicatedClusterOrderId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterOrderIdHasBeenSet() const;

                    /**
                     * 获取小订单ID，进入大订单的详情页，可以看到小订单ID
                     * @return SubOrderIds 小订单ID，进入大订单的详情页，可以看到小订单ID
                     * 
                     */
                    std::vector<std::string> GetSubOrderIds() const;

                    /**
                     * 设置小订单ID，进入大订单的详情页，可以看到小订单ID
                     * @param _subOrderIds 小订单ID，进入大订单的详情页，可以看到小订单ID
                     * 
                     */
                    void SetSubOrderIds(const std::vector<std::string>& _subOrderIds);

                    /**
                     * 判断参数 SubOrderIds 是否已赋值
                     * @return SubOrderIds 是否已赋值
                     * 
                     */
                    bool SubOrderIdsHasBeenSet() const;

                private:

                    /**
                     * 要更新成的状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 大订单ID，可以在本地专用集群的基础信息页获取大订单ID
                     */
                    std::string m_dedicatedClusterOrderId;
                    bool m_dedicatedClusterOrderIdHasBeenSet;

                    /**
                     * 小订单ID，进入大订单的详情页，可以看到小订单ID
                     */
                    std::vector<std::string> m_subOrderIds;
                    bool m_subOrderIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYORDERSTATUSREQUEST_H_
