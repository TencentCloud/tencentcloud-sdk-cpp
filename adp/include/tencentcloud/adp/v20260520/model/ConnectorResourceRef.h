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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONNECTORRESOURCEREF_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONNECTORRESOURCEREF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * <p>连接器资源引用</p>
                */
                class ConnectorResourceRef : public AbstractModel
                {
                public:
                    ConnectorResourceRef();
                    ~ConnectorResourceRef() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>连接器侧资源 ID</p>
                     * @return ResourceId <p>连接器侧资源 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>连接器侧资源 ID</p>
                     * @param _resourceId <p>连接器侧资源 ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型：1-空间（乐享知识库），2-文件夹，3-文档或文件，4-团队；0 无效。</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定，不允许用于资源引用</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_WORKSPACE</td><td>1</td><td>空间；乐享个人知识库和团队知识库均为此类型</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_FOLDER</td><td>2</td><td>文件夹</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_DOC</td><td>3</td><td>文档或文件</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_GROUP</td><td>4</td><td>团队或群组</td></tr></tbody></table>
                     * @return Type <p>资源类型：1-空间（乐享知识库），2-文件夹，3-文档或文件，4-团队；0 无效。</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定，不允许用于资源引用</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_WORKSPACE</td><td>1</td><td>空间；乐享个人知识库和团队知识库均为此类型</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_FOLDER</td><td>2</td><td>文件夹</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_DOC</td><td>3</td><td>文档或文件</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_GROUP</td><td>4</td><td>团队或群组</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>资源类型：1-空间（乐享知识库），2-文件夹，3-文档或文件，4-团队；0 无效。</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定，不允许用于资源引用</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_WORKSPACE</td><td>1</td><td>空间；乐享个人知识库和团队知识库均为此类型</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_FOLDER</td><td>2</td><td>文件夹</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_DOC</td><td>3</td><td>文档或文件</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_GROUP</td><td>4</td><td>团队或群组</td></tr></tbody></table>
                     * @param _type <p>资源类型：1-空间（乐享知识库），2-文件夹，3-文档或文件，4-团队；0 无效。</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定，不允许用于资源引用</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_WORKSPACE</td><td>1</td><td>空间；乐享个人知识库和团队知识库均为此类型</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_FOLDER</td><td>2</td><td>文件夹</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_DOC</td><td>3</td><td>文档或文件</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_GROUP</td><td>4</td><td>团队或群组</td></tr></tbody></table>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>资源名称；请求中选填，不参与资源定位。</p>
                     * @return Name <p>资源名称；请求中选填，不参与资源定位。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>资源名称；请求中选填，不参与资源定位。</p>
                     * @param _name <p>资源名称；请求中选填，不参与资源定位。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>连接器侧资源 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源类型：1-空间（乐享知识库），2-文件夹，3-文档或文件，4-团队；0 无效。</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定，不允许用于资源引用</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_WORKSPACE</td><td>1</td><td>空间；乐享个人知识库和团队知识库均为此类型</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_FOLDER</td><td>2</td><td>文件夹</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_DOC</td><td>3</td><td>文档或文件</td></tr><tr><td>CONNECTOR_RESOURCE_TYPE_GROUP</td><td>4</td><td>团队或群组</td></tr></tbody></table>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>资源名称；请求中选填，不参与资源定位。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONNECTORRESOURCEREF_H_
