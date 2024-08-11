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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEUSERLIFECYCLERESPONSE_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEUSERLIFECYCLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * DescribeUserLifecycle返回参数结构体
                */
                class DescribeUserLifecycleResponse : public AbstractModel
                {
                public:
                    DescribeUserLifecycleResponse();
                    ~DescribeUserLifecycleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户 ID。
                     * @return UserId 用户 ID。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取设置的隔离时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolateTime 设置的隔离时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取设置的销毁时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestroyTime 设置的销毁时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestroyTime() const;

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                private:

                    /**
                     * 用户 ID。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 设置的隔离时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 设置的销毁时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEUSERLIFECYCLERESPONSE_H_
