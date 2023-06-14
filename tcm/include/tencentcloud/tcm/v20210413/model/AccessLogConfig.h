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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_ACCESSLOGCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_ACCESSLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/SelectedRange.h>
#include <tencentcloud/tcm/v20210413/model/CLS.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * AccessLog 配置
                */
                class AccessLogConfig : public AbstractModel
                {
                public:
                    AccessLogConfig();
                    ~AccessLogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用
                     * @return Enable 是否启用
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否启用
                     * @param _enable 是否启用
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取采用的模板，可选值：istio（默认）、trace
                     * @return Template 采用的模板，可选值：istio（默认）、trace
                     * 
                     */
                    std::string GetTemplate() const;

                    /**
                     * 设置采用的模板，可选值：istio（默认）、trace
                     * @param _template 采用的模板，可选值：istio（默认）、trace
                     * 
                     */
                    void SetTemplate(const std::string& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取选中的范围
                     * @return SelectedRange 选中的范围
                     * 
                     */
                    SelectedRange GetSelectedRange() const;

                    /**
                     * 设置选中的范围
                     * @param _selectedRange 选中的范围
                     * 
                     */
                    void SetSelectedRange(const SelectedRange& _selectedRange);

                    /**
                     * 判断参数 SelectedRange 是否已赋值
                     * @return SelectedRange 是否已赋值
                     * 
                     */
                    bool SelectedRangeHasBeenSet() const;

                    /**
                     * 获取腾讯云日志服务相关参数
                     * @return CLS 腾讯云日志服务相关参数
                     * 
                     */
                    CLS GetCLS() const;

                    /**
                     * 设置腾讯云日志服务相关参数
                     * @param _cLS 腾讯云日志服务相关参数
                     * 
                     */
                    void SetCLS(const CLS& _cLS);

                    /**
                     * 判断参数 CLS 是否已赋值
                     * @return CLS 是否已赋值
                     * 
                     */
                    bool CLSHasBeenSet() const;

                    /**
                     * 获取编码格式，可选值：TEXT、JSON
                     * @return Encoding 编码格式，可选值：TEXT、JSON
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 设置编码格式，可选值：TEXT、JSON
                     * @param _encoding 编码格式，可选值：TEXT、JSON
                     * 
                     */
                    void SetEncoding(const std::string& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取日志格式
                     * @return Format 日志格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置日志格式
                     * @param _format 日志格式
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取GRPC第三方服务器地址
                     * @return Address GRPC第三方服务器地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置GRPC第三方服务器地址
                     * @param _address GRPC第三方服务器地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取是否启用GRPC第三方服务器
                     * @return EnableServer 是否启用GRPC第三方服务器
                     * 
                     */
                    bool GetEnableServer() const;

                    /**
                     * 设置是否启用GRPC第三方服务器
                     * @param _enableServer 是否启用GRPC第三方服务器
                     * 
                     */
                    void SetEnableServer(const bool& _enableServer);

                    /**
                     * 判断参数 EnableServer 是否已赋值
                     * @return EnableServer 是否已赋值
                     * 
                     */
                    bool EnableServerHasBeenSet() const;

                    /**
                     * 获取是否启用标准输出
                     * @return EnableStdout 是否启用标准输出
                     * 
                     */
                    bool GetEnableStdout() const;

                    /**
                     * 设置是否启用标准输出
                     * @param _enableStdout 是否启用标准输出
                     * 
                     */
                    void SetEnableStdout(const bool& _enableStdout);

                    /**
                     * 判断参数 EnableStdout 是否已赋值
                     * @return EnableStdout 是否已赋值
                     * 
                     */
                    bool EnableStdoutHasBeenSet() const;

                private:

                    /**
                     * 是否启用
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 采用的模板，可选值：istio（默认）、trace
                     */
                    std::string m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 选中的范围
                     */
                    SelectedRange m_selectedRange;
                    bool m_selectedRangeHasBeenSet;

                    /**
                     * 腾讯云日志服务相关参数
                     */
                    CLS m_cLS;
                    bool m_cLSHasBeenSet;

                    /**
                     * 编码格式，可选值：TEXT、JSON
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 日志格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * GRPC第三方服务器地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 是否启用GRPC第三方服务器
                     */
                    bool m_enableServer;
                    bool m_enableServerHasBeenSet;

                    /**
                     * 是否启用标准输出
                     */
                    bool m_enableStdout;
                    bool m_enableStdoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_ACCESSLOGCONFIG_H_
