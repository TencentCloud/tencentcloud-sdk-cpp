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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTCDNINSTANCELISTRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTCDNINSTANCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CdnInstanceDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostCdnInstanceList返回参数结构体
                */
                class DescribeHostCdnInstanceListResponse : public AbstractModel
                {
                public:
                    DescribeHostCdnInstanceListResponse();
                    ~DescribeHostCdnInstanceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CDN实例列表，如取不到值返回空数组
                     * @return InstanceList CDN实例列表，如取不到值返回空数组
                     * 
                     */
                    std::vector<CdnInstanceDetail> GetInstanceList() const;

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                    /**
                     * 获取CDN域名总数，如取不到值返回0
                     * @return TotalCount CDN域名总数，如取不到值返回0
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取异步刷新总数，如取不到值返回0
                     * @return AsyncTotalNum 异步刷新总数，如取不到值返回0
                     * 
                     */
                    int64_t GetAsyncTotalNum() const;

                    /**
                     * 判断参数 AsyncTotalNum 是否已赋值
                     * @return AsyncTotalNum 是否已赋值
                     * 
                     */
                    bool AsyncTotalNumHasBeenSet() const;

                    /**
                     * 获取异步刷新当前执行数，如取不到值返回0
                     * @return AsyncOffset 异步刷新当前执行数，如取不到值返回0
                     * 
                     */
                    int64_t GetAsyncOffset() const;

                    /**
                     * 判断参数 AsyncOffset 是否已赋值
                     * @return AsyncOffset 是否已赋值
                     * 
                     */
                    bool AsyncOffsetHasBeenSet() const;

                    /**
                     * 获取当前缓存读取时间
                     * @return AsyncCacheTime 当前缓存读取时间
                     * 
                     */
                    std::string GetAsyncCacheTime() const;

                    /**
                     * 判断参数 AsyncCacheTime 是否已赋值
                     * @return AsyncCacheTime 是否已赋值
                     * 
                     */
                    bool AsyncCacheTimeHasBeenSet() const;

                private:

                    /**
                     * CDN实例列表，如取不到值返回空数组
                     */
                    std::vector<CdnInstanceDetail> m_instanceList;
                    bool m_instanceListHasBeenSet;

                    /**
                     * CDN域名总数，如取不到值返回0
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 异步刷新总数，如取不到值返回0
                     */
                    int64_t m_asyncTotalNum;
                    bool m_asyncTotalNumHasBeenSet;

                    /**
                     * 异步刷新当前执行数，如取不到值返回0
                     */
                    int64_t m_asyncOffset;
                    bool m_asyncOffsetHasBeenSet;

                    /**
                     * 当前缓存读取时间
                     */
                    std::string m_asyncCacheTime;
                    bool m_asyncCacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTCDNINSTANCELISTRESPONSE_H_
