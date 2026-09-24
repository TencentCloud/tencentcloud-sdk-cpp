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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_SYNCREGISTRYRECORDRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_SYNCREGISTRYRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudRecordVersion.h>
#include <tencentcloud/ags/v20250920/model/CloudRecord.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * SyncRegistryRecord返回参数结构体
                */
                class SyncRegistryRecordResponse : public AbstractModel
                {
                public:
                    SyncRegistryRecordResponse();
                    ~SyncRegistryRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>同步结果：UNCHANGED（远端无变化）/ VERSION_CREATED（远端有变化，已生成新 Version）/ FAILED（同步失败）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyncStatus <p>同步结果：UNCHANGED（远端无变化）/ VERSION_CREATED（远端有变化，已生成新 Version）/ FAILED（同步失败）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>作为同步来源解析出的 Version ID（可能由 Label 解析而来）；不为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResolvedVersionId <p>作为同步来源解析出的 Version ID（可能由 Label 解析而来）；不为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResolvedVersionId() const;

                    /**
                     * 判断参数 ResolvedVersionId 是否已赋值
                     * @return ResolvedVersionId 是否已赋值
                     * 
                     */
                    bool ResolvedVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>SyncStatus=VERSION_CREATED 时返回：本次新建的 Version。</p>
                     * @return CreatedVersion <p>SyncStatus=VERSION_CREATED 时返回：本次新建的 Version。</p>
                     * 
                     */
                    CloudRecordVersion GetCreatedVersion() const;

                    /**
                     * 判断参数 CreatedVersion 是否已赋值
                     * @return CreatedVersion 是否已赋值
                     * 
                     */
                    bool CreatedVersionHasBeenSet() const;

                    /**
                     * 获取<p>SyncStatus=VERSION_CREATED 时返回：同步后的最新 Record。</p>
                     * @return Record <p>SyncStatus=VERSION_CREATED 时返回：同步后的最新 Record。</p>
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
                     * 获取<p>最后一次同步时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSyncTime <p>最后一次同步时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastSyncTime() const;

                    /**
                     * 判断参数 LastSyncTime 是否已赋值
                     * @return LastSyncTime 是否已赋值
                     * 
                     */
                    bool LastSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>失败错误码；SyncStatus=FAILED 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode <p>失败错误码；SyncStatus=FAILED 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>失败错误信息；SyncStatus=FAILED 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage <p>失败错误信息；SyncStatus=FAILED 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * <p>同步结果：UNCHANGED（远端无变化）/ VERSION_CREATED（远端有变化，已生成新 Version）/ FAILED（同步失败）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * <p>作为同步来源解析出的 Version ID（可能由 Label 解析而来）；不为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resolvedVersionId;
                    bool m_resolvedVersionIdHasBeenSet;

                    /**
                     * <p>SyncStatus=VERSION_CREATED 时返回：本次新建的 Version。</p>
                     */
                    CloudRecordVersion m_createdVersion;
                    bool m_createdVersionHasBeenSet;

                    /**
                     * <p>SyncStatus=VERSION_CREATED 时返回：同步后的最新 Record。</p>
                     */
                    CloudRecord m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * <p>最后一次同步时间，ISO 8601 UTC。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSyncTime;
                    bool m_lastSyncTimeHasBeenSet;

                    /**
                     * <p>失败错误码；SyncStatus=FAILED 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>失败错误信息；SyncStatus=FAILED 时返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SYNCREGISTRYRECORDRESPONSE_H_
