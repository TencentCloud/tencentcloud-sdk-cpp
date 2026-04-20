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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_SENSITIVEDATACHECKCONFIGDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_SENSITIVEDATACHECKCONFIGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 敏感数据检测配置
                */
                class SensitiveDataCheckConfigDTO : public AbstractModel
                {
                public:
                    SensitiveDataCheckConfigDTO();
                    ~SensitiveDataCheckConfigDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>执行动作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action <p>执行动作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>执行动作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action <p>执行动作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>响应拦截内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InterceptMessage <p>响应拦截内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInterceptMessage() const;

                    /**
                     * 设置<p>响应拦截内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interceptMessage <p>响应拦截内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterceptMessage(const std::string& _interceptMessage);

                    /**
                     * 判断参数 InterceptMessage 是否已赋值
                     * @return InterceptMessage 是否已赋值
                     * 
                     */
                    bool InterceptMessageHasBeenSet() const;

                    /**
                     * 获取<p>检测项</p><p>枚举值：</p><ul><li>birthday： 生日</li><li>email： 邮箱</li><li>identity_number： 身份证</li><li>phone_number： 电话号码</li><li>secret： 秘钥</li><li>password： 密码</li><li>private_key： 私钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckItems <p>检测项</p><p>枚举值：</p><ul><li>birthday： 生日</li><li>email： 邮箱</li><li>identity_number： 身份证</li><li>phone_number： 电话号码</li><li>secret： 秘钥</li><li>password： 密码</li><li>private_key： 私钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCheckItems() const;

                    /**
                     * 设置<p>检测项</p><p>枚举值：</p><ul><li>birthday： 生日</li><li>email： 邮箱</li><li>identity_number： 身份证</li><li>phone_number： 电话号码</li><li>secret： 秘钥</li><li>password： 密码</li><li>private_key： 私钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkItems <p>检测项</p><p>枚举值：</p><ul><li>birthday： 生日</li><li>email： 邮箱</li><li>identity_number： 身份证</li><li>phone_number： 电话号码</li><li>secret： 秘钥</li><li>password： 密码</li><li>private_key： 私钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckItems(const std::vector<std::string>& _checkItems);

                    /**
                     * 判断参数 CheckItems 是否已赋值
                     * @return CheckItems 是否已赋值
                     * 
                     */
                    bool CheckItemsHasBeenSet() const;

                private:

                    /**
                     * <p>执行动作</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>响应拦截内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_interceptMessage;
                    bool m_interceptMessageHasBeenSet;

                    /**
                     * <p>检测项</p><p>枚举值：</p><ul><li>birthday： 生日</li><li>email： 邮箱</li><li>identity_number： 身份证</li><li>phone_number： 电话号码</li><li>secret： 秘钥</li><li>password： 密码</li><li>private_key： 私钥</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_checkItems;
                    bool m_checkItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_SENSITIVEDATACHECKCONFIGDTO_H_
