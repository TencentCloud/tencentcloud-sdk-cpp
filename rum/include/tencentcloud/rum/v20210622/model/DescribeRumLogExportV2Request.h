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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTV2REQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTV2REQUEST_H_

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
                * DescribeRumLogExportV2请求参数结构体
                */
                class DescribeRumLogExportV2Request : public AbstractModel
                {
                public:
                    DescribeRumLogExportV2Request();
                    ~DescribeRumLogExportV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Export name
                     * @return Name Export name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Export name
                     * @param _name Export name
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
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query statement
                     * @return Filter Query statement
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置Query statement
                     * @param _filter Query statement
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ID Project ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID
                     * @param _iD Project ID
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
                     * 获取c字段
                     * @return Fields c字段
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置c字段
                     * @param _fields c字段
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
                     * Export name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Start time
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query statement
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * End time
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * c字段
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTV2REQUEST_H_
