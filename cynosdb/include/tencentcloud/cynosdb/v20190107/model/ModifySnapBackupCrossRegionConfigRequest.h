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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSNAPBACKUPCROSSREGIONCONFIGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSNAPBACKUPCROSSREGIONCONFIGREQUEST_H_

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
                * ModifySnapBackupCrossRegionConfig请求参数结构体
                */
                class ModifySnapBackupCrossRegionConfigRequest : public AbstractModel
                {
                public:
                    ModifySnapBackupCrossRegionConfigRequest();
                    ~ModifySnapBackupCrossRegionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>是否开启跨地域快照备份ON/OFF</p>
                     * @return CrossRegionsEnable <p>是否开启跨地域快照备份ON/OFF</p>
                     * 
                     */
                    std::string GetCrossRegionsEnable() const;

                    /**
                     * 设置<p>是否开启跨地域快照备份ON/OFF</p>
                     * @param _crossRegionsEnable <p>是否开启跨地域快照备份ON/OFF</p>
                     * 
                     */
                    void SetCrossRegionsEnable(const std::string& _crossRegionsEnable);

                    /**
                     * 判断参数 CrossRegionsEnable 是否已赋值
                     * @return CrossRegionsEnable 是否已赋值
                     * 
                     */
                    bool CrossRegionsEnableHasBeenSet() const;

                    /**
                     * 获取<p>快照备份所跨地域</p>
                     * @return CrossRegions <p>快照备份所跨地域</p>
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置<p>快照备份所跨地域</p>
                     * @param _crossRegions <p>快照备份所跨地域</p>
                     * 
                     */
                    void SetCrossRegions(const std::vector<std::string>& _crossRegions);

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份保留时间</p><p>单位：天</p>
                     * @return CrossRegionSaveDays <p>跨地域备份保留时间</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetCrossRegionSaveDays() const;

                    /**
                     * 设置<p>跨地域备份保留时间</p><p>单位：天</p>
                     * @param _crossRegionSaveDays <p>跨地域备份保留时间</p><p>单位：天</p>
                     * 
                     */
                    void SetCrossRegionSaveDays(const int64_t& _crossRegionSaveDays);

                    /**
                     * 判断参数 CrossRegionSaveDays 是否已赋值
                     * @return CrossRegionSaveDays 是否已赋值
                     * 
                     */
                    bool CrossRegionSaveDaysHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>是否开启跨地域快照备份ON/OFF</p>
                     */
                    std::string m_crossRegionsEnable;
                    bool m_crossRegionsEnableHasBeenSet;

                    /**
                     * <p>快照备份所跨地域</p>
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * <p>跨地域备份保留时间</p><p>单位：天</p>
                     */
                    int64_t m_crossRegionSaveDays;
                    bool m_crossRegionSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYSNAPBACKUPCROSSREGIONCONFIGREQUEST_H_
