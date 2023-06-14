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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATERESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATERESPONSE_H_

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
                * CreateLaunchTemplate返回参数结构体
                */
                class CreateLaunchTemplateResponse : public AbstractModel
                {
                public:
                    CreateLaunchTemplateResponse();
                    ~CreateLaunchTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当通过本接口来创建实例启动模板时会返回该参数，表示创建成功的实例启动模板`ID`。
                     * @return LaunchTemplateId 当通过本接口来创建实例启动模板时会返回该参数，表示创建成功的实例启动模板`ID`。
                     * 
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 判断参数 LaunchTemplateId 是否已赋值
                     * @return LaunchTemplateId 是否已赋值
                     * 
                     */
                    bool LaunchTemplateIdHasBeenSet() const;

                private:

                    /**
                     * 当通过本接口来创建实例启动模板时会返回该参数，表示创建成功的实例启动模板`ID`。
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATELAUNCHTEMPLATERESPONSE_H_
