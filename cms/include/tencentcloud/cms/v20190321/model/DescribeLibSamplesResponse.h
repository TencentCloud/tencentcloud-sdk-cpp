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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBELIBSAMPLESRESPONSE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBELIBSAMPLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/UserKeywordInfo.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * DescribeLibSamples返回参数结构体
                */
                class DescribeLibSamplesResponse : public AbstractModel
                {
                public:
                    DescribeLibSamplesResponse();
                    ~DescribeLibSamplesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取词记录数
                     * @return TotalCount 词记录数
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
                     * 获取词详情
                     * @return Infos 词详情
                     * 
                     */
                    std::vector<UserKeywordInfo> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * 词记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 词详情
                     */
                    std::vector<UserKeywordInfo> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DESCRIBELIBSAMPLESRESPONSE_H_
