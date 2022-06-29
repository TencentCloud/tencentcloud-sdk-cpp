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

#ifndef TENCENTCLOUD_TAN_V20220420_MODEL_CREATEBLOCKNODERECORDSREQUEST_H_
#define TENCENTCLOUD_TAN_V20220420_MODEL_CREATEBLOCKNODERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tan
    {
        namespace V20220420
        {
            namespace Model
            {
                /**
                * CreateBlockNodeRecords请求参数结构体
                */
                class CreateBlockNodeRecordsRequest : public AbstractModel
                {
                public:
                    CreateBlockNodeRecordsRequest();
                    ~CreateBlockNodeRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取盘查实例id
                     * @return GroupId 盘查实例id
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置盘查实例id
                     * @param GroupId 盘查实例id
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取节点id
                     * @return NodeId 节点id
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id
                     * @param NodeId 节点id
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点记录-json
                     * @return Records 节点记录-json
                     */
                    std::string GetRecords() const;

                    /**
                     * 设置节点记录-json
                     * @param Records 节点记录-json
                     */
                    void SetRecords(const std::string& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     */
                    bool RecordsHasBeenSet() const;

                private:

                    /**
                     * 盘查实例id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 节点id
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点记录-json
                     */
                    std::string m_records;
                    bool m_recordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAN_V20220420_MODEL_CREATEBLOCKNODERECORDSREQUEST_H_
