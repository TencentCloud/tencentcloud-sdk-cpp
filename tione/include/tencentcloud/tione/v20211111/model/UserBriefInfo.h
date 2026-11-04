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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_USERBRIEFINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_USERBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 用户简要信息
                */
                class UserBriefInfo : public AbstractModel
                {
                public:
                    UserBriefInfo();
                    ~UserBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUin <p>子用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>子用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUin <p>子用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取<p>子用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUinName <p>子用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置<p>子用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUinName <p>子用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                private:

                    /**
                     * <p>子用户uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>子用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_USERBRIEFINFO_H_
