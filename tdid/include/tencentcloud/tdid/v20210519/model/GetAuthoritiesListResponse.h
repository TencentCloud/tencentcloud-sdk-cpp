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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITIESLISTRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITIESLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/Authority.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetAuthoritiesList返回参数结构体
                */
                class GetAuthoritiesListResponse : public AbstractModel
                {
                public:
                    GetAuthoritiesListResponse();
                    ~GetAuthoritiesListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据集合
                     * @return ResultList 数据集合
                     */
                    std::vector<Authority> GetResultList() const;

                    /**
                     * 判断参数 ResultList 是否已赋值
                     * @return ResultList 是否已赋值
                     */
                    bool ResultListHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return AllCount 总数
                     */
                    int64_t GetAllCount() const;

                    /**
                     * 判断参数 AllCount 是否已赋值
                     * @return AllCount 是否已赋值
                     */
                    bool AllCountHasBeenSet() const;

                private:

                    /**
                     * 数据集合
                     */
                    std::vector<Authority> m_resultList;
                    bool m_resultListHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_allCount;
                    bool m_allCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITIESLISTRESPONSE_H_
