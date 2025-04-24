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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_NODELEAF_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_NODELEAF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/NodeInfoBase.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 子节点。用于新建任务重构页面的节点选择
                */
                class NodeLeaf : public AbstractModel
                {
                public:
                    NodeLeaf();
                    ~NodeLeaf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子节点ID
                     * @return ID 子节点ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置子节点ID
                     * @param _iD 子节点ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取子节点名称
                     * @return Content 子节点名称
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置子节点名称
                     * @param _content 子节点名称
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取节点列表
                     * @return Children 节点列表
                     * 
                     */
                    std::vector<NodeInfoBase> GetChildren() const;

                    /**
                     * 设置节点列表
                     * @param _children 节点列表
                     * 
                     */
                    void SetChildren(const std::vector<NodeInfoBase>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * 子节点ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 子节点名称
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 节点列表
                     */
                    std::vector<NodeInfoBase> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_NODELEAF_H_
