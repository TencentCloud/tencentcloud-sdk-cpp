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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMNODETAGSREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMNODETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/Tag.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * ModifyDBCustomNodeTags请求参数结构体
                */
                class ModifyDBCustomNodeTagsRequest : public AbstractModel
                {
                public:
                    ModifyDBCustomNodeTagsRequest();
                    ~ModifyDBCustomNodeTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>DB Custom 节点ID</p><p>参数格式：dbcn-0zan5xxk</p>
                     * @return NodeId <p>DB Custom 节点ID</p><p>参数格式：dbcn-0zan5xxk</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>DB Custom 节点ID</p><p>参数格式：dbcn-0zan5xxk</p>
                     * @param _nodeId <p>DB Custom 节点ID</p><p>参数格式：dbcn-0zan5xxk</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>为节点绑定的标签信息</p><p>入参限制：参考标签侧的限制</p>
                     * @return AddTags <p>为节点绑定的标签信息</p><p>入参限制：参考标签侧的限制</p>
                     * 
                     */
                    std::vector<Tag> GetAddTags() const;

                    /**
                     * 设置<p>为节点绑定的标签信息</p><p>入参限制：参考标签侧的限制</p>
                     * @param _addTags <p>为节点绑定的标签信息</p><p>入参限制：参考标签侧的限制</p>
                     * 
                     */
                    void SetAddTags(const std::vector<Tag>& _addTags);

                    /**
                     * 判断参数 AddTags 是否已赋值
                     * @return AddTags 是否已赋值
                     * 
                     */
                    bool AddTagsHasBeenSet() const;

                    /**
                     * 获取<p>需要删除的标签Key</p>
                     * @return DeleteTagKeys <p>需要删除的标签Key</p>
                     * 
                     */
                    std::vector<std::string> GetDeleteTagKeys() const;

                    /**
                     * 设置<p>需要删除的标签Key</p>
                     * @param _deleteTagKeys <p>需要删除的标签Key</p>
                     * 
                     */
                    void SetDeleteTagKeys(const std::vector<std::string>& _deleteTagKeys);

                    /**
                     * 判断参数 DeleteTagKeys 是否已赋值
                     * @return DeleteTagKeys 是否已赋值
                     * 
                     */
                    bool DeleteTagKeysHasBeenSet() const;

                private:

                    /**
                     * <p>DB Custom 节点ID</p><p>参数格式：dbcn-0zan5xxk</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>为节点绑定的标签信息</p><p>入参限制：参考标签侧的限制</p>
                     */
                    std::vector<Tag> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * <p>需要删除的标签Key</p>
                     */
                    std::vector<std::string> m_deleteTagKeys;
                    bool m_deleteTagKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMNODETAGSREQUEST_H_
