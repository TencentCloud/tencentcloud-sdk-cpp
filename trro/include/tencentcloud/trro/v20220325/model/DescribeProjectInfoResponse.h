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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTINFORESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeProjectInfo返回参数结构体
                */
                class DescribeProjectInfoResponse : public AbstractModel
                {
                public:
                    DescribeProjectInfoResponse();
                    ~DescribeProjectInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目描述
                     * @return ProjectDescription 项目描述
                     * 
                     */
                    std::string GetProjectDescription() const;

                    /**
                     * 判断参数 ProjectDescription 是否已赋值
                     * @return ProjectDescription 是否已赋值
                     * 
                     */
                    bool ProjectDescriptionHasBeenSet() const;

                    /**
                     * 获取项目权限模式，black为黑名单，white为白名单
                     * @return PolicyMode 项目权限模式，black为黑名单，white为白名单
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                    /**
                     * 获取项目信息修改时间
                     * @return ModifyTime 项目信息修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目描述
                     */
                    std::string m_projectDescription;
                    bool m_projectDescriptionHasBeenSet;

                    /**
                     * 项目权限模式，black为黑名单，white为白名单
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                    /**
                     * 项目信息修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTINFORESPONSE_H_
