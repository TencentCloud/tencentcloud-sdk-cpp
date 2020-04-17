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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEMFADEVICECOLLRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEMFADEVICECOLLRESPONSE_H_

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
                * DescribeMFADeviceColl返回参数结构体
                */
                class DescribeMFADeviceCollResponse : public AbstractModel
                {
                public:
                    DescribeMFADeviceCollResponse();
                    ~DescribeMFADeviceCollResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Token状态
                     * @return Status Token状态
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Token值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenSn Token值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTokenSn() const;

                    /**
                     * 判断参数 TokenSn 是否已赋值
                     * @return TokenSn 是否已赋值
                     */
                    bool TokenSnHasBeenSet() const;

                    /**
                     * 获取token类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenType token类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTokenType() const;

                    /**
                     * 判断参数 TokenType 是否已赋值
                     * @return TokenType 是否已赋值
                     */
                    bool TokenTypeHasBeenSet() const;

                private:

                    /**
                     * Token状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Token值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tokenSn;
                    bool m_tokenSnHasBeenSet;

                    /**
                     * token类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEMFADEVICECOLLRESPONSE_H_
