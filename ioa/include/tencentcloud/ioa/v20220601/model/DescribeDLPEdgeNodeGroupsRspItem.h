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
#include <tencentcloud/ioa/v20220601/model/I18nString.h>


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
                     * 获取<p>自增id，数据库中唯一</p>
                     * @return Id <p>自增id，数据库中唯一</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>自增id，数据库中唯一</p>
                     * @param _id <p>自增id，数据库中唯一</p>
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
                     * 获取<p>节点分组名称</p>
                     * @return GroupName <p>节点分组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>节点分组名称</p>
                     * @param _groupName <p>节点分组名称</p>
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
                     * 获取<p>节点分组id</p>
                     * @return GroupId <p>节点分组id</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>节点分组id</p>
                     * @param _groupId <p>节点分组id</p>
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
                     * 获取<p>包含边缘节点数量</p>
                     * @return EdgeCount <p>包含边缘节点数量</p>
                     * 
                     */
                    int64_t GetEdgeCount() const;

                    /**
                     * 设置<p>包含边缘节点数量</p>
                     * @param _edgeCount <p>包含边缘节点数量</p>
                     * 
                     */
                    void SetEdgeCount(const int64_t& _edgeCount);

                    /**
                     * 判断参数 EdgeCount 是否已赋值
                     * @return EdgeCount 是否已赋值
                     * 
                     */
                    bool EdgeCountHasBeenSet() const;

                    /**
                     * 获取<p>分组中英文</p>
                     * @return GroupNameI18n <p>分组中英文</p>
                     * 
                     */
                    std::vector<I18nString> GetGroupNameI18n() const;

                    /**
                     * 设置<p>分组中英文</p>
                     * @param _groupNameI18n <p>分组中英文</p>
                     * 
                     */
                    void SetGroupNameI18n(const std::vector<I18nString>& _groupNameI18n);

                    /**
                     * 判断参数 GroupNameI18n 是否已赋值
                     * @return GroupNameI18n 是否已赋值
                     * 
                     */
                    bool GroupNameI18nHasBeenSet() const;

                private:

                    /**
                     * <p>自增id，数据库中唯一</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>节点分组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>节点分组id</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>包含边缘节点数量</p>
                     */
                    int64_t m_edgeCount;
                    bool m_edgeCountHasBeenSet;

                    /**
                     * <p>分组中英文</p>
                     */
                    std::vector<I18nString> m_groupNameI18n;
                    bool m_groupNameI18nHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODEGROUPSRSPITEM_H_
