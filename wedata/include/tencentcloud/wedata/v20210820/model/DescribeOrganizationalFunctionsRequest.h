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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEORGANIZATIONALFUNCTIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEORGANIZATIONALFUNCTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeOrganizationalFunctions请求参数结构体
                */
                class DescribeOrganizationalFunctionsRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationalFunctionsRequest();
                    ~DescribeOrganizationalFunctionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景类型：开发、使用
                     * @return Type 场景类型：开发、使用
                     */
                    std::string GetType() const;

                    /**
                     * 设置场景类型：开发、使用
                     * @param Type 场景类型：开发、使用
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取项目 ID
                     * @return ProjectId 项目 ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID
                     * @param ProjectId 项目 ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取函数名称
                     * @return Name 函数名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置函数名称
                     * @param Name 函数名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取展示名称
                     * @return DisplayName 展示名称
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置展示名称
                     * @param DisplayName 展示名称
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                private:

                    /**
                     * 场景类型：开发、使用
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 函数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 展示名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEORGANIZATIONALFUNCTIONSREQUEST_H_
