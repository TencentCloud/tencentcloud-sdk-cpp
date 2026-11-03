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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITECUSTOMEDRREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITECUSTOMEDRREQUEST_H_

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
                * ModifyLoginWhiteCustomEDR请求参数结构体
                */
                class ModifyLoginWhiteCustomEDRRequest : public AbstractModel
                {
                public:
                    ModifyLoginWhiteCustomEDRRequest();
                    ~ModifyLoginWhiteCustomEDRRequest() = default;
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
                     * 获取<p>登录源IP，多个以逗号分隔；支持单个IP、区间(a-b)、CIDR，支持 IPv4 与 IPv6；最长 2048 字符</p>
                     * @return SrcIp <p>登录源IP，多个以逗号分隔；支持单个IP、区间(a-b)、CIDR，支持 IPv4 与 IPv6；最长 2048 字符</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>登录源IP，多个以逗号分隔；支持单个IP、区间(a-b)、CIDR，支持 IPv4 与 IPv6；最长 2048 字符</p>
                     * @param _srcIp <p>登录源IP，多个以逗号分隔；支持单个IP、区间(a-b)、CIDR，支持 IPv4 与 IPv6；最长 2048 字符</p>
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取<p>登录用户名，多个以逗号分隔；最长 1024 字符</p>
                     * @return UserName <p>登录用户名，多个以逗号分隔；最长 1024 字符</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>登录用户名，多个以逗号分隔；最长 1024 字符</p>
                     * @param _userName <p>登录用户名，多个以逗号分隔；最长 1024 字符</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>登录时段起始 HH:MM；与 EndTime 必须同时填写或同时为空</p>
                     * @return StartTime <p>登录时段起始 HH:MM；与 EndTime 必须同时填写或同时为空</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>登录时段起始 HH:MM；与 EndTime 必须同时填写或同时为空</p>
                     * @param _startTime <p>登录时段起始 HH:MM；与 EndTime 必须同时填写或同时为空</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>登录时段结束 HH:MM；与 StartTime 必须同时填写或同时为空</p>
                     * @return EndTime <p>登录时段结束 HH:MM；与 StartTime 必须同时填写或同时为空</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>登录时段结束 HH:MM；与 StartTime 必须同时填写或同时为空</p>
                     * @param _endTime <p>登录时段结束 HH:MM；与 StartTime 必须同时填写或同时为空</p>
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
                     * 获取<p>常用登录地列表，最多 200 个；ProvinceId/CityId 传 99999 表示全部省份/全部城市</p>
                     * @return Places <p>常用登录地列表，最多 200 个；ProvinceId/CityId 传 99999 表示全部省份/全部城市</p>
                     * 
                     */
                    std::vector<LoginWhitePlaceInput> GetPlaces() const;

                    /**
                     * 设置<p>常用登录地列表，最多 200 个；ProvinceId/CityId 传 99999 表示全部省份/全部城市</p>
                     * @param _places <p>常用登录地列表，最多 200 个；ProvinceId/CityId 传 99999 表示全部省份/全部城市</p>
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

                    /**
                     * 获取<p>目标appid</p>
                     * @return TargetAppIDs <p>目标appid</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDs() const;

                    /**
                     * 设置<p>目标appid</p>
                     * @param _targetAppIDs <p>目标appid</p>
                     * 
                     */
                    void SetTargetAppIDs(const std::vector<uint64_t>& _targetAppIDs);

                    /**
                     * 判断参数 TargetAppIDs 是否已赋值
                     * @return TargetAppIDs 是否已赋值
                     * 
                     */
                    bool TargetAppIDsHasBeenSet() const;

                    /**
                     * 获取<p>是否加白历史告警</p>
                     * @return DealOldEvents <p>是否加白历史告警</p>
                     * 
                     */
                    int64_t GetDealOldEvents() const;

                    /**
                     * 设置<p>是否加白历史告警</p>
                     * @param _dealOldEvents <p>是否加白历史告警</p>
                     * 
                     */
                    void SetDealOldEvents(const int64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                private:

                    /**
                     * <p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>登录源IP，多个以逗号分隔；支持单个IP、区间(a-b)、CIDR，支持 IPv4 与 IPv6；最长 2048 字符</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>登录用户名，多个以逗号分隔；最长 1024 字符</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>登录时段起始 HH:MM；与 EndTime 必须同时填写或同时为空</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>登录时段结束 HH:MM；与 StartTime 必须同时填写或同时为空</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>常用登录地列表，最多 200 个；ProvinceId/CityId 传 99999 表示全部省份/全部城市</p>
                     */
                    std::vector<LoginWhitePlaceInput> m_places;
                    bool m_placesHasBeenSet;

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

                    /**
                     * <p>目标appid</p>
                     */
                    std::vector<uint64_t> m_targetAppIDs;
                    bool m_targetAppIDsHasBeenSet;

                    /**
                     * <p>是否加白历史告警</p>
                     */
                    int64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINWHITECUSTOMEDRREQUEST_H_
