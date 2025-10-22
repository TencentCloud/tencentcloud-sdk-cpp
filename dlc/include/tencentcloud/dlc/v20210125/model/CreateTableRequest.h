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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATETABLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TableInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateTable请求参数结构体
                */
                class CreateTableRequest : public AbstractModel
                {
                public:
                    CreateTableRequest();
                    ~CreateTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据表配置信息
                     * @return TableInfo 数据表配置信息
                     * 
                     */
                    TableInfo GetTableInfo() const;

                    /**
                     * 设置数据表配置信息
                     * @param _tableInfo 数据表配置信息
                     * 
                     */
                    void SetTableInfo(const TableInfo& _tableInfo);

                    /**
                     * 判断参数 TableInfo 是否已赋值
                     * @return TableInfo 是否已赋值
                     * 
                     */
                    bool TableInfoHasBeenSet() const;

                private:

                    /**
                     * 数据表配置信息
                     */
                    TableInfo m_tableInfo;
                    bool m_tableInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATETABLEREQUEST_H_
