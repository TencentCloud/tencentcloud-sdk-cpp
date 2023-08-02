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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_ORDERS_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_ORDERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 渠道合作加固订单资源信息
                */
                class Orders : public AbstractModel
                {
                public:
                    Orders();
                    ~Orders() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单号
                     * @return OrderId 订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param _orderId 订单号
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取平台类型整型值 
                     * @return PlatformType 平台类型整型值 
                     * 
                     */
                    int64_t GetPlatformType() const;

                    /**
                     * 设置平台类型整型值 
                     * @param _platformType 平台类型整型值 
                     * 
                     */
                    void SetPlatformType(const int64_t& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     * 
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取平台类型描述：  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @return PlatformTypeDesc 平台类型描述：  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * 
                     */
                    std::string GetPlatformTypeDesc() const;

                    /**
                     * 设置平台类型描述：  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @param _platformTypeDesc 平台类型描述：  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * 
                     */
                    void SetPlatformTypeDesc(const std::string& _platformTypeDesc);

                    /**
                     * 判断参数 PlatformTypeDesc 是否已赋值
                     * @return PlatformTypeDesc 是否已赋值
                     * 
                     */
                    bool PlatformTypeDescHasBeenSet() const;

                    /**
                     * 获取订单采购类型整型值
                     * @return OrderType 订单采购类型整型值
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置订单采购类型整型值
                     * @param _orderType 订单采购类型整型值
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取订单采购类型描述： 1-免费试用 2-按年收费 3-按次收费
                     * @return OrderTypeDesc 订单采购类型描述： 1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    std::string GetOrderTypeDesc() const;

                    /**
                     * 设置订单采购类型描述： 1-免费试用 2-按年收费 3-按次收费
                     * @param _orderTypeDesc 订单采购类型描述： 1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    void SetOrderTypeDesc(const std::string& _orderTypeDesc);

                    /**
                     * 判断参数 OrderTypeDesc 是否已赋值
                     * @return OrderTypeDesc 是否已赋值
                     * 
                     */
                    bool OrderTypeDescHasBeenSet() const;

                    /**
                     * 获取android包年收费加固的包名
                     * @return AppPkgName android包年收费加固的包名
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置android包年收费加固的包名
                     * @param _appPkgName android包年收费加固的包名
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                    /**
                     * 获取资源号
                     * @return ResourceId 资源号
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源号
                     * @param _resourceId 资源号
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
                     * 获取资源状态整型值
                     * @return ResourceStatus 资源状态整型值
                     * 
                     */
                    int64_t GetResourceStatus() const;

                    /**
                     * 设置资源状态整型值
                     * @param _resourceStatus 资源状态整型值
                     * 
                     */
                    void SetResourceStatus(const int64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取资源状态描述
0-未生效、1-生效中、2-已失效。
                     * @return ResourceStatusDesc 资源状态描述
0-未生效、1-生效中、2-已失效。
                     * 
                     */
                    std::string GetResourceStatusDesc() const;

                    /**
                     * 设置资源状态描述
0-未生效、1-生效中、2-已失效。
                     * @param _resourceStatusDesc 资源状态描述
0-未生效、1-生效中、2-已失效。
                     * 
                     */
                    void SetResourceStatusDesc(const std::string& _resourceStatusDesc);

                    /**
                     * 判断参数 ResourceStatusDesc 是否已赋值
                     * @return ResourceStatusDesc 是否已赋值
                     * 
                     */
                    bool ResourceStatusDescHasBeenSet() const;

                    /**
                     * 获取订单类型为免费试用时的免费加固次数。
                     * @return TestTimes 订单类型为免费试用时的免费加固次数。
                     * 
                     */
                    int64_t GetTestTimes() const;

                    /**
                     * 设置订单类型为免费试用时的免费加固次数。
                     * @param _testTimes 订单类型为免费试用时的免费加固次数。
                     * 
                     */
                    void SetTestTimes(const int64_t& _testTimes);

                    /**
                     * 判断参数 TestTimes 是否已赋值
                     * @return TestTimes 是否已赋值
                     * 
                     */
                    bool TestTimesHasBeenSet() const;

                    /**
                     * 获取资源生效时间
                     * @return ValidTime 资源生效时间
                     * 
                     */
                    std::string GetValidTime() const;

                    /**
                     * 设置资源生效时间
                     * @param _validTime 资源生效时间
                     * 
                     */
                    void SetValidTime(const std::string& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取资源过期时间
                     * @return ExpireTime 资源过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置资源过期时间
                     * @param _expireTime 资源过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取资源创建时间
                     * @return CreateTime 资源创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置资源创建时间
                     * @param _createTime 资源创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取订单审批人
                     * @return Approver 订单审批人
                     * 
                     */
                    std::string GetApprover() const;

                    /**
                     * 设置订单审批人
                     * @param _approver 订单审批人
                     * 
                     */
                    void SetApprover(const std::string& _approver);

                    /**
                     * 判断参数 Approver 是否已赋值
                     * @return Approver 是否已赋值
                     * 
                     */
                    bool ApproverHasBeenSet() const;

                    /**
                     * 获取订单审批状态整型值
                     * @return ApprovalStatus 订单审批状态整型值
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置订单审批状态整型值
                     * @param _approvalStatus 订单审批状态整型值
                     * 
                     */
                    void SetApprovalStatus(const int64_t& _approvalStatus);

                    /**
                     * 判断参数 ApprovalStatus 是否已赋值
                     * @return ApprovalStatus 是否已赋值
                     * 
                     */
                    bool ApprovalStatusHasBeenSet() const;

                    /**
                     * 获取订单审批状态整型值描述：0-未审批、1-审批通过、2-驳回。
                     * @return ApprovalStatusDesc 订单审批状态整型值描述：0-未审批、1-审批通过、2-驳回。
                     * 
                     */
                    std::string GetApprovalStatusDesc() const;

                    /**
                     * 设置订单审批状态整型值描述：0-未审批、1-审批通过、2-驳回。
                     * @param _approvalStatusDesc 订单审批状态整型值描述：0-未审批、1-审批通过、2-驳回。
                     * 
                     */
                    void SetApprovalStatusDesc(const std::string& _approvalStatusDesc);

                    /**
                     * 判断参数 ApprovalStatusDesc 是否已赋值
                     * @return ApprovalStatusDesc 是否已赋值
                     * 
                     */
                    bool ApprovalStatusDescHasBeenSet() const;

                    /**
                     * 获取订单审批时间
                     * @return ApprovalTime 订单审批时间
                     * 
                     */
                    std::string GetApprovalTime() const;

                    /**
                     * 设置订单审批时间
                     * @param _approvalTime 订单审批时间
                     * 
                     */
                    void SetApprovalTime(const std::string& _approvalTime);

                    /**
                     * 判断参数 ApprovalTime 是否已赋值
                     * @return ApprovalTime 是否已赋值
                     * 
                     */
                    bool ApprovalTimeHasBeenSet() const;

                    /**
                     * 获取按次收费加固资源，其关联的总任务数
                     * @return TimesTaskTotalCount 按次收费加固资源，其关联的总任务数
                     * 
                     */
                    int64_t GetTimesTaskTotalCount() const;

                    /**
                     * 设置按次收费加固资源，其关联的总任务数
                     * @param _timesTaskTotalCount 按次收费加固资源，其关联的总任务数
                     * 
                     */
                    void SetTimesTaskTotalCount(const int64_t& _timesTaskTotalCount);

                    /**
                     * 判断参数 TimesTaskTotalCount 是否已赋值
                     * @return TimesTaskTotalCount 是否已赋值
                     * 
                     */
                    bool TimesTaskTotalCountHasBeenSet() const;

                    /**
                     * 获取按次收费加固资源，其关联的任务成功数
                     * @return TimesTaskSuccessCount 按次收费加固资源，其关联的任务成功数
                     * 
                     */
                    int64_t GetTimesTaskSuccessCount() const;

                    /**
                     * 设置按次收费加固资源，其关联的任务成功数
                     * @param _timesTaskSuccessCount 按次收费加固资源，其关联的任务成功数
                     * 
                     */
                    void SetTimesTaskSuccessCount(const int64_t& _timesTaskSuccessCount);

                    /**
                     * 判断参数 TimesTaskSuccessCount 是否已赋值
                     * @return TimesTaskSuccessCount 是否已赋值
                     * 
                     */
                    bool TimesTaskSuccessCountHasBeenSet() const;

                    /**
                     * 获取按次收费加固资源，其关联的任务失败数
                     * @return TimesTaskFailCount 按次收费加固资源，其关联的任务失败数
                     * 
                     */
                    int64_t GetTimesTaskFailCount() const;

                    /**
                     * 设置按次收费加固资源，其关联的任务失败数
                     * @param _timesTaskFailCount 按次收费加固资源，其关联的任务失败数
                     * 
                     */
                    void SetTimesTaskFailCount(const int64_t& _timesTaskFailCount);

                    /**
                     * 判断参数 TimesTaskFailCount 是否已赋值
                     * @return TimesTaskFailCount 是否已赋值
                     * 
                     */
                    bool TimesTaskFailCountHasBeenSet() const;

                private:

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 平台类型整型值 
                     */
                    int64_t m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * 平台类型描述：  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     */
                    std::string m_platformTypeDesc;
                    bool m_platformTypeDescHasBeenSet;

                    /**
                     * 订单采购类型整型值
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 订单采购类型描述： 1-免费试用 2-按年收费 3-按次收费
                     */
                    std::string m_orderTypeDesc;
                    bool m_orderTypeDescHasBeenSet;

                    /**
                     * android包年收费加固的包名
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                    /**
                     * 资源号
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源状态整型值
                     */
                    int64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * 资源状态描述
0-未生效、1-生效中、2-已失效。
                     */
                    std::string m_resourceStatusDesc;
                    bool m_resourceStatusDescHasBeenSet;

                    /**
                     * 订单类型为免费试用时的免费加固次数。
                     */
                    int64_t m_testTimes;
                    bool m_testTimesHasBeenSet;

                    /**
                     * 资源生效时间
                     */
                    std::string m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 资源过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 资源创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 订单审批人
                     */
                    std::string m_approver;
                    bool m_approverHasBeenSet;

                    /**
                     * 订单审批状态整型值
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * 订单审批状态整型值描述：0-未审批、1-审批通过、2-驳回。
                     */
                    std::string m_approvalStatusDesc;
                    bool m_approvalStatusDescHasBeenSet;

                    /**
                     * 订单审批时间
                     */
                    std::string m_approvalTime;
                    bool m_approvalTimeHasBeenSet;

                    /**
                     * 按次收费加固资源，其关联的总任务数
                     */
                    int64_t m_timesTaskTotalCount;
                    bool m_timesTaskTotalCountHasBeenSet;

                    /**
                     * 按次收费加固资源，其关联的任务成功数
                     */
                    int64_t m_timesTaskSuccessCount;
                    bool m_timesTaskSuccessCountHasBeenSet;

                    /**
                     * 按次收费加固资源，其关联的任务失败数
                     */
                    int64_t m_timesTaskFailCount;
                    bool m_timesTaskFailCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_ORDERS_H_
