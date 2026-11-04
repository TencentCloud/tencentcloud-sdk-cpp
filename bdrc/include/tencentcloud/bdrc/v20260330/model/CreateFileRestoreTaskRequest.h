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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILERESTORETASKREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILERESTORETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * CreateFileRestoreTask请求参数结构体
                */
                class CreateFileRestoreTaskRequest : public AbstractModel
                {
                public:
                    CreateFileRestoreTaskRequest();
                    ~CreateFileRestoreTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待恢复的备份ID</p>
                     * @return BackupId <p>待恢复的备份ID</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>待恢复的备份ID</p>
                     * @param _backupId <p>待恢复的备份ID</p>
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>目标实例ID</p>
                     * @return TargetResourceId <p>目标实例ID</p>
                     * 
                     */
                    std::string GetTargetResourceId() const;

                    /**
                     * 设置<p>目标实例ID</p>
                     * @param _targetResourceId <p>目标实例ID</p>
                     * 
                     */
                    void SetTargetResourceId(const std::string& _targetResourceId);

                    /**
                     * 判断参数 TargetResourceId 是否已赋值
                     * @return TargetResourceId 是否已赋值
                     * 
                     */
                    bool TargetResourceIdHasBeenSet() const;

                    /**
                     * 获取<ol><li>恢复路径列表（1-500项）；2. CVM和CFS文件备份不传则使用备份点中所有路径，COS备份该参数必填；3. 必须是绝对路径；</li></ol>
                     * @return RestorePaths <ol><li>恢复路径列表（1-500项）；2. CVM和CFS文件备份不传则使用备份点中所有路径，COS备份该参数必填；3. 必须是绝对路径；</li></ol>
                     * 
                     */
                    std::vector<std::string> GetRestorePaths() const;

                    /**
                     * 设置<ol><li>恢复路径列表（1-500项）；2. CVM和CFS文件备份不传则使用备份点中所有路径，COS备份该参数必填；3. 必须是绝对路径；</li></ol>
                     * @param _restorePaths <ol><li>恢复路径列表（1-500项）；2. CVM和CFS文件备份不传则使用备份点中所有路径，COS备份该参数必填；3. 必须是绝对路径；</li></ol>
                     * 
                     */
                    void SetRestorePaths(const std::vector<std::string>& _restorePaths);

                    /**
                     * 判断参数 RestorePaths 是否已赋值
                     * @return RestorePaths 是否已赋值
                     * 
                     */
                    bool RestorePathsHasBeenSet() const;

                    /**
                     * 获取<p>目标位置</p><ol><li>不传则恢复到原始路径</li><li>cos恢复时不能以【/】开头</li></ol>
                     * @return TargetLocation <p>目标位置</p><ol><li>不传则恢复到原始路径</li><li>cos恢复时不能以【/】开头</li></ol>
                     * 
                     */
                    std::string GetTargetLocation() const;

                    /**
                     * 设置<p>目标位置</p><ol><li>不传则恢复到原始路径</li><li>cos恢复时不能以【/】开头</li></ol>
                     * @param _targetLocation <p>目标位置</p><ol><li>不传则恢复到原始路径</li><li>cos恢复时不能以【/】开头</li></ol>
                     * 
                     */
                    void SetTargetLocation(const std::string& _targetLocation);

                    /**
                     * 判断参数 TargetLocation 是否已赋值
                     * @return TargetLocation 是否已赋值
                     * 
                     */
                    bool TargetLocationHasBeenSet() const;

                    /**
                     * 获取<p>冲突处理策略：skip-跳过/&quot;         &quot;overwrite-覆盖/newer-保留较新的版本/&quot;         &quot;if_changed-内容变化时覆盖，默认overwrite</p>
                     * @return ConflictStrategy <p>冲突处理策略：skip-跳过/&quot;         &quot;overwrite-覆盖/newer-保留较新的版本/&quot;         &quot;if_changed-内容变化时覆盖，默认overwrite</p>
                     * 
                     */
                    std::string GetConflictStrategy() const;

                    /**
                     * 设置<p>冲突处理策略：skip-跳过/&quot;         &quot;overwrite-覆盖/newer-保留较新的版本/&quot;         &quot;if_changed-内容变化时覆盖，默认overwrite</p>
                     * @param _conflictStrategy <p>冲突处理策略：skip-跳过/&quot;         &quot;overwrite-覆盖/newer-保留较新的版本/&quot;         &quot;if_changed-内容变化时覆盖，默认overwrite</p>
                     * 
                     */
                    void SetConflictStrategy(const std::string& _conflictStrategy);

                    /**
                     * 判断参数 ConflictStrategy 是否已赋值
                     * @return ConflictStrategy 是否已赋值
                     * 
                     */
                    bool ConflictStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>待恢复的备份ID</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>目标实例ID</p>
                     */
                    std::string m_targetResourceId;
                    bool m_targetResourceIdHasBeenSet;

                    /**
                     * <ol><li>恢复路径列表（1-500项）；2. CVM和CFS文件备份不传则使用备份点中所有路径，COS备份该参数必填；3. 必须是绝对路径；</li></ol>
                     */
                    std::vector<std::string> m_restorePaths;
                    bool m_restorePathsHasBeenSet;

                    /**
                     * <p>目标位置</p><ol><li>不传则恢复到原始路径</li><li>cos恢复时不能以【/】开头</li></ol>
                     */
                    std::string m_targetLocation;
                    bool m_targetLocationHasBeenSet;

                    /**
                     * <p>冲突处理策略：skip-跳过/&quot;         &quot;overwrite-覆盖/newer-保留较新的版本/&quot;         &quot;if_changed-内容变化时覆盖，默认overwrite</p>
                     */
                    std::string m_conflictStrategy;
                    bool m_conflictStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEFILERESTORETASKREQUEST_H_
