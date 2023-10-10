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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFASTANALYSISREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFASTANALYSISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeFastAnalysis请求参数结构体
                */
                class DescribeFastAnalysisRequest : public AbstractModel
                {
                public:
                    DescribeFastAnalysisRequest();
                    ~DescribeFastAnalysisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间，单位ms
                     * @return From 起始时间，单位ms
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置起始时间，单位ms
                     * @param _from 起始时间，单位ms
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取结束时间，单位ms
                     * @return To 结束时间，单位ms
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置结束时间，单位ms
                     * @param _to 结束时间，单位ms
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取查询语句，语句长度最大为4096
                     * @return Query 查询语句，语句长度最大为4096
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，语句长度最大为4096
                     * @param _query 查询语句，语句长度最大为4096
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取日志字段名称
                     * @return FieldName 日志字段名称
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置日志字段名称
                     * @param _fieldName 日志字段名称
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                private:

                    /**
                     * 起始时间，单位ms
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 结束时间，单位ms
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 查询语句，语句长度最大为4096
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 日志字段名称
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFASTANALYSISREQUEST_H_
