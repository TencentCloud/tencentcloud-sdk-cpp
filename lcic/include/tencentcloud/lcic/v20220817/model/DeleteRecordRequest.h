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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DELETERECORDREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DELETERECORDREQUEST_H_

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
                * DeleteRecord请求参数结构体
                */
                class DeleteRecordRequest : public AbstractModel
                {
                public:
                    DeleteRecordRequest();
                    ~DeleteRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取房间Id。
                     * @return RoomId 房间Id。
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置房间Id。
                     * @param _roomId 房间Id。
                     * 
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

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

                private:

                    /**
                     * 房间Id。
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 低代码互动课堂的SdkAppId。

                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DELETERECORDREQUEST_H_
