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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OLDCHANNELEXTERNALUSERINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OLDCHANNELEXTERNALUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 渠道方用户信息
                */
                class OldChannelExternalUserInfo : public AbstractModel
                {
                public:
                    OldChannelExternalUserInfo();
                    ~OldChannelExternalUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道方用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalUserType 渠道方用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExternalUserType() const;

                    /**
                     * 设置渠道方用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExternalUserType 渠道方用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelExternalUserType(const std::string& _channelExternalUserType);

                    /**
                     * 判断参数 ChannelExternalUserType 是否已赋值
                     * @return ChannelExternalUserType 是否已赋值
                     * 
                     */
                    bool ChannelExternalUserTypeHasBeenSet() const;

                    /**
                     * 获取渠道方用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExternalUserId 渠道方用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExternalUserId() const;

                    /**
                     * 设置渠道方用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExternalUserId 渠道方用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelExternalUserId(const std::string& _channelExternalUserId);

                    /**
                     * 判断参数 ChannelExternalUserId 是否已赋值
                     * @return ChannelExternalUserId 是否已赋值
                     * 
                     */
                    bool ChannelExternalUserIdHasBeenSet() const;

                private:

                    /**
                     * 渠道方用户类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExternalUserType;
                    bool m_channelExternalUserTypeHasBeenSet;

                    /**
                     * 渠道方用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExternalUserId;
                    bool m_channelExternalUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OLDCHANNELEXTERNALUSERINFO_H_
