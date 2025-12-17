/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_CREATEPACKAGEANDPAYREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_CREATEPACKAGEANDPAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * CreatePackageAndPay请求参数结构体
                */
                class CreatePackageAndPayRequest : public AbstractModel
                {
                public:
                    CreatePackageAndPayRequest();
                    ~CreatePackageAndPayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取下单类型：CREATE 新购；RENEW 续费；MODIFY 变配
                     * @return DealType 下单类型：CREATE 新购；RENEW 续费；MODIFY 变配
                     * 
                     */
                    std::string GetDealType() const;

                    /**
                     * 设置下单类型：CREATE 新购；RENEW 续费；MODIFY 变配
                     * @param _dealType 下单类型：CREATE 新购；RENEW 续费；MODIFY 变配
                     * 
                     */
                    void SetDealType(const std::string& _dealType);

                    /**
                     * 判断参数 DealType 是否已赋值
                     * @return DealType 是否已赋值
                     * 
                     */
                    bool DealTypeHasBeenSet() const;

                    /**
                     * 获取套餐类型：STANDARD 标准版；ULTIMATE 旗舰版；TASK 任务探测
                     * @return GoodsType 套餐类型：STANDARD 标准版；ULTIMATE 旗舰版；TASK 任务探测
                     * 
                     */
                    std::string GetGoodsType() const;

                    /**
                     * 设置套餐类型：STANDARD 标准版；ULTIMATE 旗舰版；TASK 任务探测
                     * @param _goodsType 套餐类型：STANDARD 标准版；ULTIMATE 旗舰版；TASK 任务探测
                     * 
                     */
                    void SetGoodsType(const std::string& _goodsType);

                    /**
                     * 判断参数 GoodsType 是否已赋值
                     * @return GoodsType 是否已赋值
                     * 
                     */
                    bool GoodsTypeHasBeenSet() const;

                    /**
                     * 获取商品数量：STANDARD和ULTIMATE固定为1，TASK为任务探测数量。取值范围：1～10000
                     * @return GoodsNum 商品数量：STANDARD和ULTIMATE固定为1，TASK为任务探测数量。取值范围：1～10000
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置商品数量：STANDARD和ULTIMATE固定为1，TASK为任务探测数量。取值范围：1～10000
                     * @param _goodsNum 商品数量：STANDARD和ULTIMATE固定为1，TASK为任务探测数量。取值范围：1～10000
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取自动续费：1 开启自动续费；2 关闭自动续费
                     * @return AutoRenew 自动续费：1 开启自动续费；2 关闭自动续费
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置自动续费：1 开启自动续费；2 关闭自动续费
                     * @param _autoRenew 自动续费：1 开启自动续费；2 关闭自动续费
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取资源ID，续费和变配的时候需要传
                     * @return ResourceId 资源ID，续费和变配的时候需要传
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，续费和变配的时候需要传
                     * @param _resourceId 资源ID，续费和变配的时候需要传
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取套餐时长，以月为单位，创建和续费的时候需要传。取值范围：1～120
                     * @return TimeSpan 套餐时长，以月为单位，创建和续费的时候需要传。取值范围：1～120
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置套餐时长，以月为单位，创建和续费的时候需要传。取值范围：1～120
                     * @param _timeSpan 套餐时长，以月为单位，创建和续费的时候需要传。取值范围：1～120
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取升级的套餐类型，暂时只支持传ULTIMATE，不支持降配
                     * @return NewPackageType 升级的套餐类型，暂时只支持传ULTIMATE，不支持降配
                     * 
                     */
                    std::string GetNewPackageType() const;

                    /**
                     * 设置升级的套餐类型，暂时只支持传ULTIMATE，不支持降配
                     * @param _newPackageType 升级的套餐类型，暂时只支持传ULTIMATE，不支持降配
                     * 
                     */
                    void SetNewPackageType(const std::string& _newPackageType);

                    /**
                     * 判断参数 NewPackageType 是否已赋值
                     * @return NewPackageType 是否已赋值
                     * 
                     */
                    bool NewPackageTypeHasBeenSet() const;

                    /**
                     * 获取是否自动选择代金券，1 是；0否，默认为0
                     * @return AutoVoucher 是否自动选择代金券，1 是；0否，默认为0
                     * 
                     */
                    uint64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券，1 是；0否，默认为0
                     * @param _autoVoucher 是否自动选择代金券，1 是；0否，默认为0
                     * 
                     */
                    void SetAutoVoucher(const uint64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                private:

                    /**
                     * 下单类型：CREATE 新购；RENEW 续费；MODIFY 变配
                     */
                    std::string m_dealType;
                    bool m_dealTypeHasBeenSet;

                    /**
                     * 套餐类型：STANDARD 标准版；ULTIMATE 旗舰版；TASK 任务探测
                     */
                    std::string m_goodsType;
                    bool m_goodsTypeHasBeenSet;

                    /**
                     * 商品数量：STANDARD和ULTIMATE固定为1，TASK为任务探测数量。取值范围：1～10000
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 自动续费：1 开启自动续费；2 关闭自动续费
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 资源ID，续费和变配的时候需要传
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 套餐时长，以月为单位，创建和续费的时候需要传。取值范围：1～120
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 升级的套餐类型，暂时只支持传ULTIMATE，不支持降配
                     */
                    std::string m_newPackageType;
                    bool m_newPackageTypeHasBeenSet;

                    /**
                     * 是否自动选择代金券，1 是；0否，默认为0
                     */
                    uint64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_CREATEPACKAGEANDPAYREQUEST_H_
