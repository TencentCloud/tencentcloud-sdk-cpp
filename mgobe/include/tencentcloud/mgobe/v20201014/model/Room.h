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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_ROOM_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_ROOM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mgobe/v20201014/model/Player.h>
#include <tencentcloud/mgobe/v20201014/model/Team.h>


namespace TencentCloud
{
    namespace Mgobe
    {
        namespace V20201014
        {
            namespace Model
            {
                /**
                * 房间信息详情。
                */
                class Room : public AbstractModel
                {
                public:
                    Room();
                    ~Room() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示房间名称。最长不超过32个字符。
                     * @return Name 表示房间名称。最长不超过32个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置表示房间名称。最长不超过32个字符。
                     * @param _name 表示房间名称。最长不超过32个字符。
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
                     * 获取表示房间最大玩家数量。最大不超过100人。
                     * @return MaxPlayers 表示房间最大玩家数量。最大不超过100人。
                     * 
                     */
                    int64_t GetMaxPlayers() const;

                    /**
                     * 设置表示房间最大玩家数量。最大不超过100人。
                     * @param _maxPlayers 表示房间最大玩家数量。最大不超过100人。
                     * 
                     */
                    void SetMaxPlayers(const int64_t& _maxPlayers);

                    /**
                     * 判断参数 MaxPlayers 是否已赋值
                     * @return MaxPlayers 是否已赋值
                     * 
                     */
                    bool MaxPlayersHasBeenSet() const;

                    /**
                     * 获取表示房主OpenId。最长不超过16个字符。
                     * @return OwnerOpenId 表示房主OpenId。最长不超过16个字符。
                     * 
                     */
                    std::string GetOwnerOpenId() const;

                    /**
                     * 设置表示房主OpenId。最长不超过16个字符。
                     * @param _ownerOpenId 表示房主OpenId。最长不超过16个字符。
                     * 
                     */
                    void SetOwnerOpenId(const std::string& _ownerOpenId);

                    /**
                     * 判断参数 OwnerOpenId 是否已赋值
                     * @return OwnerOpenId 是否已赋值
                     * 
                     */
                    bool OwnerOpenIdHasBeenSet() const;

                    /**
                     * 获取表示是否私有，私有指的是不允许其他玩家通过匹配加入房间。
                     * @return IsPrivate 表示是否私有，私有指的是不允许其他玩家通过匹配加入房间。
                     * 
                     */
                    bool GetIsPrivate() const;

                    /**
                     * 设置表示是否私有，私有指的是不允许其他玩家通过匹配加入房间。
                     * @param _isPrivate 表示是否私有，私有指的是不允许其他玩家通过匹配加入房间。
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
                     * 获取表示玩家详情列表。
                     * @return Players 表示玩家详情列表。
                     * 
                     */
                    std::vector<Player> GetPlayers() const;

                    /**
                     * 设置表示玩家详情列表。
                     * @param _players 表示玩家详情列表。
                     * 
                     */
                    void SetPlayers(const std::vector<Player>& _players);

                    /**
                     * 判断参数 Players 是否已赋值
                     * @return Players 是否已赋值
                     * 
                     */
                    bool PlayersHasBeenSet() const;

                    /**
                     * 获取表示团队属性列表。
                     * @return Teams 表示团队属性列表。
                     * 
                     */
                    std::vector<Team> GetTeams() const;

                    /**
                     * 设置表示团队属性列表。
                     * @param _teams 表示团队属性列表。
                     * 
                     */
                    void SetTeams(const std::vector<Team>& _teams);

                    /**
                     * 判断参数 Teams 是否已赋值
                     * @return Teams 是否已赋值
                     * 
                     */
                    bool TeamsHasBeenSet() const;

