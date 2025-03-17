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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_PROJECTINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_PROJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 获取证书列表（DescribeCertificates）返回参数键为 Certificates 下，key为 ProjectInfo 的内容。
                */
                class ProjectInfo : public AbstractModel
                {
                public:
                    ProjectInfo();
                    ~ProjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名称。
                     * @return ProjectName 项目名称。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称。
                     * @param _projectName 项目名称。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目创建用户 UIN。
                     * @return ProjectCreatorUin 项目创建用户 UIN。
                     * 
                     */
                    uint64_t GetProjectCreatorUin() const;

                    /**
                     * 设置项目创建用户 UIN。
                     * @param _projectCreatorUin 项目创建用户 UIN。
                     * 
                     */
                    void SetProjectCreatorUin(const uint64_t& _projectCreatorUin);

                    /**
                     * 判断参数 ProjectCreatorUin 是否已赋值
                     * @return ProjectCreatorUin 是否已赋值
                     * 
                     */
                    bool ProjectCreatorUinHasBeenSet() const;

                    /**
                     * 获取项目创建时间。
                     * @return ProjectCreateTime 项目创建时间。
                     * 
                     */
                    std::string GetProjectCreateTime() const;

                    /**
                     * 设置项目创建时间。
                     * @param _projectCreateTime 项目创建时间。
                     * 
                     */
                    void SetProjectCreateTime(const std::string& _projectCreateTime);

                    /**
                     * 判断参数 ProjectCreateTime 是否已赋值
                     * @return ProjectCreateTime 是否已赋值
                     * 
                     */
                    bool ProjectCreateTimeHasBeenSet() const;

                    /**
                     * 获取项目信息简述。
                     * @return ProjectResume 项目信息简述。
                     * 
                     */
                    std::string GetProjectResume() const;

                    /**
                     * 设置项目信息简述。
                     * @param _projectResume 项目信息简述。
                     * 
                     */
                    void SetProjectResume(const std::string& _projectResume);

                    /**
                     * 判断参数 ProjectResume 是否已赋值
                     * @return ProjectResume 是否已赋值
                     * 
                     */
                    bool ProjectResumeHasBeenSet() const;

                    /**
                     * 获取用户 UIN。
                     * @return OwnerUin 用户 UIN。
                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置用户 UIN。
                     * @param _ownerUin 用户 UIN。
                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param _projectId 项目 ID。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 项目名称。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目创建用户 UIN。
                     */
                    uint64_t m_projectCreatorUin;
                    bool m_projectCreatorUinHasBeenSet;

                    /**
                     * 项目创建时间。
                     */
                    std::string m_projectCreateTime;
                    bool m_projectCreateTimeHasBeenSet;

                    /**
                     * 项目信息简述。
                     */
                    std::string m_projectResume;
                    bool m_projectResumeHasBeenSet;

                    /**
                     * 用户 UIN。
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 项目 ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_PROJECTINFO_H_
