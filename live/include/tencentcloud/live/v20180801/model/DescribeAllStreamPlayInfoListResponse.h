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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEALLSTREAMPLAYINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEALLSTREAMPLAYINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/MonitorStreamPlayInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeAllStreamPlayInfoList返回参数结构体
                */
                class DescribeAllStreamPlayInfoListResponse : public AbstractModel
                {
                public:
                    DescribeAllStreamPlayInfoListResponse();
                    ~DescribeAllStreamPlayInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询时间点，回传的输入参数中的查询时间。
                     * @return QueryTime 查询时间点，回传的输入参数中的查询时间。
                     * 
                     */
                    std::string GetQueryTime() const;

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取数据信息列表。
                     * @return DataInfoList 数据信息列表。
                     * 
                     */
                    std::vector<MonitorStreamPlayInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                private:

                    /**
                     * 查询时间点，回传的输入参数中的查询时间。
                     */
                    std::string m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * 数据信息列表。
                     */
                    std::vector<MonitorStreamPlayInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEALLSTREAMPLAYINFOLISTRESPONSE_H_
