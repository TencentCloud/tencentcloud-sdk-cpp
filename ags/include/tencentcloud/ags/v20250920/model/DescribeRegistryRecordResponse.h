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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDRESPONSE_H_

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
                * DescribeRegistryRecord返回参数结构体
                */
                class DescribeRegistryRecordResponse : public AbstractModel
                {
                public:
                    DescribeRegistryRecordResponse();
                    ~DescribeRegistryRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Record 元数据和全部 Label。</p>
                     * @return Record <p>Record 元数据和全部 Label。</p>
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
                     * 获取<p>根据 VersionId / Label 解析得到的完整 Version。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>根据 VersionId / Label 解析得到的完整 Version。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>解析方式：DEFAULT_STABLE / LABEL / VERSION_ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResolvedBy <p>解析方式：DEFAULT_STABLE / LABEL / VERSION_ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResolvedBy() const;

                    /**
                     * 判断参数 ResolvedBy 是否已赋值
                     * @return ResolvedBy 是否已赋值
                     * 
                     */
                    bool ResolvedByHasBeenSet() const;

                    /**
                     * 获取<p>通过 Label 解析（ResolvedBy=LABEL 或 DEFAULT_STABLE）时返回该 Label 名称，例如 stable。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResolvedLabel <p>通过 Label 解析（ResolvedBy=LABEL 或 DEFAULT_STABLE）时返回该 Label 名称，例如 stable。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResolvedLabel() const;

                    /**
                     * 判断参数 ResolvedLabel 是否已赋值
                     * @return ResolvedLabel 是否已赋值
                     * 
                     */
                    bool ResolvedLabelHasBeenSet() const;

                private:

                    /**
                     * <p>Record 元数据和全部 Label。</p>
                     */
                    CloudRecord m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * <p>根据 VersionId / Label 解析得到的完整 Version。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudRecordVersion m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>解析方式：DEFAULT_STABLE / LABEL / VERSION_ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resolvedBy;
                    bool m_resolvedByHasBeenSet;

                    /**
                     * <p>通过 Label 解析（ResolvedBy=LABEL 或 DEFAULT_STABLE）时返回该 Label 名称，例如 stable。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resolvedLabel;
                    bool m_resolvedLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYRECORDRESPONSE_H_
