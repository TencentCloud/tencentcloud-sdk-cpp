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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTANDARDENGINERESOURCEGROUPSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTANDARDENGINERESOURCEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/StandardEngineResourceGroupInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeStandardEngineResourceGroups返回参数结构体
                */
                class DescribeStandardEngineResourceGroupsResponse : public AbstractModel
                {
                public:
                    DescribeStandardEngineResourceGroupsResponse();
                    ~DescribeStandardEngineResourceGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取标准引擎资源组信息
                     * @return UserEngineResourceGroupInfos 标准引擎资源组信息
                     * 
                     */
                    std::vector<StandardEngineResourceGroupInfo> GetUserEngineResourceGroupInfos() const;

                    /**
                     * 判断参数 UserEngineResourceGroupInfos 是否已赋值
                     * @return UserEngineResourceGroupInfos 是否已赋值
                     * 
                     */
                    bool UserEngineResourceGroupInfosHasBeenSet() const;

                    /**
                     * 获取资源组总数
                     * @return Total 资源组总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 标准引擎资源组信息
                     */
                    std::vector<StandardEngineResourceGroupInfo> m_userEngineResourceGroupInfos;
                    bool m_userEngineResourceGroupInfosHasBeenSet;

                    /**
                     * 资源组总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESTANDARDENGINERESOURCEGROUPSRESPONSE_H_
