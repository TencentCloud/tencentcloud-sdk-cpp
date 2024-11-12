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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LOGINWHITECOMBINEDINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LOGINWHITECOMBINEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 异地登录合并后白名单
                */
                class LoginWhiteCombinedInfo : public AbstractModel
                {
                public:
                    LoginWhiteCombinedInfo();
                    ~LoginWhiteCombinedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取地域字符串
                     * @return Locale 地域字符串
                     * 
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置地域字符串
                     * @param _locale 地域字符串
                     * 
                     */
                    void SetLocale(const std::string& _locale);

                    /**
                     * 判断参数 Locale 是否已赋值
                     * @return Locale 是否已赋值
                     * 
                     */
                    bool LocaleHasBeenSet() const;

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
                     * 获取是否对全局生效, 1：全局有效 0: 对指定主机列表生效'
                     * @return IsGlobal 是否对全局生效, 1：全局有效 0: 对指定主机列表生效'
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否对全局生效, 1：全局有效 0: 对指定主机列表生效'
                     * @param _isGlobal 是否对全局生效, 1：全局有效 0: 对指定主机列表生效'
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
                     * 获取白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台
                     * @return Name 白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台
                     * @param _name 白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取仅在单台服务器时，返回服务器名称
                     * @return Desc 仅在单台服务器时，返回服务器名称
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置仅在单台服务器时，返回服务器名称
                     * @param _desc 仅在单台服务器时，返回服务器名称
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取最近修改时间
                     * @return ModifyTime 最近修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最近修改时间
                     * @param _modifyTime 最近修改时间
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
                     * 获取服务器Uuid
                     * @return Uuid 服务器Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置服务器Uuid
                     * @param _uuid 服务器Uuid
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
                     * 获取登陆地
                     * @return Locations 登陆地
                     * 
                     */
                    std::string GetLocations() const;

                    /**
                     * 设置登陆地
                     * @param _locations 登陆地
                     * 
                     */
                    void SetLocations(const std::string& _locations);

                    /**
                     * 判断参数 Locations 是否已赋值
                     * @return Locations 是否已赋值
                     * 
                     */
                    bool LocationsHasBeenSet() const;

                private:

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
                     * 地域字符串
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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
                     * 是否对全局生效, 1：全局有效 0: 对指定主机列表生效'
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 仅在单台服务器时，返回服务器名称
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 白名单ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 服务器Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 登陆地
                     */
                    std::string m_locations;
                    bool m_locationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LOGINWHITECOMBINEDINFO_H_
