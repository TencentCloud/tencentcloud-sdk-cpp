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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODEGROUPSRSPITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODEGROUPSRSPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 节点分组信息
                */
                class DescribeDLPEdgeNodeGroupsRspItem : public AbstractModel
                {
                public:
                    DescribeDLPEdgeNodeGroupsRspItem();
                    ~DescribeDLPEdgeNodeGroupsRspItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自增id，数据库中唯一
                     * @return Id 自增id，数据库中唯一
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置自增id，数据库中唯一
                     * @param _id 自增id，数据库中唯一
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取节点分组名称
                     * @return GroupName 节点分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置节点分组名称
                     * @param _groupName 节点分组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取节点分组id
                     * @return GroupId 节点分组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置节点分组id
                     * @param _groupId 节点分组id
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
                     * 获取包含边缘节点数量
                     * @return EdgeCount 包含边缘节点数量
                     * 
                     */
                    int64_t GetEdgeCount() const;

                    /**
                     * 设置包含边缘节点数量
                     * @param _edgeCount 包含边缘节点数量
                     * 
                     */
                    void SetEdgeCount(const int64_t& _edgeCount);

                    /**
                     * 判断参数 EdgeCount 是否已赋值
                     * @return EdgeCount 是否已赋值
                     * 
                     */
                    bool EdgeCountHasBeenSet() const;

                private:

                    /**
                     * 自增id，数据库中唯一
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 节点分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 节点分组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 包含边缘节点数量
                     */
                    int64_t m_edgeCount;
                    bool m_edgeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODEGROUPSRSPITEM_H_
