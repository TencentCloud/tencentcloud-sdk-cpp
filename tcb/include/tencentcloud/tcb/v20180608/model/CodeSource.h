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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CODESOURCE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CODESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云开发项目来源
                */
                class CodeSource : public AbstractModel
                {
                public:
                    CodeSource();
                    ~CodeSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型, 可能的枚举: "coding","package","package_url","github","gitlab","gitee","rawcode"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型, 可能的枚举: "coding","package","package_url","github","gitlab","gitee","rawcode"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型, 可能的枚举: "coding","package","package_url","github","gitlab","gitee","rawcode"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 类型, 可能的枚举: "coding","package","package_url","github","gitlab","gitee","rawcode"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Url 下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取工作目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkDir 工作目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWorkDir() const;

                    /**
                     * 设置工作目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WorkDir 工作目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWorkDir(const std::string& _workDir);

                    /**
                     * 判断参数 WorkDir 是否已赋值
                     * @return WorkDir 是否已赋值
                     */
                    bool WorkDirHasBeenSet() const;

                    /**
                     * 获取code包名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodingPackageName code包名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCodingPackageName() const;

                    /**
                     * 设置code包名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CodingPackageName code包名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCodingPackageName(const std::string& _codingPackageName);

                    /**
                     * 判断参数 CodingPackageName 是否已赋值
                     * @return CodingPackageName 是否已赋值
                     */
                    bool CodingPackageNameHasBeenSet() const;

                    /**
                     * 获取coding版本名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodingPackageVersion coding版本名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCodingPackageVersion() const;

                    /**
                     * 设置coding版本名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CodingPackageVersion coding版本名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCodingPackageVersion(const std::string& _codingPackageVersion);

                    /**
                     * 判断参数 CodingPackageVersion 是否已赋值
                     * @return CodingPackageVersion 是否已赋值
                     */
                    bool CodingPackageVersionHasBeenSet() const;

                    /**
                     * 获取源码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RawCode 源码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRawCode() const;

                    /**
                     * 设置源码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RawCode 源码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRawCode(const std::string& _rawCode);

                    /**
                     * 判断参数 RawCode 是否已赋值
                     * @return RawCode 是否已赋值
                     */
                    bool RawCodeHasBeenSet() const;

                    /**
                     * 获取代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Branch 代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Branch 代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBranch(const std::string& _branch);

                    /**
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     */
                    bool BranchHasBeenSet() const;

                    /**
                     * 获取coding项目ID，type为coding时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId coding项目ID，type为coding时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置coding项目ID，type为coding时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectId coding项目ID，type为coding时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 类型, 可能的枚举: "coding","package","package_url","github","gitlab","gitee","rawcode"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 工作目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workDir;
                    bool m_workDirHasBeenSet;

                    /**
                     * code包名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codingPackageName;
                    bool m_codingPackageNameHasBeenSet;

                    /**
                     * coding版本名, type为coding的时候需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codingPackageVersion;
                    bool m_codingPackageVersionHasBeenSet;

                    /**
                     * 源码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rawCode;
                    bool m_rawCodeHasBeenSet;

                    /**
                     * 代码分支
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * coding项目ID，type为coding时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CODESOURCE_H_
