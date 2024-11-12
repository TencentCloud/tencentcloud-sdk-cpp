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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERORDERREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DedicatedClusterTypeInfo.h>
#include <tencentcloud/cdc/v20201214/model/CosInfo.h>
#include <tencentcloud/cdc/v20201214/model/CbsInfo.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CreateDedicatedClusterOrder请求参数结构体
                */
                class CreateDedicatedClusterOrderRequest : public AbstractModel
                {
                public:
                    CreateDedicatedClusterOrderRequest();
                    ~CreateDedicatedClusterOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专用集群id
                     * @return DedicatedClusterId 专用集群id
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置专用集群id
                     * @param _dedicatedClusterId 专用集群id
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取order关联的专用集群类型数组
                     * @return DedicatedClusterTypes order关联的专用集群类型数组
                     * 
                     */
                    std::vector<DedicatedClusterTypeInfo> GetDedicatedClusterTypes() const;

                    /**
                     * 设置order关联的专用集群类型数组
                     * @param _dedicatedClusterTypes order关联的专用集群类型数组
                     * 
                     */
                    void SetDedicatedClusterTypes(const std::vector<DedicatedClusterTypeInfo>& _dedicatedClusterTypes);

                    /**
                     * 判断参数 DedicatedClusterTypes 是否已赋值
                     * @return DedicatedClusterTypes 是否已赋值
                     * 
                     */
                    bool DedicatedClusterTypesHasBeenSet() const;

                    /**
                     * 获取order关联的cos存储信息
                     * @return CosInfo order关联的cos存储信息
                     * 
                     */
                    CosInfo GetCosInfo() const;

                    /**
                     * 设置order关联的cos存储信息
                     * @param _cosInfo order关联的cos存储信息
                     * 
                     */
                    void SetCosInfo(const CosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                    /**
                     * 获取order关联的cbs存储信息
                     * @return CbsInfo order关联的cbs存储信息
                     * 
                     */
                    CbsInfo GetCbsInfo() const;

                    /**
                     * 设置order关联的cbs存储信息
                     * @param _cbsInfo order关联的cbs存储信息
                     * 
                     */
                    void SetCbsInfo(const CbsInfo& _cbsInfo);

                    /**
                     * 判断参数 CbsInfo 是否已赋值
                     * @return CbsInfo 是否已赋值
                     * 
                     */
                    bool CbsInfoHasBeenSet() const;

                    /**
                     * 获取购买来源，默认为cloudApi
                     * @return PurchaseSource 购买来源，默认为cloudApi
                     * 
                     */
                    std::string GetPurchaseSource() const;

                    /**
                     * 设置购买来源，默认为cloudApi
                     * @param _purchaseSource 购买来源，默认为cloudApi
                     * 
                     */
                    void SetPurchaseSource(const std::string& _purchaseSource);

                    /**
                     * 判断参数 PurchaseSource 是否已赋值
                     * @return PurchaseSource 是否已赋值
                     * 
                     */
                    bool PurchaseSourceHasBeenSet() const;

                    /**
                     * 获取当调用API接口提交订单时，需要提交DedicatedClusterOrderId，此处DedicatedClusterOrderId是之前创建的订单，可通过DescribeDedicatedClusterOrders接口查询，这里传入DedicatedClusterOrderId用于调整订单和支付。
                     * @return DedicatedClusterOrderId 当调用API接口提交订单时，需要提交DedicatedClusterOrderId，此处DedicatedClusterOrderId是之前创建的订单，可通过DescribeDedicatedClusterOrders接口查询，这里传入DedicatedClusterOrderId用于调整订单和支付。
                     * 
                     */
                    std::string GetDedicatedClusterOrderId() const;

                    /**
                     * 设置当调用API接口提交订单时，需要提交DedicatedClusterOrderId，此处DedicatedClusterOrderId是之前创建的订单，可通过DescribeDedicatedClusterOrders接口查询，这里传入DedicatedClusterOrderId用于调整订单和支付。
                     * @param _dedicatedClusterOrderId 当调用API接口提交订单时，需要提交DedicatedClusterOrderId，此处DedicatedClusterOrderId是之前创建的订单，可通过DescribeDedicatedClusterOrders接口查询，这里传入DedicatedClusterOrderId用于调整订单和支付。
                     * 
                     */
                    void SetDedicatedClusterOrderId(const std::string& _dedicatedClusterOrderId);

                    /**
                     * 判断参数 DedicatedClusterOrderId 是否已赋值
                     * @return DedicatedClusterOrderId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterOrderIdHasBeenSet() const;

                private:

                    /**
                     * 专用集群id
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * order关联的专用集群类型数组
                     */
                    std::vector<DedicatedClusterTypeInfo> m_dedicatedClusterTypes;
                    bool m_dedicatedClusterTypesHasBeenSet;

                    /**
                     * order关联的cos存储信息
                     */
                    CosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                    /**
                     * order关联的cbs存储信息
                     */
                    CbsInfo m_cbsInfo;
                    bool m_cbsInfoHasBeenSet;

                    /**
                     * 购买来源，默认为cloudApi
                     */
                    std::string m_purchaseSource;
                    bool m_purchaseSourceHasBeenSet;

                    /**
                     * 当调用API接口提交订单时，需要提交DedicatedClusterOrderId，此处DedicatedClusterOrderId是之前创建的订单，可通过DescribeDedicatedClusterOrders接口查询，这里传入DedicatedClusterOrderId用于调整订单和支付。
                     */
                    std::string m_dedicatedClusterOrderId;
                    bool m_dedicatedClusterOrderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERORDERREQUEST_H_
