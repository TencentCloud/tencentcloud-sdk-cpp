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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITECOMBINEDINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITECOMBINEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Place.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
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
                     * 获取<p>白名单地域</p>
                     * @return Places <p>白名单地域</p>
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置<p>白名单地域</p>
                     * @param _places <p>白名单地域</p>
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
                     * 获取<p>白名单IP（多个IP逗号隔开）</p>
                     * @return SrcIp <p>白名单IP（多个IP逗号隔开）</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>白名单IP（多个IP逗号隔开）</p>
                     * @param _srcIp <p>白名单IP（多个IP逗号隔开）</p>
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
                     * 获取<p>地域字符串</p>
                     * @return Locale <p>地域字符串</p>
                     * 
                     */
                    std::string GetLocale() const;

                    /**
                     * 设置<p>地域字符串</p>
                     * @param _locale <p>地域字符串</p>
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
                     * 获取<p>是否对全局生效, 1：全局有效 0: 对指定主机列表生效&#39;</p>
                     * @return IsGlobal <p>是否对全局生效, 1：全局有效 0: 对指定主机列表生效&#39;</p>
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置<p>是否对全局生效, 1：全局有效 0: 对指定主机列表生效&#39;</p>
                     * @param _isGlobal <p>是否对全局生效, 1：全局有效 0: 对指定主机列表生效&#39;</p>
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
                     * 获取<p>白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台</p>
                     * @return Name <p>白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台</p>
                     * @param _name <p>白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台</p>
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
                     * 获取<p>仅在单台服务器时，返回服务器名称</p>
                     * @return Desc <p>仅在单台服务器时，返回服务器名称</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>仅在单台服务器时，返回服务器名称</p>
                     * @param _desc <p>仅在单台服务器时，返回服务器名称</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>最近修改时间</p>
                     * @return ModifyTime <p>最近修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>最近修改时间</p>
                     * @param _modifyTime <p>最近修改时间</p>
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
                     * 获取<p>服务器Uuid</p>
                     * @return Uuid <p>服务器Uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>服务器Uuid</p>
                     * @param _uuid <p>服务器Uuid</p>
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
                     * 获取<p>登录地</p>
                     * @return Locations <p>登录地</p>
                     * 
                     */
                    std::string GetLocations() const;

                    /**
                     * 设置<p>登录地</p>
                     * @param _locations <p>登录地</p>
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
                     * <p>白名单地域</p>
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * <p>白名单用户（多个用户逗号隔开）</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>白名单IP（多个IP逗号隔开）</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>地域字符串</p>
                     */
                    std::string m_locale;
                    bool m_localeHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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
                     * <p>是否对全局生效, 1：全局有效 0: 对指定主机列表生效&#39;</p>
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>白名单名字：IsLocal=1时固定为：全部服务器；单台机器时为机器内网IP，多台服务器时为服务器数量，如：11台</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>仅在单台服务器时，返回服务器名称</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>白名单ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>服务器Uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>登录地</p>
                     */
                    std::string m_locations;
                    bool m_locationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITECOMBINEDINFO_H_
