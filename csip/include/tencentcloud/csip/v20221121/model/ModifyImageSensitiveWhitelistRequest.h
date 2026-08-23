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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGESENSITIVEWHITELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGESENSITIVEWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyImageSensitiveWhitelist请求参数结构体
                */
                class ModifyImageSensitiveWhitelistRequest : public AbstractModel
                {
                public:
                    ModifyImageSensitiveWhitelistRequest();
                    ~ModifyImageSensitiveWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>敏感信息白名单id</p>
                     * @return RuleId <p>敏感信息白名单id</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>敏感信息白名单id</p>
                     * @param _ruleId <p>敏感信息白名单id</p>
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>加白的敏感信息类型</p><p>枚举值：</p><ul><li>1： root启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     * @return Behavior <p>加白的敏感信息类型</p><p>枚举值：</p><ul><li>1： root启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     * 
                     */
                    uint64_t GetBehavior() const;

                    /**
                     * 设置<p>加白的敏感信息类型</p><p>枚举值：</p><ul><li>1： root启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     * @param _behavior <p>加白的敏感信息类型</p><p>枚举值：</p><ul><li>1： root启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     * 
                     */
                    void SetBehavior(const uint64_t& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     * 
                     */
                    bool BehaviorHasBeenSet() const;

                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageIds <p>镜像id</p>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageIds <p>镜像id</p>
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>生效范围</p>
                     * @return Scope <p>生效范围</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>生效范围</p>
                     * @param _scope <p>生效范围</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>白名单状态</p>
                     * @return Status <p>白名单状态</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>白名单状态</p>
                     * @param _status <p>白名单状态</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p>敏感信息白名单id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>加白的敏感信息类型</p><p>枚举值：</p><ul><li>1： root启动</li><li>2： 代码泄露</li><li>3： 凭据泄露</li></ul>
                     */
                    uint64_t m_behavior;
                    bool m_behaviorHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>生效范围</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>白名单状态</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGESENSITIVEWHITELISTREQUEST_H_
