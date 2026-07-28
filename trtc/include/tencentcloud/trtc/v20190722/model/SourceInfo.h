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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SOURCEINFO_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 额外信息透传结构体（房间/主播/业务自定义），原样回带到回调
                */
                class SourceInfo : public AbstractModel
                {
                public:
                    SourceInfo();
                    ~SourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>直播间 ID（用于结果透传与去重；数字房间号也用 string 传）</p>
                     * @return RoomId <p>直播间 ID（用于结果透传与去重；数字房间号也用 string 传）</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>直播间 ID（用于结果透传与去重；数字房间号也用 string 传）</p>
                     * @param _roomId <p>直播间 ID（用于结果透传与去重；数字房间号也用 string 传）</p>
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
                     * 获取<p>房间号类型</p><p>枚举值：</p><ul><li>0： 字符串房间号</li><li>1： 数字房间号</li></ul>
                     * @return RoomIdType <p>房间号类型</p><p>枚举值：</p><ul><li>0： 字符串房间号</li><li>1： 数字房间号</li></ul>
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置<p>房间号类型</p><p>枚举值：</p><ul><li>0： 字符串房间号</li><li>1： 数字房间号</li></ul>
                     * @param _roomIdType <p>房间号类型</p><p>枚举值：</p><ul><li>0： 字符串房间号</li><li>1： 数字房间号</li></ul>
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取<p>主播/被审核方 ID</p>
                     * @return UserId <p>主播/被审核方 ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>主播/被审核方 ID</p>
                     * @param _userId <p>主播/被审核方 ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>直播间 ID（用于结果透传与去重；数字房间号也用 string 传）</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>房间号类型</p><p>枚举值：</p><ul><li>0： 字符串房间号</li><li>1： 数字房间号</li></ul>
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * <p>主播/被审核方 ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SOURCEINFO_H_
