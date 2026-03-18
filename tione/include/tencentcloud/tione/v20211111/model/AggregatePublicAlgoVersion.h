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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_AGGREGATEPUBLICALGOVERSION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_AGGREGATEPUBLICALGOVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/PublicAlgoVersion.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 聚合后的公共算法版本
                */
                class AggregatePublicAlgoVersion : public AbstractModel
                {
                public:
                    AggregatePublicAlgoVersion();
                    ~AggregatePublicAlgoVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于聚合的系列名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 用于聚合的系列名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置用于聚合的系列名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 用于聚合的系列名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取算法公共版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAlgoVersions 算法公共版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PublicAlgoVersion> GetPublicAlgoVersions() const;

                    /**
                     * 设置算法公共版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAlgoVersions 算法公共版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicAlgoVersions(const std::vector<PublicAlgoVersion>& _publicAlgoVersions);

                    /**
                     * 判断参数 PublicAlgoVersions 是否已赋值
                     * @return PublicAlgoVersions 是否已赋值
                     * 
                     */
                    bool PublicAlgoVersionsHasBeenSet() const;

                private:

                    /**
                     * 用于聚合的系列名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 算法公共版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PublicAlgoVersion> m_publicAlgoVersions;
                    bool m_publicAlgoVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_AGGREGATEPUBLICALGOVERSION_H_
