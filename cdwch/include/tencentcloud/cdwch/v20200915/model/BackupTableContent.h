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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_BACKUPTABLECONTENT_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_BACKUPTABLECONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 备份表信息
                */
                class BackupTableContent : public AbstractModel
                {
                public:
                    BackupTableContent();
                    ~BackupTableContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库
                     * @return Database 数据库
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库
                     * @param _database 数据库
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取表
                     * @return Table 表
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置表
                     * @param _table 表
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取表总字节数
                     * @return TotalBytes 表总字节数
                     * 
                     */
                    int64_t GetTotalBytes() const;

                    /**
                     * 设置表总字节数
                     * @param _totalBytes 表总字节数
                     * 
                     */
                    void SetTotalBytes(const int64_t& _totalBytes);

                    /**
                     * 判断参数 TotalBytes 是否已赋值
                     * @return TotalBytes 是否已赋值
                     * 
                     */
                    bool TotalBytesHasBeenSet() const;

                    /**
                     * 获取虚拟cluster
                     * @return VCluster 虚拟cluster
                     * 
                     */
                    std::string GetVCluster() const;

                    /**
                     * 设置虚拟cluster
                     * @param _vCluster 虚拟cluster
                     * 
                     */
                    void SetVCluster(const std::string& _vCluster);

                    /**
                     * 判断参数 VCluster 是否已赋值
                     * @return VCluster 是否已赋值
                     * 
                     */
                    bool VClusterHasBeenSet() const;

                    /**
                     * 获取表ip
                     * @return Ips 表ip
                     * 
                     */
                    std::string GetIps() const;

                    /**
                     * 设置表ip
                     * @param _ips 表ip
                     * 
                     */
                    void SetIps(const std::string& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                    /**
                     * 获取zk路径
                     * @return ZooPath zk路径
                     * 
                     */
                    std::string GetZooPath() const;

                    /**
                     * 设置zk路径
                     * @param _zooPath zk路径
                     * 
                     */
                    void SetZooPath(const std::string& _zooPath);

                    /**
                     * 判断参数 ZooPath 是否已赋值
                     * @return ZooPath 是否已赋值
                     * 
                     */
                    bool ZooPathHasBeenSet() const;

                    /**
                     * 获取cvm的ip地址
                     * @return Rip cvm的ip地址
                     * 
                     */
                    std::string GetRip() const;

                    /**
                     * 设置cvm的ip地址
                     * @param _rip cvm的ip地址
                     * 
                     */
                    void SetRip(const std::string& _rip);

                    /**
                     * 判断参数 Rip 是否已赋值
                     * @return Rip 是否已赋值
                     * 
                     */
                    bool RipHasBeenSet() const;

                private:

                    /**
                     * 数据库
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 表
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 表总字节数
                     */
                    int64_t m_totalBytes;
                    bool m_totalBytesHasBeenSet;

                    /**
                     * 虚拟cluster
                     */
                    std::string m_vCluster;
                    bool m_vClusterHasBeenSet;

                    /**
                     * 表ip
                     */
                    std::string m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * zk路径
                     */
                    std::string m_zooPath;
                    bool m_zooPathHasBeenSet;

                    /**
                     * cvm的ip地址
                     */
                    std::string m_rip;
                    bool m_ripHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_BACKUPTABLECONTENT_H_
