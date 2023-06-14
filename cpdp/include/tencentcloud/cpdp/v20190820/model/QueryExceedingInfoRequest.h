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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCEEDINGINFOREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCEEDINGINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/Paging.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryExceedingInfo请求参数结构体
                */
                class QueryExceedingInfoRequest : public AbstractModel
                {
                public:
                    QueryExceedingInfoRequest();
                    ~QueryExceedingInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取超额日期。格式为yyyy-MM-dd。
                     * @return TimeStr 超额日期。格式为yyyy-MM-dd。
                     * 
                     */
                    std::string GetTimeStr() const;

                    /**
                     * 设置超额日期。格式为yyyy-MM-dd。
                     * @param _timeStr 超额日期。格式为yyyy-MM-dd。
                     * 
                     */
                    void SetTimeStr(const std::string& _timeStr);

                    /**
                     * 判断参数 TimeStr 是否已赋值
                     * @return TimeStr 是否已赋值
                     * 
                     */
                    bool TimeStrHasBeenSet() const;

                    /**
                     * 获取维度。目前支持三个维度: AGENT, ANCHOR, ORDER。不填默认使用AGENT维度。
                     * @return Dimension 维度。目前支持三个维度: AGENT, ANCHOR, ORDER。不填默认使用AGENT维度。
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置维度。目前支持三个维度: AGENT, ANCHOR, ORDER。不填默认使用AGENT维度。
                     * @param _dimension 维度。目前支持三个维度: AGENT, ANCHOR, ORDER。不填默认使用AGENT维度。
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取分页信息。不填默认Index为1，Count为100。
                     * @return PageNumber 分页信息。不填默认Index为1，Count为100。
                     * 
                     */
                    Paging GetPageNumber() const;

                    /**
                     * 设置分页信息。不填默认Index为1，Count为100。
                     * @param _pageNumber 分页信息。不填默认Index为1，Count为100。
                     * 
                     */
                    void SetPageNumber(const Paging& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * 超额日期。格式为yyyy-MM-dd。
                     */
                    std::string m_timeStr;
                    bool m_timeStrHasBeenSet;

                    /**
                     * 维度。目前支持三个维度: AGENT, ANCHOR, ORDER。不填默认使用AGENT维度。
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 分页信息。不填默认Index为1，Count为100。
                     */
                    Paging m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCEEDINGINFOREQUEST_H_
