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
                     * 获取白名单用户（多个用户逗号隔开）
                     * @return UserName 白名单用户（多个用户逗号隔开）
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置白名单用户（多个用户逗号隔开）
                     * @param _userName 白名单用户（多个用户逗号隔开）
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
                     * 获取更新后记录的白名单维度信息
                     * @return SrcIp 更新后记录的白名单维度信息
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置更新后记录的白名单维度信息
                     * @param _srcIp 更新后记录的白名单维度信息
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
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取是否对所有服务器生效，0-否，1-是
                     * @return IsGlobal 是否对所有服务器生效，0-否，1-是
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否对所有服务器生效，0-否，1-是
                     * @param _isGlobal 是否对所有服务器生效，0-否，1-是
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
                     * 获取白名单ID
                     * @return Id 白名单ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置白名单ID
                     * @param _id 白名单ID
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
                     * 获取服务器列表
                     * @return Hosts 服务器列表
                     * 
                     */
                    std::vector<HostInfo> GetHosts() const;

                    /**
                     * 设置服务器列表
                     * @param _hosts 服务器列表
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
                     * 获取地域列表
                     * @return Places 地域列表
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置地域列表
                     * @param _places 地域列表
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
                     * 白名单用户（多个用户逗号隔开）
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 更新后记录的白名单维度信息
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否对所有服务器生效，0-否，1-是
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 白名单ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务器列表
                     */
                    std::vector<HostInfo> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 地域列表
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGINWHITERECORDREQUEST_H_
