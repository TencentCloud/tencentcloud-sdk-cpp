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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTPROFILETREENODE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTPROFILETREENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ElementProfile.h>
#include <tencentcloud/weilingwith/v20230427/model/ElementProfileTreeNode.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 构件树节点信息
                */
                class ElementProfileTreeNode : public AbstractModel
                {
                public:
                    ElementProfileTreeNode();
                    ~ElementProfileTreeNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取构件概要信息
                     * @return ElementProfile 构件概要信息
                     * 
                     */
                    ElementProfile GetElementProfile() const;

                    /**
                     * 设置构件概要信息
                     * @param _elementProfile 构件概要信息
                     * 
                     */
                    void SetElementProfile(const ElementProfile& _elementProfile);

                    /**
                     * 判断参数 ElementProfile 是否已赋值
                     * @return ElementProfile 是否已赋值
                     * 
                     */
                    bool ElementProfileHasBeenSet() const;

                    /**
                     * 获取子节点信息
                     * @return Children 子节点信息
                     * 
                     */
                    std::vector<ElementProfileTreeNode> GetChildren() const;

                    /**
                     * 设置子节点信息
                     * @param _children 子节点信息
                     * 
                     */
                    void SetChildren(const std::vector<ElementProfileTreeNode>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * 构件概要信息
                     */
                    ElementProfile m_elementProfile;
                    bool m_elementProfileHasBeenSet;

                    /**
                     * 子节点信息
                     */
                    std::vector<ElementProfileTreeNode> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTPROFILETREENODE_H_
