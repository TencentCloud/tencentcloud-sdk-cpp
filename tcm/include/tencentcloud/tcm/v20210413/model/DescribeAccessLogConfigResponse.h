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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_DESCRIBEACCESSLOGCONFIGRESPONSE_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_DESCRIBEACCESSLOGCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAccessLogConfig返回参数结构体
                */
                class DescribeAccessLogConfigResponse : public AbstractModel
                {
                public:
                    DescribeAccessLogConfigResponse();
                    ~DescribeAccessLogConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取访问日志输出路径。默认 /dev/stdout
                     * @return File 访问日志输出路径。默认 /dev/stdout
                     * 
                     */
                    std::string GetFile() const;

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                    /**
                     * 获取访问日志的格式。
                     * @return Format 访问日志的格式。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取访问日志输出编码，可取值为 "TEXT" 或 "JSON"，默认 TEXT"
                     * @return Encoding 访问日志输出编码，可取值为 "TEXT" 或 "JSON"，默认 TEXT"
                     * 
                     */
                    std::string GetEncoding() const;

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取选中的范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectedRange 选中的范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SelectedRange GetSelectedRange() const;

                    /**
                     * 判断参数 SelectedRange 是否已赋值
                     * @return SelectedRange 是否已赋值
                     * 
                     */
                    bool SelectedRangeHasBeenSet() const;

                    /**
                     * 获取采用的模板，可取值为"istio" 或 "trace"，默认为"istio"
                     * @return Template 采用的模板，可取值为"istio" 或 "trace"，默认为"istio"
                     * 
                     */
                    std::string GetTemplate() const;

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取腾讯云日志服务相关参数
                     * @return CLS 腾讯云日志服务相关参数
                     * 
                     */
                    CLS GetCLS() const;

                    /**
                     * 判断参数 CLS 是否已赋值
                     * @return CLS 是否已赋值
                     * 
                     */
                    bool CLSHasBeenSet() const;

                    /**
                     * 获取GRPC第三方服务器地址
                     * @return Address GRPC第三方服务器地址
                     * 
                     */
                    std::string GetAddress() const;

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
                     * 判断参数 EnableStdout 是否已赋值
                     * @return EnableStdout 是否已赋值
                     * 
                     */
                    bool EnableStdoutHasBeenSet() const;

                    /**
                     * 获取是否启用访问日志采集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 是否启用访问日志采集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 访问日志输出路径。默认 /dev/stdout
                     */
                    std::string m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * 访问日志的格式。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 访问日志输出编码，可取值为 "TEXT" 或 "JSON"，默认 TEXT"
                     */
                    std::string m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 选中的范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SelectedRange m_selectedRange;
                    bool m_selectedRangeHasBeenSet;

                    /**
                     * 采用的模板，可取值为"istio" 或 "trace"，默认为"istio"
                     */
                    std::string m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 腾讯云日志服务相关参数
                     */
                    CLS m_cLS;
                    bool m_cLSHasBeenSet;

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

                    /**
                     * 是否启用访问日志采集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_DESCRIBEACCESSLOGCONFIGRESPONSE_H_
