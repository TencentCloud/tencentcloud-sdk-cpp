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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_RESPONSEERRORCODEREQ_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_RESPONSEERRORCODEREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 错误码入参
                */
                class ResponseErrorCodeReq : public AbstractModel
                {
                public:
                    ResponseErrorCodeReq();
                    ~ResponseErrorCodeReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义响应配置错误码。
                     * @return Code 自定义响应配置错误码。
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置自定义响应配置错误码。
                     * @param _code 自定义响应配置错误码。
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取自定义响应配置错误信息。
                     * @return Msg 自定义响应配置错误信息。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置自定义响应配置错误信息。
                     * @param _msg 自定义响应配置错误信息。
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取自定义响应配置错误码备注。
                     * @return Desc 自定义响应配置错误码备注。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置自定义响应配置错误码备注。
                     * @param _desc 自定义响应配置错误码备注。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取自定义错误码转换。
                     * @return ConvertedCode 自定义错误码转换。
                     * 
                     */
                    int64_t GetConvertedCode() const;

                    /**
                     * 设置自定义错误码转换。
                     * @param _convertedCode 自定义错误码转换。
                     * 
                     */
                    void SetConvertedCode(const int64_t& _convertedCode);

                    /**
                     * 判断参数 ConvertedCode 是否已赋值
                     * @return ConvertedCode 是否已赋值
                     * 
                     */
                    bool ConvertedCodeHasBeenSet() const;

                    /**
                     * 获取是否需要开启错误码转换。
                     * @return NeedConvert 是否需要开启错误码转换。
                     * 
                     */
                    bool GetNeedConvert() const;

                    /**
                     * 设置是否需要开启错误码转换。
                     * @param _needConvert 是否需要开启错误码转换。
                     * 
                     */
                    void SetNeedConvert(const bool& _needConvert);

                    /**
                     * 判断参数 NeedConvert 是否已赋值
                     * @return NeedConvert 是否已赋值
                     * 
                     */
                    bool NeedConvertHasBeenSet() const;

                private:

                    /**
                     * 自定义响应配置错误码。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 自定义响应配置错误信息。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 自定义响应配置错误码备注。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 自定义错误码转换。
                     */
                    int64_t m_convertedCode;
                    bool m_convertedCodeHasBeenSet;

                    /**
                     * 是否需要开启错误码转换。
                     */
                    bool m_needConvert;
                    bool m_needConvertHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_RESPONSEERRORCODEREQ_H_
