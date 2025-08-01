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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateJustInTimeTranscodeTemplate返回参数结构体
                */
                class CreateJustInTimeTranscodeTemplateResponse : public AbstractModel
                {
                public:
                    CreateJustInTimeTranscodeTemplateResponse();
                    ~CreateJustInTimeTranscodeTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取即时转码模板唯一标识，用于即时转码 URL 拼接。
                     * @return TemplateId 即时转码模板唯一标识，用于即时转码 URL 拼接。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 即时转码模板唯一标识，用于即时转码 URL 拼接。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEJUSTINTIMETRANSCODETEMPLATERESPONSE_H_
