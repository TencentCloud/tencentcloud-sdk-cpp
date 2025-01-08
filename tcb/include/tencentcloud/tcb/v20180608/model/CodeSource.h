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
                     * @return Type 类型, 可能的枚举: "coding","package","package_url","github","gitlab","gitee","rawcode"
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型, 可能的枚举: "coding","package","package_url","github","gitlab","gitee","rawcode"
                     * @param _type 类型, 可能的枚举: "coding","package","package_url","github","gitlab","gitee","rawcode"
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取下载链接
                     * @return Url 下载链接
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置下载链接
                     * @param _url 下载链接
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取工作目录
                     * @return WorkDir 工作目录
                     * 
                     */
                    std::string GetWorkDir() const;

                    /**
                     * 设置工作目录
                     * @param _workDir 工作目录
                     * 
                     */
                    void SetWorkDir(const std::string& _workDir);

                    /**
                     * 判断参数 WorkDir 是否已赋值
                     * @return WorkDir 是否已赋值
                     * 
                     */
                    bool WorkDirHasBeenSet() const;

                    /**
                     * 获取code包名, type为coding的时候需要填写
                     * @return CodingPackageName code包名, type为coding的时候需要填写
                     * 
                     */
                    std::string GetCodingPackageName() const;

                    /**
                     * 设置code包名, type为coding的时候需要填写
                     * @param _codingPackageName code包名, type为coding的时候需要填写
                     * 
                     */
                    void SetCodingPackageName(const std::string& _codingPackageName);

                    /**
                     * 判断参数 CodingPackageName 是否已赋值
                     * @return CodingPackageName 是否已赋值
                     * 
                     */
                    bool CodingPackageNameHasBeenSet() const;

                    /**
                     * 获取coding版本名, type为coding的时候需要填写
                     * @return CodingPackageVersion coding版本名, type为coding的时候需要填写
                     * 
                     */
                    std::string GetCodingPackageVersion() const;

                    /**
                     * 设置coding版本名, type为coding的时候需要填写
                     * @param _codingPackageVersion coding版本名, type为coding的时候需要填写
                     * 
                     */
                    void SetCodingPackageVersion(const std::string& _codingPackageVersion);

                    /**
                     * 判断参数 CodingPackageVersion 是否已赋值
                     * @return CodingPackageVersion 是否已赋值
                     * 
                     */
                    bool CodingPackageVersionHasBeenSet() const;

                    /**
                     * 获取源码
                     * @return RawCode 源码
                     * 
                     */
                    std::string GetRawCode() const;

                    /**
                     * 设置源码
                     * @param _rawCode 源码
                     * 
                     */
                    void SetRawCode(const std::string& _rawCode);

                    /**
                     * 判断参数 RawCode 是否已赋值
                     * @return RawCode 是否已赋值
                     * 
                     */
                    bool RawCodeHasBeenSet() const;

                    /**
                     * 获取代码分支
                     * @return Branch 代码分支
                     * 
                     */
                    std::string GetBranch() const;

                    /**
                     * 设置代码分支
                     * @param _branch 代码分支
                     * 
                     */
                    void SetBranch(const std::string& _branch);

                    /**
                     * 判断参数 Branch 是否已赋值
                     * @return Branch 是否已赋值
                     * 
                     */
                    bool BranchHasBeenSet() const;

                    /**
                     * 获取coding项目ID，type为coding时需要填写
                     * @return ProjectId coding项目ID，type为coding时需要填写
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置coding项目ID，type为coding时需要填写
                     * @param _projectId coding项目ID，type为coding时需要填写
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取coding项目
                     * @return ProjectName coding项目
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置coding项目
                     * @param _projectName coding项目
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * 类型, 可能的枚举: "coding","package","package_url","github","gitlab","gitee","rawcode"
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 下载链接
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 工作目录
                     */
                    std::string m_workDir;
                    bool m_workDirHasBeenSet;

                    /**
                     * code包名, type为coding的时候需要填写
                     */
                    std::string m_codingPackageName;
                    bool m_codingPackageNameHasBeenSet;

                    /**
                     * coding版本名, type为coding的时候需要填写
                     */
                    std::string m_codingPackageVersion;
                    bool m_codingPackageVersionHasBeenSet;

                    /**
                     * 源码
                     */
                    std::string m_rawCode;
                    bool m_rawCodeHasBeenSet;

                    /**
                     * 代码分支
                     */
                    std::string m_branch;
                    bool m_branchHasBeenSet;

                    /**
                     * coding项目ID，type为coding时需要填写
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * coding项目
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CODESOURCE_H_
