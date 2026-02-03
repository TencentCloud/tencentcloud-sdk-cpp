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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETLIBRADBCLUSTERRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETLIBRADBCLUSTERRENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * SetLibraDBClusterRenewFlag请求参数结构体
                */
                class SetLibraDBClusterRenewFlagRequest : public AbstractModel
                {
                public:
                    SetLibraDBClusterRenewFlagRequest();
                    ~SetLibraDBClusterRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分析集群 ID 列表
                     * @return ResourceIds 分析集群 ID 列表
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置分析集群 ID 列表
                     * @param _resourceIds 分析集群 ID 列表
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取续费标记 0:正常续费  1:自动续费 2:到期不续
                     * @return AutoRenewFlag 续费标记 0:正常续费  1:自动续费 2:到期不续
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置续费标记 0:正常续费  1:自动续费 2:到期不续
                     * @param _autoRenewFlag 续费标记 0:正常续费  1:自动续费 2:到期不续
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 分析集群 ID 列表
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 续费标记 0:正常续费  1:自动续费 2:到期不续
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETLIBRADBCLUSTERRENEWFLAGREQUEST_H_
