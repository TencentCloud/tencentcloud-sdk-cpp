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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Filter.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CheckInstancesUpgradeAble请求参数结构体
                */
                class CheckInstancesUpgradeAbleRequest : public AbstractModel
                {
                public:
                    CheckInstancesUpgradeAbleRequest();
                    ~CheckInstancesUpgradeAbleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取节点列表，空为全部节点
                     * @return InstanceIds 节点列表，空为全部节点
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置节点列表，空为全部节点
                     * @param _instanceIds 节点列表，空为全部节点
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取升级类型，枚举值：reset(重装升级，支持大版本和小版本)，hot(原地滚动小版本升级)，major(原地滚动大版本升级)
                     * @return UpgradeType 升级类型，枚举值：reset(重装升级，支持大版本和小版本)，hot(原地滚动小版本升级)，major(原地滚动大版本升级)
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置升级类型，枚举值：reset(重装升级，支持大版本和小版本)，hot(原地滚动小版本升级)，major(原地滚动大版本升级)
                     * @param _upgradeType 升级类型，枚举值：reset(重装升级，支持大版本和小版本)，hot(原地滚动小版本升级)，major(原地滚动大版本升级)
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取分页Offset
                     * @return Offset 分页Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页Offset
                     * @param _offset 分页Offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页Limit
                     * @return Limit 分页Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页Limit
                     * @param _limit 分页Limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤
                     * @return Filter 过滤
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置过滤
                     * @param _filter 过滤
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点列表，空为全部节点
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 升级类型，枚举值：reset(重装升级，支持大版本和小版本)，hot(原地滚动小版本升级)，major(原地滚动大版本升级)
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * 分页Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLEREQUEST_H_
