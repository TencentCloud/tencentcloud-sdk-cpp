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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_UPLOADATTRIBUTELABELRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_UPLOADATTRIBUTELABELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * UploadAttributeLabel返回参数结构体
                */
                class UploadAttributeLabelResponse : public AbstractModel
                {
                public:
                    UploadAttributeLabelResponse();
                    ~UploadAttributeLabelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导入错误
                     * @return ErrorMsg 导入错误
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取错误链接
                     * @return ErrorLink 错误链接
                     * 
                     */
                    std::string GetErrorLink() const;

                    /**
                     * 判断参数 ErrorLink 是否已赋值
                     * @return ErrorLink 是否已赋值
                     * 
                     */
                    bool ErrorLinkHasBeenSet() const;

                    /**
                     * 获取错误链接文本
                     * @return ErrorLinkText 错误链接文本
                     * 
                     */
                    std::string GetErrorLinkText() const;

                    /**
                     * 判断参数 ErrorLinkText 是否已赋值
                     * @return ErrorLinkText 是否已赋值
                     * 
                     */
                    bool ErrorLinkTextHasBeenSet() const;

                private:

                    /**
                     * 导入错误
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 错误链接
                     */
                    std::string m_errorLink;
                    bool m_errorLinkHasBeenSet;

                    /**
                     * 错误链接文本
                     */
                    std::string m_errorLinkText;
                    bool m_errorLinkTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UPLOADATTRIBUTELABELRESPONSE_H_
