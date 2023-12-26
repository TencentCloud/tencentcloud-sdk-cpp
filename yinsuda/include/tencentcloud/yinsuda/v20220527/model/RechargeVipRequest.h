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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_RECHARGEVIPREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_RECHARGEVIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * RechargeVip请求参数结构体
                */
                class RechargeVipRequest : public AbstractModel
                {
                public:
                    RechargeVipRequest();
                    ~RechargeVipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param _userId 用户标识。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取房间Id。
                     * @return RoomId 房间Id。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间Id。
                     * @param _roomId 房间Id。
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取充值会员天数。(取值有：31、93、186、372)
                     * @return VipDays 充值会员天数。(取值有：31、93、186、372)
                     * 
                     */
                    int64_t GetVipDays() const;

                    /**
                     * 设置充值会员天数。(取值有：31、93、186、372)
                     * @param _vipDays 充值会员天数。(取值有：31、93、186、372)
                     * 
                     */
                    void SetVipDays(const int64_t& _vipDays);

                    /**
                     * 判断参数 VipDays 是否已赋值
                     * @return VipDays 是否已赋值
                     * 
                     */
                    bool VipDaysHasBeenSet() const;

                    /**
                     * 获取主播id。
                     * @return AnchorId 主播id。
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播id。
                     * @param _anchorId 主播id。
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 房间Id。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 充值会员天数。(取值有：31、93、186、372)
                     */
                    int64_t m_vipDays;
                    bool m_vipDaysHasBeenSet;

                    /**
                     * 主播id。
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_RECHARGEVIPREQUEST_H_
