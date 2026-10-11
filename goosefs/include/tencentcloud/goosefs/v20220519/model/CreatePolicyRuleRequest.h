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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEPOLICYRULEREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEPOLICYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/ExecutionPlan.h>
#include <tencentcloud/goosefs/v20220519/model/PolicyRuleOperator.h>
#include <tencentcloud/goosefs/v20220519/model/ManifestAttr.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * CreatePolicyRule请求参数结构体
                */
                class CreatePolicyRuleRequest : public AbstractModel
                {
                public:
                    CreatePolicyRuleRequest();
                    ~CreatePolicyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文件系统id</p>
                     * @return FileSystemId <p>文件系统id</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统id</p>
                     * @param _fileSystemId <p>文件系统id</p>
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
                     * 获取<p>扫描目录</p>
                     * @return ScanDir <p>扫描目录</p>
                     * 
                     */
                    std::string GetScanDir() const;

                    /**
                     * 设置<p>扫描目录</p>
                     * @param _scanDir <p>扫描目录</p>
                     * 
                     */
                    void SetScanDir(const std::string& _scanDir);

                    /**
                     * 判断参数 ScanDir 是否已赋值
                     * @return ScanDir 是否已赋值
                     * 
                     */
                    bool ScanDirHasBeenSet() const;

                    /**
                     * 获取<p>规则名称</p>
                     * @return Name <p>规则名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _name <p>规则名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>执行计划</p>
                     * @return Execution <p>执行计划</p>
                     * 
                     */
                    ExecutionPlan GetExecution() const;

                    /**
                     * 设置<p>执行计划</p>
                     * @param _execution <p>执行计划</p>
                     * 
                     */
                    void SetExecution(const ExecutionPlan& _execution);

                    /**
                     * 判断参数 Execution 是否已赋值
                     * @return Execution 是否已赋值
                     * 
                     */
                    bool ExecutionHasBeenSet() const;

                    /**
                     * 获取<p>过滤规则</p>
                     * @return PolicyRuleSet <p>过滤规则</p>
                     * 
                     */
                    std::vector<PolicyRuleOperator> GetPolicyRuleSet() const;

                    /**
                     * 设置<p>过滤规则</p>
                     * @param _policyRuleSet <p>过滤规则</p>
                     * 
                     */
                    void SetPolicyRuleSet(const std::vector<PolicyRuleOperator>& _policyRuleSet);

                    /**
                     * 判断参数 PolicyRuleSet 是否已赋值
                     * @return PolicyRuleSet 是否已赋值
                     * 
                     */
                    bool PolicyRuleSetHasBeenSet() const;

                    /**
                     * 获取<p>是否输出清单</p>
                     * @return EnableManifest <p>是否输出清单</p>
                     * 
                     */
                    bool GetEnableManifest() const;

                    /**
                     * 设置<p>是否输出清单</p>
                     * @param _enableManifest <p>是否输出清单</p>
                     * 
                     */
                    void SetEnableManifest(const bool& _enableManifest);

                    /**
                     * 判断参数 EnableManifest 是否已赋值
                     * @return EnableManifest 是否已赋值
                     * 
                     */
                    bool EnableManifestHasBeenSet() const;

                    /**
                     * 获取<p>清单配置</p>
                     * @return Manifest <p>清单配置</p>
                     * 
                     */
                    ManifestAttr GetManifest() const;

                    /**
                     * 设置<p>清单配置</p>
                     * @param _manifest <p>清单配置</p>
                     * 
                     */
                    void SetManifest(const ManifestAttr& _manifest);

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统id</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>扫描目录</p>
                     */
                    std::string m_scanDir;
                    bool m_scanDirHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>执行计划</p>
                     */
                    ExecutionPlan m_execution;
                    bool m_executionHasBeenSet;

                    /**
                     * <p>过滤规则</p>
                     */
                    std::vector<PolicyRuleOperator> m_policyRuleSet;
                    bool m_policyRuleSetHasBeenSet;

                    /**
                     * <p>是否输出清单</p>
                     */
                    bool m_enableManifest;
                    bool m_enableManifestHasBeenSet;

                    /**
                     * <p>清单配置</p>
                     */
                    ManifestAttr m_manifest;
                    bool m_manifestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEPOLICYRULEREQUEST_H_
