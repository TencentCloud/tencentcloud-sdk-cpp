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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GROUP_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 群组
                */
                class Group : public AbstractModel
                {
                public:
                    Group();
                    ~Group() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取群组ID
                     * @return GroupId 群组ID
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param GroupId 群组ID
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取节点数量
                     * @return NodeCount 节点数量
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置节点数量
                     * @param NodeCount 节点数量
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取所属机构节点数量
                     * @return NodeCountOfAgency 所属机构节点数量
                     */
                    uint64_t GetNodeCountOfAgency() const;

                    /**
                     * 设置所属机构节点数量
                     * @param NodeCountOfAgency 所属机构节点数量
                     */
                    void SetNodeCountOfAgency(const uint64_t& _nodeCountOfAgency);

                    /**
                     * 判断参数 NodeCountOfAgency 是否已赋值
                     * @return NodeCountOfAgency 是否已赋值
                     */
                    bool NodeCountOfAgencyHasBeenSet() const;

                    /**
                     * 获取群组描述
                     * @return Description 群组描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置群组描述
                     * @param Description 群组描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取参与角色，盟主或非盟主
                     * @return RoleType 参与角色，盟主或非盟主
                     */
                    uint64_t GetRoleType() const;

                    /**
                     * 设置参与角色，盟主或非盟主
                     * @param RoleType 参与角色，盟主或非盟主
                     */
                    void SetRoleType(const uint64_t& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取链id
                     * @return ChainId 链id
                     */
                    std::string GetChainId() const;

                    /**
                     * 设置链id
                     * @param ChainId 链id
                     */
                    void SetChainId(const std::string& _chainId);

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     */
                    bool ChainIdHasBeenSet() const;

                private:

                    /**
                     * 群组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 节点数量
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 所属机构节点数量
                     */
                    uint64_t m_nodeCountOfAgency;
                    bool m_nodeCountOfAgencyHasBeenSet;

                    /**
                     * 群组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 参与角色，盟主或非盟主
                     */
                    uint64_t m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * 链id
                     */
                    std::string m_chainId;
                    bool m_chainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GROUP_H_
