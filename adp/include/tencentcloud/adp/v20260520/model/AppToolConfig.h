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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTOOLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/RequestParam.h>
#include <tencentcloud/adp/v20260520/model/ResponseParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppToolConfig
                */
                class AppToolConfig : public AbstractModel
                {
                public:
                    AppToolConfig();
                    ~AppToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入参数
                     * @return Inputs 输入参数
                     * 
                     */
                    std::vector<RequestParam> GetInputs() const;

                    /**
                     * 设置输入参数
                     * @param _inputs 输入参数
                     * 
                     */
                    void SetInputs(const std::vector<RequestParam>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取输出参数
                     * @return Outputs 输出参数
                     * 
                     */
                    std::vector<ResponseParam> GetOutputs() const;

                    /**
                     * 设置输出参数
                     * @param _outputs 输出参数
                     * 
                     */
                    void SetOutputs(const std::vector<ResponseParam>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                private:

                    /**
                     * 输入参数
                     */
                    std::vector<RequestParam> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * 输出参数
                     */
                    std::vector<ResponseParam> m_outputs;
                    bool m_outputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTOOLCONFIG_H_
