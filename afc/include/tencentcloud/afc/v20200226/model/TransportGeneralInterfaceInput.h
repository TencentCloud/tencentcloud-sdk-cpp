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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_TRANSPORTGENERALINTERFACEINPUT_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_TRANSPORTGENERALINTERFACEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * 天御信鸽取数平台接口入参
                */
                class TransportGeneralInterfaceInput : public AbstractModel
                {
                public:
                    TransportGeneralInterfaceInput();
                    ~TransportGeneralInterfaceInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公证处请求接口名
                     * @return InterfaceName 公证处请求接口名
                     * 
                     */
                    std::string GetInterfaceName() const;

                    /**
                     * 设置公证处请求接口名
                     * @param _interfaceName 公证处请求接口名
                     * 
                     */
                    void SetInterfaceName(const std::string& _interfaceName);

                    /**
                     * 判断参数 InterfaceName 是否已赋值
                     * @return InterfaceName 是否已赋值
                     * 
                     */
                    bool InterfaceNameHasBeenSet() const;

                    /**
                     * 获取公证处业务详情二层入参
                     * @return NotarizationInput 公证处业务详情二层入参
                     * 
                     */
                    std::string GetNotarizationInput() const;

                    /**
                     * 设置公证处业务详情二层入参
                     * @param _notarizationInput 公证处业务详情二层入参
                     * 
                     */
                    void SetNotarizationInput(const std::string& _notarizationInput);

                    /**
                     * 判断参数 NotarizationInput 是否已赋值
                     * @return NotarizationInput 是否已赋值
                     * 
                     */
                    bool NotarizationInputHasBeenSet() const;

                    /**
                     * 获取业务二层详情入参的哈希签名
                     * @return NotarizationSign 业务二层详情入参的哈希签名
                     * 
                     */
                    std::string GetNotarizationSign() const;

                    /**
                     * 设置业务二层详情入参的哈希签名
                     * @param _notarizationSign 业务二层详情入参的哈希签名
                     * 
                     */
                    void SetNotarizationSign(const std::string& _notarizationSign);

                    /**
                     * 判断参数 NotarizationSign 是否已赋值
                     * @return NotarizationSign 是否已赋值
                     * 
                     */
                    bool NotarizationSignHasBeenSet() const;

                private:

                    /**
                     * 公证处请求接口名
                     */
                    std::string m_interfaceName;
                    bool m_interfaceNameHasBeenSet;

                    /**
                     * 公证处业务详情二层入参
                     */
                    std::string m_notarizationInput;
                    bool m_notarizationInputHasBeenSet;

                    /**
                     * 业务二层详情入参的哈希签名
                     */
                    std::string m_notarizationSign;
                    bool m_notarizationSignHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_TRANSPORTGENERALINTERFACEINPUT_H_
