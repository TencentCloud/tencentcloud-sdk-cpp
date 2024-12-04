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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_UNKNOWNPERSON_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_UNKNOWNPERSON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/VideoAppearInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 未知人物信息
                */
                class UnknownPerson : public AbstractModel
                {
                public:
                    UnknownPerson();
                    ~UnknownPerson() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视觉出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoAppearSet 视觉出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VideoAppearInfo> GetVideoAppearSet() const;

                    /**
                     * 设置视觉出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoAppearSet 视觉出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoAppearSet(const std::vector<VideoAppearInfo>& _videoAppearSet);

                    /**
                     * 判断参数 VideoAppearSet 是否已赋值
                     * @return VideoAppearSet 是否已赋值
                     * 
                     */
                    bool VideoAppearSetHasBeenSet() const;

                    /**
                     * 获取未知人物是否可以入库(只有当未知人物人脸小图质量分符合要求时才可入库)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PutLibraryAllowed 未知人物是否可以入库(只有当未知人物人脸小图质量分符合要求时才可入库)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPutLibraryAllowed() const;

                    /**
                     * 设置未知人物是否可以入库(只有当未知人物人脸小图质量分符合要求时才可入库)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _putLibraryAllowed 未知人物是否可以入库(只有当未知人物人脸小图质量分符合要求时才可入库)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPutLibraryAllowed(const bool& _putLibraryAllowed);

                    /**
                     * 判断参数 PutLibraryAllowed 是否已赋值
                     * @return PutLibraryAllowed 是否已赋值
                     * 
                     */
                    bool PutLibraryAllowedHasBeenSet() const;

                    /**
                     * 获取内容审核结果: 0-正常;1-涉政;其他待确定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditClass 内容审核结果: 0-正常;1-涉政;其他待确定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAuditClass() const;

                    /**
                     * 设置内容审核结果: 0-正常;1-涉政;其他待确定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditClass 内容审核结果: 0-正常;1-涉政;其他待确定
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditClass(const int64_t& _auditClass);

                    /**
                     * 判断参数 AuditClass 是否已赋值
                     * @return AuditClass 是否已赋值
                     * 
                     */
                    bool AuditClassHasBeenSet() const;

                private:

                    /**
                     * 视觉出现信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VideoAppearInfo> m_videoAppearSet;
                    bool m_videoAppearSetHasBeenSet;

                    /**
                     * 未知人物是否可以入库(只有当未知人物人脸小图质量分符合要求时才可入库)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_putLibraryAllowed;
                    bool m_putLibraryAllowedHasBeenSet;

                    /**
                     * 内容审核结果: 0-正常;1-涉政;其他待确定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_auditClass;
                    bool m_auditClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_UNKNOWNPERSON_H_
