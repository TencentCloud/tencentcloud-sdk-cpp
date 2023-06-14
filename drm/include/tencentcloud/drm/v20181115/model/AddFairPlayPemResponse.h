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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_ADDFAIRPLAYPEMRESPONSE_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_ADDFAIRPLAYPEMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * AddFairPlayPem返回参数结构体
                */
                class AddFairPlayPemResponse : public AbstractModel
                {
                public:
                    AddFairPlayPemResponse();
                    ~AddFairPlayPemResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设置私钥后，后台返回的pem id，用来唯一标识一个私钥。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FairPlayPemId 设置私钥后，后台返回的pem id，用来唯一标识一个私钥。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFairPlayPemId() const;

                    /**
                     * 判断参数 FairPlayPemId 是否已赋值
                     * @return FairPlayPemId 是否已赋值
                     * 
                     */
                    bool FairPlayPemIdHasBeenSet() const;

                    /**
                     * 获取私钥的优先级，优先级数值越高，优先级越高。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 私钥的优先级，优先级数值越高，优先级越高。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 设置私钥后，后台返回的pem id，用来唯一标识一个私钥。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fairPlayPemId;
                    bool m_fairPlayPemIdHasBeenSet;

                    /**
                     * 私钥的优先级，优先级数值越高，优先级越高。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_ADDFAIRPLAYPEMRESPONSE_H_
