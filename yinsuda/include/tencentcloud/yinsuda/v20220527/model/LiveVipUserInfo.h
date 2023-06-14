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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_LIVEVIPUSERINFO_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_LIVEVIPUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 直播会员用户信息
                */
                class LiveVipUserInfo : public AbstractModel
                {
                public:
                    LiveVipUserInfo();
                    ~LiveVipUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取直播会员结束时间。
                     * @return LiveVipEndTime 直播会员结束时间。
                     * 
                     */
                    std::string GetLiveVipEndTime() const;

                    /**
                     * 设置直播会员结束时间。
                     * @param _liveVipEndTime 直播会员结束时间。
                     * 
                     */
                    void SetLiveVipEndTime(const std::string& _liveVipEndTime);

                    /**
                     * 判断参数 LiveVipEndTime 是否已赋值
                     * @return LiveVipEndTime 是否已赋值
                     * 
                     */
                    bool LiveVipEndTimeHasBeenSet() const;

                    /**
                     * 获取会员生效状态
<li>Valid：生效</li><li>Invalid：无效</li>
                     * @return LiveVipStatus 会员生效状态
<li>Valid：生效</li><li>Invalid：无效</li>
                     * 
                     */
                    std::string GetLiveVipStatus() const;

                    /**
                     * 设置会员生效状态
<li>Valid：生效</li><li>Invalid：无效</li>
                     * @param _liveVipStatus 会员生效状态
<li>Valid：生效</li><li>Invalid：无效</li>
                     * 
                     */
                    void SetLiveVipStatus(const std::string& _liveVipStatus);

                    /**
                     * 判断参数 LiveVipStatus 是否已赋值
                     * @return LiveVipStatus 是否已赋值
                     * 
                     */
                    bool LiveVipStatusHasBeenSet() const;

                private:

                    /**
                     * 房间标识。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 直播会员结束时间。
                     */
                    std::string m_liveVipEndTime;
                    bool m_liveVipEndTimeHasBeenSet;

                    /**
                     * 会员生效状态
<li>Valid：生效</li><li>Invalid：无效</li>
                     */
                    std::string m_liveVipStatus;
                    bool m_liveVipStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_LIVEVIPUSERINFO_H_
