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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBINLOGSAVEDAYSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBINLOGSAVEDAYSREQUEST_H_

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
                * ModifyBinlogSaveDays请求参数结构体
                */
                class ModifyBinlogSaveDaysRequest : public AbstractModel
                {
                public:
                    ModifyBinlogSaveDaysRequest();
                    ~ModifyBinlogSaveDaysRequest() = default;
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
                     * 获取<p>Binlog保留天数</p>
                     * @return BinlogSaveDays <p>Binlog保留天数</p>
                     * 
                     */
                    int64_t GetBinlogSaveDays() const;

                    /**
                     * 设置<p>Binlog保留天数</p>
                     * @param _binlogSaveDays <p>Binlog保留天数</p>
                     * 
                     */
                    void SetBinlogSaveDays(const int64_t& _binlogSaveDays);

                    /**
                     * 判断参数 BinlogSaveDays 是否已赋值
                     * @return BinlogSaveDays 是否已赋值
                     * 
                     */
                    bool BinlogSaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份保留时间</p><p>单位：天</p>
                     * @return BinlogCrossRegionSaveDays <p>跨地域备份保留时间</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetBinlogCrossRegionSaveDays() const;

                    /**
                     * 设置<p>跨地域备份保留时间</p><p>单位：天</p>
                     * @param _binlogCrossRegionSaveDays <p>跨地域备份保留时间</p><p>单位：天</p>
                     * 
                     */
                    void SetBinlogCrossRegionSaveDays(const int64_t& _binlogCrossRegionSaveDays);

                    /**
                     * 判断参数 BinlogCrossRegionSaveDays 是否已赋值
                     * @return BinlogCrossRegionSaveDays 是否已赋值
                     * 
                     */
                    bool BinlogCrossRegionSaveDaysHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Binlog保留天数</p>
                     */
                    int64_t m_binlogSaveDays;
                    bool m_binlogSaveDaysHasBeenSet;

                    /**
                     * <p>跨地域备份保留时间</p><p>单位：天</p>
                     */
                    int64_t m_binlogCrossRegionSaveDays;
                    bool m_binlogCrossRegionSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBINLOGSAVEDAYSREQUEST_H_
