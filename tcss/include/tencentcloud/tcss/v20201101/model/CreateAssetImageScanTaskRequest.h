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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateAssetImageScanTask请求参数结构体
                */
                class CreateAssetImageScanTaskRequest : public AbstractModel
                {
                public:
                    CreateAssetImageScanTaskRequest();
                    ~CreateAssetImageScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * @return All <p>是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 设置<p>是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * @param _all <p>是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * @deprecated
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取<p>需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * @return Images <p>需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置<p>需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * @param _images <p>需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>扫描漏洞；漏洞，木马和风险需选其一</p>
                     * @return ScanVul <p>扫描漏洞；漏洞，木马和风险需选其一</p>
                     * 
                     */
                    bool GetScanVul() const;

                    /**
                     * 设置<p>扫描漏洞；漏洞，木马和风险需选其一</p>
                     * @param _scanVul <p>扫描漏洞；漏洞，木马和风险需选其一</p>
                     * 
                     */
                    void SetScanVul(const bool& _scanVul);

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     * 
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取<p>扫描木马；漏洞，木马和风险需选其一</p>
                     * @return ScanVirus <p>扫描木马；漏洞，木马和风险需选其一</p>
                     * 
                     */
                    bool GetScanVirus() const;

                    /**
                     * 设置<p>扫描木马；漏洞，木马和风险需选其一</p>
                     * @param _scanVirus <p>扫描木马；漏洞，木马和风险需选其一</p>
                     * 
                     */
                    void SetScanVirus(const bool& _scanVirus);

                    /**
                     * 判断参数 ScanVirus 是否已赋值
                     * @return ScanVirus 是否已赋值
                     * 
                     */
                    bool ScanVirusHasBeenSet() const;

                    /**
                     * 获取<p>扫描风险；漏洞，木马和风险需选其一</p>
                     * @return ScanRisk <p>扫描风险；漏洞，木马和风险需选其一</p>
                     * 
                     */
                    bool GetScanRisk() const;

                    /**
                     * 设置<p>扫描风险；漏洞，木马和风险需选其一</p>
                     * @param _scanRisk <p>扫描风险；漏洞，木马和风险需选其一</p>
                     * 
                     */
                    void SetScanRisk(const bool& _scanRisk);

                    /**
                     * 判断参数 ScanRisk 是否已赋值
                     * @return ScanRisk 是否已赋值
                     * 
                     */
                    bool ScanRiskHasBeenSet() const;

                    /**
                     * 获取<p>根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * @return Filters <p>根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置<p>根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * @param _filters <p>根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>根据过滤条件筛选出镜像，再排除个别镜像</p>
                     * @return ExcludeImageIds <p>根据过滤条件筛选出镜像，再排除个别镜像</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeImageIds() const;

                    /**
                     * 设置<p>根据过滤条件筛选出镜像，再排除个别镜像</p>
                     * @param _excludeImageIds <p>根据过滤条件筛选出镜像，再排除个别镜像</p>
                     * 
                     */
                    void SetExcludeImageIds(const std::vector<std::string>& _excludeImageIds);

                    /**
                     * 判断参数 ExcludeImageIds 是否已赋值
                     * @return ExcludeImageIds 是否已赋值
                     * 
                     */
                    bool ExcludeImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>镜像是否存在运行中的容器</p>
                     * @return ContainerRunning <p>镜像是否存在运行中的容器</p>
                     * 
                     */
                    bool GetContainerRunning() const;

                    /**
                     * 设置<p>镜像是否存在运行中的容器</p>
                     * @param _containerRunning <p>镜像是否存在运行中的容器</p>
                     * 
                     */
                    void SetContainerRunning(const bool& _containerRunning);

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     * 
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取<p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 3:集群扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     * @return ScanScope <p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 3:集群扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 设置<p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 3:集群扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     * @param _scanScope <p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 3:集群扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     * 
                     */
                    void SetScanScope(const uint64_t& _scanScope);

                    /**
                     * 判断参数 ScanScope 是否已赋值
                     * @return ScanScope 是否已赋值
                     * 
                     */
                    bool ScanScopeHasBeenSet() const;

                    /**
                     * 获取<p>任务超时时长单位秒，默认1小时</p>
                     * @return Timeout <p>任务超时时长单位秒，默认1小时</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>任务超时时长单位秒，默认1小时</p>
                     * @param _timeout <p>任务超时时长单位秒，默认1小时</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>一键扫描任务。默认false表示非一键扫描，true一键扫描</p>
                     * @return IsOneClickScanningTask <p>一键扫描任务。默认false表示非一键扫描，true一键扫描</p>
                     * 
                     */
                    bool GetIsOneClickScanningTask() const;

                    /**
                     * 设置<p>一键扫描任务。默认false表示非一键扫描，true一键扫描</p>
                     * @param _isOneClickScanningTask <p>一键扫描任务。默认false表示非一键扫描，true一键扫描</p>
                     * 
                     */
                    void SetIsOneClickScanningTask(const bool& _isOneClickScanningTask);

                    /**
                     * 判断参数 IsOneClickScanningTask 是否已赋值
                     * @return IsOneClickScanningTask 是否已赋值
                     * 
                     */
                    bool IsOneClickScanningTaskHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterIDs <p>集群id</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIDs() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterIDs <p>集群id</p>
                     * 
                     */
                    void SetClusterIDs(const std::vector<std::string>& _clusterIDs);

                    /**
                     * 判断参数 ClusterIDs 是否已赋值
                     * @return ClusterIDs 是否已赋值
                     * 
                     */
                    bool ClusterIDsHasBeenSet() const;

                private:

                    /**
                     * <p>是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * <p>需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>扫描漏洞；漏洞，木马和风险需选其一</p>
                     */
                    bool m_scanVul;
                    bool m_scanVulHasBeenSet;

                    /**
                     * <p>扫描木马；漏洞，木马和风险需选其一</p>
                     */
                    bool m_scanVirus;
                    bool m_scanVirusHasBeenSet;

                    /**
                     * <p>扫描风险；漏洞，木马和风险需选其一</p>
                     */
                    bool m_scanRisk;
                    bool m_scanRiskHasBeenSet;

                    /**
                     * <p>根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。</p>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>根据过滤条件筛选出镜像，再排除个别镜像</p>
                     */
                    std::vector<std::string> m_excludeImageIds;
                    bool m_excludeImageIdsHasBeenSet;

                    /**
                     * <p>镜像是否存在运行中的容器</p>
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * <p>扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描 3:集群扫描</p><p>取值范围：[0, 3]</p><p>默认值：0</p>
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * <p>任务超时时长单位秒，默认1小时</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>一键扫描任务。默认false表示非一键扫描，true一键扫描</p>
                     */
                    bool m_isOneClickScanningTask;
                    bool m_isOneClickScanningTaskHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::vector<std::string> m_clusterIDs;
                    bool m_clusterIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
