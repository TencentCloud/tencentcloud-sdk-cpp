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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_RUNDATARETRIEVALTASKREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_RUNDATARETRIEVALTASKREQUEST_H_

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
                * RunDataRetrievalTask请求参数结构体
                */
                class RunDataRetrievalTaskRequest : public AbstractModel
                {
                public:
                    RunDataRetrievalTaskRequest();
                    ~RunDataRetrievalTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据检索 ID。可通过 DescribeDataRetrieval 接口获取。</p>
                     * @return DataRetrievalId <p>数据检索 ID。可通过 DescribeDataRetrieval 接口获取。</p>
                     * 
                     */
                    std::string GetDataRetrievalId() const;

                    /**
                     * 设置<p>数据检索 ID。可通过 DescribeDataRetrieval 接口获取。</p>
                     * @param _dataRetrievalId <p>数据检索 ID。可通过 DescribeDataRetrieval 接口获取。</p>
                     * 
                     */
                    void SetDataRetrievalId(const std::string& _dataRetrievalId);

                    /**
                     * 判断参数 DataRetrievalId 是否已赋值
                     * @return DataRetrievalId 是否已赋值
                     * 
                     */
                    bool DataRetrievalIdHasBeenSet() const;

                private:

                    /**
                     * <p>数据检索 ID。可通过 DescribeDataRetrieval 接口获取。</p>
                     */
                    std::string m_dataRetrievalId;
                    bool m_dataRetrievalIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_RUNDATARETRIEVALTASKREQUEST_H_
