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

#ifndef TENCENTCLOUD_BIZLIVE_V20190313_MODEL_DESCRIBESTREAMPLAYINFOLISTRESPONSE_H_
#define TENCENTCLOUD_BIZLIVE_V20190313_MODEL_DESCRIBESTREAMPLAYINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bizlive/v20190313/model/DayStreamPlayInfo.h>


namespace TencentCloud
{
    namespace Bizlive
    {
        namespace V20190313
        {
            namespace Model
            {
                /**
                * DescribeStreamPlayInfoList返回参数结构体
                */
                class DescribeStreamPlayInfoListResponse : public AbstractModel
                {
                public:
                    DescribeStreamPlayInfoListResponse();
                    ~DescribeStreamPlayInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统计信息列表。
                     * @return DataInfoList 统计信息列表。
                     * 
                     */
                    std::vector<DayStreamPlayInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                private:

                    /**
                     * 统计信息列表。
                     */
                    std::vector<DayStreamPlayInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BIZLIVE_V20190313_MODEL_DESCRIBESTREAMPLAYINFOLISTRESPONSE_H_