                    /**
                     * 获取表示房间 ID。出参用，由后端返回。
                     * @return Id 表示房间 ID。出参用，由后端返回。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置表示房间 ID。出参用，由后端返回。
                     * @param _id 表示房间 ID。出参用，由后端返回。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取表示房间类型。最长不超过32个字符。
                     * @return Type 表示房间类型。最长不超过32个字符。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置表示房间类型。最长不超过32个字符。
                     * @param _type 表示房间类型。最长不超过32个字符。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取表示创建方式：0.单人主动发起创建房间请求；1.多人在线匹配请求分配房间；2. 直接创建满员房间。调用云API的创房请求默认为3，目前通过云API调用只支持第3种方式。
                     * @return CreateType 表示创建方式：0.单人主动发起创建房间请求；1.多人在线匹配请求分配房间；2. 直接创建满员房间。调用云API的创房请求默认为3，目前通过云API调用只支持第3种方式。
                     * 
                     */
                    int64_t GetCreateType() const;

                    /**
                     * 设置表示创建方式：0.单人主动发起创建房间请求；1.多人在线匹配请求分配房间；2. 直接创建满员房间。调用云API的创房请求默认为3，目前通过云API调用只支持第3种方式。
                     * @param _createType 表示创建方式：0.单人主动发起创建房间请求；1.多人在线匹配请求分配房间；2. 直接创建满员房间。调用云API的创房请求默认为3，目前通过云API调用只支持第3种方式。
                     * 
                     */
                    void SetCreateType(const int64_t& _createType);

                    /**
                     * 判断参数 CreateType 是否已赋值
                     * @return CreateType 是否已赋值
                     * 
                     */
                    bool CreateTypeHasBeenSet() const;

                    /**
                     * 获取表示自定义房间属性，不传为空字符串。最长不超过1024个字符。
                     * @return CustomProperties 表示自定义房间属性，不传为空字符串。最长不超过1024个字符。
                     * 
                     */
                    std::string GetCustomProperties() const;

                    /**
                     * 设置表示自定义房间属性，不传为空字符串。最长不超过1024个字符。
                     * @param _customProperties 表示自定义房间属性，不传为空字符串。最长不超过1024个字符。
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
                     * 获取表示房间帧同步状态。0表示未开始帧同步，1表示已开始帧同步，用于出参。
                     * @return FrameSyncState 表示房间帧同步状态。0表示未开始帧同步，1表示已开始帧同步，用于出参。
                     * 
                     */
                    int64_t GetFrameSyncState() const;

                    /**
                     * 设置表示房间帧同步状态。0表示未开始帧同步，1表示已开始帧同步，用于出参。
                     * @param _frameSyncState 表示房间帧同步状态。0表示未开始帧同步，1表示已开始帧同步，用于出参。
                     * 
                     */
                    void SetFrameSyncState(const int64_t& _frameSyncState);

                    /**
                     * 判断参数 FrameSyncState 是否已赋值
                     * @return FrameSyncState 是否已赋值
                     * 
                     */
                    bool FrameSyncStateHasBeenSet() const;

                    /**
                     * 获取表示帧率。由控制台设置，用于出参。
                     * @return FrameRate 表示帧率。由控制台设置，用于出参。
                     * 
                     */
                    int64_t GetFrameRate() const;

                    /**
                     * 设置表示帧率。由控制台设置，用于出参。
                     * @param _frameRate 表示帧率。由控制台设置，用于出参。
                     * 
                     */
                    void SetFrameRate(const int64_t& _frameRate);

                    /**
                     * 判断参数 FrameRate 是否已赋值
                     * @return FrameRate 是否已赋值
                     * 
                     */
                    bool FrameRateHasBeenSet() const;

                    /**
                     * 获取表示路由ID。用于出参。
                     * @return RouteId 表示路由ID。用于出参。
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置表示路由ID。用于出参。
                     * @param _routeId 表示路由ID。用于出参。
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取表示房间创建的时间戳（单位：秒）。
                     * @return CreateTime 表示房间创建的时间戳（单位：秒）。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置表示房间创建的时间戳（单位：秒）。
                     * @param _createTime 表示房间创建的时间戳（单位：秒）。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取表示开始帧同步时的时间戳（单位：秒）,未开始帧同步时返回为0。
                     * @return StartGameTime 表示开始帧同步时的时间戳（单位：秒）,未开始帧同步时返回为0。
                     * 
                     */
                    int64_t GetStartGameTime() const;

