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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEMFACODESTATUSRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEMFACODESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeMfaCodeStatus返回参数结构体
                */
                class DescribeMfaCodeStatusResponse : public AbstractModel
                {
                public:
                    DescribeMfaCodeStatusResponse();
                    ~DescribeMfaCodeStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取微信mfa code状态
                     * @return Status 微信mfa code状态
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取记住设备
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RmDevice 记住设备
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRmDevice() const;

                    /**
                     * 判断参数 RmDevice 是否已赋值
                     * @return RmDevice 是否已赋值
                     */
                    bool RmDeviceHasBeenSet() const;

                    /**
                     * 获取临时Code
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tmpcode 临时Code
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTmpcode() const;

                    /**
                     * 判断参数 Tmpcode 是否已赋值
                     * @return Tmpcode 是否已赋值
                     */
                    bool TmpcodeHasBeenSet() const;

                    /**
                     * 获取昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nickname 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNickname() const;

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取是否有OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasOpenId 是否有OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetHasOpenId() const;

                    /**
                     * 判断参数 HasOpenId 是否已赋值
                     * @return HasOpenId 是否已赋值
                     */
                    bool HasOpenIdHasBeenSet() const;

                private:

                    /**
                     * 微信mfa code状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 记住设备
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rmDevice;
                    bool m_rmDeviceHasBeenSet;

                    /**
                     * 临时Code
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tmpcode;
                    bool m_tmpcodeHasBeenSet;

                    /**
                     * 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 是否有OpenId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hasOpenId;
                    bool m_hasOpenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEMFACODESTATUSRESPONSE_H_
