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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_QNPRIVATEACCESS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_QNPRIVATEACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 七牛元对象存储回源鉴权配置
                */
                class QnPrivateAccess : public AbstractModel
                {
                public:
                    QnPrivateAccess();
                    ~QnPrivateAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开关 on/off
                     * @return Switch 开关 on/off
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关 on/off
                     * @param Switch 开关 on/off
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取访问 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKey 访问 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置访问 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccessKey 访问 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取密钥
                     * @return SecretKey 密钥
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置密钥
                     * @param SecretKey 密钥
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * 开关 on/off
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 访问 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 密钥
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_QNPRIVATEACCESS_H_