                    /**
                     * 设置表示开始帧同步时的时间戳（单位：秒）,未开始帧同步时返回为0。
                     * @param _startGameTime 表示开始帧同步时的时间戳（单位：秒）,未开始帧同步时返回为0。
                     * 
                     */
                    void SetStartGameTime(const int64_t& _startGameTime);

                    /**
                     * 判断参数 StartGameTime 是否已赋值
                     * @return StartGameTime 是否已赋值
                     * 
                     */
                    bool StartGameTimeHasBeenSet() const;

                    /**
                     * 获取表示是否禁止加入房间。出参使用，默认为False，通过SDK的ChangeRoom接口可以修改。
                     * @return IsForbidJoin 表示是否禁止加入房间。出参使用，默认为False，通过SDK的ChangeRoom接口可以修改。
                     * 
                     */
                    bool GetIsForbidJoin() const;

                    /**
                     * 设置表示是否禁止加入房间。出参使用，默认为False，通过SDK的ChangeRoom接口可以修改。
                     * @param _isForbidJoin 表示是否禁止加入房间。出参使用，默认为False，通过SDK的ChangeRoom接口可以修改。
                     * 
                     */
                    void SetIsForbidJoin(const bool& _isForbidJoin);

                    /**
                     * 判断参数 IsForbidJoin 是否已赋值
                     * @return IsForbidJoin 是否已赋值
                     * 
                     */
                    bool IsForbidJoinHasBeenSet() const;

                    /**
                     * 获取表示房主PlayerId。
                     * @return Owner 表示房主PlayerId。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置表示房主PlayerId。
                     * @param _owner 表示房主PlayerId。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * 表示房间名称。最长不超过32个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 表示房间最大玩家数量。最大不超过100人。
                     */
                    int64_t m_maxPlayers;
                    bool m_maxPlayersHasBeenSet;

                    /**
                     * 表示房主OpenId。最长不超过16个字符。
                     */
                    std::string m_ownerOpenId;
                    bool m_ownerOpenIdHasBeenSet;

                    /**
                     * 表示是否私有，私有指的是不允许其他玩家通过匹配加入房间。
                     */
                    bool m_isPrivate;
                    bool m_isPrivateHasBeenSet;

                    /**
                     * 表示玩家详情列表。
                     */
                    std::vector<Player> m_players;
                    bool m_playersHasBeenSet;

                    /**
                     * 表示团队属性列表。
                     */
                    std::vector<Team> m_teams;
                    bool m_teamsHasBeenSet;

                    /**
                     * 表示房间 ID。出参用，由后端返回。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 表示房间类型。最长不超过32个字符。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 表示创建方式：0.单人主动发起创建房间请求；1.多人在线匹配请求分配房间；2. 直接创建满员房间。调用云API的创房请求默认为3，目前通过云API调用只支持第3种方式。
                     */
                    int64_t m_createType;
                    bool m_createTypeHasBeenSet;

                    /**
                     * 表示自定义房间属性，不传为空字符串。最长不超过1024个字符。
                     */
                    std::string m_customProperties;
                    bool m_customPropertiesHasBeenSet;

                    /**
                     * 表示房间帧同步状态。0表示未开始帧同步，1表示已开始帧同步，用于出参。
                     */
                    int64_t m_frameSyncState;
                    bool m_frameSyncStateHasBeenSet;

                    /**
                     * 表示帧率。由控制台设置，用于出参。
                     */
                    int64_t m_frameRate;
                    bool m_frameRateHasBeenSet;

                    /**
                     * 表示路由ID。用于出参。
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * 表示房间创建的时间戳（单位：秒）。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 表示开始帧同步时的时间戳（单位：秒）,未开始帧同步时返回为0。
                     */
                    int64_t m_startGameTime;
                    bool m_startGameTimeHasBeenSet;

                    /**
                     * 表示是否禁止加入房间。出参使用，默认为False，通过SDK的ChangeRoom接口可以修改。
                     */
                    bool m_isForbidJoin;
                    bool m_isForbidJoinHasBeenSet;

                    /**
                     * 表示房主PlayerId。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_ROOM_H_
