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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEPREVIEWSIGNURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEPREVIEWSIGNURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * CreatePreviewSignUrl返回参数结构体
                */
                class CreatePreviewSignUrlResponse : public AbstractModel
                {
                public:
                    CreatePreviewSignUrlResponse();
                    ~CreatePreviewSignUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同预览URL
                     * @return PreviewSignUrl 合同预览URL
                     * 
                     */
                    std::string GetPreviewSignUrl() const;

                    /**
                     * 判断参数 PreviewSignUrl 是否已赋值
                     * @return PreviewSignUrl 是否已赋值
                     * 
                     */
                    bool PreviewSignUrlHasBeenSet() const;

                private:

                    /**
                     * 合同预览URL
                     */
                    std::string m_previewSignUrl;
                    bool m_previewSignUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEPREVIEWSIGNURLRESPONSE_H_
