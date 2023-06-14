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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEINSTALLERONLINE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEINSTALLERONLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 节点在线安装信息
                */
                class EdgeNodeInstallerOnline : public AbstractModel
                {
                public:
                    EdgeNodeInstallerOnline();
                    ~EdgeNodeInstallerOnline() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点安装脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptName 节点安装脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptName() const;

                    /**
                     * 设置节点安装脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptName 节点安装脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptName(const std::string& _scriptName);

                    /**
                     * 判断参数 ScriptName 是否已赋值
                     * @return ScriptName 是否已赋值
                     * 
                     */
                    bool ScriptNameHasBeenSet() const;

                    /**
                     * 获取节点安装脚本下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptDownloadUrl 节点安装脚本下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptDownloadUrl() const;

                    /**
                     * 设置节点安装脚本下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptDownloadUrl 节点安装脚本下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptDownloadUrl(const std::string& _scriptDownloadUrl);

                    /**
                     * 判断参数 ScriptDownloadUrl 是否已赋值
                     * @return ScriptDownloadUrl 是否已赋值
                     * 
                     */
                    bool ScriptDownloadUrlHasBeenSet() const;

                    /**
                     * 获取节点安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Guide 节点安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGuide() const;

                    /**
                     * 设置节点安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _guide 节点安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGuide(const std::string& _guide);

                    /**
                     * 判断参数 Guide 是否已赋值
                     * @return Guide 是否已赋值
                     * 
                     */
                    bool GuideHasBeenSet() const;

                private:

                    /**
                     * 节点安装脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptName;
                    bool m_scriptNameHasBeenSet;

                    /**
                     * 节点安装脚本下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptDownloadUrl;
                    bool m_scriptDownloadUrlHasBeenSet;

                    /**
                     * 节点安装命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_guide;
                    bool m_guideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEINSTALLERONLINE_H_
