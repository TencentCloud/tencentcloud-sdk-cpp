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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATEVERSIONRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATEVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateLaunchTemplateVersion返回参数结构体
                */
                class CreateLaunchTemplateVersionResponse : public AbstractModel
                {
                public:
                    CreateLaunchTemplateVersionResponse();
                    ~CreateLaunchTemplateVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新创建的实例启动模板版本号。
                     * @return LaunchTemplateVersionNumber 新创建的实例启动模板版本号。
                     * 
                     */
                    int64_t GetLaunchTemplateVersionNumber() const;

                    /**
                     * 判断参数 LaunchTemplateVersionNumber 是否已赋值
                     * @return LaunchTemplateVersionNumber 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionNumberHasBeenSet() const;

                private:

                    /**
                     * 新创建的实例启动模板版本号。
                     */
                    int64_t m_launchTemplateVersionNumber;
                    bool m_launchTemplateVersionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATEVERSIONRESPONSE_H_
