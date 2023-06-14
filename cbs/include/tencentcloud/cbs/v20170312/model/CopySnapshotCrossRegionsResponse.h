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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/SnapshotCopyResult.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CopySnapshotCrossRegions返回参数结构体
                */
                class CopySnapshotCrossRegionsResponse : public AbstractModel
                {
                public:
                    CopySnapshotCrossRegionsResponse();
                    ~CopySnapshotCrossRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取快照跨地域复制的结果，如果请求下发成功，则返回相应地地域的新快照ID，否则返回Error。
                     * @return SnapshotCopyResultSet 快照跨地域复制的结果，如果请求下发成功，则返回相应地地域的新快照ID，否则返回Error。
                     * 
                     */
                    std::vector<SnapshotCopyResult> GetSnapshotCopyResultSet() const;

                    /**
                     * 判断参数 SnapshotCopyResultSet 是否已赋值
                     * @return SnapshotCopyResultSet 是否已赋值
                     * 
                     */
                    bool SnapshotCopyResultSetHasBeenSet() const;

                private:

                    /**
                     * 快照跨地域复制的结果，如果请求下发成功，则返回相应地地域的新快照ID，否则返回Error。
                     */
                    std::vector<SnapshotCopyResult> m_snapshotCopyResultSet;
                    bool m_snapshotCopyResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSRESPONSE_H_
