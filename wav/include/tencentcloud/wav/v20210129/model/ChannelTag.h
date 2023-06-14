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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CHANNELTAG_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CHANNELTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 客户渠道标签
                */
                class ChannelTag : public AbstractModel
                {
                public:
                    ChannelTag();
                    ~ChannelTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该客户档案当前已成功关联的渠道标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagName 该客户档案当前已成功关联的渠道标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置该客户档案当前已成功关联的渠道标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagName 该客户档案当前已成功关联的渠道标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取该客户档案当前已成功关联的渠道标签的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagId 该客户档案当前已成功关联的渠道标签的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置该客户档案当前已成功关联的渠道标签的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagId 该客户档案当前已成功关联的渠道标签的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagId(const std::string& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                private:

                    /**
                     * 该客户档案当前已成功关联的渠道标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 该客户档案当前已成功关联的渠道标签的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CHANNELTAG_H_
