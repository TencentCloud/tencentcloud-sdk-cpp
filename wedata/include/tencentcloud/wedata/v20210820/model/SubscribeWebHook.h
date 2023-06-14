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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBEWEBHOOK_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBEWEBHOOK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 群机器人订阅配置
                */
                class SubscribeWebHook : public AbstractModel
                {
                public:
                    SubscribeWebHook();
                    ~SubscribeWebHook() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取群机器人类型，当前支持飞书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HookType 群机器人类型，当前支持飞书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHookType() const;

                    /**
                     * 设置群机器人类型，当前支持飞书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hookType 群机器人类型，当前支持飞书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHookType(const std::string& _hookType);

                    /**
                     * 判断参数 HookType 是否已赋值
                     * @return HookType 是否已赋值
                     * 
                     */
                    bool HookTypeHasBeenSet() const;

                    /**
                     * 获取群机器人webhook地址，配置方式参考https://cloud.tencent.com/document/product/1254/70736
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HookAddress 群机器人webhook地址，配置方式参考https://cloud.tencent.com/document/product/1254/70736
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHookAddress() const;

                    /**
                     * 设置群机器人webhook地址，配置方式参考https://cloud.tencent.com/document/product/1254/70736
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hookAddress 群机器人webhook地址，配置方式参考https://cloud.tencent.com/document/product/1254/70736
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHookAddress(const std::string& _hookAddress);

                    /**
                     * 判断参数 HookAddress 是否已赋值
                     * @return HookAddress 是否已赋值
                     * 
                     */
                    bool HookAddressHasBeenSet() const;

                private:

                    /**
                     * 群机器人类型，当前支持飞书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hookType;
                    bool m_hookTypeHasBeenSet;

                    /**
                     * 群机器人webhook地址，配置方式参考https://cloud.tencent.com/document/product/1254/70736
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hookAddress;
                    bool m_hookAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBEWEBHOOK_H_
