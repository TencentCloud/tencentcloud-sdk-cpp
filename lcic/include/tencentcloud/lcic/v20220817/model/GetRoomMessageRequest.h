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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMMESSAGEREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * GetRoomMessage请求参数结构体
                */
                class GetRoomMessageRequest : public AbstractModel
                {
                public:
                    GetRoomMessageRequest();
                    ~GetRoomMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。
                     * @param _sdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取课堂Id。	
                     * @return RoomId 课堂Id。	
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置课堂Id。	
                     * @param _roomId 课堂Id。	
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取消息序列。获取该序列以前的消息(不包含该seq消息)
                     * @return Seq 消息序列。获取该序列以前的消息(不包含该seq消息)
                     * 
                     */
                    int64_t GetSeq() const;

                    /**
                     * 设置消息序列。获取该序列以前的消息(不包含该seq消息)
                     * @param _seq 消息序列。获取该序列以前的消息(不包含该seq消息)
                     * 
                     */
                    void SetSeq(const int64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取消息拉取的条数。最大数量不能超过套餐包限制。
                     * @return Limit 消息拉取的条数。最大数量不能超过套餐包限制。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置消息拉取的条数。最大数量不能超过套餐包限制。
                     * @param _limit 消息拉取的条数。最大数量不能超过套餐包限制。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取请求消息的userId
                     * @return UserId 请求消息的userId
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置请求消息的userId
                     * @param _userId 请求消息的userId
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
                     * 低代码互动课堂的SdkAppId。
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 课堂Id。	
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 消息序列。获取该序列以前的消息(不包含该seq消息)
                     */
                    int64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 消息拉取的条数。最大数量不能超过套餐包限制。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 请求消息的userId
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMMESSAGEREQUEST_H_
