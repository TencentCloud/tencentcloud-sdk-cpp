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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_RECHARGELIVEVIPREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_RECHARGELIVEVIPREQUEST_H_

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
                * RechargeLiveVip请求参数结构体
                */
                class RechargeLiveVipRequest : public AbstractModel
                {
                public:
                    RechargeLiveVipRequest();
                    ~RechargeLiveVipRequest() = default;
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
                     * 获取交易流水号，用于标记此次充值记录，多次充值记录传入相同的 TradeSerialNo 会判断为失败，可用于防止重提提交造成重复计费。
                     * @return TradeSerialNo 交易流水号，用于标记此次充值记录，多次充值记录传入相同的 TradeSerialNo 会判断为失败，可用于防止重提提交造成重复计费。
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 设置交易流水号，用于标记此次充值记录，多次充值记录传入相同的 TradeSerialNo 会判断为失败，可用于防止重提提交造成重复计费。
                     * @param _tradeSerialNo 交易流水号，用于标记此次充值记录，多次充值记录传入相同的 TradeSerialNo 会判断为失败，可用于防止重提提交造成重复计费。
                     * 
                     */
                    void SetTradeSerialNo(const std::string& _tradeSerialNo);

                    /**
                     * 判断参数 TradeSerialNo 是否已赋值
                     * @return TradeSerialNo 是否已赋值
                     * 
                     */
                    bool TradeSerialNoHasBeenSet() const;

                    /**
                     * 获取房间标识。
                     * @return RoomId 房间标识。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间标识。
                     * @param _roomId 房间标识。
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
                     * 获取充值会员天数。
取值有：
<li>31</li>
<li>93</li>
<li>186</li>
<li>372</li>
                     * @return VipDays 充值会员天数。
取值有：
<li>31</li>
<li>93</li>
<li>186</li>
<li>372</li>
                     * 
                     */
                    int64_t GetVipDays() const;

                    /**
                     * 设置充值会员天数。
取值有：
<li>31</li>
<li>93</li>
<li>186</li>
<li>372</li>
                     * @param _vipDays 充值会员天数。
取值有：
<li>31</li>
<li>93</li>
<li>186</li>
<li>372</li>
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
                     * 获取充值分类。取值有：room_card-包月房卡; 其他-保留。
                     * @return GiveType 充值分类。取值有：room_card-包月房卡; 其他-保留。
                     * 
                     */
                    std::string GetGiveType() const;

                    /**
                     * 设置充值分类。取值有：room_card-包月房卡; 其他-保留。
                     * @param _giveType 充值分类。取值有：room_card-包月房卡; 其他-保留。
                     * 
                     */
                    void SetGiveType(const std::string& _giveType);

                    /**
                     * 判断参数 GiveType 是否已赋值
                     * @return GiveType 是否已赋值
                     * 
                     */
                    bool GiveTypeHasBeenSet() const;

                    /**
                     * 获取播放场景。默认为Live
<li>Live：直播</li><li>Chat：语聊</li>
                     * @return PlayScene 播放场景。默认为Live
<li>Live：直播</li><li>Chat：语聊</li>
                     * 
                     */
                    std::string GetPlayScene() const;

                    /**
                     * 设置播放场景。默认为Live
<li>Live：直播</li><li>Chat：语聊</li>
                     * @param _playScene 播放场景。默认为Live
<li>Live：直播</li><li>Chat：语聊</li>
                     * 
                     */
                    void SetPlayScene(const std::string& _playScene);

                    /**
                     * 判断参数 PlayScene 是否已赋值
                     * @return PlayScene 是否已赋值
                     * 
                     */
                    bool PlaySceneHasBeenSet() const;

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
                     * 交易流水号，用于标记此次充值记录，多次充值记录传入相同的 TradeSerialNo 会判断为失败，可用于防止重提提交造成重复计费。
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                    /**
                     * 房间标识。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 充值会员天数。
取值有：
<li>31</li>
<li>93</li>
<li>186</li>
<li>372</li>
                     */
                    int64_t m_vipDays;
                    bool m_vipDaysHasBeenSet;

                    /**
                     * 充值分类。取值有：room_card-包月房卡; 其他-保留。
                     */
                    std::string m_giveType;
                    bool m_giveTypeHasBeenSet;

                    /**
                     * 播放场景。默认为Live
<li>Live：直播</li><li>Chat：语聊</li>
                     */
                    std::string m_playScene;
                    bool m_playSceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_RECHARGELIVEVIPREQUEST_H_
