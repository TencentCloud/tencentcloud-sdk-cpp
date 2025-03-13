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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEBINDDBLISTREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEBINDDBLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeBindDBList请求参数结构体
                */
                class DescribeBindDBListRequest : public AbstractModel
                {
                public:
                    DescribeBindDBListRequest();
                    ~DescribeBindDBListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dspa实例id
                     * @return DspaId dspa实例id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例id
                     * @param _dspaId dspa实例id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取数据源类型
                     * @return DataSourceType 数据源类型
                     * @deprecated
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置数据源类型
                     * @param _dataSourceType 数据源类型
                     * @deprecated
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * @deprecated
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取数据源ID
                     * @return DataSourceId 数据源ID
                     * @deprecated
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源ID
                     * @param _dataSourceId 数据源ID
                     * @deprecated
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * @deprecated
                     */
                    bool DataSourceIdHasBeenSet() const;

                private:

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 数据源ID
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEBINDDBLISTREQUEST_H_
