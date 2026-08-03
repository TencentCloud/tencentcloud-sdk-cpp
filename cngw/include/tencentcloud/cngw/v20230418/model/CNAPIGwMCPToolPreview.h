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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLPREVIEW_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolParam.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 通过OpenAPI文件导入MCP tools的预览内容
                */
                class CNAPIGwMCPToolPreview : public AbstractModel
                {
                public:
                    CNAPIGwMCPToolPreview();
                    ~CNAPIGwMCPToolPreview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MCP Tool入参的ContentType</p><p>枚举值：</p><ul><li>application/json： json格式</li><li>application/x-www-form-urlencoded： 表单格式</li></ul>
                     * @return ContentType <p>MCP Tool入参的ContentType</p><p>枚举值：</p><ul><li>application/json： json格式</li><li>application/x-www-form-urlencoded： 表单格式</li></ul>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>MCP Tool入参的ContentType</p><p>枚举值：</p><ul><li>application/json： json格式</li><li>application/x-www-form-urlencoded： 表单格式</li></ul>
                     * @param _contentType <p>MCP Tool入参的ContentType</p><p>枚举值：</p><ul><li>application/json： json格式</li><li>application/x-www-form-urlencoded： 表单格式</li></ul>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>MCP Tool的描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>MCP Tool的描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>MCP Tool的描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>MCP Tool的描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>MCP Tool的参数</p>
                     * @return InputParams <p>MCP Tool的参数</p>
                     * 
                     */
                    std::vector<CNAPIGwMCPToolParam> GetInputParams() const;

                    /**
                     * 设置<p>MCP Tool的参数</p>
                     * @param _inputParams <p>MCP Tool的参数</p>
                     * 
                     */
                    void SetInputParams(const std::vector<CNAPIGwMCPToolParam>& _inputParams);

                    /**
                     * 判断参数 InputParams 是否已赋值
                     * @return InputParams 是否已赋值
                     * 
                     */
                    bool InputParamsHasBeenSet() const;

                    /**
                     * 获取<p>MCP Tool的请求方法</p>
                     * @return Method <p>MCP Tool的请求方法</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>MCP Tool的请求方法</p>
                     * @param _method <p>MCP Tool的请求方法</p>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>MCP Tool名字</p>
                     * @return Name <p>MCP Tool名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>MCP Tool名字</p>
                     * @param _name <p>MCP Tool名字</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>MCP Tool的请求路径</p>
                     * @return Path <p>MCP Tool的请求路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>MCP Tool的请求路径</p>
                     * @param _path <p>MCP Tool的请求路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>MCP Tool的状态</p><p>枚举值：</p><ul><li>Valid： 可导入</li><li>Invalid： 不可导入</li></ul>
                     * @return Status <p>MCP Tool的状态</p><p>枚举值：</p><ul><li>Valid： 可导入</li><li>Invalid： 不可导入</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>MCP Tool的状态</p><p>枚举值：</p><ul><li>Valid： 可导入</li><li>Invalid： 不可导入</li></ul>
                     * @param _status <p>MCP Tool的状态</p><p>枚举值：</p><ul><li>Valid： 可导入</li><li>Invalid： 不可导入</li></ul>
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
                     * 获取<p>不可导入的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusMessage <p>不可导入的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置<p>不可导入的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusMessage <p>不可导入的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取<p>虚拟MCP Server的tools的完整url路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamUrl <p>虚拟MCP Server的tools的完整url路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpstreamUrl() const;

                    /**
                     * 设置<p>虚拟MCP Server的tools的完整url路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamUrl <p>虚拟MCP Server的tools的完整url路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamUrl(const std::string& _upstreamUrl);

                    /**
                     * 判断参数 UpstreamUrl 是否已赋值
                     * @return UpstreamUrl 是否已赋值
                     * 
                     */
                    bool UpstreamUrlHasBeenSet() const;

                private:

                    /**
                     * <p>MCP Tool入参的ContentType</p><p>枚举值：</p><ul><li>application/json： json格式</li><li>application/x-www-form-urlencoded： 表单格式</li></ul>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>MCP Tool的描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>MCP Tool的参数</p>
                     */
                    std::vector<CNAPIGwMCPToolParam> m_inputParams;
                    bool m_inputParamsHasBeenSet;

                    /**
                     * <p>MCP Tool的请求方法</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>MCP Tool名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>MCP Tool的请求路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>MCP Tool的状态</p><p>枚举值：</p><ul><li>Valid： 可导入</li><li>Invalid： 不可导入</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>不可导入的原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * <p>虚拟MCP Server的tools的完整url路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upstreamUrl;
                    bool m_upstreamUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLPREVIEW_H_
