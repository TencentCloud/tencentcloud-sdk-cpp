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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWSBYTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWSBYTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateFlowsByTemplates返回参数结构体
                */
                class CreateFlowsByTemplatesResponse : public AbstractModel
                {
                public:
                    CreateFlowsByTemplatesResponse();
                    ~CreateFlowsByTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取多个合同ID
                     * @return FlowIds 多个合同ID
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取渠道的业务信息，限制1024字符
                     * @return CustomerData 渠道的业务信息，限制1024字符
                     */
                    std::vector<std::string> GetCustomerData() const;

                    /**
                     * 判断参数 CustomerData 是否已赋值
                     * @return CustomerData 是否已赋值
                     */
                    bool CustomerDataHasBeenSet() const;

                    /**
                     * 获取创建消息，对应多个合同ID，
成功为“”,创建失败则对应失败消息
                     * @return ErrorMessages 创建消息，对应多个合同ID，
成功为“”,创建失败则对应失败消息
                     */
                    std::vector<std::string> GetErrorMessages() const;

                    /**
                     * 判断参数 ErrorMessages 是否已赋值
                     * @return ErrorMessages 是否已赋值
                     */
                    bool ErrorMessagesHasBeenSet() const;

                    /**
                     * 获取预览模式下返回的预览文件url数组
                     * @return PreviewUrls 预览模式下返回的预览文件url数组
                     */
                    std::vector<std::string> GetPreviewUrls() const;

                    /**
                     * 判断参数 PreviewUrls 是否已赋值
                     * @return PreviewUrls 是否已赋值
                     */
                    bool PreviewUrlsHasBeenSet() const;

                private:

                    /**
                     * 多个合同ID
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 渠道的业务信息，限制1024字符
                     */
                    std::vector<std::string> m_customerData;
                    bool m_customerDataHasBeenSet;

                    /**
                     * 创建消息，对应多个合同ID，
成功为“”,创建失败则对应失败消息
                     */
                    std::vector<std::string> m_errorMessages;
                    bool m_errorMessagesHasBeenSet;

                    /**
                     * 预览模式下返回的预览文件url数组
                     */
                    std::vector<std::string> m_previewUrls;
                    bool m_previewUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWSBYTEMPLATESRESPONSE_H_
