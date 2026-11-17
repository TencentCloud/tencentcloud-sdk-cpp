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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_FORCEREDIRECTCONFIG_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_FORCEREDIRECTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * 强制 HTTPS 跳转
                */
                class ForceRedirectConfig : public AbstractModel
                {
                public:
                    ForceRedirectConfig();
                    ~ForceRedirectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>on 或 off</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch <p>on 或 off</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>on 或 off</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch <p>on 或 off</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>301、302、307、308</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectStatusCode <p>301、302、307、308</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRedirectStatusCode() const;

                    /**
                     * 设置<p>301、302、307、308</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectStatusCode <p>301、302、307、308</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedirectStatusCode(const int64_t& _redirectStatusCode);

                    /**
                     * 判断参数 RedirectStatusCode 是否已赋值
                     * @return RedirectStatusCode 是否已赋值
                     * 
                     */
                    bool RedirectStatusCodeHasBeenSet() const;

                private:

                    /**
                     * <p>on 或 off</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>301、302、307、308</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_FORCEREDIRECTCONFIG_H_
