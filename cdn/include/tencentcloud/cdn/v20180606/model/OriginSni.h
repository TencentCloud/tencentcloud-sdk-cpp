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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINSNI_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINSNI_H_

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
                * HTTPS回源SNI
                */
                class OriginSni : public AbstractModel
                {
                public:
                    OriginSni();
                    ~OriginSni() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启HTTPS回源SNI。
开启：on，
关闭：off
                     * @return Switch 是否开启HTTPS回源SNI。
开启：on，
关闭：off
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置是否开启HTTPS回源SNI。
开启：on，
关闭：off
                     * @param _switch 是否开启HTTPS回源SNI。
开启：on，
关闭：off
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取回源域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerName 回源域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置回源域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverName 回源域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                private:

                    /**
                     * 是否开启HTTPS回源SNI。
开启：on，
关闭：off
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 回源域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINSNI_H_
