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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBBACKUPSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBBackups请求参数结构体
                */
                class DescribeDBBackupsRequest : public AbstractModel
                {
                public:
                    DescribeDBBackupsRequest();
                    ~DescribeDBBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @return InstanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @param _instanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取备份方式，当前支持：0-逻辑备份，1-物理备份，2-所有备份。默认为逻辑备份。
                     * @return BackupMethod 备份方式，当前支持：0-逻辑备份，1-物理备份，2-所有备份。默认为逻辑备份。
                     * 
                     */
                    int64_t GetBackupMethod() const;

                    /**
                     * 设置备份方式，当前支持：0-逻辑备份，1-物理备份，2-所有备份。默认为逻辑备份。
                     * @param _backupMethod 备份方式，当前支持：0-逻辑备份，1-物理备份，2-所有备份。默认为逻辑备份。
                     * 
                     */
                    void SetBackupMethod(const int64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取分页大小，最大值为100，不设置默认查询所有。
                     * @return Limit 分页大小，最大值为100，不设置默认查询所有。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，最大值为100，不设置默认查询所有。
                     * @param _limit 分页大小，最大值为100，不设置默认查询所有。
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
                     * 获取分页偏移量，最小值为0，默认值为0。
                     * @return Offset 分页偏移量，最小值为0，默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，最小值为0，默认值为0。
                     * @param _offset 分页偏移量，最小值为0，默认值为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份方式，当前支持：0-逻辑备份，1-物理备份，2-所有备份。默认为逻辑备份。
                     */
                    int64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 分页大小，最大值为100，不设置默认查询所有。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，最小值为0，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBBACKUPSREQUEST_H_
