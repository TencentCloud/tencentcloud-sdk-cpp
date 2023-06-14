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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGERESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeCloudStorage返回参数结构体
                */
                class DescribeCloudStorageResponse : public AbstractModel
                {
                public:
                    DescribeCloudStorageResponse();
                    ~DescribeCloudStorageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云存开启状态，1为开启，0为未开启或已过期
                     * @return Status 云存开启状态，1为开启，0为未开启或已过期
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取云存类型，1为全时云存，2为事件云存
                     * @return Type 云存类型，1为全时云存，2为事件云存
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取云存套餐过期时间
                     * @return ExpireTime 云存套餐过期时间
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取云存回看时长
                     * @return ShiftDuration 云存回看时长
                     * 
                     */
                    uint64_t GetShiftDuration() const;

                    /**
                     * 判断参数 ShiftDuration 是否已赋值
                     * @return ShiftDuration 是否已赋值
                     * 
                     */
                    bool ShiftDurationHasBeenSet() const;

                    /**
                     * 获取云存用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 云存用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 云存开启状态，1为开启，0为未开启或已过期
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 云存类型，1为全时云存，2为事件云存
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 云存套餐过期时间
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 云存回看时长
                     */
                    uint64_t m_shiftDuration;
                    bool m_shiftDurationHasBeenSet;

                    /**
                     * 云存用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGERESPONSE_H_
