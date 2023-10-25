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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATARESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/DetailedSingleDataDefine.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeDetailedSingleProbeData返回参数结构体
                */
                class DescribeDetailedSingleProbeDataResponse : public AbstractModel
                {
                public:
                    DescribeDetailedSingleProbeDataResponse();
                    ~DescribeDetailedSingleProbeDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取单次详情数据
                     * @return DataSet 单次详情数据
                     * 
                     */
                    std::vector<DetailedSingleDataDefine> GetDataSet() const;

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                    /**
                     * 获取符合条件的数据总数
                     * @return TotalNumber 符合条件的数据总数
                     * 
                     */
                    int64_t GetTotalNumber() const;

                    /**
                     * 判断参数 TotalNumber 是否已赋值
                     * @return TotalNumber 是否已赋值
                     * 
                     */
                    bool TotalNumberHasBeenSet() const;

                    /**
                     * 获取es scroll查询的id
                     * @return ScrollID es scroll查询的id
                     * 
                     */
                    std::string GetScrollID() const;

                    /**
                     * 判断参数 ScrollID 是否已赋值
                     * @return ScrollID 是否已赋值
                     * 
                     */
                    bool ScrollIDHasBeenSet() const;

                private:

                    /**
                     * 单次详情数据
                     */
                    std::vector<DetailedSingleDataDefine> m_dataSet;
                    bool m_dataSetHasBeenSet;

                    /**
                     * 符合条件的数据总数
                     */
                    int64_t m_totalNumber;
                    bool m_totalNumberHasBeenSet;

                    /**
                     * es scroll查询的id
                     */
                    std::string m_scrollID;
                    bool m_scrollIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATARESPONSE_H_
