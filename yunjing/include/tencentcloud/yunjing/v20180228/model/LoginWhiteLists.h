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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTS_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/Place.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 异地登录白名单
                */
                class LoginWhiteLists : public AbstractModel
                {
                public:
                    LoginWhiteLists();
                    ~LoginWhiteLists() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录ID
                     * @return Id 记录ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置记录ID
                     * @param _id 记录ID
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
                     * 获取云镜客户端ID
                     * @return Uuid 云镜客户端ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端ID
                     * @param _uuid 云镜客户端ID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取白名单地域
                     * @return Places 白名单地域
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置白名单地域
                     * @param _places 白名单地域
                     * 
                     */
                    void SetPlaces(const std::vector<Place>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

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
                     * 获取白名单IP（多个IP逗号隔开）
                     * @return SrcIp 白名单IP（多个IP逗号隔开）
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置白名单IP（多个IP逗号隔开）
                     * @param _srcIp 白名单IP（多个IP逗号隔开）
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
                     * 获取是否为全局规则
                     * @return IsGlobal 是否为全局规则
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置是否为全局规则
                     * @param _isGlobal 是否为全局规则
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取创建白名单时间
                     * @return CreateTime 创建白名单时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建白名单时间
                     * @param _createTime 创建白名单时间
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
                     * 获取修改白名单时间
                     * @return ModifyTime 修改白名单时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改白名单时间
                     * @param _modifyTime 修改白名单时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取机器名
                     * @return MachineName 机器名
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置机器名
                     * @param _machineName 机器名
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取机器IP
                     * @return HostIp 机器IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置机器IP
                     * @param _hostIp 机器IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param _startTime 起始时间
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

                private:

                    /**
                     * 记录ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云镜客户端ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 白名单地域
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * 白名单用户（多个用户逗号隔开）
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 白名单IP（多个IP逗号隔开）
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 是否为全局规则
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 创建白名单时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改白名单时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 机器名
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 机器IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTS_H_
