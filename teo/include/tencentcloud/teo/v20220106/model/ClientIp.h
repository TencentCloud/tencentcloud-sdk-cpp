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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CLIENTIP_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CLIENTIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 客户端IP头部
                */
                class ClientIp : public AbstractModel
                {
                public:
                    ClientIp();
                    ~ClientIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端IP头部配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 客户端IP头部配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置客户端IP头部配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Switch 客户端IP头部配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取回源客户端IP请求头名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderName 回源客户端IP请求头名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置回源客户端IP请求头名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HeaderName 回源客户端IP请求头名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     */
                    bool HeaderNameHasBeenSet() const;

                private:

                    /**
                     * 客户端IP头部配置开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 回源客户端IP请求头名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CLIENTIP_H_
