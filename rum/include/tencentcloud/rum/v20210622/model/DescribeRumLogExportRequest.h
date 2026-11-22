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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeRumLogExport请求参数结构体
                */
                class DescribeRumLogExportRequest : public AbstractModel
                {
                public:
                    DescribeRumLogExportRequest();
                    ~DescribeRumLogExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>导出标识name</p>
                     * @return Name <p>导出标识name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>导出标识name</p>
                     * @param _name <p>导出标识name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>查询开始时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     * @return StartTime <p>查询开始时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     * @param _startTime <p>查询开始时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
                     * @return Query <p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
                     * @param _query <p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
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
                     * 获取<p>查询结束时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     * @return EndTime <p>查询结束时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     * @param _endTime <p>查询结束时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID（必填）</p>
                     * @return ID <p>项目ID（必填）</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>项目ID（必填）</p>
                     * @param _iD <p>项目ID（必填）</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>field条件</p>
                     * @return Fields <p>field条件</p>
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置<p>field条件</p>
                     * @param _fields <p>field条件</p>
                     * 
                     */
                    void SetFields(const std::vector<std::string>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * <p>导出标识name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>查询开始时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询语句，参考控制台请求参数，语句长度最大为4096（必填）</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>查询结束时间（必填）。</p><p>参数格式：支持旧 Unix 毫秒字符串或新 RFC3339（需带时区）。</p><p>入参限制：RFC3339 最多 3 位小数秒，须对应非负毫秒。</p><p>等价时间格式对应同一导出范围，返回字段一致。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>项目ID（必填）</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>field条件</p>
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTREQUEST_H_
