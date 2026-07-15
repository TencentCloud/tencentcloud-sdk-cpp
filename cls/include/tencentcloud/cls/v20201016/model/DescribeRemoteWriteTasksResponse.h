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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREMOTEWRITETASKSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREMOTEWRITETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/RemoteWriteInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeRemoteWriteTasks返回参数结构体
                */
                class DescribeRemoteWriteTasksResponse : public AbstractModel
                {
                public:
                    DescribeRemoteWriteTasksResponse();
                    ~DescribeRemoteWriteTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RemoteWrite 信息列表
                     * @return Infos RemoteWrite 信息列表
                     * 
                     */
                    std::vector<RemoteWriteInfo> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                    /**
                     * 获取RemoteWrite信息总条数
                     * @return TotalCount RemoteWrite信息总条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * RemoteWrite 信息列表
                     */
                    std::vector<RemoteWriteInfo> m_infos;
                    bool m_infosHasBeenSet;

                    /**
                     * RemoteWrite信息总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEREMOTEWRITETASKSRESPONSE_H_
