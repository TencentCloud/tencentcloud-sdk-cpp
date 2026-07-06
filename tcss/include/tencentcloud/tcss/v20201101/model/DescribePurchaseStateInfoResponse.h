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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPURCHASESTATEINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPURCHASESTATEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribePurchaseStateInfo返回参数结构体
                */
                class DescribePurchaseStateInfoResponse : public AbstractModel
                {
                public:
                    DescribePurchaseStateInfoResponse();
                    ~DescribePurchaseStateInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0：可申请试用可购买；1：只可购买(含试用审核不通过和试用过期)；2：试用生效中；3：专业版生效中；4：专业版过期</p>
                     * @return State <p>0：可申请试用可购买；1：只可购买(含试用审核不通过和试用过期)；2：试用生效中；3：专业版生效中；4：专业版过期</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>总资源核数 = 总防护核数 + 未防护核数</p>
                     * @return AllCoresCnt <p>总资源核数 = 总防护核数 + 未防护核数</p>
                     * 
                     */
                    uint64_t GetAllCoresCnt() const;

                    /**
                     * 判断参数 AllCoresCnt 是否已赋值
                     * @return AllCoresCnt 是否已赋值
                     * 
                     */
                    bool AllCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>总防护核数 =已购核数+ 试用赠送核数 +弹性计费核数</p>
                     * @return CoresCnt <p>总防护核数 =已购核数+ 试用赠送核数 +弹性计费核数</p>
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                    /**
                     * 获取<p>未防护核数(未开启防护资源核数)</p>
                     * @return UndefendCoresCnt <p>未防护核数(未开启防护资源核数)</p>
                     * 
                     */
                    uint64_t GetUndefendCoresCnt() const;

                    /**
                     * 判断参数 UndefendCoresCnt 是否已赋值
                     * @return UndefendCoresCnt 是否已赋值
                     * 
                     */
                    bool UndefendCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>已购买核数</p>
                     * @return AuthorizedCoresCnt <p>已购买核数</p>
                     * 
                     */
                    uint64_t GetAuthorizedCoresCnt() const;

                    /**
                     * 判断参数 AuthorizedCoresCnt 是否已赋值
                     * @return AuthorizedCoresCnt 是否已赋值
                     * 
                     */
                    bool AuthorizedCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>试用赠送专业版核心数</p>
                     * @return GivenAuthorizedCoresCnt <p>试用赠送专业版核心数</p>
                     * 
                     */
                    int64_t GetGivenAuthorizedCoresCnt() const;

                    /**
                     * 判断参数 GivenAuthorizedCoresCnt 是否已赋值
                     * @return GivenAuthorizedCoresCnt 是否已赋值
                     * 
                     */
                    bool GivenAuthorizedCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>当前弹性计费核数数量</p>
                     * @return CurrentFlexibleCoresCnt <p>当前弹性计费核数数量</p>
                     * 
                     */
                    uint64_t GetCurrentFlexibleCoresCnt() const;

                    /**
                     * 判断参数 CurrentFlexibleCoresCnt 是否已赋值
                     * @return CurrentFlexibleCoresCnt 是否已赋值
                     * 
                     */
                    bool CurrentFlexibleCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>镜像数</p>
                     * @return ImageCnt <p>镜像数</p>
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取<p>已授权镜像数</p>
                     * @return AuthorizedImageCnt <p>已授权镜像数</p>
                     * 
                     */
                    uint64_t GetAuthorizedImageCnt() const;

                    /**
                     * 判断参数 AuthorizedImageCnt 是否已赋值
                     * @return AuthorizedImageCnt 是否已赋值
                     * 
                     */
                    bool AuthorizedImageCntHasBeenSet() const;

                    /**
                     * 获取<p>过期时间</p>
                     * @return ExpirationTime <p>过期时间</p>
                     * 
                     */
                    std::string GetExpirationTime() const;

                    /**
                     * 判断参数 ExpirationTime 是否已赋值
                     * @return ExpirationTime 是否已赋值
                     * 
                     */
                    bool ExpirationTimeHasBeenSet() const;

                    /**
                     * 获取<p>已购买镜像授权数</p>
                     * @return PurchasedAuthorizedCnt <p>已购买镜像授权数</p>
                     * 
                     */
                    uint64_t GetPurchasedAuthorizedCnt() const;

                    /**
                     * 判断参数 PurchasedAuthorizedCnt 是否已赋值
                     * @return PurchasedAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool PurchasedAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取<p>0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @return AutomaticRenewal <p>0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * 
                     */
                    int64_t GetAutomaticRenewal() const;

                    /**
                     * 判断参数 AutomaticRenewal 是否已赋值
                     * @return AutomaticRenewal 是否已赋值
                     * 
                     */
                    bool AutomaticRenewalHasBeenSet() const;

                    /**
                     * 获取<p>试用期间赠送镜像授权数，可能会过期</p>
                     * @return GivenAuthorizedCnt <p>试用期间赠送镜像授权数，可能会过期</p>
                     * 
                     */
                    uint64_t GetGivenAuthorizedCnt() const;

                    /**
                     * 判断参数 GivenAuthorizedCnt 是否已赋值
                     * @return GivenAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool GivenAuthorizedCntHasBeenSet() const;

                    /**
                     * 获取<p>起始时间</p>
                     * @return BeginTime <p>起始时间</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>子状态(具体意义依据State字段而定)<br>State为4时，有效值为: ISOLATE(隔离) DESTROED(已销毁)</p>
                     * @return SubState <p>子状态(具体意义依据State字段而定)<br>State为4时，有效值为: ISOLATE(隔离) DESTROED(已销毁)</p>
                     * 
                     */
                    std::string GetSubState() const;

                    /**
                     * 判断参数 SubState 是否已赋值
                     * @return SubState 是否已赋值
                     * 
                     */
                    bool SubStateHasBeenSet() const;

                    /**
                     * 获取<p>计费key</p>
                     * @return InquireKey <p>计费key</p>
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取<p>防护策略</p>
                     * @return DefendPolicy <p>防护策略</p>
                     * 
                     */
                    std::string GetDefendPolicy() const;

                    /**
                     * 判断参数 DefendPolicy 是否已赋值
                     * @return DefendPolicy 是否已赋值
                     * 
                     */
                    bool DefendPolicyHasBeenSet() const;

                    /**
                     * 获取<p>弹性计费核数上限</p>
                     * @return FlexibleCoresLimit <p>弹性计费核数上限</p>
                     * 
                     */
                    uint64_t GetFlexibleCoresLimit() const;

                    /**
                     * 判断参数 FlexibleCoresLimit 是否已赋值
                     * @return FlexibleCoresLimit 是否已赋值
                     * 
                     */
                    bool FlexibleCoresLimitHasBeenSet() const;

                    /**
                     * 获取<p>已防护集群核数</p>
                     * @return DefendClusterCoresCnt <p>已防护集群核数</p>
                     * 
                     */
                    uint64_t GetDefendClusterCoresCnt() const;

                    /**
                     * 判断参数 DefendClusterCoresCnt 是否已赋值
                     * @return DefendClusterCoresCnt 是否已赋值
                     * 
                     */
                    bool DefendClusterCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>已防护主机核数</p>
                     * @return DefendHostCoresCnt <p>已防护主机核数</p>
                     * 
                     */
                    uint64_t GetDefendHostCoresCnt() const;

                    /**
                     * 判断参数 DefendHostCoresCnt 是否已赋值
                     * @return DefendHostCoresCnt 是否已赋值
                     * 
                     */
                    bool DefendHostCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>试用的专业版核数</p>
                     * @return TrialCoresCnt <p>试用的专业版核数</p>
                     * 
                     */
                    uint64_t GetTrialCoresCnt() const;

                    /**
                     * 判断参数 TrialCoresCnt 是否已赋值
                     * @return TrialCoresCnt 是否已赋值
                     * 
                     */
                    bool TrialCoresCntHasBeenSet() const;

                    /**
                     * 获取<p>无容器核数</p>
                     * @return NoContainerCoresCnt <p>无容器核数</p>
                     * 
                     */
                    uint64_t GetNoContainerCoresCnt() const;

                    /**
                     * 判断参数 NoContainerCoresCnt 是否已赋值
                     * @return NoContainerCoresCnt 是否已赋值
                     * 
                     */
                    bool NoContainerCoresCntHasBeenSet() const;

                private:

                    /**
                     * <p>0：可申请试用可购买；1：只可购买(含试用审核不通过和试用过期)；2：试用生效中；3：专业版生效中；4：专业版过期</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>总资源核数 = 总防护核数 + 未防护核数</p>
                     */
                    uint64_t m_allCoresCnt;
                    bool m_allCoresCntHasBeenSet;

                    /**
                     * <p>总防护核数 =已购核数+ 试用赠送核数 +弹性计费核数</p>
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * <p>未防护核数(未开启防护资源核数)</p>
                     */
                    uint64_t m_undefendCoresCnt;
                    bool m_undefendCoresCntHasBeenSet;

                    /**
                     * <p>已购买核数</p>
                     */
                    uint64_t m_authorizedCoresCnt;
                    bool m_authorizedCoresCntHasBeenSet;

                    /**
                     * <p>试用赠送专业版核心数</p>
                     */
                    int64_t m_givenAuthorizedCoresCnt;
                    bool m_givenAuthorizedCoresCntHasBeenSet;

                    /**
                     * <p>当前弹性计费核数数量</p>
                     */
                    uint64_t m_currentFlexibleCoresCnt;
                    bool m_currentFlexibleCoresCntHasBeenSet;

                    /**
                     * <p>镜像数</p>
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * <p>已授权镜像数</p>
                     */
                    uint64_t m_authorizedImageCnt;
                    bool m_authorizedImageCntHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * <p>已购买镜像授权数</p>
                     */
                    uint64_t m_purchasedAuthorizedCnt;
                    bool m_purchasedAuthorizedCntHasBeenSet;

                    /**
                     * <p>0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     */
                    int64_t m_automaticRenewal;
                    bool m_automaticRenewalHasBeenSet;

                    /**
                     * <p>试用期间赠送镜像授权数，可能会过期</p>
                     */
                    uint64_t m_givenAuthorizedCnt;
                    bool m_givenAuthorizedCntHasBeenSet;

                    /**
                     * <p>起始时间</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>子状态(具体意义依据State字段而定)<br>State为4时，有效值为: ISOLATE(隔离) DESTROED(已销毁)</p>
                     */
                    std::string m_subState;
                    bool m_subStateHasBeenSet;

                    /**
                     * <p>计费key</p>
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * <p>防护策略</p>
                     */
                    std::string m_defendPolicy;
                    bool m_defendPolicyHasBeenSet;

                    /**
                     * <p>弹性计费核数上限</p>
                     */
                    uint64_t m_flexibleCoresLimit;
                    bool m_flexibleCoresLimitHasBeenSet;

                    /**
                     * <p>已防护集群核数</p>
                     */
                    uint64_t m_defendClusterCoresCnt;
                    bool m_defendClusterCoresCntHasBeenSet;

                    /**
                     * <p>已防护主机核数</p>
                     */
                    uint64_t m_defendHostCoresCnt;
                    bool m_defendHostCoresCntHasBeenSet;

                    /**
                     * <p>试用的专业版核数</p>
                     */
                    uint64_t m_trialCoresCnt;
                    bool m_trialCoresCntHasBeenSet;

                    /**
                     * <p>无容器核数</p>
                     */
                    uint64_t m_noContainerCoresCnt;
                    bool m_noContainerCoresCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPURCHASESTATEINFORESPONSE_H_
