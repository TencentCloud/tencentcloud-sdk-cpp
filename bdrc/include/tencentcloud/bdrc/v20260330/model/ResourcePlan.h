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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_RESOURCEPLAN_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_RESOURCEPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 实例Id与备份计划映射信息
                */
                class ResourcePlan : public AbstractModel
                {
                public:
                    ResourcePlan();
                    ~ResourcePlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>云服务器实例 ID</p>
                     * @return ResourceId <p>云服务器实例 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>云服务器实例 ID</p>
                     * @param _resourceId <p>云服务器实例 ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>备份路径，[0,20]</p>
                     * @return BackupPaths <p>备份路径，[0,20]</p>
                     * 
                     */
                    std::vector<std::string> GetBackupPaths() const;

                    /**
                     * 设置<p>备份路径，[0,20]</p>
                     * @param _backupPaths <p>备份路径，[0,20]</p>
                     * 
                     */
                    void SetBackupPaths(const std::vector<std::string>& _backupPaths);

                    /**
                     * 判断参数 BackupPaths 是否已赋值
                     * @return BackupPaths 是否已赋值
                     * 
                     */
                    bool BackupPathsHasBeenSet() const;

                    /**
                     * 获取<p>包含文件类型，[0,20]</p>
                     * @return IncludeFileTypes <p>包含文件类型，[0,20]</p>
                     * 
                     */
                    std::vector<std::string> GetIncludeFileTypes() const;

                    /**
                     * 设置<p>包含文件类型，[0,20]</p>
                     * @param _includeFileTypes <p>包含文件类型，[0,20]</p>
                     * 
                     */
                    void SetIncludeFileTypes(const std::vector<std::string>& _includeFileTypes);

                    /**
                     * 判断参数 IncludeFileTypes 是否已赋值
                     * @return IncludeFileTypes 是否已赋值
                     * 
                     */
                    bool IncludeFileTypesHasBeenSet() const;

                    /**
                     * 获取<p>排除路径，[0,20]</p>
                     * @return ExcludePatterns <p>排除路径，[0,20]</p>
                     * 
                     */
                    std::vector<std::string> GetExcludePatterns() const;

                    /**
                     * 设置<p>排除路径，[0,20]</p>
                     * @param _excludePatterns <p>排除路径，[0,20]</p>
                     * 
                     */
                    void SetExcludePatterns(const std::vector<std::string>& _excludePatterns);

                    /**
                     * 判断参数 ExcludePatterns 是否已赋值
                     * @return ExcludePatterns 是否已赋值
                     * 
                     */
                    bool ExcludePatternsHasBeenSet() const;

                    /**
                     * 获取<p>是否排除系统目录</p>
                     * @return ExcludeSystemDirectories <p>是否排除系统目录</p>
                     * 
                     */
                    bool GetExcludeSystemDirectories() const;

                    /**
                     * 设置<p>是否排除系统目录</p>
                     * @param _excludeSystemDirectories <p>是否排除系统目录</p>
                     * 
                     */
                    void SetExcludeSystemDirectories(const bool& _excludeSystemDirectories);

                    /**
                     * 判断参数 ExcludeSystemDirectories 是否已赋值
                     * @return ExcludeSystemDirectories 是否已赋值
                     * 
                     */
                    bool ExcludeSystemDirectoriesHasBeenSet() const;

                    /**
                     * 获取<p>是否立即触发全量备份</p>
                     * @return ExecuteImmediately <p>是否立即触发全量备份</p>
                     * 
                     */
                    bool GetExecuteImmediately() const;

                    /**
                     * 设置<p>是否立即触发全量备份</p>
                     * @param _executeImmediately <p>是否立即触发全量备份</p>
                     * 
                     */
                    void SetExecuteImmediately(const bool& _executeImmediately);

                    /**
                     * 判断参数 ExecuteImmediately 是否已赋值
                     * @return ExecuteImmediately 是否已赋值
                     * 
                     */
                    bool ExecuteImmediatelyHasBeenSet() const;

                    /**
                     * 获取<p>cos备份是否备份ACL</p>
                     * @return EnableObjectAcl <p>cos备份是否备份ACL</p>
                     * 
                     */
                    bool GetEnableObjectAcl() const;

                    /**
                     * 设置<p>cos备份是否备份ACL</p>
                     * @param _enableObjectAcl <p>cos备份是否备份ACL</p>
                     * 
                     */
                    void SetEnableObjectAcl(const bool& _enableObjectAcl);

                    /**
                     * 判断参数 EnableObjectAcl 是否已赋值
                     * @return EnableObjectAcl 是否已赋值
                     * 
                     */
                    bool EnableObjectAclHasBeenSet() const;

                    /**
                     * 获取<p>cos备份是否备份tag</p>
                     * @return EnableObjectTags <p>cos备份是否备份tag</p>
                     * 
                     */
                    bool GetEnableObjectTags() const;

                    /**
                     * 设置<p>cos备份是否备份tag</p>
                     * @param _enableObjectTags <p>cos备份是否备份tag</p>
                     * 
                     */
                    void SetEnableObjectTags(const bool& _enableObjectTags);

                    /**
                     * 判断参数 EnableObjectTags 是否已赋值
                     * @return EnableObjectTags 是否已赋值
                     * 
                     */
                    bool EnableObjectTagsHasBeenSet() const;

                private:

                    /**
                     * <p>云服务器实例 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>备份路径，[0,20]</p>
                     */
                    std::vector<std::string> m_backupPaths;
                    bool m_backupPathsHasBeenSet;

                    /**
                     * <p>包含文件类型，[0,20]</p>
                     */
                    std::vector<std::string> m_includeFileTypes;
                    bool m_includeFileTypesHasBeenSet;

                    /**
                     * <p>排除路径，[0,20]</p>
                     */
                    std::vector<std::string> m_excludePatterns;
                    bool m_excludePatternsHasBeenSet;

                    /**
                     * <p>是否排除系统目录</p>
                     */
                    bool m_excludeSystemDirectories;
                    bool m_excludeSystemDirectoriesHasBeenSet;

                    /**
                     * <p>是否立即触发全量备份</p>
                     */
                    bool m_executeImmediately;
                    bool m_executeImmediatelyHasBeenSet;

                    /**
                     * <p>cos备份是否备份ACL</p>
                     */
                    bool m_enableObjectAcl;
                    bool m_enableObjectAclHasBeenSet;

                    /**
                     * <p>cos备份是否备份tag</p>
                     */
                    bool m_enableObjectTags;
                    bool m_enableObjectTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_RESOURCEPLAN_H_
