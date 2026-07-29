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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_STATICCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_STATICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/StaticCmd.h>
#include <tencentcloud/tcb/v20180608/model/StaticEnvironment.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云应用静态托管配置
                */
                class StaticConfig : public AbstractModel
                {
                public:
                    StaticConfig();
                    ~StaticConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取框架类型：vue、react、nextjs 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Framework 框架类型：vue、react、nextjs 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置框架类型：vue、react、nextjs 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _framework 框架类型：vue、react、nextjs 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取Node.js 版本，默认 20
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeJsVersion Node.js 版本，默认 20
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeJsVersion() const;

                    /**
                     * 设置Node.js 版本，默认 20
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeJsVersion Node.js 版本，默认 20
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeJsVersion(const std::string& _nodeJsVersion);

                    /**
                     * 判断参数 NodeJsVersion 是否已赋值
                     * @return NodeJsVersion 是否已赋值
                     * 
                     */
                    bool NodeJsVersionHasBeenSet() const;

                    /**
                     * 获取访问路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppPath 访问路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppPath() const;

                    /**
                     * 设置访问路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appPath 访问路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppPath(const std::string& _appPath);

                    /**
                     * 判断参数 AppPath 是否已赋值
                     * @return AppPath 是否已赋值
                     * 
                     */
                    bool AppPathHasBeenSet() const;

                    /**
                     * 获取构建目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuildPath 构建目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuildPath() const;

                    /**
                     * 设置构建目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buildPath 构建目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuildPath(const std::string& _buildPath);

                    /**
                     * 判断参数 BuildPath 是否已赋值
                     * @return BuildPath 是否已赋值
                     * 
                     */
                    bool BuildPathHasBeenSet() const;

                    /**
                     * 获取ZIP 文件地址（BuildType=ZIP/TEMPLATE 时使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZipFileUrl ZIP 文件地址（BuildType=ZIP/TEMPLATE 时使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZipFileUrl() const;

                    /**
                     * 设置ZIP 文件地址（BuildType=ZIP/TEMPLATE 时使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zipFileUrl ZIP 文件地址（BuildType=ZIP/TEMPLATE 时使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZipFileUrl(const std::string& _zipFileUrl);

                    /**
                     * 判断参数 ZipFileUrl 是否已赋值
                     * @return ZipFileUrl 是否已赋值
                     * 
                     */
                    bool ZipFileUrlHasBeenSet() const;

                    /**
                     * 获取COS 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosTimestamp COS 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosTimestamp() const;

                    /**
                     * 设置COS 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosTimestamp COS 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosTimestamp(const std::string& _cosTimestamp);

                    /**
                     * 判断参数 CosTimestamp 是否已赋值
                     * @return CosTimestamp 是否已赋值
                     * 
                     */
                    bool CosTimestampHasBeenSet() const;

                    /**
                     * 获取COS 文件后缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosSuffix COS 文件后缀
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosSuffix() const;

                    /**
                     * 设置COS 文件后缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosSuffix COS 文件后缀
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosSuffix(const std::string& _cosSuffix);

                    /**
                     * 判断参数 CosSuffix 是否已赋值
                     * @return CosSuffix 是否已赋值
                     * 
                     */
                    bool CosSuffixHasBeenSet() const;

                    /**
                     * 获取代码源平台：github、gitlab、gitee
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeSource 代码源平台：github、gitlab、gitee
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeSource() const;

                    /**
                     * 设置代码源平台：github、gitlab、gitee
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeSource 代码源平台：github、gitlab、gitee
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeSource(const std::string& _codeSource);

                    /**
                     * 判断参数 CodeSource 是否已赋值
                     * @return CodeSource 是否已赋值
                     * 
                     */
                    bool CodeSourceHasBeenSet() const;

                    /**
                     * 获取代码仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeRepo 代码仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeRepo() const;

                    /**
                     * 设置代码仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeRepo 代码仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeRepo(const std::string& _codeRepo);

                    /**
                     * 判断参数 CodeRepo 是否已赋值
                     * @return CodeRepo 是否已赋值
                     * 
                     */
                    bool CodeRepoHasBeenSet() const;

                    /**
                     * 获取代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeBranch 代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeBranch() const;

                    /**
                     * 设置代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeBranch 代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeBranch(const std::string& _codeBranch);

                    /**
                     * 判断参数 CodeBranch 是否已赋值
                     * @return CodeBranch 是否已赋值
                     * 
                     */
                    bool CodeBranchHasBeenSet() const;

                    /**
                     * 获取构建参数 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StaticCmd 构建参数 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StaticCmd GetStaticCmd() const;

                    /**
                     * 设置构建参数 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _staticCmd 构建参数 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStaticCmd(const StaticCmd& _staticCmd);

                    /**
                     * 判断参数 StaticCmd 是否已赋值
                     * @return StaticCmd 是否已赋值
                     * 
                     */
                    bool StaticCmdHasBeenSet() const;

                    /**
                     * 获取构建环境变量 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StaticEnv 构建环境变量 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StaticEnvironment GetStaticEnv() const;

                    /**
                     * 设置构建环境变量 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _staticEnv 构建环境变量 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStaticEnv(const StaticEnvironment& _staticEnv);

                    /**
                     * 判断参数 StaticEnv 是否已赋值
                     * @return StaticEnv 是否已赋值
                     * 
                     */
                    bool StaticEnvHasBeenSet() const;

                private:

                    /**
                     * 框架类型：vue、react、nextjs 等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * Node.js 版本，默认 20
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeJsVersion;
                    bool m_nodeJsVersionHasBeenSet;

                    /**
                     * 访问路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appPath;
                    bool m_appPathHasBeenSet;

                    /**
                     * 构建目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buildPath;
                    bool m_buildPathHasBeenSet;

                    /**
                     * ZIP 文件地址（BuildType=ZIP/TEMPLATE 时使用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zipFileUrl;
                    bool m_zipFileUrlHasBeenSet;

                    /**
                     * COS 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosTimestamp;
                    bool m_cosTimestampHasBeenSet;

                    /**
                     * COS 文件后缀
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosSuffix;
                    bool m_cosSuffixHasBeenSet;

                    /**
                     * 代码源平台：github、gitlab、gitee
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeSource;
                    bool m_codeSourceHasBeenSet;

                    /**
                     * 代码仓库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeRepo;
                    bool m_codeRepoHasBeenSet;

                    /**
                     * 代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeBranch;
                    bool m_codeBranchHasBeenSet;

                    /**
                     * 构建参数 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StaticCmd m_staticCmd;
                    bool m_staticCmdHasBeenSet;

                    /**
                     * 构建环境变量 JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StaticEnvironment m_staticEnv;
                    bool m_staticEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_STATICCONFIG_H_
