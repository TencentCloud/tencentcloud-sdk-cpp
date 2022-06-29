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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_ROOMUSER_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_ROOMUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 房间内用户信息
                */
                class RoomUser : public AbstractModel
                {
                public:
                    RoomUser();
                    ~RoomUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取房间id
                     * @return RoomId 房间id
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置房间id
                     * @param RoomId 房间id
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取房间里用户uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uins 房间里用户uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> GetUins() const;

                    /**
                     * 设置房间里用户uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uins 房间里用户uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUins(const std::vector<uint64_t>& _uins);

                    /**
                     * 判断参数 Uins 是否已赋值
                     * @return Uins 是否已赋值
                     */
                    bool UinsHasBeenSet() const;

                    /**
                     * 获取字符串房间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrRoomId 字符串房间id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStrRoomId() const;

                    /**
                     * 设置字符串房间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StrRoomId 字符串房间id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStrRoomId(const std::string& _strRoomId);

                    /**
                     * 判断参数 StrRoomId 是否已赋值
                     * @return StrRoomId 是否已赋值
                     */
                    bool StrRoomIdHasBeenSet() const;

                private:

                    /**
                     * 房间id
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 房间里用户uin列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_uins;
                    bool m_uinsHasBeenSet;

                    /**
                     * 字符串房间id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strRoomId;
                    bool m_strRoomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_ROOMUSER_H_
