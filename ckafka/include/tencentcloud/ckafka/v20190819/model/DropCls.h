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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DROPCLS_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DROPCLS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * dip失败消息写入cls的配置
                */
                class DropCls : public AbstractModel
                {
                public:
                    DropCls();
                    ~DropCls() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否投递到cls
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DropInvalidMessageToCls 是否投递到cls
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDropInvalidMessageToCls() const;

                    /**
                     * 设置是否投递到cls
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DropInvalidMessageToCls 是否投递到cls
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDropInvalidMessageToCls(const bool& _dropInvalidMessageToCls);

                    /**
                     * 判断参数 DropInvalidMessageToCls 是否已赋值
                     * @return DropInvalidMessageToCls 是否已赋值
                     */
                    bool DropInvalidMessageToClsHasBeenSet() const;

                    /**
                     * 获取投递cls的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DropClsRegion 投递cls的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDropClsRegion() const;

                    /**
                     * 设置投递cls的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DropClsRegion 投递cls的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDropClsRegion(const std::string& _dropClsRegion);

                    /**
                     * 判断参数 DropClsRegion 是否已赋值
                     * @return DropClsRegion 是否已赋值
                     */
                    bool DropClsRegionHasBeenSet() const;

                    /**
                     * 获取投递cls的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DropClsOwneruin 投递cls的账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDropClsOwneruin() const;

                    /**
                     * 设置投递cls的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DropClsOwneruin 投递cls的账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDropClsOwneruin(const std::string& _dropClsOwneruin);

                    /**
                     * 判断参数 DropClsOwneruin 是否已赋值
                     * @return DropClsOwneruin 是否已赋值
                     */
                    bool DropClsOwneruinHasBeenSet() const;

                    /**
                     * 获取投递cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DropClsTopicId 投递cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDropClsTopicId() const;

                    /**
                     * 设置投递cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DropClsTopicId 投递cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDropClsTopicId(const std::string& _dropClsTopicId);

                    /**
                     * 判断参数 DropClsTopicId 是否已赋值
                     * @return DropClsTopicId 是否已赋值
                     */
                    bool DropClsTopicIdHasBeenSet() const;

                    /**
                     * 获取投递cls的日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DropClsLogSet 投递cls的日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDropClsLogSet() const;

                    /**
                     * 设置投递cls的日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DropClsLogSet 投递cls的日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDropClsLogSet(const std::string& _dropClsLogSet);

                    /**
                     * 判断参数 DropClsLogSet 是否已赋值
                     * @return DropClsLogSet 是否已赋值
                     */
                    bool DropClsLogSetHasBeenSet() const;

                private:

                    /**
                     * 是否投递到cls
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_dropInvalidMessageToCls;
                    bool m_dropInvalidMessageToClsHasBeenSet;

                    /**
                     * 投递cls的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dropClsRegion;
                    bool m_dropClsRegionHasBeenSet;

                    /**
                     * 投递cls的账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dropClsOwneruin;
                    bool m_dropClsOwneruinHasBeenSet;

                    /**
                     * 投递cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dropClsTopicId;
                    bool m_dropClsTopicIdHasBeenSet;

                    /**
                     * 投递cls的日志集id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dropClsLogSet;
                    bool m_dropClsLogSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DROPCLS_H_
