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
                     * 获取导出标识name
                     * @return Name 导出标识name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置导出标识name
                     * @param _name 导出标识name
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
                     * 获取开始时间（必填）
                     * @return StartTime 开始时间（必填）
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间（必填）
                     * @param _startTime 开始时间（必填）
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
                     * 获取查询语句，参考控制台请求参数，语句长度最大为4096（必填）
                     * @return Query 查询语句，参考控制台请求参数，语句长度最大为4096（必填）
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句，参考控制台请求参数，语句长度最大为4096（必填）
                     * @param _query 查询语句，参考控制台请求参数，语句长度最大为4096（必填）
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
                     * 获取结束时间（必填）
                     * @return EndTime 结束时间（必填）
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（必填）
                     * @param _endTime 结束时间（必填）
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
                     * 获取项目ID（必填）
                     * @return ID 项目ID（必填）
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID（必填）
                     * @param _iD 项目ID（必填）
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
                     * 获取field条件
                     * @return Fields field条件
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置field条件
                     * @param _fields field条件
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
                     * 导出标识name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 开始时间（必填）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询语句，参考控制台请求参数，语句长度最大为4096（必填）
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 结束时间（必填）
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 项目ID（必填）
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * field条件
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTREQUEST_H_
