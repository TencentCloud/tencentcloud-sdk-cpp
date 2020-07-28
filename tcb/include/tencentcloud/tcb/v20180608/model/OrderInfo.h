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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ORDERINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ORDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 订单信息
                */
                class OrderInfo : public AbstractModel
                {
                public:
                    OrderInfo();
                    ~OrderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单号
                     * @return TranId 订单号
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置订单号
                     * @param TranId 订单号
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取订单要切换的套餐ID
                     * @return PackageId 订单要切换的套餐ID
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置订单要切换的套餐ID
                     * @param PackageId 订单要切换的套餐ID
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取订单类型
<li>1 购买</li>
<li>2 续费</li>
<li>3 变配</li>
                     * @return TranType 订单类型
<li>1 购买</li>
<li>2 续费</li>
<li>3 变配</li>
                     */
                    std::string GetTranType() const;

                    /**
                     * 设置订单类型
<li>1 购买</li>
<li>2 续费</li>
<li>3 变配</li>
                     * @param TranType 订单类型
<li>1 购买</li>
<li>2 续费</li>
<li>3 变配</li>
                     */
                    void SetTranType(const std::string& _tranType);

                    /**
                     * 判断参数 TranType 是否已赋值
                     * @return TranType 是否已赋值
                     */
                    bool TranTypeHasBeenSet() const;

                    /**
                     * 获取订单状态。
<li>1未支付</li>
<li>2 支付中</li>
<li>3 发货中</li>
<li>4 发货成功</li>
<li>5 发货失败</li>
<li>6 已退款</li>
<li>7 已取消</li>
<li>100 已删除</li>
                     * @return TranStatus 订单状态。
<li>1未支付</li>
<li>2 支付中</li>
<li>3 发货中</li>
<li>4 发货成功</li>
<li>5 发货失败</li>
<li>6 已退款</li>
<li>7 已取消</li>
<li>100 已删除</li>
                     */
                    std::string GetTranStatus() const;

                    /**
                     * 设置订单状态。
<li>1未支付</li>
<li>2 支付中</li>
<li>3 发货中</li>
<li>4 发货成功</li>
<li>5 发货失败</li>
<li>6 已退款</li>
<li>7 已取消</li>
<li>100 已删除</li>
                     * @param TranStatus 订单状态。
<li>1未支付</li>
<li>2 支付中</li>
<li>3 发货中</li>
<li>4 发货成功</li>
<li>5 发货失败</li>
<li>6 已退款</li>
<li>7 已取消</li>
<li>100 已删除</li>
                     */
                    void SetTranStatus(const std::string& _tranStatus);

                    /**
                     * 判断参数 TranStatus 是否已赋值
                     * @return TranStatus 是否已赋值
                     */
                    bool TranStatusHasBeenSet() const;

                    /**
                     * 获取订单更新时间
                     * @return UpdateTime 订单更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置订单更新时间
                     * @param UpdateTime 订单更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取订单创建时间
                     * @return CreateTime 订单创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置订单创建时间
                     * @param CreateTime 订单创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取付费模式.
<li>prepayment 预付费</li>
<li>postpaid 后付费</li>
                     * @return PayMode 付费模式.
<li>prepayment 预付费</li>
<li>postpaid 后付费</li>
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式.
<li>prepayment 预付费</li>
<li>postpaid 后付费</li>
                     * @param PayMode 付费模式.
<li>prepayment 预付费</li>
<li>postpaid 后付费</li>
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取订单绑定的扩展ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtensionId 订单绑定的扩展ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 设置订单绑定的扩展ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExtensionId 订单绑定的扩展ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtensionId(const std::string& _extensionId);

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     */
                    bool ExtensionIdHasBeenSet() const;

                    /**
                     * 获取资源初始化结果(仅当ExtensionId不为空时有效): successful(初始化成功), failed(初始化失败), doing(初始化进行中), init(准备初始化)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceReady 资源初始化结果(仅当ExtensionId不为空时有效): successful(初始化成功), failed(初始化失败), doing(初始化进行中), init(准备初始化)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceReady() const;

                    /**
                     * 设置资源初始化结果(仅当ExtensionId不为空时有效): successful(初始化成功), failed(初始化失败), doing(初始化进行中), init(准备初始化)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceReady 资源初始化结果(仅当ExtensionId不为空时有效): successful(初始化成功), failed(初始化失败), doing(初始化进行中), init(准备初始化)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceReady(const std::string& _resourceReady);

                    /**
                     * 判断参数 ResourceReady 是否已赋值
                     * @return ResourceReady 是否已赋值
                     */
                    bool ResourceReadyHasBeenSet() const;

                private:

                    /**
                     * 订单号
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * 订单要切换的套餐ID
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 订单类型
<li>1 购买</li>
<li>2 续费</li>
<li>3 变配</li>
                     */
                    std::string m_tranType;
                    bool m_tranTypeHasBeenSet;

                    /**
                     * 订单状态。
<li>1未支付</li>
<li>2 支付中</li>
<li>3 发货中</li>
<li>4 发货成功</li>
<li>5 发货失败</li>
<li>6 已退款</li>
<li>7 已取消</li>
<li>100 已删除</li>
                     */
                    std::string m_tranStatus;
                    bool m_tranStatusHasBeenSet;

                    /**
                     * 订单更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 订单创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 付费模式.
<li>prepayment 预付费</li>
<li>postpaid 后付费</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 订单绑定的扩展ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                    /**
                     * 资源初始化结果(仅当ExtensionId不为空时有效): successful(初始化成功), failed(初始化失败), doing(初始化进行中), init(准备初始化)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceReady;
                    bool m_resourceReadyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ORDERINFO_H_
