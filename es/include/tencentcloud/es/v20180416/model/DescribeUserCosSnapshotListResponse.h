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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUSERCOSSNAPSHOTLISTRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUSERCOSSNAPSHOTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/CosSnapShotInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeUserCosSnapshotList返回参数结构体
                */
                class DescribeUserCosSnapshotListResponse : public AbstractModel
                {
                public:
                    DescribeUserCosSnapshotListResponse();
                    ~DescribeUserCosSnapshotListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取cos 快照信息列表
                     * @return CosSnapshotInfoList cos 快照信息列表
                     * 
                     */
                    std::vector<CosSnapShotInfo> GetCosSnapshotInfoList() const;

                    /**
                     * 判断参数 CosSnapshotInfoList 是否已赋值
                     * @return CosSnapshotInfoList 是否已赋值
                     * 
                     */
                    bool CosSnapshotInfoListHasBeenSet() const;

                    /**
                     * 获取cos 快照数量
                     * @return TotalCount cos 快照数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * cos 快照信息列表
                     */
                    std::vector<CosSnapShotInfo> m_cosSnapshotInfoList;
                    bool m_cosSnapshotInfoListHasBeenSet;

                    /**
                     * cos 快照数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUSERCOSSNAPSHOTLISTRESPONSE_H_
