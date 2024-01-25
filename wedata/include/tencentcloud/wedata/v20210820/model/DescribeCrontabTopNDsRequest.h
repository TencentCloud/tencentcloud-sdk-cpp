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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECRONTABTOPNDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECRONTABTOPNDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeCrontabTopNDs请求参数结构体
                */
                class DescribeCrontabTopNDsRequest : public AbstractModel
                {
                public:
                    DescribeCrontabTopNDsRequest();
                    ~DescribeCrontabTopNDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取crontabExp
                     * @return CrontabExp crontabExp
                     * 
                     */
                    std::string GetCrontabExp() const;

                    /**
                     * 设置crontabExp
                     * @param _crontabExp crontabExp
                     * 
                     */
                    void SetCrontabExp(const std::string& _crontabExp);

                    /**
                     * 判断参数 CrontabExp 是否已赋值
                     * @return CrontabExp 是否已赋值
                     * 
                     */
                    bool CrontabExpHasBeenSet() const;

                    /**
                     * 获取topN
                     * @return TopN topN
                     * 
                     */
                    uint64_t GetTopN() const;

                    /**
                     * 设置topN
                     * @param _topN topN
                     * 
                     */
                    void SetTopN(const uint64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                    /**
                     * 获取StartIsoTime
                     * @return StartIsoTime StartIsoTime
                     * 
                     */
                    std::string GetStartIsoTime() const;

                    /**
                     * 设置StartIsoTime
                     * @param _startIsoTime StartIsoTime
                     * 
                     */
                    void SetStartIsoTime(const std::string& _startIsoTime);

                    /**
                     * 判断参数 StartIsoTime 是否已赋值
                     * @return StartIsoTime 是否已赋值
                     * 
                     */
                    bool StartIsoTimeHasBeenSet() const;

                private:

                    /**
                     * crontabExp
                     */
                    std::string m_crontabExp;
                    bool m_crontabExpHasBeenSet;

                    /**
                     * topN
                     */
                    uint64_t m_topN;
                    bool m_topNHasBeenSet;

                    /**
                     * StartIsoTime
                     */
                    std::string m_startIsoTime;
                    bool m_startIsoTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECRONTABTOPNDSREQUEST_H_
