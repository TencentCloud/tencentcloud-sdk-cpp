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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYNETWORKADDRESS_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYNETWORKADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 修改数据库地址
                */
                class ModifyNetworkAddress : public AbstractModel
                {
                public:
                    ModifyNetworkAddress();
                    ~ModifyNetworkAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>新IP地址。</p>
                     * @return NewIPAddress <p>新IP地址。</p>
                     * 
                     */
                    std::string GetNewIPAddress() const;

                    /**
                     * 设置<p>新IP地址。</p>
                     * @param _newIPAddress <p>新IP地址。</p>
                     * 
                     */
                    void SetNewIPAddress(const std::string& _newIPAddress);

                    /**
                     * 判断参数 NewIPAddress 是否已赋值
                     * @return NewIPAddress 是否已赋值
                     * 
                     */
                    bool NewIPAddressHasBeenSet() const;

                    /**
                     * 获取<p>原IP地址。</p>
                     * @return OldIpAddress <p>原IP地址。</p>
                     * 
                     */
                    std::string GetOldIpAddress() const;

                    /**
                     * 设置<p>原IP地址。</p>
                     * @param _oldIpAddress <p>原IP地址。</p>
                     * 
                     */
                    void SetOldIpAddress(const std::string& _oldIpAddress);

                    /**
                     * 判断参数 OldIpAddress 是否已赋值
                     * @return OldIpAddress 是否已赋值
                     * 
                     */
                    bool OldIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>在副本集时，修改网络需要传此字段，用于标识该ip地址为主节点或者hidden节点</p><p>枚举值：</p><ul><li>PRIMARY： 主节点</li><li>HIDDEN： hidden节点</li></ul>
                     * @return NodeType <p>在副本集时，修改网络需要传此字段，用于标识该ip地址为主节点或者hidden节点</p><p>枚举值：</p><ul><li>PRIMARY： 主节点</li><li>HIDDEN： hidden节点</li></ul>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>在副本集时，修改网络需要传此字段，用于标识该ip地址为主节点或者hidden节点</p><p>枚举值：</p><ul><li>PRIMARY： 主节点</li><li>HIDDEN： hidden节点</li></ul>
                     * @param _nodeType <p>在副本集时，修改网络需要传此字段，用于标识该ip地址为主节点或者hidden节点</p><p>枚举值：</p><ul><li>PRIMARY： 主节点</li><li>HIDDEN： hidden节点</li></ul>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>新IP地址。</p>
                     */
                    std::string m_newIPAddress;
                    bool m_newIPAddressHasBeenSet;

                    /**
                     * <p>原IP地址。</p>
                     */
                    std::string m_oldIpAddress;
                    bool m_oldIpAddressHasBeenSet;

                    /**
                     * <p>在副本集时，修改网络需要传此字段，用于标识该ip地址为主节点或者hidden节点</p><p>枚举值：</p><ul><li>PRIMARY： 主节点</li><li>HIDDEN： hidden节点</li></ul>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYNETWORKADDRESS_H_
