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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPLIVECODESREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPLIVECODESREQUEST_H_

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
                * CreateGroupLiveCodes请求参数结构体
                */
                class CreateGroupLiveCodesRequest : public AbstractModel
                {
                public:
                    CreateGroupLiveCodesRequest();
                    ~CreateGroupLiveCodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>低代码互动课堂的SdkAppId。</p>
                     * @return SdkAppId <p>低代码互动课堂的SdkAppId。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>低代码互动课堂的SdkAppId。</p>
                     * @param _sdkAppId <p>低代码互动课堂的SdkAppId。</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>房间ID。</p>
                     * @return RoomId <p>房间ID。</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>房间ID。</p>
                     * @param _roomId <p>房间ID。</p>
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
                     * 获取<p>分组数量。注：最大数量限制为30</p>
                     * @return Number <p>分组数量。注：最大数量限制为30</p>
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置<p>分组数量。注：最大数量限制为30</p>
                     * @param _number <p>分组数量。注：最大数量限制为30</p>
                     * 
                     */
                    void SetNumber(const uint64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * <p>低代码互动课堂的SdkAppId。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>房间ID。</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>分组数量。注：最大数量限制为30</p>
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEGROUPLIVECODESREQUEST_H_
