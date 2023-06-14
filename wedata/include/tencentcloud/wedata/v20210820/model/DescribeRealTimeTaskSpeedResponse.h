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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALTIMETASKSPEEDRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALTIMETASKSPEEDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordsSpeed.h>
#include <tencentcloud/wedata/v20210820/model/BytesSpeed.h>
#include <tencentcloud/wedata/v20210820/model/RealTimeTaskSpeed.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRealTimeTaskSpeed返回参数结构体
                */
                class DescribeRealTimeTaskSpeedResponse : public AbstractModel
                {
                public:
                    DescribeRealTimeTaskSpeedResponse();
                    ~DescribeRealTimeTaskSpeedResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取同步速度条/s列表
                     * @return RecordsSpeedList 同步速度条/s列表
                     * 
                     */
                    std::vector<RecordsSpeed> GetRecordsSpeedList() const;

                    /**
                     * 判断参数 RecordsSpeedList 是否已赋值
                     * @return RecordsSpeedList 是否已赋值
                     * 
                     */
                    bool RecordsSpeedListHasBeenSet() const;

                    /**
                     * 获取同步速度字节/s列表
                     * @return BytesSpeedList 同步速度字节/s列表
                     * 
                     */
                    std::vector<BytesSpeed> GetBytesSpeedList() const;

                    /**
                     * 判断参数 BytesSpeedList 是否已赋值
                     * @return BytesSpeedList 是否已赋值
                     * 
                     */
                    bool BytesSpeedListHasBeenSet() const;

                    /**
                     * 获取同步速度，包括了RecordsSpeedList和BytesSpeedList
                     * @return Data 同步速度，包括了RecordsSpeedList和BytesSpeedList
                     * 
                     */
                    RealTimeTaskSpeed GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 同步速度条/s列表
                     */
                    std::vector<RecordsSpeed> m_recordsSpeedList;
                    bool m_recordsSpeedListHasBeenSet;

                    /**
                     * 同步速度字节/s列表
                     */
                    std::vector<BytesSpeed> m_bytesSpeedList;
                    bool m_bytesSpeedListHasBeenSet;

                    /**
                     * 同步速度，包括了RecordsSpeedList和BytesSpeedList
                     */
                    RealTimeTaskSpeed m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALTIMETASKSPEEDRESPONSE_H_
