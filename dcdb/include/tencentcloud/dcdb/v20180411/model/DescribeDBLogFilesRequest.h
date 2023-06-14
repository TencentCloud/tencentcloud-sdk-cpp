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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBLOGFILESREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBLOGFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDBLogFiles请求参数结构体
                */
                class DescribeDBLogFilesRequest : public AbstractModel
                {
                public:
                    DescribeDBLogFilesRequest();
                    ~DescribeDBLogFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：dcdbt-ow7t8lmc。
                     * @return InstanceId 实例 ID，形如：dcdbt-ow7t8lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：dcdbt-ow7t8lmc。
                     * @param _instanceId 实例 ID，形如：dcdbt-ow7t8lmc。
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
                     * 获取分片 ID，形如：shard-7noic7tv
                     * @return ShardId 分片 ID，形如：shard-7noic7tv
                     * 
                     */
                    std::string GetShardId() const;

                    /**
                     * 设置分片 ID，形如：shard-7noic7tv
                     * @param _shardId 分片 ID，形如：shard-7noic7tv
                     * 
                     */
                    void SetShardId(const std::string& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取请求日志类型，取值只能为1、2、3或者4。1-binlog，2-冷备，3-errlog，4-slowlog。
                     * @return Type 请求日志类型，取值只能为1、2、3或者4。1-binlog，2-冷备，3-errlog，4-slowlog。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置请求日志类型，取值只能为1、2、3或者4。1-binlog，2-冷备，3-errlog，4-slowlog。
                     * @param _type 请求日志类型，取值只能为1、2、3或者4。1-binlog，2-冷备，3-errlog，4-slowlog。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：dcdbt-ow7t8lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分片 ID，形如：shard-7noic7tv
                     */
                    std::string m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 请求日志类型，取值只能为1、2、3或者4。1-binlog，2-冷备，3-errlog，4-slowlog。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBLOGFILESREQUEST_H_
