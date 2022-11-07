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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEKAFKATOPICINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEKAFKATOPICINFOREQUEST_H_

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
                * DescribeKafkaTopicInfo请求参数结构体
                */
                class DescribeKafkaTopicInfoRequest : public AbstractModel
                {
                public:
                    DescribeKafkaTopicInfoRequest();
                    ~DescribeKafkaTopicInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源id
                     * @return DatasourceId 数据源id
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
                     * @param DatasourceId 数据源id
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据源类型
                     * @return Type 数据源类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型
                     * @param Type 数据源类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 数据源id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEKAFKATOPICINFOREQUEST_H_
