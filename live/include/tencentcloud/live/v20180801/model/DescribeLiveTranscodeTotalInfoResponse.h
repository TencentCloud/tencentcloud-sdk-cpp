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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFORESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/TranscodeTotalInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveTranscodeTotalInfo返回参数结构体
                */
                class DescribeLiveTranscodeTotalInfoResponse : public AbstractModel
                {
                public:
                    DescribeLiveTranscodeTotalInfoResponse();
                    ~DescribeLiveTranscodeTotalInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统计数据列表。
                     * @return DataInfoList 统计数据列表。
                     * 
                     */
                    std::vector<TranscodeTotalInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                private:

                    /**
                     * 统计数据列表。
                     */
                    std::vector<TranscodeTotalInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFORESPONSE_H_
