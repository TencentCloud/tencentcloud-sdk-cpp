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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MYSQLCLUSTERDETAIL_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MYSQLCLUSTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MySQLNetDetail.h>
#include <tencentcloud/tcb/v20180608/model/ClusterDetail.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * MySql 集群详情
                */
                class MySQLClusterDetail : public AbstractModel
                {
                public:
                    MySQLClusterDetail();
                    ~MySQLClusterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return DbClusterId 集群ID
                     * 
                     */
                    std::string GetDbClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _dbClusterId 集群ID
                     * 
                     */
                    void SetDbClusterId(const std::string& _dbClusterId);

                    /**
                     * 判断参数 DbClusterId 是否已赋值
                     * @return DbClusterId 是否已赋值
                     * 
                     */
                    bool DbClusterIdHasBeenSet() const;

                    /**
                     * 获取网络详情
                     * @return NetInfo 网络详情
                     * 
                     */
                    MySQLNetDetail GetNetInfo() const;

                    /**
                     * 设置网络详情
                     * @param _netInfo 网络详情
                     * 
                     */
                    void SetNetInfo(const MySQLNetDetail& _netInfo);

                    /**
                     * 判断参数 NetInfo 是否已赋值
                     * @return NetInfo 是否已赋值
                     * 
                     */
                    bool NetInfoHasBeenSet() const;

                    /**
                     * 获取数据库详情
                     * @return DbInfo 数据库详情
                     * 
                     */
                    ClusterDetail GetDbInfo() const;

                    /**
                     * 设置数据库详情
                     * @param _dbInfo 数据库详情
                     * 
                     */
                    void SetDbInfo(const ClusterDetail& _dbInfo);

                    /**
                     * 判断参数 DbInfo 是否已赋值
                     * @return DbInfo 是否已赋值
                     * 
                     */
                    bool DbInfoHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_dbClusterId;
                    bool m_dbClusterIdHasBeenSet;

                    /**
                     * 网络详情
                     */
                    MySQLNetDetail m_netInfo;
                    bool m_netInfoHasBeenSet;

                    /**
                     * 数据库详情
                     */
                    ClusterDetail m_dbInfo;
                    bool m_dbInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MYSQLCLUSTERDETAIL_H_
