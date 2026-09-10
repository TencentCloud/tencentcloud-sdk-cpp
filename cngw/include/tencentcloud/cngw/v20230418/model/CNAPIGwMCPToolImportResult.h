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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLIMPORTRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLIMPORTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * MCP Tools的导入结果
                */
                class CNAPIGwMCPToolImportResult : public AbstractModel
                {
                public:
                    CNAPIGwMCPToolImportResult();
                    ~CNAPIGwMCPToolImportResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>导入失败的原因信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedMessage <p>导入失败的原因信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailedMessage() const;

                    /**
                     * 设置<p>导入失败的原因信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedMessage <p>导入失败的原因信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedMessage(const std::string& _failedMessage);

                    /**
                     * 判断参数 FailedMessage 是否已赋值
                     * @return FailedMessage 是否已赋值
                     * 
                     */
                    bool FailedMessageHasBeenSet() const;

                    /**
                     * 获取<p>请求方法</p>
                     * @return Method <p>请求方法</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>请求方法</p>
                     * @param _method <p>请求方法</p>
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
                     * 获取<p>MCP Tool 名字</p>
                     * @return Name <p>MCP Tool 名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>MCP Tool 名字</p>
                     * @param _name <p>MCP Tool 名字</p>
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
                     * 获取<p>导入结果</p><p>枚举值：</p><ul><li>Waiting： 等待导入</li><li>Success： 导入成功</li><li>Failed： 导入失败</li></ul>
                     * @return Status <p>导入结果</p><p>枚举值：</p><ul><li>Waiting： 等待导入</li><li>Success： 导入成功</li><li>Failed： 导入失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>导入结果</p><p>枚举值：</p><ul><li>Waiting： 等待导入</li><li>Success： 导入成功</li><li>Failed： 导入失败</li></ul>
                     * @param _status <p>导入结果</p><p>枚举值：</p><ul><li>Waiting： 等待导入</li><li>Success： 导入成功</li><li>Failed： 导入失败</li></ul>
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
                     * 获取<p>虚拟MCP Server的Tool的完整后端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamUrl <p>虚拟MCP Server的Tool的完整后端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpstreamUrl() const;

                    /**
                     * 设置<p>虚拟MCP Server的Tool的完整后端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamUrl <p>虚拟MCP Server的Tool的完整后端地址</p>
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
                     * <p>导入失败的原因信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failedMessage;
                    bool m_failedMessageHasBeenSet;

                    /**
                     * <p>请求方法</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>MCP Tool 名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>MCP Tool的请求路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>导入结果</p><p>枚举值：</p><ul><li>Waiting： 等待导入</li><li>Success： 导入成功</li><li>Failed： 导入失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>虚拟MCP Server的Tool的完整后端地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upstreamUrl;
                    bool m_upstreamUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLIMPORTRESULT_H_
