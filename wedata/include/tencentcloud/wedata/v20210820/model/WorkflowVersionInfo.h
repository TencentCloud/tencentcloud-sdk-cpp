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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWVERSIONINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWVERSIONINFO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 工作流版本信息
                */
                class WorkflowVersionInfo : public AbstractModel
                {
                public:
                    WorkflowVersionInfo();
                    ~WorkflowVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionNum 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionNum 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionNum(const std::string& _versionNum);

                    /**
                     * 判断参数 VersionNum 是否已赋值
                     * @return VersionNum 是否已赋值
                     * 
                     */
                    bool VersionNumHasBeenSet() const;

                    /**
                     * 获取版本编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionId 版本编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionId 版本编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取提交人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Committer 提交人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommitter() const;

                    /**
                     * 设置提交人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _committer 提交人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommitter(const std::string& _committer);

                    /**
                     * 判断参数 Committer 是否已赋值
                     * @return Committer 是否已赋值
                     * 
                     */
                    bool CommitterHasBeenSet() const;

                    /**
                     * 获取提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommitTime 提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommitTime() const;

                    /**
                     * 设置提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commitTime 提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommitTime(const std::string& _commitTime);

                    /**
                     * 判断参数 CommitTime 是否已赋值
                     * @return CommitTime 是否已赋值
                     * 
                     */
                    bool CommitTimeHasBeenSet() const;

                    /**
                     * 获取提交信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommitDesc 提交信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommitDesc() const;

                    /**
                     * 设置提交信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commitDesc 提交信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommitDesc(const std::string& _commitDesc);

                    /**
                     * 判断参数 CommitDesc 是否已赋值
                     * @return CommitDesc 是否已赋值
                     * 
                     */
                    bool CommitDescHasBeenSet() const;

                    /**
                     * 获取COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosUrl COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosUrl COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                private:

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * 版本编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 提交人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_committer;
                    bool m_committerHasBeenSet;

                    /**
                     * 提交时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_commitTime;
                    bool m_commitTimeHasBeenSet;

                    /**
                     * 提交信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_commitDesc;
                    bool m_commitDescHasBeenSet;

                    /**
                     * COS地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WORKFLOWVERSIONINFO_H_
