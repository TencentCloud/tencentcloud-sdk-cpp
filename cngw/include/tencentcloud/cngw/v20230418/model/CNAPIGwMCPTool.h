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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOL_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOL_H_

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
                * MCP Tool 信息
                */
                class CNAPIGwMCPTool : public AbstractModel
                {
                public:
                    CNAPIGwMCPTool();
                    ~CNAPIGwMCPTool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>名字</p>
                     * @return Name <p>名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名字</p>
                     * @param _name <p>名字</p>
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
                     * 获取<p>展示名字</p>
                     * @return DisplayName <p>展示名字</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>展示名字</p>
                     * @param _displayName <p>展示名字</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>POST： POST</li><li>PUT： PUT</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
                     * @return Method <p>方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>POST： POST</li><li>PUT： PUT</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>POST： POST</li><li>PUT： PUT</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
                     * @param _method <p>方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>POST： POST</li><li>PUT： PUT</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>工具 id</p>
                     * @return ToolId <p>工具 id</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>工具 id</p>
                     * @param _toolId <p>工具 id</p>
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                    /**
                     * 获取<p>报文格式</p>
                     * @return ContentType <p>报文格式</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>报文格式</p>
                     * @param _contentType <p>报文格式</p>
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
                     * 获取<p>服务 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId <p>服务 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId <p>服务 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>路径</p>
                     * @return Path <p>路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>路径</p>
                     * @param _path <p>路径</p>
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
                     * 获取<p>参数</p>
                     * @return InputParams <p>参数</p>
                     * 
                     */
                    std::vector<CNAPIGwMCPToolParam> GetInputParams() const;

                    /**
                     * 设置<p>参数</p>
                     * @param _inputParams <p>参数</p>
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
                     * 获取<p>创建时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     * @return CreateTime <p>创建时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     * @param _createTime <p>创建时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     * @return UpdateTime <p>更新时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     * @param _updateTime <p>更新时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>tool状态</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
                     * @return Status <p>tool状态</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>tool状态</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
                     * @param _status <p>tool状态</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
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
                     * 获取<p>当前版本号</p>
                     * @return CurrentVersion <p>当前版本号</p>
                     * 
                     */
                    std::string GetCurrentVersion() const;

                    /**
                     * 设置<p>当前版本号</p>
                     * @param _currentVersion <p>当前版本号</p>
                     * 
                     */
                    void SetCurrentVersion(const std::string& _currentVersion);

                    /**
                     * 判断参数 CurrentVersion 是否已赋值
                     * @return CurrentVersion 是否已赋值
                     * 
                     */
                    bool CurrentVersionHasBeenSet() const;

                private:

                    /**
                     * <p>名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>展示名字</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>方法</p><p>枚举值：</p><ul><li>GET： GET</li><li>POST： POST</li><li>PUT： PUT</li><li>DELETE： DELETE</li><li>PATCH： PATCH</li></ul>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>工具 id</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>报文格式</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>服务 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>参数</p>
                     */
                    std::vector<CNAPIGwMCPToolParam> m_inputParams;
                    bool m_inputParamsHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：yyyy-MM-dd hh:mm:ss</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>tool状态</p><p>枚举值：</p><ul><li>Enable： 启用</li><li>Disable： 禁用</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>当前版本号</p>
                     */
                    std::string m_currentVersion;
                    bool m_currentVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOL_H_
