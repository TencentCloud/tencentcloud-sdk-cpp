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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICEDATAHISTORYRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICEDATAHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeviceDataHistoryItem.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeDeviceDataHistory返回参数结构体
                */
                class DescribeDeviceDataHistoryResponse : public AbstractModel
                {
                public:
                    DescribeDeviceDataHistoryResponse();
                    ~DescribeDeviceDataHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取属性字段名称，对应数据模板中功能属性的标识符
                     * @return FieldName 属性字段名称，对应数据模板中功能属性的标识符
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取数据是否已全部返回，true 表示数据全部返回，false 表示还有数据待返回，可将 Context 作为入参，继续查询返回结果。
                     * @return Listover 数据是否已全部返回，true 表示数据全部返回，false 表示还有数据待返回，可将 Context 作为入参，继续查询返回结果。
                     * 
                     */
                    bool GetListover() const;

                    /**
                     * 判断参数 Listover 是否已赋值
                     * @return Listover 是否已赋值
                     * 
                     */
                    bool ListoverHasBeenSet() const;

                    /**
                     * 获取检索上下文，当 ListOver 为false时，可以用此上下文，继续读取后续数据
                     * @return Context 检索上下文，当 ListOver 为false时，可以用此上下文，继续读取后续数据
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取历史数据结果数组，返回对应时间点及取值。
                     * @return Results 历史数据结果数组，返回对应时间点及取值。
                     * 
                     */
                    std::vector<DeviceDataHistoryItem> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 属性字段名称，对应数据模板中功能属性的标识符
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 数据是否已全部返回，true 表示数据全部返回，false 表示还有数据待返回，可将 Context 作为入参，继续查询返回结果。
                     */
                    bool m_listover;
                    bool m_listoverHasBeenSet;

                    /**
                     * 检索上下文，当 ListOver 为false时，可以用此上下文，继续读取后续数据
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 历史数据结果数组，返回对应时间点及取值。
                     */
                    std::vector<DeviceDataHistoryItem> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICEDATAHISTORYRESPONSE_H_
