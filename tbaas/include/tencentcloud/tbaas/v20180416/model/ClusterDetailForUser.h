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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_CLUSTERDETAILFORUSER_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_CLUSTERDETAILFORUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/GroupDetailForUser.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 网络详情信息
                */
                class ClusterDetailForUser : public AbstractModel
                {
                public:
                    ClusterDetailForUser();
                    ~ClusterDetailForUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param ClusterId 网络ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取组织列表
                     * @return GroupList 组织列表
                     */
                    std::vector<GroupDetailForUser> GetGroupList() const;

                    /**
                     * 设置组织列表
                     * @param GroupList 组织列表
                     */
                    void SetGroupList(const std::vector<GroupDetailForUser>& _groupList);

                    /**
                     * 判断参数 GroupList 是否已赋值
                     * @return GroupList 是否已赋值
                     */
                    bool GroupListHasBeenSet() const;

                    /**
                     * 获取网络名称
                     * @return ClusterName 网络名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置网络名称
                     * @param ClusterName 网络名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 组织列表
                     */
                    std::vector<GroupDetailForUser> m_groupList;
                    bool m_groupListHasBeenSet;

                    /**
                     * 网络名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_CLUSTERDETAILFORUSER_H_
