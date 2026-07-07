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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TESTMODELINPUTMODALITIESRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TESTMODELINPUTMODALITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ModalityProbeDetail.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * TestModelInputModalities返回参数结构体
                */
                class TestModelInputModalitiesResponse : public AbstractModel
                {
                public:
                    TestModelInputModalitiesResponse();
                    ~TestModelInputModalitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>探测的模型</p>
                     * @return Model <p>探测的模型</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>该模型确认支持的输入模态列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul><p>收到上游大模型对于输入模态的响应即为“确认支持”</p>
                     * @return SupportedModalities <p>该模型确认支持的输入模态列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul><p>收到上游大模型对于输入模态的响应即为“确认支持”</p>
                     * 
                     */
                    std::vector<std::string> GetSupportedModalities() const;

                    /**
                     * 判断参数 SupportedModalities 是否已赋值
                     * @return SupportedModalities 是否已赋值
                     * 
                     */
                    bool SupportedModalitiesHasBeenSet() const;

                    /**
                     * 获取<p>每个待探测模态的详细请求结果</p>
                     * @return ProbeDetails <p>每个待探测模态的详细请求结果</p>
                     * 
                     */
                    std::vector<ModalityProbeDetail> GetProbeDetails() const;

                    /**
                     * 判断参数 ProbeDetails 是否已赋值
                     * @return ProbeDetails 是否已赋值
                     * 
                     */
                    bool ProbeDetailsHasBeenSet() const;

                private:

                    /**
                     * <p>探测的模型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>该模型确认支持的输入模态列表</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul><p>收到上游大模型对于输入模态的响应即为“确认支持”</p>
                     */
                    std::vector<std::string> m_supportedModalities;
                    bool m_supportedModalitiesHasBeenSet;

                    /**
                     * <p>每个待探测模态的详细请求结果</p>
                     */
                    std::vector<ModalityProbeDetail> m_probeDetails;
                    bool m_probeDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TESTMODELINPUTMODALITIESRESPONSE_H_
