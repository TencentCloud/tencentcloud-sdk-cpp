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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScanTaskStatus请求参数结构体
                */
                class DescribeScanTaskStatusRequest : public AbstractModel
                {
                public:
                    DescribeScanTaskStatusRequest();
                    ~DescribeScanTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * @return ModuleType 模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * @param _moduleType 模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                private:

                    /**
                     * 模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKSTATUSREQUEST_H_
