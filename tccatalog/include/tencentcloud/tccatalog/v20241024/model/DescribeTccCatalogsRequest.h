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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGSREQUEST_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            namespace Model
            {
                /**
                * DescribeTccCatalogs请求参数结构体
                */
                class DescribeTccCatalogsRequest : public AbstractModel
                {
                public:
                    DescribeTccCatalogsRequest();
                    ~DescribeTccCatalogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据目录Id
                     * @return CatalogId 数据目录Id
                     * 
                     */
                    std::string GetCatalogId() const;

                    /**
                     * 设置数据目录Id
                     * @param _catalogId 数据目录Id
                     * 
                     */
                    void SetCatalogId(const std::string& _catalogId);

                    /**
                     * 判断参数 CatalogId 是否已赋值
                     * @return CatalogId 是否已赋值
                     * 
                     */
                    bool CatalogIdHasBeenSet() const;

                    /**
                     * 获取数据目录名称
                     * @return Name 数据目录名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据目录名称
                     * @param _name 数据目录名称
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
                     * 获取数据目录类型,当前支持：TCC-HIVE
                     * @return Type 数据目录类型,当前支持：TCC-HIVE
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据目录类型,当前支持：TCC-HIVE
                     * @param _type 数据目录类型,当前支持：TCC-HIVE
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
                     * @return Status 状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
                     * @param _status 状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取操作人uin
                     * @return Operator 操作人uin
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人uin
                     * @param _operator 操作人uin
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 数据目录Id
                     */
                    std::string m_catalogId;
                    bool m_catalogIdHasBeenSet;

                    /**
                     * 数据目录名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据目录类型,当前支持：TCC-HIVE
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 状态信息：注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作人uin
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGSREQUEST_H_
