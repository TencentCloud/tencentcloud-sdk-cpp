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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_INVITATIONEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_INVITATIONEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 邀请事件详情
                */
                class InvitationEvent : public AbstractModel
                {
                public:
                    InvitationEvent();
                    ~InvitationEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>受邀请人ID</p>
                     * @return InviteeUserId <p>受邀请人ID</p>
                     * 
                     */
                    std::string GetInviteeUserId() const;

                    /**
                     * 设置<p>受邀请人ID</p>
                     * @param _inviteeUserId <p>受邀请人ID</p>
                     * 
                     */
                    void SetInviteeUserId(const std::string& _inviteeUserId);

                    /**
                     * 判断参数 InviteeUserId 是否已赋值
                     * @return InviteeUserId 是否已赋值
                     * 
                     */
                    bool InviteeUserIdHasBeenSet() const;

                    /**
                     * 获取<p>营销活动ID</p>
                     * @return PromotionId <p>营销活动ID</p>
                     * 
                     */
                    std::string GetPromotionId() const;

                    /**
                     * 设置<p>营销活动ID</p>
                     * @param _promotionId <p>营销活动ID</p>
                     * 
                     */
                    void SetPromotionId(const std::string& _promotionId);

                    /**
                     * 判断参数 PromotionId 是否已赋值
                     * @return PromotionId 是否已赋值
                     * 
                     */
                    bool PromotionIdHasBeenSet() const;

                    /**
                     * 获取<p>营销活动名称</p>
                     * @return PromotionName <p>营销活动名称</p>
                     * 
                     */
                    std::string GetPromotionName() const;

                    /**
                     * 设置<p>营销活动名称</p>
                     * @param _promotionName <p>营销活动名称</p>
                     * 
                     */
                    void SetPromotionName(const std::string& _promotionName);

                    /**
                     * 判断参数 PromotionName 是否已赋值
                     * @return PromotionName 是否已赋值
                     * 
                     */
                    bool PromotionNameHasBeenSet() const;

                    /**
                     * 获取<p>营销活动描述</p>
                     * @return Description <p>营销活动描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>营销活动描述</p>
                     * @param _description <p>营销活动描述</p>
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
                     * 获取<p>受邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @return InviteePhone <p>受邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    std::string GetInviteePhone() const;

                    /**
                     * 设置<p>受邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * @param _inviteePhone <p>受邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     * 
                     */
                    void SetInviteePhone(const std::string& _inviteePhone);

                    /**
                     * 判断参数 InviteePhone 是否已赋值
                     * @return InviteePhone 是否已赋值
                     * 
                     */
                    bool InviteePhoneHasBeenSet() const;

                    /**
                     * 获取<p>邀请码</p>
                     * @return InvitationCode <p>邀请码</p>
                     * 
                     */
                    std::string GetInvitationCode() const;

                    /**
                     * 设置<p>邀请码</p>
                     * @param _invitationCode <p>邀请码</p>
                     * 
                     */
                    void SetInvitationCode(const std::string& _invitationCode);

                    /**
                     * 判断参数 InvitationCode 是否已赋值
                     * @return InvitationCode 是否已赋值
                     * 
                     */
                    bool InvitationCodeHasBeenSet() const;

                    /**
                     * 获取<p>邀请链接</p>
                     * @return InvitationUrl <p>邀请链接</p>
                     * 
                     */
                    std::string GetInvitationUrl() const;

                    /**
                     * 设置<p>邀请链接</p>
                     * @param _invitationUrl <p>邀请链接</p>
                     * 
                     */
                    void SetInvitationUrl(const std::string& _invitationUrl);

                    /**
                     * 判断参数 InvitationUrl 是否已赋值
                     * @return InvitationUrl 是否已赋值
                     * 
                     */
                    bool InvitationUrlHasBeenSet() const;

                    /**
                     * 获取<p>邀请渠道，如微信、抖音、小红书等</p>
                     * @return InvitationChannel <p>邀请渠道，如微信、抖音、小红书等</p>
                     * 
                     */
                    std::string GetInvitationChannel() const;

                    /**
                     * 设置<p>邀请渠道，如微信、抖音、小红书等</p>
                     * @param _invitationChannel <p>邀请渠道，如微信、抖音、小红书等</p>
                     * 
                     */
                    void SetInvitationChannel(const std::string& _invitationChannel);

                    /**
                     * 判断参数 InvitationChannel 是否已赋值
                     * @return InvitationChannel 是否已赋值
                     * 
                     */
                    bool InvitationChannelHasBeenSet() const;

                    /**
                     * 获取<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>受邀请人ID</p>
                     */
                    std::string m_inviteeUserId;
                    bool m_inviteeUserIdHasBeenSet;

                    /**
                     * <p>营销活动ID</p>
                     */
                    std::string m_promotionId;
                    bool m_promotionIdHasBeenSet;

                    /**
                     * <p>营销活动名称</p>
                     */
                    std::string m_promotionName;
                    bool m_promotionNameHasBeenSet;

                    /**
                     * <p>营销活动描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>受邀请人电话号码</p><p>参数格式：符合E.164标准的带“+”、地区编码和号码的格式</p>
                     */
                    std::string m_inviteePhone;
                    bool m_inviteePhoneHasBeenSet;

                    /**
                     * <p>邀请码</p>
                     */
                    std::string m_invitationCode;
                    bool m_invitationCodeHasBeenSet;

                    /**
                     * <p>邀请链接</p>
                     */
                    std::string m_invitationUrl;
                    bool m_invitationUrlHasBeenSet;

                    /**
                     * <p>邀请渠道，如微信、抖音、小红书等</p>
                     */
                    std::string m_invitationChannel;
                    bool m_invitationChannelHasBeenSet;

                    /**
                     * <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_INVITATIONEVENT_H_
