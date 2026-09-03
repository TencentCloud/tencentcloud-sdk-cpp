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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEREDISBIGKEYANALYSISTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEREDISBIGKEYANALYSISTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CreateRedisBigKeyAnalysisTask请求参数结构体
                */
                class CreateRedisBigKeyAnalysisTaskRequest : public AbstractModel
                {
                public:
                    CreateRedisBigKeyAnalysisTaskRequest();
                    ~CreateRedisBigKeyAnalysisTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * @return InstanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * @param _instanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务产品类型，支持值包括 &quot;redis&quot; - 云数据库 Redis。</p>
                     * @return Product <p>服务产品类型，支持值包括 &quot;redis&quot; - 云数据库 Redis。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值包括 &quot;redis&quot; - 云数据库 Redis。</p>
                     * @param _product <p>服务产品类型，支持值包括 &quot;redis&quot; - 云数据库 Redis。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>分片节点序号列表。当列表为空时，选择所有分片节点。</p>
                     * @return ShardIds <p>分片节点序号列表。当列表为空时，选择所有分片节点。</p>
                     * 
                     */
                    std::vector<int64_t> GetShardIds() const;

                    /**
                     * 设置<p>分片节点序号列表。当列表为空时，选择所有分片节点。</p>
                     * @param _shardIds <p>分片节点序号列表。当列表为空时，选择所有分片节点。</p>
                     * 
                     */
                    void SetShardIds(const std::vector<int64_t>& _shardIds);

                    /**
                     * 判断参数 ShardIds 是否已赋值
                     * @return ShardIds 是否已赋值
                     * 
                     */
                    bool ShardIdsHasBeenSet() const;

                    /**
                     * 获取<p>Top Key前缀的分隔符列表。<br>目前仅支持以下分割符：[&quot;,&quot;, &quot;;&quot;, &quot;:&quot;, &quot;_&quot;, &quot;-&quot;, &quot;+&quot;, &quot;@&quot;, &quot;=&quot;, &quot;|&quot;, &quot;#&quot;, &quot;.&quot;]，当列表为空时，默认选择所有分隔符。</p>
                     * @return KeyDelimiterList <p>Top Key前缀的分隔符列表。<br>目前仅支持以下分割符：[&quot;,&quot;, &quot;;&quot;, &quot;:&quot;, &quot;_&quot;, &quot;-&quot;, &quot;+&quot;, &quot;@&quot;, &quot;=&quot;, &quot;|&quot;, &quot;#&quot;, &quot;.&quot;]，当列表为空时，默认选择所有分隔符。</p>
                     * 
                     */
                    std::vector<std::string> GetKeyDelimiterList() const;

                    /**
                     * 设置<p>Top Key前缀的分隔符列表。<br>目前仅支持以下分割符：[&quot;,&quot;, &quot;;&quot;, &quot;:&quot;, &quot;_&quot;, &quot;-&quot;, &quot;+&quot;, &quot;@&quot;, &quot;=&quot;, &quot;|&quot;, &quot;#&quot;, &quot;.&quot;]，当列表为空时，默认选择所有分隔符。</p>
                     * @param _keyDelimiterList <p>Top Key前缀的分隔符列表。<br>目前仅支持以下分割符：[&quot;,&quot;, &quot;;&quot;, &quot;:&quot;, &quot;_&quot;, &quot;-&quot;, &quot;+&quot;, &quot;@&quot;, &quot;=&quot;, &quot;|&quot;, &quot;#&quot;, &quot;.&quot;]，当列表为空时，默认选择所有分隔符。</p>
                     * 
                     */
                    void SetKeyDelimiterList(const std::vector<std::string>& _keyDelimiterList);

                    /**
                     * 判断参数 KeyDelimiterList 是否已赋值
                     * @return KeyDelimiterList 是否已赋值
                     * 
                     */
                    bool KeyDelimiterListHasBeenSet() const;

                    /**
                     * 获取<p>历史备份文件ID</p>
                     * @return BackupId <p>历史备份文件ID</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>历史备份文件ID</p>
                     * @param _backupId <p>历史备份文件ID</p>
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值包括 &quot;redis&quot; - 云数据库 Redis。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>分片节点序号列表。当列表为空时，选择所有分片节点。</p>
                     */
                    std::vector<int64_t> m_shardIds;
                    bool m_shardIdsHasBeenSet;

                    /**
                     * <p>Top Key前缀的分隔符列表。<br>目前仅支持以下分割符：[&quot;,&quot;, &quot;;&quot;, &quot;:&quot;, &quot;_&quot;, &quot;-&quot;, &quot;+&quot;, &quot;@&quot;, &quot;=&quot;, &quot;|&quot;, &quot;#&quot;, &quot;.&quot;]，当列表为空时，默认选择所有分隔符。</p>
                     */
                    std::vector<std::string> m_keyDelimiterList;
                    bool m_keyDelimiterListHasBeenSet;

                    /**
                     * <p>历史备份文件ID</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEREDISBIGKEYANALYSISTASKREQUEST_H_
