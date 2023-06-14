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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_TRADEDEALDETAIL_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_TRADEDEALDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * 订单交易信息
                */
                class TradeDealDetail : public AbstractModel
                {
                public:
                    TradeDealDetail();
                    ~TradeDealDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单号ID，调用云API时使用此ID	
                     * @return DealId 订单号ID，调用云API时使用此ID	
                     * 
                     */
                    std::string GetDealId() const;

                    /**
                     * 设置订单号ID，调用云API时使用此ID	
                     * @param _dealId 订单号ID，调用云API时使用此ID	
                     * 
                     */
                    void SetDealId(const std::string& _dealId);

                    /**
                     * 判断参数 DealId 是否已赋值
                     * @return DealId 是否已赋值
                     * 
                     */
                    bool DealIdHasBeenSet() const;

                    /**
                     * 获取长订单ID，反馈订单问题给官方客服使用此ID	
                     * @return DealName 长订单ID，反馈订单问题给官方客服使用此ID	
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置长订单ID，反馈订单问题给官方客服使用此ID	
                     * @param _dealName 长订单ID，反馈订单问题给官方客服使用此ID	
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取可用区id
                     * @return ZoneId 可用区id
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区id
                     * @param _zoneId 可用区id
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取订单关联的实例数
                     * @return GoodsNum 订单关联的实例数
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置订单关联的实例数
                     * @param _goodsNum 订单关联的实例数
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取创建用户uin
                     * @return Creater 创建用户uin
                     * 
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置创建用户uin
                     * @param _creater 创建用户uin
                     * 
                     */
                    void SetCreater(const std::string& _creater);

                    /**
                     * 判断参数 Creater 是否已赋值
                     * @return Creater 是否已赋值
                     * 
                     */
                    bool CreaterHasBeenSet() const;

                    /**
                     * 获取订单创建时间
                     * @return CreatTime 订单创建时间
                     * 
                     */
                    std::string GetCreatTime() const;

                    /**
                     * 设置订单创建时间
                     * @param _creatTime 订单创建时间
                     * 
                     */
                    void SetCreatTime(const std::string& _creatTime);

                    /**
                     * 判断参数 CreatTime 是否已赋值
                     * @return CreatTime 是否已赋值
                     * 
                     */
                    bool CreatTimeHasBeenSet() const;

                    /**
                     * 获取订单超时时间
                     * @return OverdueTime 订单超时时间
                     * 
                     */
                    std::string GetOverdueTime() const;

                    /**
                     * 设置订单超时时间
                     * @param _overdueTime 订单超时时间
                     * 
                     */
                    void SetOverdueTime(const std::string& _overdueTime);

                    /**
                     * 判断参数 OverdueTime 是否已赋值
                     * @return OverdueTime 是否已赋值
                     * 
                     */
                    bool OverdueTimeHasBeenSet() const;

                    /**
                     * 获取订单完成时间
                     * @return EndTime 订单完成时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置订单完成时间
                     * @param _endTime 订单完成时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取订单状态 1：未支付 2:已支付，未发货 3:发货中 4:发货成功 5:发货失败 6:已退款 7:已关闭订单 8:订单过期 9:订单已失效 10:产品已失效 11:代付拒绝 12:支付中
                     * @return Status 订单状态 1：未支付 2:已支付，未发货 3:发货中 4:发货成功 5:发货失败 6:已退款 7:已关闭订单 8:订单过期 9:订单已失效 10:产品已失效 11:代付拒绝 12:支付中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置订单状态 1：未支付 2:已支付，未发货 3:发货中 4:发货成功 5:发货失败 6:已退款 7:已关闭订单 8:订单过期 9:订单已失效 10:产品已失效 11:代付拒绝 12:支付中
                     * @param _status 订单状态 1：未支付 2:已支付，未发货 3:发货中 4:发货成功 5:发货失败 6:已退款 7:已关闭订单 8:订单过期 9:订单已失效 10:产品已失效 11:代付拒绝 12:支付中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取订单状态描述
                     * @return Description 订单状态描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置订单状态描述
                     * @param _description 订单状态描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取订单实际总价，单位：分
                     * @return Price 订单实际总价，单位：分
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置订单实际总价，单位：分
                     * @param _price 订单实际总价，单位：分
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceIds 实例ID
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID
                     * @param _instanceIds 实例ID
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 订单号ID，调用云API时使用此ID	
                     */
                    std::string m_dealId;
                    bool m_dealIdHasBeenSet;

                    /**
                     * 长订单ID，反馈订单问题给官方客服使用此ID	
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 可用区id
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 订单关联的实例数
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 创建用户uin
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * 订单创建时间
                     */
                    std::string m_creatTime;
                    bool m_creatTimeHasBeenSet;

                    /**
                     * 订单超时时间
                     */
                    std::string m_overdueTime;
                    bool m_overdueTimeHasBeenSet;

                    /**
                     * 订单完成时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 订单状态 1：未支付 2:已支付，未发货 3:发货中 4:发货成功 5:发货失败 6:已退款 7:已关闭订单 8:订单过期 9:订单已失效 10:产品已失效 11:代付拒绝 12:支付中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 订单状态描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 订单实际总价，单位：分
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_TRADEDEALDETAIL_H_
