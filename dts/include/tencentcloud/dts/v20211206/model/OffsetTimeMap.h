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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_OFFSETTIMEMAP_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_OFFSETTIMEMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据订阅kafka分区中checkpoint信息
                */
                class OffsetTimeMap : public AbstractModel
                {
                public:
                    OffsetTimeMap();
                    ~OffsetTimeMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取kafka分区编号
                     * @return PartitionNo kafka分区编号
                     * 
                     */
                    uint64_t GetPartitionNo() const;

                    /**
                     * 设置kafka分区编号
                     * @param _partitionNo kafka分区编号
                     * 
                     */
                    void SetPartitionNo(const uint64_t& _partitionNo);

                    /**
                     * 判断参数 PartitionNo 是否已赋值
                     * @return PartitionNo 是否已赋值
                     * 
                     */
                    bool PartitionNoHasBeenSet() const;

                    /**
                     * 获取kafka offset
                     * @return Offset kafka offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置kafka offset
                     * @param _offset kafka offset
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * kafka分区编号
                     */
                    uint64_t m_partitionNo;
                    bool m_partitionNoHasBeenSet;

                    /**
                     * kafka offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OFFSETTIMEMAP_H_
