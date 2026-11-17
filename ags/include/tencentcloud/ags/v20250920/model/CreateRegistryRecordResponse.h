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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATEREGISTRYRECORDRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATEREGISTRYRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudRecord.h>
#include <tencentcloud/ags/v20250920/model/CloudRecordVersion.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreateRegistryRecord返回参数结构体
                */
                class CreateRegistryRecordResponse : public AbstractModel
                {
                public:
                    CreateRegistryRecordResponse();
                    ~CreateRegistryRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>新 Record ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId <p>新 Record ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>新建的 Record 详情。</p>
                     * @return Record <p>新建的 Record 详情。</p>
                     * 
                     */
                    CloudRecord GetRecord() const;

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取<p>本次创建的 Revision 1 Version 详情。</p>
                     * @return Version <p>本次创建的 Revision 1 Version 详情。</p>
                     * 
                     */
                    CloudRecordVersion GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>文件上传预签名 URL。使用文件上传方式创建 Skill 或 Plugin 版本时返回；Plugin 文件使用 application/octet-stream 上传。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UploadURL <p>文件上传预签名 URL。使用文件上传方式创建 Skill 或 Plugin 版本时返回；Plugin 文件使用 application/octet-stream 上传。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUploadURL() const;

                    /**
                     * 判断参数 UploadURL 是否已赋值
                     * @return UploadURL 是否已赋值
                     * 
                     */
                    bool UploadURLHasBeenSet() const;

                    /**
                     * 获取<p>文件上传链接的过期时间，使用文件上传方式创建 Skill 或 Plugin 版本时返回。</p><p>参数格式：ISO 8601 UTC，例如 2026-10-21T15:30:08Z。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime <p>文件上传链接的过期时间，使用文件上传方式创建 Skill 或 Plugin 版本时返回。</p><p>参数格式：ISO 8601 UTC，例如 2026-10-21T15:30:08Z。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>文件版本的内容状态，使用文件上传方式创建 Skill 或 Plugin 版本时返回。创建上传会话后通常为 UPLOADING；文件处理完成后为 READY，失败为 FAILED。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentStatus <p>文件版本的内容状态，使用文件上传方式创建 Skill 或 Plugin 版本时返回。创建上传会话后通常为 UPLOADING；文件处理完成后为 READY，失败为 FAILED。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentStatus() const;

                    /**
                     * 判断参数 ContentStatus 是否已赋值
                     * @return ContentStatus 是否已赋值
                     * 
                     */
                    bool ContentStatusHasBeenSet() const;

                private:

                    /**
                     * <p>新 Record ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>新建的 Record 详情。</p>
                     */
                    CloudRecord m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * <p>本次创建的 Revision 1 Version 详情。</p>
                     */
                    CloudRecordVersion m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>文件上传预签名 URL。使用文件上传方式创建 Skill 或 Plugin 版本时返回；Plugin 文件使用 application/octet-stream 上传。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uploadURL;
                    bool m_uploadURLHasBeenSet;

                    /**
                     * <p>文件上传链接的过期时间，使用文件上传方式创建 Skill 或 Plugin 版本时返回。</p><p>参数格式：ISO 8601 UTC，例如 2026-10-21T15:30:08Z。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>文件版本的内容状态，使用文件上传方式创建 Skill 或 Plugin 版本时返回。创建上传会话后通常为 UPLOADING；文件处理完成后为 READY，失败为 FAILED。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentStatus;
                    bool m_contentStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATEREGISTRYRECORDRESPONSE_H_
