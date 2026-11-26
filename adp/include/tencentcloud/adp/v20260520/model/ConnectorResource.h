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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONNECTORRESOURCE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONNECTORRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConnectorResourceRef.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 连接器资源及上级链
                */
                class ConnectorResource : public AbstractModel
                {
                public:
                    ConnectorResource();
                    ~ConnectorResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源类型</p><p>枚举值：</p><ul><li>1： 空间（乐享知识库）</li><li>2： 文件夹</li><li>3： 文档或文件</li><li>4： 团队</li></ul>
                     * @return Type <p>资源类型</p><p>枚举值：</p><ul><li>1： 空间（乐享知识库）</li><li>2： 文件夹</li><li>3： 文档或文件</li><li>4： 团队</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>资源类型</p><p>枚举值：</p><ul><li>1： 空间（乐享知识库）</li><li>2： 文件夹</li><li>3： 文档或文件</li><li>4： 团队</li></ul>
                     * @param _type <p>资源类型</p><p>枚举值：</p><ul><li>1： 空间（乐享知识库）</li><li>2： 文件夹</li><li>3： 文档或文件</li><li>4： 团队</li></ul>
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
                     * 获取<p>资源名称快照</p>
                     * @return Name <p>资源名称快照</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>资源名称快照</p>
                     * @param _name <p>资源名称快照</p>
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
                     * 获取<p>祖先链快照，自顶向下且不含自身，最多 100 项；顶层资源为空。</p>
                     * @return AncestorList <p>祖先链快照，自顶向下且不含自身，最多 100 项；顶层资源为空。</p>
                     * 
                     */
                    std::vector<ConnectorResourceRef> GetAncestorList() const;

                    /**
                     * 设置<p>祖先链快照，自顶向下且不含自身，最多 100 项；顶层资源为空。</p>
                     * @param _ancestorList <p>祖先链快照，自顶向下且不含自身，最多 100 项；顶层资源为空。</p>
                     * 
                     */
                    void SetAncestorList(const std::vector<ConnectorResourceRef>& _ancestorList);

                    /**
                     * 判断参数 AncestorList 是否已赋值
                     * @return AncestorList 是否已赋值
                     * 
                     */
                    bool AncestorListHasBeenSet() const;

                private:

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>1： 空间（乐享知识库）</li><li>2： 文件夹</li><li>3： 文档或文件</li><li>4： 团队</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>连接器侧资源 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源名称快照</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>祖先链快照，自顶向下且不含自身，最多 100 项；顶层资源为空。</p>
                     */
                    std::vector<ConnectorResourceRef> m_ancestorList;
                    bool m_ancestorListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONNECTORRESOURCE_H_
