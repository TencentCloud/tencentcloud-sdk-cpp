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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATEDIAGNOSEURLRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATEDIAGNOSEURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CreateDiagnoseUrl返回参数结构体
                */
                class CreateDiagnoseUrlResponse : public AbstractModel
                {
                public:
                    CreateDiagnoseUrlResponse();
                    ~CreateDiagnoseUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取系统生成的诊断链接，一个诊断链接最多可访问10次，有效期为24h。
                     * @return DiagnoseLink 系统生成的诊断链接，一个诊断链接最多可访问10次，有效期为24h。
                     * 
                     */
                    std::string GetDiagnoseLink() const;

                    /**
                     * 判断参数 DiagnoseLink 是否已赋值
                     * @return DiagnoseLink 是否已赋值
                     * 
                     */
                    bool DiagnoseLinkHasBeenSet() const;

                private:

                    /**
                     * 系统生成的诊断链接，一个诊断链接最多可访问10次，有效期为24h。
                     */
                    std::string m_diagnoseLink;
                    bool m_diagnoseLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATEDIAGNOSEURLRESPONSE_H_
