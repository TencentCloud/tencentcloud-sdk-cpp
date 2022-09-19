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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CREATECUSTOMIZETEMPLATESREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CREATECUSTOMIZETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20210524/model/UserDefinedTemplateParams.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * CreateCustomizeTemplates请求参数结构体
                */
                class CreateCustomizeTemplatesRequest : public AbstractModel
                {
                public:
                    CreateCustomizeTemplatesRequest();
                    ~CreateCustomizeTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户所属组
                     * @return CloudStudioSessionTeam 用户所属组
                     */
                    std::string GetCloudStudioSessionTeam() const;

                    /**
                     * 设置用户所属组
                     * @param CloudStudioSessionTeam 用户所属组
                     */
                    void SetCloudStudioSessionTeam(const std::string& _cloudStudioSessionTeam);

                    /**
                     * 判断参数 CloudStudioSessionTeam 是否已赋值
                     * @return CloudStudioSessionTeam 是否已赋值
                     */
                    bool CloudStudioSessionTeamHasBeenSet() const;

                    /**
                     * 获取无
                     * @return UserDefinedTemplateParams 无
                     */
                    UserDefinedTemplateParams GetUserDefinedTemplateParams() const;

                    /**
                     * 设置无
                     * @param UserDefinedTemplateParams 无
                     */
                    void SetUserDefinedTemplateParams(const UserDefinedTemplateParams& _userDefinedTemplateParams);

                    /**
                     * 判断参数 UserDefinedTemplateParams 是否已赋值
                     * @return UserDefinedTemplateParams 是否已赋值
                     */
                    bool UserDefinedTemplateParamsHasBeenSet() const;

                private:

                    /**
                     * 用户所属组
                     */
                    std::string m_cloudStudioSessionTeam;
                    bool m_cloudStudioSessionTeamHasBeenSet;

                    /**
                     * 无
                     */
                    UserDefinedTemplateParams m_userDefinedTemplateParams;
                    bool m_userDefinedTemplateParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CREATECUSTOMIZETEMPLATESREQUEST_H_
