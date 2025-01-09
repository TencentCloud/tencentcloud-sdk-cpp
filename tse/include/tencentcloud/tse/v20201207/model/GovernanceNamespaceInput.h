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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCENAMESPACEINPUT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCENAMESPACEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 治理中心命名空间输入参数
                */
                class GovernanceNamespaceInput : public AbstractModel
                {
                public:
                    GovernanceNamespaceInput();
                    ~GovernanceNamespaceInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间名。
                     * @return Name 命名空间名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置命名空间名。
                     * @param _name 命名空间名。
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
                     * 获取描述信息。
                     * @return Comment 描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置描述信息。
                     * @param _comment 描述信息。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取新增的可以操作此命名空间的用户ID列表
                     * @return UserIds 新增的可以操作此命名空间的用户ID列表
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置新增的可以操作此命名空间的用户ID列表
                     * @param _userIds 新增的可以操作此命名空间的用户ID列表
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取新增的可以操作此命名空间的用户组ID列表
                     * @return GroupIds 新增的可以操作此命名空间的用户组ID列表
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置新增的可以操作此命名空间的用户组ID列表
                     * @param _groupIds 新增的可以操作此命名空间的用户组ID列表
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取移除可以操作此命名空间的用户ID列表
                     * @return RemoveUserIds 移除可以操作此命名空间的用户ID列表
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置移除可以操作此命名空间的用户ID列表
                     * @param _removeUserIds 移除可以操作此命名空间的用户ID列表
                     * 
                     */
                    void SetRemoveUserIds(const std::vector<std::string>& _removeUserIds);

                    /**
                     * 判断参数 RemoveUserIds 是否已赋值
                     * @return RemoveUserIds 是否已赋值
                     * 
                     */
                    bool RemoveUserIdsHasBeenSet() const;

                    /**
                     * 获取移除可以操作此命名空间的用户组ID列表
                     * @return RemoveGroupIds 移除可以操作此命名空间的用户组ID列表
                     * 
                     */
                    std::vector<std::string> GetRemoveGroupIds() const;

                    /**
                     * 设置移除可以操作此命名空间的用户组ID列表
                     * @param _removeGroupIds 移除可以操作此命名空间的用户组ID列表
                     * 
                     */
                    void SetRemoveGroupIds(const std::vector<std::string>& _removeGroupIds);

                    /**
                     * 判断参数 RemoveGroupIds 是否已赋值
                     * @return RemoveGroupIds 是否已赋值
                     * 
                     */
                    bool RemoveGroupIdsHasBeenSet() const;

                    /**
                     * 获取该命名空间下的服务对哪些命名空间下可见，
1、为空或者不填写，表示仅当前命名空间可见
2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）
3、列表内容为部份命名空间名称，则只对这些命名空间下可见
                     * @return ServiceExportTo 该命名空间下的服务对哪些命名空间下可见，
1、为空或者不填写，表示仅当前命名空间可见
2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）
3、列表内容为部份命名空间名称，则只对这些命名空间下可见
                     * 
                     */
                    std::vector<std::string> GetServiceExportTo() const;

                    /**
                     * 设置该命名空间下的服务对哪些命名空间下可见，
1、为空或者不填写，表示仅当前命名空间可见
2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）
3、列表内容为部份命名空间名称，则只对这些命名空间下可见
                     * @param _serviceExportTo 该命名空间下的服务对哪些命名空间下可见，
1、为空或者不填写，表示仅当前命名空间可见
2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）
3、列表内容为部份命名空间名称，则只对这些命名空间下可见
                     * 
                     */
                    void SetServiceExportTo(const std::vector<std::string>& _serviceExportTo);

                    /**
                     * 判断参数 ServiceExportTo 是否已赋值
                     * @return ServiceExportTo 是否已赋值
                     * 
                     */
                    bool ServiceExportToHasBeenSet() const;

                    /**
                     * 获取是否开启同步到全局注册中心
                     * @return SyncToGlobalRegistry 是否开启同步到全局注册中心
                     * 
                     */
                    bool GetSyncToGlobalRegistry() const;

                    /**
                     * 设置是否开启同步到全局注册中心
                     * @param _syncToGlobalRegistry 是否开启同步到全局注册中心
                     * 
                     */
                    void SetSyncToGlobalRegistry(const bool& _syncToGlobalRegistry);

                    /**
                     * 判断参数 SyncToGlobalRegistry 是否已赋值
                     * @return SyncToGlobalRegistry 是否已赋值
                     * 
                     */
                    bool SyncToGlobalRegistryHasBeenSet() const;

                private:

                    /**
                     * 命名空间名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 新增的可以操作此命名空间的用户ID列表
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 新增的可以操作此命名空间的用户组ID列表
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 移除可以操作此命名空间的用户ID列表
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                    /**
                     * 移除可以操作此命名空间的用户组ID列表
                     */
                    std::vector<std::string> m_removeGroupIds;
                    bool m_removeGroupIdsHasBeenSet;

                    /**
                     * 该命名空间下的服务对哪些命名空间下可见，
1、为空或者不填写，表示仅当前命名空间可见
2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）
3、列表内容为部份命名空间名称，则只对这些命名空间下可见
                     */
                    std::vector<std::string> m_serviceExportTo;
                    bool m_serviceExportToHasBeenSet;

                    /**
                     * 是否开启同步到全局注册中心
                     */
                    bool m_syncToGlobalRegistry;
                    bool m_syncToGlobalRegistryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCENAMESPACEINPUT_H_
