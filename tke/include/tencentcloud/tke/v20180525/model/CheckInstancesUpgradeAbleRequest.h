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
                     * 获取集群ID（请登录 [TKE 控制台](https://console.cloud.tencent.com/tke2) 获取集群 ID ）
                     * @return ClusterId 集群ID（请登录 [TKE 控制台](https://console.cloud.tencent.com/tke2) 获取集群 ID ）
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID（请登录 [TKE 控制台](https://console.cloud.tencent.com/tke2) 获取集群 ID ）
                     * @param _clusterId 集群ID（请登录 [TKE 控制台](https://console.cloud.tencent.com/tke2) 获取集群 ID ）
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
                     * 获取偏移量，默认为0。关于 Offset 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于 Offset 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于 Offset 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于 Offset 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取过滤条件列表，Name 可选值为ip、instanceId、hostname、label

- Name 为 ip 时，Value 为待查询节点 ip
- Name 为 hostname 时，Value 为待查询节点名称
- Name 为 label 时，Value 为待查询 K8S 节点 label
- Name 为 instanceId 时，Value 为 待查询节点 id
                     * @return Filter 过滤条件列表，Name 可选值为ip、instanceId、hostname、label

- Name 为 ip 时，Value 为待查询节点 ip
- Name 为 hostname 时，Value 为待查询节点名称
- Name 为 label 时，Value 为待查询 K8S 节点 label
- Name 为 instanceId 时，Value 为 待查询节点 id
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置过滤条件列表，Name 可选值为ip、instanceId、hostname、label

- Name 为 ip 时，Value 为待查询节点 ip
- Name 为 hostname 时，Value 为待查询节点名称
- Name 为 label 时，Value 为待查询 K8S 节点 label
- Name 为 instanceId 时，Value 为 待查询节点 id
                     * @param _filter 过滤条件列表，Name 可选值为ip、instanceId、hostname、label

- Name 为 ip 时，Value 为待查询节点 ip
- Name 为 hostname 时，Value 为待查询节点名称
- Name 为 label 时，Value 为待查询 K8S 节点 label
- Name 为 instanceId 时，Value 为 待查询节点 id
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
                     * 集群ID（请登录 [TKE 控制台](https://console.cloud.tencent.com/tke2) 获取集群 ID ）
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
                     * 偏移量，默认为0。关于 Offset 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件列表，Name 可选值为ip、instanceId、hostname、label

- Name 为 ip 时，Value 为待查询节点 ip
- Name 为 hostname 时，Value 为待查询节点名称
- Name 为 label 时，Value 为待查询 K8S 节点 label
- Name 为 instanceId 时，Value 为 待查询节点 id
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CHECKINSTANCESUPGRADEABLEREQUEST_H_
