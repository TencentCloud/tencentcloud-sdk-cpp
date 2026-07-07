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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODALITYPROBEDETAIL_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODALITYPROBEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ProviderTestConnectionErrorInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 每个待探测模态的详细结果。
                */
                class ModalityProbeDetail : public AbstractModel
                {
                public:
                    ModalityProbeDetail();
                    ~ModalityProbeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>探测的模态</p>
                     * @return Modality <p>探测的模态</p>
                     * 
                     */
                    std::string GetModality() const;

                    /**
                     * 设置<p>探测的模态</p>
                     * @param _modality <p>探测的模态</p>
                     * 
                     */
                    void SetModality(const std::string& _modality);

                    /**
                     * 判断参数 Modality 是否已赋值
                     * @return Modality 是否已赋值
                     * 
                     */
                    bool ModalityHasBeenSet() const;

                    /**
                     * 获取<p>探测结果</p><p>枚举值：</p><ul><li>Supported： 模型支持该输入模态</li><li>Unsupported： 模型不支持该输入模态</li><li>Inconclusive： 模型未明确是否支持该模态，待重新探测</li></ul>
                     * @return Status <p>探测结果</p><p>枚举值：</p><ul><li>Supported： 模型支持该输入模态</li><li>Unsupported： 模型不支持该输入模态</li><li>Inconclusive： 模型未明确是否支持该模态，待重新探测</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>探测结果</p><p>枚举值：</p><ul><li>Supported： 模型支持该输入模态</li><li>Unsupported： 模型不支持该输入模态</li><li>Inconclusive： 模型未明确是否支持该模态，待重新探测</li></ul>
                     * @param _status <p>探测结果</p><p>枚举值：</p><ul><li>Supported： 模型支持该输入模态</li><li>Unsupported： 模型不支持该输入模态</li><li>Inconclusive： 模型未明确是否支持该模态，待重新探测</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>探测该模态请求的报错详情</p>
                     * @return ErrorInfo <p>探测该模态请求的报错详情</p>
                     * 
                     */
                    ProviderTestConnectionErrorInfo GetErrorInfo() const;

                    /**
                     * 设置<p>探测该模态请求的报错详情</p>
                     * @param _errorInfo <p>探测该模态请求的报错详情</p>
                     * 
                     */
                    void SetErrorInfo(const ProviderTestConnectionErrorInfo& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                private:

                    /**
                     * <p>探测的模态</p>
                     */
                    std::string m_modality;
                    bool m_modalityHasBeenSet;

                    /**
                     * <p>探测结果</p><p>枚举值：</p><ul><li>Supported： 模型支持该输入模态</li><li>Unsupported： 模型不支持该输入模态</li><li>Inconclusive： 模型未明确是否支持该模态，待重新探测</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>探测该模态请求的报错详情</p>
                     */
                    ProviderTestConnectionErrorInfo m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODALITYPROBEDETAIL_H_
