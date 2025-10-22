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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_LICENSETAG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_LICENSETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Tag.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 许可标签
                */
                class LicenseTag : public AbstractModel
                {
                public:
                    LicenseTag();
                    ~LicenseTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取许可ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseId 许可ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLicenseId() const;

                    /**
                     * 设置许可ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licenseId 许可ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicenseId(const std::string& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 许可ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_LICENSETAG_H_
