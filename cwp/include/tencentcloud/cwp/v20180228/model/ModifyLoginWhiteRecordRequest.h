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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITERECORDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/HostInfo.h>
#include <tencentcloud/cwp/v20180228/model/Place.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyLoginWhiteRecord请求参数结构体
                */
                class ModifyLoginWhiteRecordRequest : public AbstractModel
                {
                public:
                    ModifyLoginWhiteRecordRequest();
                    ~ModifyLoginWhiteRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>白名单用户（多个用户逗号隔开）</p>
                     * @return UserName <p>白名单用户（多个用户逗号隔开）</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>白名单用户（多个用户逗号隔开）</p>
                     * @param _userName <p>白名单用户（多个用户逗号隔开）</p>
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
                     * 获取<p>更新后记录的白名单维度信息</p>
                     * @return SrcIp <p>更新后记录的白名单维度信息</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>更新后记录的白名单维度信息</p>
                     * @param _srcIp <p>更新后记录的白名单维度信息</p>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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

                    /**
                     * 获取<p>是否对所有服务器生效，0-否，1-是</p>
                     * @return IsGlobal <p>是否对所有服务器生效，0-否，1-是</p>
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置<p>是否对所有服务器生效，0-否，1-是</p>
                     * @param _isGlobal <p>是否对所有服务器生效，0-否，1-是</p>
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取<p>白名单ID</p>
                     * @return Id <p>白名单ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>白名单ID</p>
                     * @param _id <p>白名单ID</p>
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
                     * 获取<p>服务器列表</p>
                     * @return Hosts <p>服务器列表</p>
                     * 
                     */
                    std::vector<HostInfo> GetHosts() const;

                    /**
                     * 设置<p>服务器列表</p>
                     * @param _hosts <p>服务器列表</p>
                     * 
                     */
                    void SetHosts(const std::vector<HostInfo>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取<p>地域列表</p>
                     * @return Places <p>地域列表</p>
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置<p>地域列表</p>
                     * @param _places <p>地域列表</p>
                     * 
                     */
                    void SetPlaces(const std::vector<Place>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

                private:

                    /**
                     * <p>白名单用户（多个用户逗号隔开）</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>更新后记录的白名单维度信息</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>是否对所有服务器生效，0-否，1-是</p>
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>白名单ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>服务器列表</p>
                     */
                    std::vector<HostInfo> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * <p>地域列表</p>
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITERECORDREQUEST_H_
