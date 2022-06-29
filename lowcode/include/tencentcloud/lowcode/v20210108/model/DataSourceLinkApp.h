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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCELINKAPP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCELINKAPP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 数据源关联App信息
                */
                class DataSourceLinkApp : public AbstractModel
                {
                public:
                    DataSourceLinkApp();
                    ~DataSourceLinkApp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用Id
                     * @return Id 应用Id
                     */
                    std::string GetId() const;

                    /**
                     * 设置应用Id
                     * @param Id 应用Id
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Title 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取是否编辑状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditStatusUse 是否编辑状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEditStatusUse() const;

                    /**
                     * 设置是否编辑状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EditStatusUse 是否编辑状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEditStatusUse(const int64_t& _editStatusUse);

                    /**
                     * 判断参数 EditStatusUse 是否已赋值
                     * @return EditStatusUse 是否已赋值
                     */
                    bool EditStatusUseHasBeenSet() const;

                    /**
                     * 获取是否预览状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewStatusUse 是否预览状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPreviewStatusUse() const;

                    /**
                     * 设置是否预览状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PreviewStatusUse 是否预览状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPreviewStatusUse(const int64_t& _previewStatusUse);

                    /**
                     * 判断参数 PreviewStatusUse 是否已赋值
                     * @return PreviewStatusUse 是否已赋值
                     */
                    bool PreviewStatusUseHasBeenSet() const;

                    /**
                     * 获取是否正式状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnlineStatusUse 是否正式状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOnlineStatusUse() const;

                    /**
                     * 设置是否正式状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OnlineStatusUse 是否正式状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOnlineStatusUse(const int64_t& _onlineStatusUse);

                    /**
                     * 判断参数 OnlineStatusUse 是否已赋值
                     * @return OnlineStatusUse 是否已赋值
                     */
                    bool OnlineStatusUseHasBeenSet() const;

                private:

                    /**
                     * 应用Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 是否编辑状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_editStatusUse;
                    bool m_editStatusUseHasBeenSet;

                    /**
                     * 是否预览状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_previewStatusUse;
                    bool m_previewStatusUseHasBeenSet;

                    /**
                     * 是否正式状态使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_onlineStatusUse;
                    bool m_onlineStatusUseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCELINKAPP_H_
