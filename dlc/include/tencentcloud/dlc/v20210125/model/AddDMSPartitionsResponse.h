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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ADDDMSPARTITIONSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ADDDMSPARTITIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DMSPartition.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * AddDMSPartitions返回参数结构体
                */
                class AddDMSPartitionsResponse : public AbstractModel
                {
                public:
                    AddDMSPartitionsResponse();
                    ~AddDMSPartitionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功数量
                     * @return Total 成功数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取分区值
                     * @return Partitions 分区值
                     * 
                     */
                    std::vector<DMSPartition> GetPartitions() const;

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                private:

                    /**
                     * 成功数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 分区值
                     */
                    std::vector<DMSPartition> m_partitions;
                    bool m_partitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ADDDMSPARTITIONSRESPONSE_H_
