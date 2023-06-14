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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEXP2PDETAILINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEXP2PDETAILINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveXP2PDetailInfoList请求参数结构体
                */
                class DescribeLiveXP2PDetailInfoListRequest : public AbstractModel
                {
                public:
                    DescribeLiveXP2PDetailInfoListRequest();
                    ~DescribeLiveXP2PDetailInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取utc分钟粒度查询时间，查询某一分钟的用量数据，格式为：yyyy-mm-ddTHH:MM:00Z，参考https://cloud.tencent.com/document/product/266/11732#I，
例如：北京时间2019-01-08 10:00:00，对应utc时间为：2019-01-08T10:00:00+08:00。

支持最近六个月的查询。
                     * @return QueryTime utc分钟粒度查询时间，查询某一分钟的用量数据，格式为：yyyy-mm-ddTHH:MM:00Z，参考https://cloud.tencent.com/document/product/266/11732#I，
例如：北京时间2019-01-08 10:00:00，对应utc时间为：2019-01-08T10:00:00+08:00。

支持最近六个月的查询。
                     * 
                     */
                    std::string GetQueryTime() const;

                    /**
                     * 设置utc分钟粒度查询时间，查询某一分钟的用量数据，格式为：yyyy-mm-ddTHH:MM:00Z，参考https://cloud.tencent.com/document/product/266/11732#I，
例如：北京时间2019-01-08 10:00:00，对应utc时间为：2019-01-08T10:00:00+08:00。

支持最近六个月的查询。
                     * @param _queryTime utc分钟粒度查询时间，查询某一分钟的用量数据，格式为：yyyy-mm-ddTHH:MM:00Z，参考https://cloud.tencent.com/document/product/266/11732#I，
例如：北京时间2019-01-08 10:00:00，对应utc时间为：2019-01-08T10:00:00+08:00。

支持最近六个月的查询。
                     * 
                     */
                    void SetQueryTime(const std::string& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取类型数组，分直播live和点播vod，不传默认查全部。
                     * @return Type 类型数组，分直播live和点播vod，不传默认查全部。
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置类型数组，分直播live和点播vod，不传默认查全部。
                     * @param _type 类型数组，分直播live和点播vod，不传默认查全部。
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取查询流数组，不传默认查所有流。
                     * @return StreamNames 查询流数组，不传默认查所有流。
                     * 
                     */
                    std::vector<std::string> GetStreamNames() const;

                    /**
                     * 设置查询流数组，不传默认查所有流。
                     * @param _streamNames 查询流数组，不传默认查所有流。
                     * 
                     */
                    void SetStreamNames(const std::vector<std::string>& _streamNames);

                    /**
                     * 判断参数 StreamNames 是否已赋值
                     * @return StreamNames 是否已赋值
                     * 
                     */
                    bool StreamNamesHasBeenSet() const;

                    /**
                     * 获取查询维度，不传该参数则默认查询流维度的数据，传递该参数则只查对应维度的数据，和返回值的字段相关，目前支持AppId维度查询。
                     * @return Dimension 查询维度，不传该参数则默认查询流维度的数据，传递该参数则只查对应维度的数据，和返回值的字段相关，目前支持AppId维度查询。
                     * 
                     */
                    std::vector<std::string> GetDimension() const;

                    /**
                     * 设置查询维度，不传该参数则默认查询流维度的数据，传递该参数则只查对应维度的数据，和返回值的字段相关，目前支持AppId维度查询。
                     * @param _dimension 查询维度，不传该参数则默认查询流维度的数据，传递该参数则只查对应维度的数据，和返回值的字段相关，目前支持AppId维度查询。
                     * 
                     */
                    void SetDimension(const std::vector<std::string>& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                private:

                    /**
                     * utc分钟粒度查询时间，查询某一分钟的用量数据，格式为：yyyy-mm-ddTHH:MM:00Z，参考https://cloud.tencent.com/document/product/266/11732#I，
例如：北京时间2019-01-08 10:00:00，对应utc时间为：2019-01-08T10:00:00+08:00。

支持最近六个月的查询。
                     */
                    std::string m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * 类型数组，分直播live和点播vod，不传默认查全部。
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 查询流数组，不传默认查所有流。
                     */
                    std::vector<std::string> m_streamNames;
                    bool m_streamNamesHasBeenSet;

                    /**
                     * 查询维度，不传该参数则默认查询流维度的数据，传递该参数则只查对应维度的数据，和返回值的字段相关，目前支持AppId维度查询。
                     */
                    std::vector<std::string> m_dimension;
                    bool m_dimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEXP2PDETAILINFOLISTREQUEST_H_
