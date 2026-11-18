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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AUTODELETEPOLICY_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AUTODELETEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 自动删除策略配置信息
                */
                class AutoDeletePolicy : public AbstractModel
                {
                public:
                    AutoDeletePolicy();
                    ~AutoDeletePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略 ID</p>
                     * @return PolicyId <p>策略 ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>策略 ID</p>
                     * @param _policyId <p>策略 ID</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>文件系统Id</p>
                     * @return FileSystemId <p>文件系统Id</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统Id</p>
                     * @param _fileSystemId <p>文件系统Id</p>
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
                     * 获取<p>自动清理策略名称</p>
                     * @return PolicyName <p>自动清理策略名称</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>自动清理策略名称</p>
                     * @param _policyName <p>自动清理策略名称</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>待清理的路径</p>
                     * @return Paths <p>待清理的路径</p>
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置<p>待清理的路径</p>
                     * @param _paths <p>待清理的路径</p>
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取<p>自动清理策略状态</p><p>枚举值：</p><ul><li>enabling： 启用中</li><li>enabled： 已启用</li><li>disabling： 禁用中</li><li>disabed： 已禁用</li><li>deleting： 删除中</li><li>failed： 失败</li><li>creating： 创建中</li><li>updating： 修改中</li></ul>
                     * @return Status <p>自动清理策略状态</p><p>枚举值：</p><ul><li>enabling： 启用中</li><li>enabled： 已启用</li><li>disabling： 禁用中</li><li>disabed： 已禁用</li><li>deleting： 删除中</li><li>failed： 失败</li><li>creating： 创建中</li><li>updating： 修改中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>自动清理策略状态</p><p>枚举值：</p><ul><li>enabling： 启用中</li><li>enabled： 已启用</li><li>disabling： 禁用中</li><li>disabed： 已禁用</li><li>deleting： 删除中</li><li>failed： 失败</li><li>creating： 创建中</li><li>updating： 修改中</li></ul>
                     * @param _status <p>自动清理策略状态</p><p>枚举值：</p><ul><li>enabling： 启用中</li><li>enabled： 已启用</li><li>disabling： 禁用中</li><li>disabed： 已禁用</li><li>deleting： 删除中</li><li>failed： 失败</li><li>creating： 创建中</li><li>updating： 修改中</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>清理策略创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return CreateTime <p>清理策略创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>清理策略创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _createTime <p>清理策略创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>策略更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return UpdateTime <p>策略更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>策略更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _updateTime <p>策略更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>策略所属地域</p>
                     * @return Region <p>策略所属地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>策略所属地域</p>
                     * @param _region <p>策略所属地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrMsg <p>错误信息</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errMsg <p>错误信息</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * <p>策略 ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>文件系统Id</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>自动清理策略名称</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>待清理的路径</p>
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * <p>自动清理策略状态</p><p>枚举值：</p><ul><li>enabling： 启用中</li><li>enabled： 已启用</li><li>disabling： 禁用中</li><li>disabed： 已禁用</li><li>deleting： 删除中</li><li>failed： 失败</li><li>creating： 创建中</li><li>updating： 修改中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>清理策略创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>策略更新时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>策略所属地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AUTODELETEPOLICY_H_
