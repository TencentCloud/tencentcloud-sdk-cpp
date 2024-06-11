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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBETRANSPARENTDATAENCRYPTIONSTATUSRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBETRANSPARENTDATAENCRYPTIONSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/KMSInfoDetail.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeTransparentDataEncryptionStatus返回参数结构体
                */
                class DescribeTransparentDataEncryptionStatusResponse : public AbstractModel
                {
                public:
                    DescribeTransparentDataEncryptionStatusResponse();
                    ~DescribeTransparentDataEncryptionStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表示是否开启了透明加密。 
- close：未开启。
- open：已开启。
                     * @return TransparentDataEncryptionStatus 表示是否开启了透明加密。 
- close：未开启。
- open：已开启。
                     * 
                     */
                    std::string GetTransparentDataEncryptionStatus() const;

                    /**
                     * 判断参数 TransparentDataEncryptionStatus 是否已赋值
                     * @return TransparentDataEncryptionStatus 是否已赋值
                     * 
                     */
                    bool TransparentDataEncryptionStatusHasBeenSet() const;

                    /**
                     * 获取已绑定的密钥列表，如未绑定，返回null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyInfoList 已绑定的密钥列表，如未绑定，返回null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KMSInfoDetail> GetKeyInfoList() const;

                    /**
                     * 判断参数 KeyInfoList 是否已赋值
                     * @return KeyInfoList 是否已赋值
                     * 
                     */
                    bool KeyInfoListHasBeenSet() const;

                private:

                    /**
                     * 表示是否开启了透明加密。 
- close：未开启。
- open：已开启。
                     */
                    std::string m_transparentDataEncryptionStatus;
                    bool m_transparentDataEncryptionStatusHasBeenSet;

                    /**
                     * 已绑定的密钥列表，如未绑定，返回null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KMSInfoDetail> m_keyInfoList;
                    bool m_keyInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBETRANSPARENTDATAENCRYPTIONSTATUSRESPONSE_H_
