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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATAFLOWREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATAFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeDataFlow请求参数结构体
                */
                class DescribeDataFlowRequest : public AbstractModel
                {
                public:
                    DescribeDataFlowRequest();
                    ~DescribeDataFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     * @return FileSystemId 文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     * @param _fileSystemId 文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取数据流动 ID ，由创建数据流动返回
                     * @return DataFlowId 数据流动 ID ，由创建数据流动返回
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置数据流动 ID ，由创建数据流动返回
                     * @param _dataFlowId 数据流动 ID ，由创建数据流动返回
                     * 
                     */
                    void SetDataFlowId(const std::string& _dataFlowId);

                    /**
                     * 判断参数 DataFlowId 是否已赋值
                     * @return DataFlowId 是否已赋值
                     * 
                     */
                    bool DataFlowIdHasBeenSet() const;

                    /**
                     * 获取每次查询返回值个数，默认20；最大100
                     * @return Limit 每次查询返回值个数，默认20；最大100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每次查询返回值个数，默认20；最大100
                     * @param _limit 每次查询返回值个数，默认20；最大100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取文件系统版本；版本号：v1.5，v3.0，v3.1，v4.0
                     * @return CfsVersion 文件系统版本；版本号：v1.5，v3.0，v3.1，v4.0
                     * 
                     */
                    std::string GetCfsVersion() const;

                    /**
                     * 设置文件系统版本；版本号：v1.5，v3.0，v3.1，v4.0
                     * @param _cfsVersion 文件系统版本；版本号：v1.5，v3.0，v3.1，v4.0
                     * 
                     */
                    void SetCfsVersion(const std::string& _cfsVersion);

                    /**
                     * 判断参数 CfsVersion 是否已赋值
                     * @return CfsVersion 是否已赋值
                     * 
                     */
                    bool CfsVersionHasBeenSet() const;

                private:

                    /**
                     * 文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 数据流动 ID ，由创建数据流动返回
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * 每次查询返回值个数，默认20；最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 文件系统版本；版本号：v1.5，v3.0，v3.1，v4.0
                     */
                    std::string m_cfsVersion;
                    bool m_cfsVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATAFLOWREQUEST_H_
