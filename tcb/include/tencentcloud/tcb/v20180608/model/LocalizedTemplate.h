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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_LOCALIZEDTEMPLATE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_LOCALIZEDTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 多语言模板
                */
                class LocalizedTemplate : public AbstractModel
                {
                public:
                    LocalizedTemplate();
                    ~LocalizedTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZhCN <p>中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZhCN() const;

                    /**
                     * 设置<p>中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zhCN <p>中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZhCN(const std::string& _zhCN);

                    /**
                     * 判断参数 ZhCN 是否已赋值
                     * @return ZhCN 是否已赋值
                     * 
                     */
                    bool ZhCNHasBeenSet() const;

                    /**
                     * 获取<p>英文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnUS <p>英文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnUS() const;

                    /**
                     * 设置<p>英文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enUS <p>英文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnUS(const std::string& _enUS);

                    /**
                     * 判断参数 EnUS 是否已赋值
                     * @return EnUS 是否已赋值
                     * 
                     */
                    bool EnUSHasBeenSet() const;

                private:

                    /**
                     * <p>中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zhCN;
                    bool m_zhCNHasBeenSet;

                    /**
                     * <p>英文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enUS;
                    bool m_enUSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_LOCALIZEDTEMPLATE_H_
