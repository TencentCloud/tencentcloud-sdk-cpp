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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEIMPORTTASKREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEIMPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateImportTask请求参数结构体
                */
                class CreateImportTaskRequest : public AbstractModel
                {
                public:
                    CreateImportTaskRequest();
                    ~CreateImportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据来源，cos
                     * @return InputType 数据来源，cos
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置数据来源，cos
                     * @param _inputType 数据来源，cos
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取输入配置
                     * @return InputConf 输入配置
                     * 
                     */
                    std::vector<KVPair> GetInputConf() const;

                    /**
                     * 设置输入配置
                     * @param _inputConf 输入配置
                     * 
                     */
                    void SetInputConf(const std::vector<KVPair>& _inputConf);

                    /**
                     * 判断参数 InputConf 是否已赋值
                     * @return InputConf 是否已赋值
                     * 
                     */
                    bool InputConfHasBeenSet() const;

                    /**
                     * 获取输出配置
                     * @return OutputConf 输出配置
                     * 
                     */
                    std::vector<KVPair> GetOutputConf() const;

                    /**
                     * 设置输出配置
                     * @param _outputConf 输出配置
                     * 
                     */
                    void SetOutputConf(const std::vector<KVPair>& _outputConf);

                    /**
                     * 判断参数 OutputConf 是否已赋值
                     * @return OutputConf 是否已赋值
                     * 
                     */
                    bool OutputConfHasBeenSet() const;

                    /**
                     * 获取目标数据源的类型，目前支持导入到托管存储，即lakefsStorage
                     * @return OutputType 目标数据源的类型，目前支持导入到托管存储，即lakefsStorage
                     * 
                     */
                    std::string GetOutputType() const;

                    /**
                     * 设置目标数据源的类型，目前支持导入到托管存储，即lakefsStorage
                     * @param _outputType 目标数据源的类型，目前支持导入到托管存储，即lakefsStorage
                     * 
                     */
                    void SetOutputType(const std::string& _outputType);

                    /**
                     * 判断参数 OutputType 是否已赋值
                     * @return OutputType 是否已赋值
                     * 
                     */
                    bool OutputTypeHasBeenSet() const;

                private:

                    /**
                     * 数据来源，cos
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 输入配置
                     */
                    std::vector<KVPair> m_inputConf;
                    bool m_inputConfHasBeenSet;

                    /**
                     * 输出配置
                     */
                    std::vector<KVPair> m_outputConf;
                    bool m_outputConfHasBeenSet;

                    /**
                     * 目标数据源的类型，目前支持导入到托管存储，即lakefsStorage
                     */
                    std::string m_outputType;
                    bool m_outputTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEIMPORTTASKREQUEST_H_
