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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILEBACKUPOBJECTSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILEBACKUPOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeFileBackupObjects请求参数结构体
                */
                class DescribeFileBackupObjectsRequest : public AbstractModel
                {
                public:
                    DescribeFileBackupObjectsRequest();
                    ~DescribeFileBackupObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>备份实例ID</p>
                     * @return BackupId <p>备份实例ID</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>备份实例ID</p>
                     * @param _backupId <p>备份实例ID</p>
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>浏览路径</p>
                     * @return Path <p>浏览路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>浏览路径</p>
                     * @param _path <p>浏览路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认0</p>
                     * @return Offset <p>偏移量，默认0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认0</p>
                     * @param _offset <p>偏移量，默认0</p>
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
                     * 获取<p>返回数量，默认50，最大1000</p>
                     * @return Limit <p>返回数量，默认50，最大1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认50，最大1000</p>
                     * @param _limit <p>返回数量，默认50，最大1000</p>
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
                     * 获取<p>排序字段</p><p>枚举值：</p><ul><li>name： 文件名称</li></ul><p>默认值：name</p>
                     * @return OrderField <p>排序字段</p><p>枚举值：</p><ul><li>name： 文件名称</li></ul><p>默认值：name</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>排序字段</p><p>枚举值：</p><ul><li>name： 文件名称</li></ul><p>默认值：name</p>
                     * @param _orderField <p>排序字段</p><p>枚举值：</p><ul><li>name： 文件名称</li></ul><p>默认值：name</p>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取<p>排序方式</p><p>枚举值：</p><ul><li>asc： 升序排序</li><li>desc： 降序排序</li></ul><p>默认值：asc</p>
                     * @return Order <p>排序方式</p><p>枚举值：</p><ul><li>asc： 升序排序</li><li>desc： 降序排序</li></ul><p>默认值：asc</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方式</p><p>枚举值：</p><ul><li>asc： 升序排序</li><li>desc： 降序排序</li></ul><p>默认值：asc</p>
                     * @param _order <p>排序方式</p><p>枚举值：</p><ul><li>asc： 升序排序</li><li>desc： 降序排序</li></ul><p>默认值：asc</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>返回模式</p><p>枚举值：</p><ul><li>all： 返回目录和文件</li><li>dir： 仅返回目录</li><li>file： 仅返回文件（含符号连接）</li></ul>
                     * @return ObjectType <p>返回模式</p><p>枚举值：</p><ul><li>all： 返回目录和文件</li><li>dir： 仅返回目录</li><li>file： 仅返回文件（含符号连接）</li></ul>
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置<p>返回模式</p><p>枚举值：</p><ul><li>all： 返回目录和文件</li><li>dir： 仅返回目录</li><li>file： 仅返回文件（含符号连接）</li></ul>
                     * @param _objectType <p>返回模式</p><p>枚举值：</p><ul><li>all： 返回目录和文件</li><li>dir： 仅返回目录</li><li>file： 仅返回文件（含符号连接）</li></ul>
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                private:

                    /**
                     * <p>备份实例ID</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>浏览路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>偏移量，默认0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认50，最大1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序字段</p><p>枚举值：</p><ul><li>name： 文件名称</li></ul><p>默认值：name</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>排序方式</p><p>枚举值：</p><ul><li>asc： 升序排序</li><li>desc： 降序排序</li></ul><p>默认值：asc</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>返回模式</p><p>枚举值：</p><ul><li>all： 返回目录和文件</li><li>dir： 仅返回目录</li><li>file： 仅返回文件（含符号连接）</li></ul>
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEFILEBACKUPOBJECTSREQUEST_H_
