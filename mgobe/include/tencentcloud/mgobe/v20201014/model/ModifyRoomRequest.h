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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_MODIFYROOMREQUEST_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_MODIFYROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mgobe
    {
        namespace V20201014
        {
            namespace Model
            {
                /**
                * ModifyRoom请求参数结构体
                */
                class ModifyRoomRequest : public AbstractModel
                {
                public:
                    ModifyRoomRequest();
                    ~ModifyRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏资源Id。
                     * @return GameId 游戏资源Id。
                     * 
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置游戏资源Id。
                     * @param _gameId 游戏资源Id。
                     * 
                     */
                    void SetGameId(const std::string& _gameId);

                    /**
                     * 判断参数 GameId 是否已赋值
                     * @return GameId 是否已赋值
                     * 
                     */
                    bool GameIdHasBeenSet() const;

                    /**
                     * 获取房间ID。
                     * @return RoomId 房间ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间ID。
                     * @param _roomId 房间ID。
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
                     * 获取发起者的PlayerId。
                     * @return PlayerId 发起者的PlayerId。
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置发起者的PlayerId。
                     * @param _playerId 发起者的PlayerId。
                     * 
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     * 
                     */
                    bool PlayerIdHasBeenSet() const;

                    /**
                     * 获取需要修改的房间选项，0表示房间名称，1表示房主，2表示是否允许观战，3表示是否支持邀请码/密码，4表示是否私有，5表示是否自定义房间属性，6表示是否禁止加人。
                     * @return ChangeRoomOptionList 需要修改的房间选项，0表示房间名称，1表示房主，2表示是否允许观战，3表示是否支持邀请码/密码，4表示是否私有，5表示是否自定义房间属性，6表示是否禁止加人。
                     * 
                     */
                    std::vector<int64_t> GetChangeRoomOptionList() const;

                    /**
                     * 设置需要修改的房间选项，0表示房间名称，1表示房主，2表示是否允许观战，3表示是否支持邀请码/密码，4表示是否私有，5表示是否自定义房间属性，6表示是否禁止加人。
                     * @param _changeRoomOptionList 需要修改的房间选项，0表示房间名称，1表示房主，2表示是否允许观战，3表示是否支持邀请码/密码，4表示是否私有，5表示是否自定义房间属性，6表示是否禁止加人。
                     * 
                     */
                    void SetChangeRoomOptionList(const std::vector<int64_t>& _changeRoomOptionList);

                    /**
                     * 判断参数 ChangeRoomOptionList 是否已赋值
                     * @return ChangeRoomOptionList 是否已赋值
                     * 
                     */
                    bool ChangeRoomOptionListHasBeenSet() const;

                    /**
                     * 获取房间名称。
                     * @return RoomName 房间名称。
                     * 
                     */
                    std::string GetRoomName() const;

                    /**
                     * 设置房间名称。
                     * @param _roomName 房间名称。
                     * 
                     */
                    void SetRoomName(const std::string& _roomName);

                    /**
                     * 判断参数 RoomName 是否已赋值
                     * @return RoomName 是否已赋值
                     * 
                     */
                    bool RoomNameHasBeenSet() const;

                    /**
                     * 获取变更房主。
                     * @return Owner 变更房主。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置变更房主。
                     * @param _owner 变更房主。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取是否支持观战。
                     * @return IsViewed 是否支持观战。
                     * 
                     */
                    bool GetIsViewed() const;

                    /**
                     * 设置是否支持观战。
                     * @param _isViewed 是否支持观战。
                     * 
                     */
                    void SetIsViewed(const bool& _isViewed);

                    /**
                     * 判断参数 IsViewed 是否已赋值
                     * @return IsViewed 是否已赋值
                     * 
                     */
                    bool IsViewedHasBeenSet() const;

                    /**
                     * 获取是否支持邀请码/密码。
                     * @return IsInvited 是否支持邀请码/密码。
                     * 
                     */
                    bool GetIsInvited() const;

                    /**
                     * 设置是否支持邀请码/密码。
                     * @param _isInvited 是否支持邀请码/密码。
                     * 
                     */
                    void SetIsInvited(const bool& _isInvited);

                    /**
                     * 判断参数 IsInvited 是否已赋值
                     * @return IsInvited 是否已赋值
                     * 
                     */
                    bool IsInvitedHasBeenSet() const;

                    /**
                     * 获取是否私有。
                     * @return IsPrivate 是否私有。
                     * 
                     */
                    bool GetIsPrivate() const;

                    /**
                     * 设置是否私有。
                     * @param _isPrivate 是否私有。
                     * 
                     */
                    void SetIsPrivate(const bool& _isPrivate);

                    /**
                     * 判断参数 IsPrivate 是否已赋值
                     * @return IsPrivate 是否已赋值
                     * 
                     */
                    bool IsPrivateHasBeenSet() const;

                    /**
                     * 获取自定义房间属性。
                     * @return CustomProperties 自定义房间属性。
                     * 
                     */
                    std::string GetCustomProperties() const;

                    /**
                     * 设置自定义房间属性。
                     * @param _customProperties 自定义房间属性。
                     * 
                     */
                    void SetCustomProperties(const std::string& _customProperties);

                    /**
                     * 判断参数 CustomProperties 是否已赋值
                     * @return CustomProperties 是否已赋值
                     * 
                     */
                    bool CustomPropertiesHasBeenSet() const;

                    /**
                     * 获取房间是否禁止加人。
                     * @return IsForbidJoin 房间是否禁止加人。
                     * 
                     */
                    bool GetIsForbidJoin() const;

                    /**
                     * 设置房间是否禁止加人。
                     * @param _isForbidJoin 房间是否禁止加人。
                     * 
                     */
                    void SetIsForbidJoin(const bool& _isForbidJoin);

                    /**
                     * 判断参数 IsForbidJoin 是否已赋值
                     * @return IsForbidJoin 是否已赋值
                     * 
                     */
                    bool IsForbidJoinHasBeenSet() const;

                private:

                    /**
                     * 游戏资源Id。
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 房间ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 发起者的PlayerId。
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 需要修改的房间选项，0表示房间名称，1表示房主，2表示是否允许观战，3表示是否支持邀请码/密码，4表示是否私有，5表示是否自定义房间属性，6表示是否禁止加人。
                     */
                    std::vector<int64_t> m_changeRoomOptionList;
                    bool m_changeRoomOptionListHasBeenSet;

                    /**
                     * 房间名称。
                     */
                    std::string m_roomName;
                    bool m_roomNameHasBeenSet;

                    /**
                     * 变更房主。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 是否支持观战。
                     */
                    bool m_isViewed;
                    bool m_isViewedHasBeenSet;

                    /**
                     * 是否支持邀请码/密码。
                     */
                    bool m_isInvited;
                    bool m_isInvitedHasBeenSet;

                    /**
                     * 是否私有。
                     */
                    bool m_isPrivate;
                    bool m_isPrivateHasBeenSet;

                    /**
                     * 自定义房间属性。
                     */
                    std::string m_customProperties;
                    bool m_customPropertiesHasBeenSet;

                    /**
                     * 房间是否禁止加人。
                     */
                    bool m_isForbidJoin;
                    bool m_isForbidJoinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_MODIFYROOMREQUEST_H_
