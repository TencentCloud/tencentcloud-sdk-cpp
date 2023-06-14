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

#ifndef TENCENTCLOUD_EIS_V20200715_MODEL_LISTEISCONNECTORSREQUEST_H_
#define TENCENTCLOUD_EIS_V20200715_MODEL_LISTEISCONNECTORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20200715
        {
            namespace Model
            {
                /**
                * ListEisConnectors请求参数结构体
                */
                class ListEisConnectorsRequest : public AbstractModel
                {
                public:
                    ListEisConnectorsRequest();
                    ~ListEisConnectorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取连接器名称,非必输，如输入则按照输入值模糊匹配
                     * @return ConnectorName 连接器名称,非必输，如输入则按照输入值模糊匹配
                     * 
                     */
                    std::string GetConnectorName() const;

                    /**
                     * 设置连接器名称,非必输，如输入则按照输入值模糊匹配
                     * @param _connectorName 连接器名称,非必输，如输入则按照输入值模糊匹配
                     * 
                     */
                    void SetConnectorName(const std::string& _connectorName);

                    /**
                     * 判断参数 ConnectorName 是否已赋值
                     * @return ConnectorName 是否已赋值
                     * 
                     */
                    bool ConnectorNameHasBeenSet() const;

                    /**
                     * 获取分页参数,数据偏移量
                     * @return Offset 分页参数,数据偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数,数据偏移量
                     * @param _offset 分页参数,数据偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页参数,每页显示的条数
                     * @return Limit 分页参数,每页显示的条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数,每页显示的条数
                     * @param _limit 分页参数,每页显示的条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 连接器名称,非必输，如输入则按照输入值模糊匹配
                     */
                    std::string m_connectorName;
                    bool m_connectorNameHasBeenSet;

                    /**
                     * 分页参数,数据偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数,每页显示的条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20200715_MODEL_LISTEISCONNECTORSREQUEST_H_
