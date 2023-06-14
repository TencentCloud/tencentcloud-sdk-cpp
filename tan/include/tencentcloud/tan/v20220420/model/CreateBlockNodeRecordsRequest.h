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
                     * 获取盘查组id，可在“盘查组概览”功能中获取。
                     * @return GroupId 盘查组id，可在“盘查组概览”功能中获取。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置盘查组id，可在“盘查组概览”功能中获取。
                     * @param _groupId 盘查组id，可在“盘查组概览”功能中获取。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取节点id，可在“数据接入管理”中获取。
                     * @return NodeId 节点id，可在“数据接入管理”中获取。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id，可在“数据接入管理”中获取。
                     * @param _nodeId 节点id，可在“数据接入管理”中获取。
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
                     * 获取节点数据json，具体demo请参考输入示例，其中key为数据接入管理中节点内创建的属性变量名，value为期望的推送值。
                     * @return Records 节点数据json，具体demo请参考输入示例，其中key为数据接入管理中节点内创建的属性变量名，value为期望的推送值。
                     * 
                     */
                    std::string GetRecords() const;

                    /**
                     * 设置节点数据json，具体demo请参考输入示例，其中key为数据接入管理中节点内创建的属性变量名，value为期望的推送值。
                     * @param _records 节点数据json，具体demo请参考输入示例，其中key为数据接入管理中节点内创建的属性变量名，value为期望的推送值。
                     * 
                     */
                    void SetRecords(const std::string& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                private:

                    /**
                     * 盘查组id，可在“盘查组概览”功能中获取。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 节点id，可在“数据接入管理”中获取。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点数据json，具体demo请参考输入示例，其中key为数据接入管理中节点内创建的属性变量名，value为期望的推送值。
                     */
                    std::string m_records;
                    bool m_recordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAN_V20220420_MODEL_CREATEBLOCKNODERECORDSREQUEST_H_
