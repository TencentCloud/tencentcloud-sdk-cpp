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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DISASTERRECOVERYOVERVIEW_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DISASTERRECOVERYOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 容灾总览数据
                */
                class DisasterRecoveryOverview : public AbstractModel
                {
                public:
                    DisasterRecoveryOverview();
                    ~DisasterRecoveryOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域 ID
                     * @return Region 地域 ID
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域 ID
                     * @param _region 地域 ID
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取站点对总数
                     * @return SitePairCount 站点对总数
                     * 
                     */
                    int64_t GetSitePairCount() const;

                    /**
                     * 设置站点对总数
                     * @param _sitePairCount 站点对总数
                     * 
                     */
                    void SetSitePairCount(const int64_t& _sitePairCount);

                    /**
                     * 判断参数 SitePairCount 是否已赋值
                     * @return SitePairCount 是否已赋值
                     * 
                     */
                    bool SitePairCountHasBeenSet() const;

                    /**
                     * 获取跨地域站点对数
                     * @return SitePairCrossRegionCount 跨地域站点对数
                     * 
                     */
                    int64_t GetSitePairCrossRegionCount() const;

                    /**
                     * 设置跨地域站点对数
                     * @param _sitePairCrossRegionCount 跨地域站点对数
                     * 
                     */
                    void SetSitePairCrossRegionCount(const int64_t& _sitePairCrossRegionCount);

                    /**
                     * 判断参数 SitePairCrossRegionCount 是否已赋值
                     * @return SitePairCrossRegionCount 是否已赋值
                     * 
                     */
                    bool SitePairCrossRegionCountHasBeenSet() const;

                    /**
                     * 获取跨可用区站点对数
                     * @return SitePairCrossZoneCount 跨可用区站点对数
                     * 
                     */
                    int64_t GetSitePairCrossZoneCount() const;

                    /**
                     * 设置跨可用区站点对数
                     * @param _sitePairCrossZoneCount 跨可用区站点对数
                     * 
                     */
                    void SetSitePairCrossZoneCount(const int64_t& _sitePairCrossZoneCount);

                    /**
                     * 判断参数 SitePairCrossZoneCount 是否已赋值
                     * @return SitePairCrossZoneCount 是否已赋值
                     * 
                     */
                    bool SitePairCrossZoneCountHasBeenSet() const;

                    /**
                     * 获取跨云站点对数
                     * @return SitePairCrossCloudCount 跨云站点对数
                     * 
                     */
                    int64_t GetSitePairCrossCloudCount() const;

                    /**
                     * 设置跨云站点对数
                     * @param _sitePairCrossCloudCount 跨云站点对数
                     * 
                     */
                    void SetSitePairCrossCloudCount(const int64_t& _sitePairCrossCloudCount);

                    /**
                     * 判断参数 SitePairCrossCloudCount 是否已赋值
                     * @return SitePairCrossCloudCount 是否已赋值
                     * 
                     */
                    bool SitePairCrossCloudCountHasBeenSet() const;

                    /**
                     * 获取保护组总数
                     * @return ProtectGroupCount 保护组总数
                     * 
                     */
                    int64_t GetProtectGroupCount() const;

                    /**
                     * 设置保护组总数
                     * @param _protectGroupCount 保护组总数
                     * 
                     */
                    void SetProtectGroupCount(const int64_t& _protectGroupCount);

                    /**
                     * 判断参数 ProtectGroupCount 是否已赋值
                     * @return ProtectGroupCount 是否已赋值
                     * 
                     */
                    bool ProtectGroupCountHasBeenSet() const;

                    /**
                     * 获取跨地域保护组数
                     * @return ProtectGroupCrossRegionCount 跨地域保护组数
                     * 
                     */
                    int64_t GetProtectGroupCrossRegionCount() const;

                    /**
                     * 设置跨地域保护组数
                     * @param _protectGroupCrossRegionCount 跨地域保护组数
                     * 
                     */
                    void SetProtectGroupCrossRegionCount(const int64_t& _protectGroupCrossRegionCount);

                    /**
                     * 判断参数 ProtectGroupCrossRegionCount 是否已赋值
                     * @return ProtectGroupCrossRegionCount 是否已赋值
                     * 
                     */
                    bool ProtectGroupCrossRegionCountHasBeenSet() const;

                    /**
                     * 获取跨可用区保护组数
                     * @return ProtectGroupCrossZoneCount 跨可用区保护组数
                     * 
                     */
                    int64_t GetProtectGroupCrossZoneCount() const;

                    /**
                     * 设置跨可用区保护组数
                     * @param _protectGroupCrossZoneCount 跨可用区保护组数
                     * 
                     */
                    void SetProtectGroupCrossZoneCount(const int64_t& _protectGroupCrossZoneCount);

                    /**
                     * 判断参数 ProtectGroupCrossZoneCount 是否已赋值
                     * @return ProtectGroupCrossZoneCount 是否已赋值
                     * 
                     */
                    bool ProtectGroupCrossZoneCountHasBeenSet() const;

                    /**
                     * 获取跨云保护组数
                     * @return ProtectGroupCrossCloudCount 跨云保护组数
                     * 
                     */
                    int64_t GetProtectGroupCrossCloudCount() const;

                    /**
                     * 设置跨云保护组数
                     * @param _protectGroupCrossCloudCount 跨云保护组数
                     * 
                     */
                    void SetProtectGroupCrossCloudCount(const int64_t& _protectGroupCrossCloudCount);

                    /**
                     * 判断参数 ProtectGroupCrossCloudCount 是否已赋值
                     * @return ProtectGroupCrossCloudCount 是否已赋值
                     * 
                     */
                    bool ProtectGroupCrossCloudCountHasBeenSet() const;

                    /**
                     * 获取复制对总数
                     * @return CopyPairCount 复制对总数
                     * 
                     */
                    int64_t GetCopyPairCount() const;

                    /**
                     * 设置复制对总数
                     * @param _copyPairCount 复制对总数
                     * 
                     */
                    void SetCopyPairCount(const int64_t& _copyPairCount);

                    /**
                     * 判断参数 CopyPairCount 是否已赋值
                     * @return CopyPairCount 是否已赋值
                     * 
                     */
                    bool CopyPairCountHasBeenSet() const;

                    /**
                     * 获取RPO 正常的复制对数
                     * @return CopyPairSuccessRPOCount RPO 正常的复制对数
                     * 
                     */
                    int64_t GetCopyPairSuccessRPOCount() const;

                    /**
                     * 设置RPO 正常的复制对数
                     * @param _copyPairSuccessRPOCount RPO 正常的复制对数
                     * 
                     */
                    void SetCopyPairSuccessRPOCount(const int64_t& _copyPairSuccessRPOCount);

                    /**
                     * 判断参数 CopyPairSuccessRPOCount 是否已赋值
                     * @return CopyPairSuccessRPOCount 是否已赋值
                     * 
                     */
                    bool CopyPairSuccessRPOCountHasBeenSet() const;

                    /**
                     * 获取RPO 异常的复制对数
                     * @return CopyPairErrorRPOCount RPO 异常的复制对数
                     * 
                     */
                    int64_t GetCopyPairErrorRPOCount() const;

                    /**
                     * 设置RPO 异常的复制对数
                     * @param _copyPairErrorRPOCount RPO 异常的复制对数
                     * 
                     */
                    void SetCopyPairErrorRPOCount(const int64_t& _copyPairErrorRPOCount);

                    /**
                     * 判断参数 CopyPairErrorRPOCount 是否已赋值
                     * @return CopyPairErrorRPOCount 是否已赋值
                     * 
                     */
                    bool CopyPairErrorRPOCountHasBeenSet() const;

                    /**
                     * 获取演练对总数
                     * @return DrillPairCount 演练对总数
                     * 
                     */
                    int64_t GetDrillPairCount() const;

                    /**
                     * 设置演练对总数
                     * @param _drillPairCount 演练对总数
                     * 
                     */
                    void SetDrillPairCount(const int64_t& _drillPairCount);

                    /**
                     * 判断参数 DrillPairCount 是否已赋值
                     * @return DrillPairCount 是否已赋值
                     * 
                     */
                    bool DrillPairCountHasBeenSet() const;

                    /**
                     * 获取演练中
                     * @return DrillPairDrillingCount 演练中
                     * 
                     */
                    int64_t GetDrillPairDrillingCount() const;

                    /**
                     * 设置演练中
                     * @param _drillPairDrillingCount 演练中
                     * 
                     */
                    void SetDrillPairDrillingCount(const int64_t& _drillPairDrillingCount);

                    /**
                     * 判断参数 DrillPairDrillingCount 是否已赋值
                     * @return DrillPairDrillingCount 是否已赋值
                     * 
                     */
                    bool DrillPairDrillingCountHasBeenSet() const;

                    /**
                     * 获取演练失败
                     * @return DrillPairFailedCount 演练失败
                     * 
                     */
                    int64_t GetDrillPairFailedCount() const;

                    /**
                     * 设置演练失败
                     * @param _drillPairFailedCount 演练失败
                     * 
                     */
                    void SetDrillPairFailedCount(const int64_t& _drillPairFailedCount);

                    /**
                     * 判断参数 DrillPairFailedCount 是否已赋值
                     * @return DrillPairFailedCount 是否已赋值
                     * 
                     */
                    bool DrillPairFailedCountHasBeenSet() const;

                    /**
                     * 获取演练成功
                     * @return DrillPairSuccessCount 演练成功
                     * 
                     */
                    int64_t GetDrillPairSuccessCount() const;

                    /**
                     * 设置演练成功
                     * @param _drillPairSuccessCount 演练成功
                     * 
                     */
                    void SetDrillPairSuccessCount(const int64_t& _drillPairSuccessCount);

                    /**
                     * 判断参数 DrillPairSuccessCount 是否已赋值
                     * @return DrillPairSuccessCount 是否已赋值
                     * 
                     */
                    bool DrillPairSuccessCountHasBeenSet() const;

                    /**
                     * 获取受保护资源总数
                     * @return ProtectedResourceCount 受保护资源总数
                     * 
                     */
                    int64_t GetProtectedResourceCount() const;

                    /**
                     * 设置受保护资源总数
                     * @param _protectedResourceCount 受保护资源总数
                     * 
                     */
                    void SetProtectedResourceCount(const int64_t& _protectedResourceCount);

                    /**
                     * 判断参数 ProtectedResourceCount 是否已赋值
                     * @return ProtectedResourceCount 是否已赋值
                     * 
                     */
                    bool ProtectedResourceCountHasBeenSet() const;

                    /**
                     * 获取受保护资源-复制中
                     * @return ProtectedResourceCopyingCount 受保护资源-复制中
                     * 
                     */
                    int64_t GetProtectedResourceCopyingCount() const;

                    /**
                     * 设置受保护资源-复制中
                     * @param _protectedResourceCopyingCount 受保护资源-复制中
                     * 
                     */
                    void SetProtectedResourceCopyingCount(const int64_t& _protectedResourceCopyingCount);

                    /**
                     * 判断参数 ProtectedResourceCopyingCount 是否已赋值
                     * @return ProtectedResourceCopyingCount 是否已赋值
                     * 
                     */
                    bool ProtectedResourceCopyingCountHasBeenSet() const;

                    /**
                     * 获取受保护资源-已停止/初始化
                     * @return ProtectedResourceStoppedCount 受保护资源-已停止/初始化
                     * 
                     */
                    int64_t GetProtectedResourceStoppedCount() const;

                    /**
                     * 设置受保护资源-已停止/初始化
                     * @param _protectedResourceStoppedCount 受保护资源-已停止/初始化
                     * 
                     */
                    void SetProtectedResourceStoppedCount(const int64_t& _protectedResourceStoppedCount);

                    /**
                     * 判断参数 ProtectedResourceStoppedCount 是否已赋值
                     * @return ProtectedResourceStoppedCount 是否已赋值
                     * 
                     */
                    bool ProtectedResourceStoppedCountHasBeenSet() const;

                    /**
                     * 获取切换失败
                     * @return FailoverFailedCount 切换失败
                     * 
                     */
                    int64_t GetFailoverFailedCount() const;

                    /**
                     * 设置切换失败
                     * @param _failoverFailedCount 切换失败
                     * 
                     */
                    void SetFailoverFailedCount(const int64_t& _failoverFailedCount);

                    /**
                     * 判断参数 FailoverFailedCount 是否已赋值
                     * @return FailoverFailedCount 是否已赋值
                     * 
                     */
                    bool FailoverFailedCountHasBeenSet() const;

                private:

                    /**
                     * 地域 ID
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 站点对总数
                     */
                    int64_t m_sitePairCount;
                    bool m_sitePairCountHasBeenSet;

                    /**
                     * 跨地域站点对数
                     */
                    int64_t m_sitePairCrossRegionCount;
                    bool m_sitePairCrossRegionCountHasBeenSet;

                    /**
                     * 跨可用区站点对数
                     */
                    int64_t m_sitePairCrossZoneCount;
                    bool m_sitePairCrossZoneCountHasBeenSet;

                    /**
                     * 跨云站点对数
                     */
                    int64_t m_sitePairCrossCloudCount;
                    bool m_sitePairCrossCloudCountHasBeenSet;

                    /**
                     * 保护组总数
                     */
                    int64_t m_protectGroupCount;
                    bool m_protectGroupCountHasBeenSet;

                    /**
                     * 跨地域保护组数
                     */
                    int64_t m_protectGroupCrossRegionCount;
                    bool m_protectGroupCrossRegionCountHasBeenSet;

                    /**
                     * 跨可用区保护组数
                     */
                    int64_t m_protectGroupCrossZoneCount;
                    bool m_protectGroupCrossZoneCountHasBeenSet;

                    /**
                     * 跨云保护组数
                     */
                    int64_t m_protectGroupCrossCloudCount;
                    bool m_protectGroupCrossCloudCountHasBeenSet;

                    /**
                     * 复制对总数
                     */
                    int64_t m_copyPairCount;
                    bool m_copyPairCountHasBeenSet;

                    /**
                     * RPO 正常的复制对数
                     */
                    int64_t m_copyPairSuccessRPOCount;
                    bool m_copyPairSuccessRPOCountHasBeenSet;

                    /**
                     * RPO 异常的复制对数
                     */
                    int64_t m_copyPairErrorRPOCount;
                    bool m_copyPairErrorRPOCountHasBeenSet;

                    /**
                     * 演练对总数
                     */
                    int64_t m_drillPairCount;
                    bool m_drillPairCountHasBeenSet;

                    /**
                     * 演练中
                     */
                    int64_t m_drillPairDrillingCount;
                    bool m_drillPairDrillingCountHasBeenSet;

                    /**
                     * 演练失败
                     */
                    int64_t m_drillPairFailedCount;
                    bool m_drillPairFailedCountHasBeenSet;

                    /**
                     * 演练成功
                     */
                    int64_t m_drillPairSuccessCount;
                    bool m_drillPairSuccessCountHasBeenSet;

                    /**
                     * 受保护资源总数
                     */
                    int64_t m_protectedResourceCount;
                    bool m_protectedResourceCountHasBeenSet;

                    /**
                     * 受保护资源-复制中
                     */
                    int64_t m_protectedResourceCopyingCount;
                    bool m_protectedResourceCopyingCountHasBeenSet;

                    /**
                     * 受保护资源-已停止/初始化
                     */
                    int64_t m_protectedResourceStoppedCount;
                    bool m_protectedResourceStoppedCountHasBeenSet;

                    /**
                     * 切换失败
                     */
                    int64_t m_failoverFailedCount;
                    bool m_failoverFailedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DISASTERRECOVERYOVERVIEW_H_
