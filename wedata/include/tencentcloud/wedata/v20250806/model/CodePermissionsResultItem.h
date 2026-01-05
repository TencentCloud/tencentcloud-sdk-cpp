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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEPERMISSIONSRESULTITEM_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEPERMISSIONSRESULTITEM_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据探索文件授权结果
                */
                class CodePermissionsResultItem : public AbstractModel
                {
                public:
                    CodePermissionsResultItem();
                    ~CodePermissionsResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Item 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _item 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取该资源权限操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 该资源权限操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置该资源权限操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 该资源权限操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取若是创建失败, 提供失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 若是创建失败, 提供失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置若是创建失败, 提供失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 若是创建失败, 提供失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 该资源权限操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 若是创建失败, 提供失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEPERMISSIONSRESULTITEM_H_
