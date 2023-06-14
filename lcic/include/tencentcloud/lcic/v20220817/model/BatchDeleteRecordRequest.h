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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDELETERECORDREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDELETERECORDREQUEST_H_

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
                * BatchDeleteRecord请求参数结构体
                */
                class BatchDeleteRecordRequest : public AbstractModel
                {
                public:
                    BatchDeleteRecordRequest();
                    ~BatchDeleteRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取房间ID列表
                     * @return RoomIds 房间ID列表
                     * 
                     */
                    std::vector<int64_t> GetRoomIds() const;

                    /**
                     * 设置房间ID列表
                     * @param _roomIds 房间ID列表
                     * 
                     */
                    void SetRoomIds(const std::vector<int64_t>& _roomIds);

                    /**
                     * 判断参数 RoomIds 是否已赋值
                     * @return RoomIds 是否已赋值
                     * 
                     */
                    bool RoomIdsHasBeenSet() const;

                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。
                     * @param _sdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * 房间ID列表
                     */
                    std::vector<int64_t> m_roomIds;
                    bool m_roomIdsHasBeenSet;

                    /**
                     * 低代码互动课堂的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDELETERECORDREQUEST_H_
