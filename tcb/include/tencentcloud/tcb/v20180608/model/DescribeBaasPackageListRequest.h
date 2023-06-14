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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEBAASPACKAGELISTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEBAASPACKAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBaasPackageList请求参数结构体
                */
                class DescribeBaasPackageListRequest : public AbstractModel
                {
                public:
                    DescribeBaasPackageListRequest();
                    ~DescribeBaasPackageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tcb产品套餐ID，不填拉取全量package信息。
                     * @return PackageName tcb产品套餐ID，不填拉取全量package信息。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置tcb产品套餐ID，不填拉取全量package信息。
                     * @param _packageName tcb产品套餐ID，不填拉取全量package信息。
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取套餐归属方，填写后只返回对应的套餐 包含miniapp与qcloud两种 默认为miniapp
                     * @return Source 套餐归属方，填写后只返回对应的套餐 包含miniapp与qcloud两种 默认为miniapp
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置套餐归属方，填写后只返回对应的套餐 包含miniapp与qcloud两种 默认为miniapp
                     * @param _source 套餐归属方，填写后只返回对应的套餐 包含miniapp与qcloud两种 默认为miniapp
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取套餐归属环境渠道
                     * @return EnvChannel 套餐归属环境渠道
                     * 
                     */
                    std::string GetEnvChannel() const;

                    /**
                     * 设置套餐归属环境渠道
                     * @param _envChannel 套餐归属环境渠道
                     * 
                     */
                    void SetEnvChannel(const std::string& _envChannel);

                    /**
                     * 判断参数 EnvChannel 是否已赋值
                     * @return EnvChannel 是否已赋值
                     * 
                     */
                    bool EnvChannelHasBeenSet() const;

                    /**
                     * 获取拉取套餐用途：
1）new 新购
2）modify变配
3）renew续费
                     * @return TargetAction 拉取套餐用途：
1）new 新购
2）modify变配
3）renew续费
                     * 
                     */
                    std::string GetTargetAction() const;

                    /**
                     * 设置拉取套餐用途：
1）new 新购
2）modify变配
3）renew续费
                     * @param _targetAction 拉取套餐用途：
1）new 新购
2）modify变配
3）renew续费
                     * 
                     */
                    void SetTargetAction(const std::string& _targetAction);

                    /**
                     * 判断参数 TargetAction 是否已赋值
                     * @return TargetAction 是否已赋值
                     * 
                     */
                    bool TargetActionHasBeenSet() const;

                    /**
                     * 获取预留字段，同一商品会对应多个类型套餐，对指标有不同侧重。
计算型calculation
流量型flux
容量型capactiy
                     * @return GroupName 预留字段，同一商品会对应多个类型套餐，对指标有不同侧重。
计算型calculation
流量型flux
容量型capactiy
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置预留字段，同一商品会对应多个类型套餐，对指标有不同侧重。
计算型calculation
流量型flux
容量型capactiy
                     * @param _groupName 预留字段，同一商品会对应多个类型套餐，对指标有不同侧重。
计算型calculation
流量型flux
容量型capactiy
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取类型分组过滤。默认为["default"]
                     * @return PackageTypeList 类型分组过滤。默认为["default"]
                     * 
                     */
                    std::vector<std::string> GetPackageTypeList() const;

                    /**
                     * 设置类型分组过滤。默认为["default"]
                     * @param _packageTypeList 类型分组过滤。默认为["default"]
                     * 
                     */
                    void SetPackageTypeList(const std::vector<std::string>& _packageTypeList);

                    /**
                     * 判断参数 PackageTypeList 是否已赋值
                     * @return PackageTypeList 是否已赋值
                     * 
                     */
                    bool PackageTypeListHasBeenSet() const;

                    /**
                     * 获取付费渠道，与回包billTags中的计费参数相关，不填返回默认值。
                     * @return PaymentChannel 付费渠道，与回包billTags中的计费参数相关，不填返回默认值。
                     * 
                     */
                    std::string GetPaymentChannel() const;

                    /**
                     * 设置付费渠道，与回包billTags中的计费参数相关，不填返回默认值。
                     * @param _paymentChannel 付费渠道，与回包billTags中的计费参数相关，不填返回默认值。
                     * 
                     */
                    void SetPaymentChannel(const std::string& _paymentChannel);

                    /**
                     * 判断参数 PaymentChannel 是否已赋值
                     * @return PaymentChannel 是否已赋值
                     * 
                     */
                    bool PaymentChannelHasBeenSet() const;

                private:

                    /**
                     * tcb产品套餐ID，不填拉取全量package信息。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 套餐归属方，填写后只返回对应的套餐 包含miniapp与qcloud两种 默认为miniapp
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 套餐归属环境渠道
                     */
                    std::string m_envChannel;
                    bool m_envChannelHasBeenSet;

                    /**
                     * 拉取套餐用途：
1）new 新购
2）modify变配
3）renew续费
                     */
                    std::string m_targetAction;
                    bool m_targetActionHasBeenSet;

                    /**
                     * 预留字段，同一商品会对应多个类型套餐，对指标有不同侧重。
计算型calculation
流量型flux
容量型capactiy
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 类型分组过滤。默认为["default"]
                     */
                    std::vector<std::string> m_packageTypeList;
                    bool m_packageTypeListHasBeenSet;

                    /**
                     * 付费渠道，与回包billTags中的计费参数相关，不填返回默认值。
                     */
                    std::string m_paymentChannel;
                    bool m_paymentChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEBAASPACKAGELISTREQUEST_H_
