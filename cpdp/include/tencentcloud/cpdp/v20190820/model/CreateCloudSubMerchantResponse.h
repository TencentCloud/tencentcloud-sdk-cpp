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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATECLOUDSUBMERCHANTRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATECLOUDSUBMERCHANTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCloudSubMerchant返回参数结构体
                */
                class CreateCloudSubMerchantResponse : public AbstractModel
                {
                public:
                    CreateCloudSubMerchantResponse();
                    ~CreateCloudSubMerchantResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAppId 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取渠道子商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelSubMerchantId 渠道子商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取层级，从0开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 层级，从0开始
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取渠道应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelAppId 渠道应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelAppId() const;

                    /**
                     * 判断参数 ChannelAppId 是否已赋值
                     * @return ChannelAppId 是否已赋值
                     * 
                     */
                    bool ChannelAppIdHasBeenSet() const;

                private:

                    /**
                     * 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 渠道子商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 层级，从0开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 渠道应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelAppId;
                    bool m_channelAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATECLOUDSUBMERCHANTRESPONSE_H_
