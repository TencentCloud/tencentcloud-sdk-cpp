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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKAPPROVALGUIDEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKAPPROVALGUIDEINFO_H_

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
                * 银行复核指引。银行侧返回网银授权指引链接，一般PC网银，手机网银链接
                */
                class OpenBankApprovalGuideInfo : public AbstractModel
                {
                public:
                    OpenBankApprovalGuideInfo();
                    ~OpenBankApprovalGuideInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PC网银指引
                     * @return PcGuideUrl PC网银指引
                     * 
                     */
                    std::string GetPcGuideUrl() const;

                    /**
                     * 设置PC网银指引
                     * @param _pcGuideUrl PC网银指引
                     * 
                     */
                    void SetPcGuideUrl(const std::string& _pcGuideUrl);

                    /**
                     * 判断参数 PcGuideUrl 是否已赋值
                     * @return PcGuideUrl 是否已赋值
                     * 
                     */
                    bool PcGuideUrlHasBeenSet() const;

                    /**
                     * 获取手机网银指引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MobileGuideUrl 手机网银指引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMobileGuideUrl() const;

                    /**
                     * 设置手机网银指引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mobileGuideUrl 手机网银指引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMobileGuideUrl(const std::string& _mobileGuideUrl);

                    /**
                     * 判断参数 MobileGuideUrl 是否已赋值
                     * @return MobileGuideUrl 是否已赋值
                     * 
                     */
                    bool MobileGuideUrlHasBeenSet() const;

                private:

                    /**
                     * PC网银指引
                     */
                    std::string m_pcGuideUrl;
                    bool m_pcGuideUrlHasBeenSet;

                    /**
                     * 手机网银指引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mobileGuideUrl;
                    bool m_mobileGuideUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKAPPROVALGUIDEINFO_H_
