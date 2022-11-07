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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEREPORTWRITENODE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEREPORTWRITENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 离线任务实例写入节点的运行指标
                */
                class InstanceReportWriteNode : public AbstractModel
                {
                public:
                    InstanceReportWriteNode();
                    ~InstanceReportWriteNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param NodeName 节点名称
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取数据来源
                     * @return DataSource 数据来源
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置数据来源
                     * @param DataSource 数据来源
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return TotalWriteRecords 总条数
                     */
                    uint64_t GetTotalWriteRecords() const;

                    /**
                     * 设置总条数
                     * @param TotalWriteRecords 总条数
                     */
                    void SetTotalWriteRecords(const uint64_t& _totalWriteRecords);

                    /**
                     * 判断参数 TotalWriteRecords 是否已赋值
                     * @return TotalWriteRecords 是否已赋值
                     */
                    bool TotalWriteRecordsHasBeenSet() const;

                    /**
                     * 获取总字节数
                     * @return TotalWriteBytes 总字节数
                     */
                    uint64_t GetTotalWriteBytes() const;

                    /**
                     * 设置总字节数
                     * @param TotalWriteBytes 总字节数
                     */
                    void SetTotalWriteBytes(const uint64_t& _totalWriteBytes);

                    /**
                     * 判断参数 TotalWriteBytes 是否已赋值
                     * @return TotalWriteBytes 是否已赋值
                     */
                    bool TotalWriteBytesHasBeenSet() const;

                    /**
                     * 获取速度（条/秒）
                     * @return RecordSpeed 速度（条/秒）
                     */
                    uint64_t GetRecordSpeed() const;

                    /**
                     * 设置速度（条/秒）
                     * @param RecordSpeed 速度（条/秒）
                     */
                    void SetRecordSpeed(const uint64_t& _recordSpeed);

                    /**
                     * 判断参数 RecordSpeed 是否已赋值
                     * @return RecordSpeed 是否已赋值
                     */
                    bool RecordSpeedHasBeenSet() const;

                    /**
                     * 获取吞吐（Byte/秒）
                     * @return ByteSpeed 吞吐（Byte/秒）
                     */
                    double GetByteSpeed() const;

                    /**
                     * 设置吞吐（Byte/秒）
                     * @param ByteSpeed 吞吐（Byte/秒）
                     */
                    void SetByteSpeed(const double& _byteSpeed);

                    /**
                     * 判断参数 ByteSpeed 是否已赋值
                     * @return ByteSpeed 是否已赋值
                     */
                    bool ByteSpeedHasBeenSet() const;

                    /**
                     * 获取脏数据条数
                     * @return TotalErrorRecords 脏数据条数
                     */
                    uint64_t GetTotalErrorRecords() const;

                    /**
                     * 设置脏数据条数
                     * @param TotalErrorRecords 脏数据条数
                     */
                    void SetTotalErrorRecords(const uint64_t& _totalErrorRecords);

                    /**
                     * 判断参数 TotalErrorRecords 是否已赋值
                     * @return TotalErrorRecords 是否已赋值
                     */
                    bool TotalErrorRecordsHasBeenSet() const;

                private:

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 数据来源
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * 总条数
                     */
                    uint64_t m_totalWriteRecords;
                    bool m_totalWriteRecordsHasBeenSet;

                    /**
                     * 总字节数
                     */
                    uint64_t m_totalWriteBytes;
                    bool m_totalWriteBytesHasBeenSet;

                    /**
                     * 速度（条/秒）
                     */
                    uint64_t m_recordSpeed;
                    bool m_recordSpeedHasBeenSet;

                    /**
                     * 吞吐（Byte/秒）
                     */
                    double m_byteSpeed;
                    bool m_byteSpeedHasBeenSet;

                    /**
                     * 脏数据条数
                     */
                    uint64_t m_totalErrorRecords;
                    bool m_totalErrorRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEREPORTWRITENODE_H_
