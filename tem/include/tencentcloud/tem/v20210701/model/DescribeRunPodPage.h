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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBERUNPODPAGE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBERUNPODPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/RunVersionPod.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 版本pod列表
                */
                class DescribeRunPodPage : public AbstractModel
                {
                public:
                    DescribeRunPodPage();
                    ~DescribeRunPodPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页下标
                     * @return Offset 分页下标
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页下标
                     * @param _offset 分页下标
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单页条数
                     * @return Limit 单页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页条数
                     * @param _limit 单页条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数
                     * @param _totalCount 总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取请求id
                     * @return RequestId 请求id
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求id
                     * @param _requestId 请求id
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取条目
                     * @return PodList 条目
                     * 
                     */
                    std::vector<RunVersionPod> GetPodList() const;

                    /**
                     * 设置条目
                     * @param _podList 条目
                     * 
                     */
                    void SetPodList(const std::vector<RunVersionPod>& _podList);

                    /**
                     * 判断参数 PodList 是否已赋值
                     * @return PodList 是否已赋值
                     * 
                     */
                    bool PodListHasBeenSet() const;

                private:

                    /**
                     * 分页下标
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 请求id
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 条目
                     */
                    std::vector<RunVersionPod> m_podList;
                    bool m_podListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBERUNPODPAGE_H_
