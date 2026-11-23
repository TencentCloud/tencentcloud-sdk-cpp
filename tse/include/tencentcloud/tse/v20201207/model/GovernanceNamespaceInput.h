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
                     * 获取<p>命名空间名。</p>
                     * @return Name <p>命名空间名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>命名空间名。</p>
                     * @param _name <p>命名空间名。</p>
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
                     * 获取<p>描述信息。</p>
                     * @return Comment <p>描述信息。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>描述信息。</p>
                     * @param _comment <p>描述信息。</p>
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
                     * 获取<p>新增的可以操作此命名空间的用户ID列表</p>
                     * @return UserIds <p>新增的可以操作此命名空间的用户ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置<p>新增的可以操作此命名空间的用户ID列表</p>
                     * @param _userIds <p>新增的可以操作此命名空间的用户ID列表</p>
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
                     * 获取<p>新增的可以操作此命名空间的用户组ID列表</p>
                     * @return GroupIds <p>新增的可以操作此命名空间的用户组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>新增的可以操作此命名空间的用户组ID列表</p>
                     * @param _groupIds <p>新增的可以操作此命名空间的用户组ID列表</p>
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
                     * 获取<p>移除可以操作此命名空间的用户ID列表</p>
                     * @return RemoveUserIds <p>移除可以操作此命名空间的用户ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置<p>移除可以操作此命名空间的用户ID列表</p>
                     * @param _removeUserIds <p>移除可以操作此命名空间的用户ID列表</p>
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
                     * 获取<p>移除可以操作此命名空间的用户组ID列表</p>
                     * @return RemoveGroupIds <p>移除可以操作此命名空间的用户组ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetRemoveGroupIds() const;

                    /**
                     * 设置<p>移除可以操作此命名空间的用户组ID列表</p>
                     * @param _removeGroupIds <p>移除可以操作此命名空间的用户组ID列表</p>
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
                     * 获取<p>该命名空间下的服务对哪些命名空间下可见，<br>1、为空或者不填写，表示仅当前命名空间可见<br>2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）<br>3、列表内容为部份命名空间名称，则只对这些命名空间下可见</p>
                     * @return ServiceExportTo <p>该命名空间下的服务对哪些命名空间下可见，<br>1、为空或者不填写，表示仅当前命名空间可见<br>2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）<br>3、列表内容为部份命名空间名称，则只对这些命名空间下可见</p>
                     * 
                     */
                    std::vector<std::string> GetServiceExportTo() const;

                    /**
                     * 设置<p>该命名空间下的服务对哪些命名空间下可见，<br>1、为空或者不填写，表示仅当前命名空间可见<br>2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）<br>3、列表内容为部份命名空间名称，则只对这些命名空间下可见</p>
                     * @param _serviceExportTo <p>该命名空间下的服务对哪些命名空间下可见，<br>1、为空或者不填写，表示仅当前命名空间可见<br>2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）<br>3、列表内容为部份命名空间名称，则只对这些命名空间下可见</p>
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
                     * 获取<p>是否开启同步到全局注册中心</p>
                     * @return SyncToGlobalRegistry <p>是否开启同步到全局注册中心</p>
                     * 
                     */
                    bool GetSyncToGlobalRegistry() const;

                    /**
                     * 设置<p>是否开启同步到全局注册中心</p>
                     * @param _syncToGlobalRegistry <p>是否开启同步到全局注册中心</p>
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
                     * <p>命名空间名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述信息。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>新增的可以操作此命名空间的用户ID列表</p>
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>新增的可以操作此命名空间的用户组ID列表</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>移除可以操作此命名空间的用户ID列表</p>
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                    /**
                     * <p>移除可以操作此命名空间的用户组ID列表</p>
                     */
                    std::vector<std::string> m_removeGroupIds;
                    bool m_removeGroupIdsHasBeenSet;

                    /**
                     * <p>该命名空间下的服务对哪些命名空间下可见，<br>1、为空或者不填写，表示仅当前命名空间可见<br>2、列表内容仅一个元素，且为字符 *，表示所有命名空间可见（包括新增）<br>3、列表内容为部份命名空间名称，则只对这些命名空间下可见</p>
                     */
                    std::vector<std::string> m_serviceExportTo;
                    bool m_serviceExportToHasBeenSet;

                    /**
                     * <p>是否开启同步到全局注册中心</p>
                     */
                    bool m_syncToGlobalRegistry;
                    bool m_syncToGlobalRegistryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCENAMESPACEINPUT_H_
