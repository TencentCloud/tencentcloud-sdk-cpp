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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECATALOGSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECATALOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeCatalogs请求参数结构体
                */
                class DescribeCatalogsRequest : public AbstractModel
                {
                public:
                    DescribeCatalogsRequest();
                    ~DescribeCatalogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据目录 ID</p>
                     * @return CatalogId <p>数据目录 ID</p>
                     * 
                     */
                    std::string GetCatalogId() const;

                    /**
                     * 设置<p>数据目录 ID</p>
                     * @param _catalogId <p>数据目录 ID</p>
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
                     * 获取<p>数据目录名称</p>
                     * @return Name <p>数据目录名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据目录名称</p>
                     * @param _name <p>数据目录名称</p>
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
                     * 获取<p>操作人 uin</p>
                     * @return Operator <p>操作人 uin</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作人 uin</p>
                     * @param _operator <p>操作人 uin</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>排序字段，支持 CreateTime / UpdateTime（默认 UpdateTime）</p>
                     * @return Sort <p>排序字段，支持 CreateTime / UpdateTime（默认 UpdateTime）</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>排序字段，支持 CreateTime / UpdateTime（默认 UpdateTime）</p>
                     * @param _sort <p>排序字段，支持 CreateTime / UpdateTime（默认 UpdateTime）</p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>true:升序（默认）/ false:降序</p>
                     * @return Asc <p>true:升序（默认）/ false:降序</p>
                     * 
                     */
                    std::string GetAsc() const;

                    /**
                     * 设置<p>true:升序（默认）/ false:降序</p>
                     * @param _asc <p>true:升序（默认）/ false:降序</p>
                     * 
                     */
                    void SetAsc(const std::string& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取<p>分页大小</p>
                     * @return Limit <p>分页大小</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小</p>
                     * @param _limit <p>分页大小</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移</p>
                     * @return Offset <p>分页偏移</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移</p>
                     * @param _offset <p>分页偏移</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>状态：0 注册中 / 1 待测试 / 2 连接成功 / 3 连接失败 / 4 删除中 / 5 已删除</p><p>枚举值：</p><ul><li>0： 注册中</li></ul>
                     * @return Status <p>状态：0 注册中 / 1 待测试 / 2 连接成功 / 3 连接失败 / 4 删除中 / 5 已删除</p><p>枚举值：</p><ul><li>0： 注册中</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>状态：0 注册中 / 1 待测试 / 2 连接成功 / 3 连接失败 / 4 删除中 / 5 已删除</p><p>枚举值：</p><ul><li>0： 注册中</li></ul>
                     * @param _status <p>状态：0 注册中 / 1 待测试 / 2 连接成功 / 3 连接失败 / 4 删除中 / 5 已删除</p><p>枚举值：</p><ul><li>0： 注册中</li></ul>
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
                     * 获取<p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： lakehouse类型</li></ul>
                     * @return Type <p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： lakehouse类型</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： lakehouse类型</li></ul>
                     * @param _type <p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： lakehouse类型</li></ul>
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
                     * 获取<p>在这个时间之后创建（时间戳）</p>
                     * @return CreatedAfter <p>在这个时间之后创建（时间戳）</p>
                     * 
                     */
                    uint64_t GetCreatedAfter() const;

                    /**
                     * 设置<p>在这个时间之后创建（时间戳）</p>
                     * @param _createdAfter <p>在这个时间之后创建（时间戳）</p>
                     * 
                     */
                    void SetCreatedAfter(const uint64_t& _createdAfter);

                    /**
                     * 判断参数 CreatedAfter 是否已赋值
                     * @return CreatedAfter 是否已赋值
                     * 
                     */
                    bool CreatedAfterHasBeenSet() const;

                    /**
                     * 获取<p>在这个时间之前创建（时间戳）</p>
                     * @return CreatedBefore <p>在这个时间之前创建（时间戳）</p>
                     * 
                     */
                    uint64_t GetCreatedBefore() const;

                    /**
                     * 设置<p>在这个时间之前创建（时间戳）</p>
                     * @param _createdBefore <p>在这个时间之前创建（时间戳）</p>
                     * 
                     */
                    void SetCreatedBefore(const uint64_t& _createdBefore);

                    /**
                     * 判断参数 CreatedBefore 是否已赋值
                     * @return CreatedBefore 是否已赋值
                     * 
                     */
                    bool CreatedBeforeHasBeenSet() const;

                private:

                    /**
                     * <p>数据目录 ID</p>
                     */
                    std::string m_catalogId;
                    bool m_catalogIdHasBeenSet;

                    /**
                     * <p>数据目录名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>操作人 uin</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>排序字段，支持 CreateTime / UpdateTime（默认 UpdateTime）</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>true:升序（默认）/ false:降序</p>
                     */
                    std::string m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * <p>分页大小</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>状态：0 注册中 / 1 待测试 / 2 连接成功 / 3 连接失败 / 4 删除中 / 5 已删除</p><p>枚举值：</p><ul><li>0： 注册中</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据目录类型</p><p>枚举值：</p><ul><li>LAKEHOUSE： lakehouse类型</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>在这个时间之后创建（时间戳）</p>
                     */
                    uint64_t m_createdAfter;
                    bool m_createdAfterHasBeenSet;

                    /**
                     * <p>在这个时间之前创建（时间戳）</p>
                     */
                    uint64_t m_createdBefore;
                    bool m_createdBeforeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECATALOGSREQUEST_H_
