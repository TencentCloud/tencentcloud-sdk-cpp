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
                     * 获取0：可申请试用可购买；1：只可购买(含试用审核不通过和试用过期)；2：试用生效中；3：专业版生效中；4：专业版过期
                     * @return State 0：可申请试用可购买；1：只可购买(含试用审核不通过和试用过期)；2：试用生效中；3：专业版生效中；4：专业版过期
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
                     * 获取总核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoresCnt 总核数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取已购买核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizedCoresCnt 已购买核数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取镜像数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageCnt 镜像数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取已授权镜像数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizedImageCnt 已授权镜像数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取已购买镜像授权数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PurchasedAuthorizedCnt 已购买镜像授权数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpirationTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutomaticRenewal 0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取试用期间赠送镜像授权数，可能会过期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GivenAuthorizedCnt 试用期间赠送镜像授权数，可能会过期
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime 起始时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取子状态(具体意义依据State字段而定)
State为4时，有效值为: ISOLATE(隔离) DESTROED(已销毁)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubState 子状态(具体意义依据State字段而定)
State为4时，有效值为: ISOLATE(隔离) DESTROED(已销毁)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取计费key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InquireKey 计费key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                private:

                    /**
                     * 0：可申请试用可购买；1：只可购买(含试用审核不通过和试用过期)；2：试用生效中；3：专业版生效中；4：专业版过期
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 总核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * 已购买核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_authorizedCoresCnt;
                    bool m_authorizedCoresCntHasBeenSet;

                    /**
                     * 镜像数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * 已授权镜像数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_authorizedImageCnt;
                    bool m_authorizedImageCntHasBeenSet;

                    /**
                     * 已购买镜像授权数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_purchasedAuthorizedCnt;
                    bool m_purchasedAuthorizedCntHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * 0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_automaticRenewal;
                    bool m_automaticRenewalHasBeenSet;

                    /**
                     * 试用期间赠送镜像授权数，可能会过期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_givenAuthorizedCnt;
                    bool m_givenAuthorizedCntHasBeenSet;

                    /**
                     * 起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 子状态(具体意义依据State字段而定)
State为4时，有效值为: ISOLATE(隔离) DESTROED(已销毁)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subState;
                    bool m_subStateHasBeenSet;

                    /**
                     * 计费key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPURCHASESTATEINFORESPONSE_H_
