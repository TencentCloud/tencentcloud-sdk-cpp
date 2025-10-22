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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CHECKRESULT_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/LifecycleRule.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 有规则冲突时返回的已有冲突规则信息列表
                */
                class CheckResult : public AbstractModel
                {
                public:
                    CheckResult();
                    ~CheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生命周期管理策略ID
                     * @return LifecyclePolicyID 生命周期管理策略ID
                     * 
                     */
                    std::string GetLifecyclePolicyID() const;

                    /**
                     * 设置生命周期管理策略ID
                     * @param _lifecyclePolicyID 生命周期管理策略ID
                     * 
                     */
                    void SetLifecyclePolicyID(const std::string& _lifecyclePolicyID);

                    /**
                     * 判断参数 LifecyclePolicyID 是否已赋值
                     * @return LifecyclePolicyID 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyIDHasBeenSet() const;

                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取目录绝对路径
                     * @return Path 目录绝对路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置目录绝对路径
                     * @param _path 目录绝对路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取生命周期管理策略关联的管理规则列表
                     * @return LifecycleRules 生命周期管理策略关联的管理规则列表
                     * 
                     */
                    std::vector<LifecycleRule> GetLifecycleRules() const;

                    /**
                     * 设置生命周期管理策略关联的管理规则列表
                     * @param _lifecycleRules 生命周期管理策略关联的管理规则列表
                     * 
                     */
                    void SetLifecycleRules(const std::vector<LifecycleRule>& _lifecycleRules);

                    /**
                     * 判断参数 LifecycleRules 是否已赋值
                     * @return LifecycleRules 是否已赋值
                     * 
                     */
                    bool LifecycleRulesHasBeenSet() const;

                    /**
                     * 获取目标路径
                     * @return TargetPath 目标路径
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置目标路径
                     * @param _targetPath 目标路径
                     * 
                     */
                    void SetTargetPath(const std::string& _targetPath);

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

                private:

                    /**
                     * 生命周期管理策略ID
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 目录绝对路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 生命周期管理策略关联的管理规则列表
                     */
                    std::vector<LifecycleRule> m_lifecycleRules;
                    bool m_lifecycleRulesHasBeenSet;

                    /**
                     * 目标路径
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CHECKRESULT_H_
