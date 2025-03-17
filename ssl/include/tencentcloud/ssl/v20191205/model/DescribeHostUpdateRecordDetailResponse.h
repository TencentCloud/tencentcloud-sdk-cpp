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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/UpdateRecordDetails.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostUpdateRecordDetail返回参数结构体
                */
                class DescribeHostUpdateRecordDetailResponse : public AbstractModel
                {
                public:
                    DescribeHostUpdateRecordDetailResponse();
                    ~DescribeHostUpdateRecordDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数,如果取不到返回0
                     * @return TotalCount 总数,如果取不到返回0
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取证书部署记录列表，如果取不到值返回空数组
                     * @return RecordDetailList 证书部署记录列表，如果取不到值返回空数组
                     * 
                     */
                    std::vector<UpdateRecordDetails> GetRecordDetailList() const;

                    /**
                     * 判断参数 RecordDetailList 是否已赋值
                     * @return RecordDetailList 是否已赋值
                     * 
                     */
                    bool RecordDetailListHasBeenSet() const;

                    /**
                     * 获取成功总数,如果取不到返回0
                     * @return SuccessTotalCount 成功总数,如果取不到返回0
                     * 
                     */
                    int64_t GetSuccessTotalCount() const;

                    /**
                     * 判断参数 SuccessTotalCount 是否已赋值
                     * @return SuccessTotalCount 是否已赋值
                     * 
                     */
                    bool SuccessTotalCountHasBeenSet() const;

                    /**
                     * 获取失败总数,如果取不到返回0
                     * @return FailedTotalCount 失败总数,如果取不到返回0
                     * 
                     */
                    int64_t GetFailedTotalCount() const;

                    /**
                     * 判断参数 FailedTotalCount 是否已赋值
                     * @return FailedTotalCount 是否已赋值
                     * 
                     */
                    bool FailedTotalCountHasBeenSet() const;

                    /**
                     * 获取部署中总数,如果取不到返回0
                     * @return RunningTotalCount 部署中总数,如果取不到返回0
                     * 
                     */
                    int64_t GetRunningTotalCount() const;

                    /**
                     * 判断参数 RunningTotalCount 是否已赋值
                     * @return RunningTotalCount 是否已赋值
                     * 
                     */
                    bool RunningTotalCountHasBeenSet() const;

                private:

                    /**
                     * 总数,如果取不到返回0
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 证书部署记录列表，如果取不到值返回空数组
                     */
                    std::vector<UpdateRecordDetails> m_recordDetailList;
                    bool m_recordDetailListHasBeenSet;

                    /**
                     * 成功总数,如果取不到返回0
                     */
                    int64_t m_successTotalCount;
                    bool m_successTotalCountHasBeenSet;

                    /**
                     * 失败总数,如果取不到返回0
                     */
                    int64_t m_failedTotalCount;
                    bool m_failedTotalCountHasBeenSet;

                    /**
                     * 部署中总数,如果取不到返回0
                     */
                    int64_t m_runningTotalCount;
                    bool m_runningTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILRESPONSE_H_
