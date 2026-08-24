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
                     * 获取云服务器实例 ID
                     * @return ResourceId 云服务器实例 ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置云服务器实例 ID
                     * @param _resourceId 云服务器实例 ID
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
                     * 获取备份路径，[0,20]
                     * @return BackupPaths 备份路径，[0,20]
                     * 
                     */
                    std::vector<std::string> GetBackupPaths() const;

                    /**
                     * 设置备份路径，[0,20]
                     * @param _backupPaths 备份路径，[0,20]
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
                     * 获取包含文件类型，[0,20]
                     * @return IncludeFileTypes 包含文件类型，[0,20]
                     * 
                     */
                    std::vector<std::string> GetIncludeFileTypes() const;

                    /**
                     * 设置包含文件类型，[0,20]
                     * @param _includeFileTypes 包含文件类型，[0,20]
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
                     * 获取排除路径，[0,20]
                     * @return ExcludePatterns 排除路径，[0,20]
                     * 
                     */
                    std::vector<std::string> GetExcludePatterns() const;

                    /**
                     * 设置排除路径，[0,20]
                     * @param _excludePatterns 排除路径，[0,20]
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
                     * 获取是否排除系统目录
                     * @return ExcludeSystemDirectories 是否排除系统目录
                     * 
                     */
                    bool GetExcludeSystemDirectories() const;

                    /**
                     * 设置是否排除系统目录
                     * @param _excludeSystemDirectories 是否排除系统目录
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
                     * 获取是否立即触发全量备份
                     * @return ExecuteImmediately 是否立即触发全量备份
                     * 
                     */
                    bool GetExecuteImmediately() const;

                    /**
                     * 设置是否立即触发全量备份
                     * @param _executeImmediately 是否立即触发全量备份
                     * 
                     */
                    void SetExecuteImmediately(const bool& _executeImmediately);

                    /**
                     * 判断参数 ExecuteImmediately 是否已赋值
                     * @return ExecuteImmediately 是否已赋值
                     * 
                     */
                    bool ExecuteImmediatelyHasBeenSet() const;

                private:

                    /**
                     * 云服务器实例 ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 备份路径，[0,20]
                     */
                    std::vector<std::string> m_backupPaths;
                    bool m_backupPathsHasBeenSet;

                    /**
                     * 包含文件类型，[0,20]
                     */
                    std::vector<std::string> m_includeFileTypes;
                    bool m_includeFileTypesHasBeenSet;

                    /**
                     * 排除路径，[0,20]
                     */
                    std::vector<std::string> m_excludePatterns;
                    bool m_excludePatternsHasBeenSet;

                    /**
                     * 是否排除系统目录
                     */
                    bool m_excludeSystemDirectories;
                    bool m_excludeSystemDirectoriesHasBeenSet;

                    /**
                     * 是否立即触发全量备份
                     */
                    bool m_executeImmediately;
                    bool m_executeImmediatelyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_RESOURCEPLAN_H_
