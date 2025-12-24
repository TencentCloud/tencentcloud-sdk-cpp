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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_CREATEBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_CREATEBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/Tag.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * CreateBackupPlan请求参数结构体
                */
                class CreateBackupPlanRequest : public AbstractModel
                {
                public:
                    CreateBackupPlanRequest();
                    ~CreateBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源端数据库类型。当前支持值为: ["mysql","cynosdbmysql","percona","mariadb","tdsqlmysql"]。
                     * @return DatabaseType 源端数据库类型。当前支持值为: ["mysql","cynosdbmysql","percona","mariadb","tdsqlmysql"]。
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置源端数据库类型。当前支持值为: ["mysql","cynosdbmysql","percona","mariadb","tdsqlmysql"]。
                     * @param _databaseType 源端数据库类型。当前支持值为: ["mysql","cynosdbmysql","percona","mariadb","tdsqlmysql"]。
                     * 
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取备份方式。当前仅支持"logical"，即逻辑备份。
                     * @return BackupMethod 备份方式。当前仅支持"logical"，即逻辑备份。
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式。当前仅支持"logical"，即逻辑备份。
                     * @param _backupMethod 备份方式。当前仅支持"logical"，即逻辑备份。
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取规格。当前支持值为: ["micro","small","medium","large","xlarge"]。默认为"small"。
                     * @return InstanceClass 规格。当前支持值为: ["micro","small","medium","large","xlarge"]。默认为"small"。
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置规格。当前支持值为: ["micro","small","medium","large","xlarge"]。默认为"small"。
                     * @param _instanceClass 规格。当前支持值为: ["micro","small","medium","large","xlarge"]。默认为"small"。
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取购买时长，单位为月，默认值为1。
                     * @return Period 购买时长，单位为月，默认值为1。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位为月，默认值为1。
                     * @param _period 购买时长，单位为月，默认值为1。
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取计费模式。当前仅支持"prepay"，即包年包月。
                     * @return PayType 计费模式。当前仅支持"prepay"，即包年包月。
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置计费模式。当前仅支持"prepay"，即包年包月。
                     * @param _payType 计费模式。当前仅支持"prepay"，即包年包月。
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取购买数量。取值范围为[1, 10]，默认值为1。
                     * @return Count 购买数量。取值范围为[1, 10]，默认值为1。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置购买数量。取值范围为[1, 10]，默认值为1。
                     * @param _count 购买数量。取值范围为[1, 10]，默认值为1。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取自动续费标识。1 - 开启自动续费；0 - 不开启自动续费。
                     * @return AutoRenew 自动续费标识。1 - 开启自动续费；0 - 不开启自动续费。
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置自动续费标识。1 - 开启自动续费；0 - 不开启自动续费。
                     * @param _autoRenew 自动续费标识。1 - 开启自动续费；0 - 不开启自动续费。
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取标签值。
                     * @return Tags 标签值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签值。
                     * @param _tags 标签值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 源端数据库类型。当前支持值为: ["mysql","cynosdbmysql","percona","mariadb","tdsqlmysql"]。
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * 备份方式。当前仅支持"logical"，即逻辑备份。
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 规格。当前支持值为: ["micro","small","medium","large","xlarge"]。默认为"small"。
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * 购买时长，单位为月，默认值为1。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 计费模式。当前仅支持"prepay"，即包年包月。
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 购买数量。取值范围为[1, 10]，默认值为1。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 自动续费标识。1 - 开启自动续费；0 - 不开启自动续费。
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 标签值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_CREATEBACKUPPLANREQUEST_H_
