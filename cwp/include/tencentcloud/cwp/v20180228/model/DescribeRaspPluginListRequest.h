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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPPLUGINLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPPLUGINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRaspPluginList请求参数结构体
                */
                class DescribeRaspPluginListRequest : public AbstractModel
                {
                public:
                    DescribeRaspPluginListRequest();
                    ~DescribeRaspPluginListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
                     * @return AssetType 资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
                     * @param _assetType 资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取机器唯一ID
                     * @return QUUID 机器唯一ID
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置机器唯一ID
                     * @param _qUUID 机器唯一ID
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取过滤参数
PluginStatus 插件状态  (Injecting 注入中,Injected 注入成功,Timeout 插件超时,Exited 插件退出, Failed 注入失败)
PID  进程PID
MainClass 进程主类名 
                     * @return Filters 过滤参数
PluginStatus 插件状态  (Injecting 注入中,Injected 注入成功,Timeout 插件超时,Exited 插件退出, Failed 注入失败)
PID  进程PID
MainClass 进程主类名 
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤参数
PluginStatus 插件状态  (Injecting 注入中,Injected 注入成功,Timeout 插件超时,Exited 插件退出, Failed 注入失败)
PID  进程PID
MainClass 进程主类名 
                     * @param _filters 过滤参数
PluginStatus 插件状态  (Injecting 注入中,Injected 注入成功,Timeout 插件超时,Exited 插件退出, Failed 注入失败)
PID  进程PID
MainClass 进程主类名 
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量默认0
                     * @return Offset 偏移量默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量默认0
                     * @param _offset 偏移量默认0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制条数,默认10
                     * @return Limit 限制条数,默认10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制条数,默认10
                     * @param _limit 限制条数,默认10
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 资产类型
- CWP 主机安全资产
- TCSS_HOST 容器主机节点
- TCSS_EKS 容器超级节点
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 机器唯一ID
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * 过滤参数
PluginStatus 插件状态  (Injecting 注入中,Injected 注入成功,Timeout 插件超时,Exited 插件退出, Failed 注入失败)
PID  进程PID
MainClass 进程主类名 
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制条数,默认10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPPLUGINLISTREQUEST_H_
