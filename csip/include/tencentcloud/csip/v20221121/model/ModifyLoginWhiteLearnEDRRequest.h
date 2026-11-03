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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITELEARNEDRREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITELEARNEDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LoginWhitePlaceInput.h>
#include <tencentcloud/csip/v20221121/model/InstanceIDWithAppIdItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyLoginWhiteLearnEDR请求参数结构体
                */
                class ModifyLoginWhiteLearnEDRRequest : public AbstractModel
                {
                public:
                    ModifyLoginWhiteLearnEDRRequest();
                    ~ModifyLoginWhiteLearnEDRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     * @return Id <p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     * @param _id <p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>常用登录地列表，必填，1-200 个；为自学习规则唯一的内容维度</p>
                     * @return Places <p>常用登录地列表，必填，1-200 个；为自学习规则唯一的内容维度</p>
                     * 
                     */
                    std::vector<LoginWhitePlaceInput> GetPlaces() const;

                    /**
                     * 设置<p>常用登录地列表，必填，1-200 个；为自学习规则唯一的内容维度</p>
                     * @param _places <p>常用登录地列表，必填，1-200 个；为自学习规则唯一的内容维度</p>
                     * 
                     */
                    void SetPlaces(const std::vector<LoginWhitePlaceInput>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

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
                     * 获取<p>规则所属账号 AppId（取列表出参 AppId）；为空取当前账号；非当前账号需通过归属校验</p>
                     * @return RuleAppId <p>规则所属账号 AppId（取列表出参 AppId）；为空取当前账号；非当前账号需通过归属校验</p>
                     * 
                     */
                    uint64_t GetRuleAppId() const;

                    /**
                     * 设置<p>规则所属账号 AppId（取列表出参 AppId）；为空取当前账号；非当前账号需通过归属校验</p>
                     * @param _ruleAppId <p>规则所属账号 AppId（取列表出参 AppId）；为空取当前账号；非当前账号需通过归属校验</p>
                     * 
                     */
                    void SetRuleAppId(const uint64_t& _ruleAppId);

                    /**
                     * 判断参数 RuleAppId 是否已赋值
                     * @return RuleAppId 是否已赋值
                     * 
                     */
                    bool RuleAppIdHasBeenSet() const;

                    /**
                     * 获取<p>备注，最长 255 字符</p>
                     * @return Remark <p>备注，最长 255 字符</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注，最长 255 字符</p>
                     * @param _remark <p>备注，最长 255 字符</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     * @return Scope <p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置<p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     * @param _scope <p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>指定主机（实例ID 形态）列表，最多 10000 项；服务端经 idmap 翻译为 QUUID 后与 QUUIDSWithAppId 合并去重</p>
                     * @return InstanceIDsWithAppId <p>指定主机（实例ID 形态）列表，最多 10000 项；服务端经 idmap 翻译为 QUUID 后与 QUUIDSWithAppId 合并去重</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>指定主机（实例ID 形态）列表，最多 10000 项；服务端经 idmap 翻译为 QUUID 后与 QUUIDSWithAppId 合并去重</p>
                     * @param _instanceIDsWithAppId <p>指定主机（实例ID 形态）列表，最多 10000 项；服务端经 idmap 翻译为 QUUID 后与 QUUIDSWithAppId 合并去重</p>
                     * 
                     */
                    void SetInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId);

                    /**
                     * 判断参数 InstanceIDsWithAppId 是否已赋值
                     * @return InstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool InstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>剔除主机（实例ID 形态）列表，最多 10000 项</p>
                     * @return ExcludeInstanceIDsWithAppId <p>剔除主机（实例ID 形态）列表，最多 10000 项</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetExcludeInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>剔除主机（实例ID 形态）列表，最多 10000 项</p>
                     * @param _excludeInstanceIDsWithAppId <p>剔除主机（实例ID 形态）列表，最多 10000 项</p>
                     * 
                     */
                    void SetExcludeInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId);

                    /**
                     * 判断参数 ExcludeInstanceIDsWithAppId 是否已赋值
                     * @return ExcludeInstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>安全中心标签ID列表，最多 100 个；Scope=0 时与主机为或关系；自学习白名单不支持按标签生效（传非空将被拒绝）</p>
                     * @return TagIDs <p>安全中心标签ID列表，最多 100 个；Scope=0 时与主机为或关系；自学习白名单不支持按标签生效（传非空将被拒绝）</p>
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 设置<p>安全中心标签ID列表，最多 100 个；Scope=0 时与主机为或关系；自学习白名单不支持按标签生效（传非空将被拒绝）</p>
                     * @param _tagIDs <p>安全中心标签ID列表，最多 100 个；Scope=0 时与主机为或关系；自学习白名单不支持按标签生效（传非空将被拒绝）</p>
                     * 
                     */
                    void SetTagIDs(const std::vector<std::string>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                private:

                    /**
                     * <p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>常用登录地列表，必填，1-200 个；为自学习规则唯一的内容维度</p>
                     */
                    std::vector<LoginWhitePlaceInput> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>规则所属账号 AppId（取列表出参 AppId）；为空取当前账号；非当前账号需通过归属校验</p>
                     */
                    uint64_t m_ruleAppId;
                    bool m_ruleAppIdHasBeenSet;

                    /**
                     * <p>备注，最长 255 字符</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>指定主机（实例ID 形态）列表，最多 10000 项；服务端经 idmap 翻译为 QUUID 后与 QUUIDSWithAppId 合并去重</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_instanceIDsWithAppId;
                    bool m_instanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>剔除主机（实例ID 形态）列表，最多 10000 项</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_excludeInstanceIDsWithAppId;
                    bool m_excludeInstanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>安全中心标签ID列表，最多 100 个；Scope=0 时与主机为或关系；自学习白名单不支持按标签生效（传非空将被拒绝）</p>
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITELEARNEDRREQUEST_H_
