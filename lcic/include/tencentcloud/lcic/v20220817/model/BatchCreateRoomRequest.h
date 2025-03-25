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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHCREATEROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHCREATEROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/RoomInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BatchCreateRoom请求参数结构体
                */
                class BatchCreateRoomRequest : public AbstractModel
                {
                public:
                    BatchCreateRoomRequest();
                    ~BatchCreateRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码平台的SdkAppId。
                     * @return SdkAppId 低代码平台的SdkAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码平台的SdkAppId。
                     * @param _sdkAppId 低代码平台的SdkAppId。
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
                     * 获取创建课堂ID列表
                     * @return RoomInfos 创建课堂ID列表
                     * 
                     */
                    std::vector<RoomInfo> GetRoomInfos() const;

                    /**
                     * 设置创建课堂ID列表
                     * @param _roomInfos 创建课堂ID列表
                     * 
                     */
                    void SetRoomInfos(const std::vector<RoomInfo>& _roomInfos);

                    /**
                     * 判断参数 RoomInfos 是否已赋值
                     * @return RoomInfos 是否已赋值
                     * 
                     */
                    bool RoomInfosHasBeenSet() const;

                private:

                    /**
                     * 低代码平台的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 创建课堂ID列表
                     */
                    std::vector<RoomInfo> m_roomInfos;
                    bool m_roomInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHCREATEROOMREQUEST_H_
