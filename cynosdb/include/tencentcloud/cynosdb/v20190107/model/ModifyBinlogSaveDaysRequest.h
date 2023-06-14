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
                     * 获取Binlog保留天数
                     * @return BinlogSaveDays Binlog保留天数
                     * 
                     */
                    int64_t GetBinlogSaveDays() const;

                    /**
                     * 设置Binlog保留天数
                     * @param _binlogSaveDays Binlog保留天数
                     * 
                     */
                    void SetBinlogSaveDays(const int64_t& _binlogSaveDays);

                    /**
                     * 判断参数 BinlogSaveDays 是否已赋值
                     * @return BinlogSaveDays 是否已赋值
                     * 
                     */
                    bool BinlogSaveDaysHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Binlog保留天数
                     */
                    int64_t m_binlogSaveDays;
                    bool m_binlogSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBINLOGSAVEDAYSREQUEST_H_
