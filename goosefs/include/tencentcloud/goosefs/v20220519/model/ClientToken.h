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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTTOKEN_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 查询Client Token
                */
                class ClientToken : public AbstractModel
                {
                public:
                    ClientToken();
                    ~ClientToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeIp 节点 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置节点 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeIp 节点 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDirectory 挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocalDirectory() const;

                    /**
                     * 设置挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDirectory 挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalDirectory(const std::string& _localDirectory);

                    /**
                     * 判断参数 LocalDirectory 是否已赋值
                     * @return LocalDirectory 是否已赋值
                     * 
                     */
                    bool LocalDirectoryHasBeenSet() const;

                    /**
                     * 获取可以访问的 GooseFS 目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GooseFSDirectory 可以访问的 GooseFS 目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGooseFSDirectory() const;

                    /**
                     * 设置可以访问的 GooseFS 目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gooseFSDirectory 可以访问的 GooseFS 目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGooseFSDirectory(const std::string& _gooseFSDirectory);

                    /**
                     * 判断参数 GooseFSDirectory 是否已赋值
                     * @return GooseFSDirectory 是否已赋值
                     * 
                     */
                    bool GooseFSDirectoryHasBeenSet() const;

                    /**
                     * 获取token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _token token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * 节点 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * 挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localDirectory;
                    bool m_localDirectoryHasBeenSet;

                    /**
                     * 可以访问的 GooseFS 目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gooseFSDirectory;
                    bool m_gooseFSDirectoryHasBeenSet;

                    /**
                     * token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTTOKEN_H_
