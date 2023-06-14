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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTSRULE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTSRULE_H_

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
                * 白名单规则
                */
                class LoginWhiteListsRule : public AbstractModel
                {
                public:
                    LoginWhiteListsRule();
                    ~LoginWhiteListsRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加白地域
                     * @return Places 加白地域
                     * 
                     */
                    std::vector<Place> GetPlaces() const;

                    /**
                     * 设置加白地域
                     * @param _places 加白地域
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
                     * 获取加白源IP，支持网段，多个IP以逗号隔开
                     * @return SrcIp 加白源IP，支持网段，多个IP以逗号隔开
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置加白源IP，支持网段，多个IP以逗号隔开
                     * @param _srcIp 加白源IP，支持网段，多个IP以逗号隔开
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
                     * 获取加白用户名，多个用户名以逗号隔开
                     * @return UserName 加白用户名，多个用户名以逗号隔开
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置加白用户名，多个用户名以逗号隔开
                     * @param _userName 加白用户名，多个用户名以逗号隔开
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
                     * 获取是否对全局生效
                     * @return IsGlobal 是否对全局生效
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置是否对全局生效
                     * @param _isGlobal 是否对全局生效
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
                     * 获取白名单生效的机器
                     * @return HostIp 白名单生效的机器
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置白名单生效的机器
                     * @param _hostIp 白名单生效的机器
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
                     * 获取规则ID，用于更新规则
                     * @return Id 规则ID，用于更新规则
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID，用于更新规则
                     * @param _id 规则ID，用于更新规则
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
                     * 加白地域
                     */
                    std::vector<Place> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * 加白源IP，支持网段，多个IP以逗号隔开
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 加白用户名，多个用户名以逗号隔开
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 是否对全局生效
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 白名单生效的机器
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 规则ID，用于更新规则
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

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

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_LOGINWHITELISTSRULE_H_
