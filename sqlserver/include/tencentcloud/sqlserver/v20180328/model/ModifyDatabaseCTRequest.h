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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASECTREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDatabaseCT请求参数结构体
                */
                class ModifyDatabaseCTRequest : public AbstractModel
                {
                public:
                    ModifyDatabaseCTRequest();
                    ~ModifyDatabaseCTRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名数组
                     * @return DBNames 数据库名数组
                     * 
                     */
                    std::vector<std::string> GetDBNames() const;

                    /**
                     * 设置数据库名数组
                     * @param _dBNames 数据库名数组
                     * 
                     */
                    void SetDBNames(const std::vector<std::string>& _dBNames);

                    /**
                     * 判断参数 DBNames 是否已赋值
                     * @return DBNames 是否已赋值
                     * 
                     */
                    bool DBNamesHasBeenSet() const;

                    /**
                     * 获取启用、禁用数据库CT功能 enable；启用，disable：禁用
                     * @return ModifyType 启用、禁用数据库CT功能 enable；启用，disable：禁用
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置启用、禁用数据库CT功能 enable；启用，disable：禁用
                     * @param _modifyType 启用、禁用数据库CT功能 enable；启用，disable：禁用
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取启用CT时额外保留天数，默认保留3天，最小3天，最大30天
                     * @return ChangeRetentionDay 启用CT时额外保留天数，默认保留3天，最小3天，最大30天
                     * 
                     */
                    int64_t GetChangeRetentionDay() const;

                    /**
                     * 设置启用CT时额外保留天数，默认保留3天，最小3天，最大30天
                     * @param _changeRetentionDay 启用CT时额外保留天数，默认保留3天，最小3天，最大30天
                     * 
                     */
                    void SetChangeRetentionDay(const int64_t& _changeRetentionDay);

                    /**
                     * 判断参数 ChangeRetentionDay 是否已赋值
                     * @return ChangeRetentionDay 是否已赋值
                     * 
                     */
                    bool ChangeRetentionDayHasBeenSet() const;

                private:

                    /**
                     * 数据库名数组
                     */
                    std::vector<std::string> m_dBNames;
                    bool m_dBNamesHasBeenSet;

                    /**
                     * 启用、禁用数据库CT功能 enable；启用，disable：禁用
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 启用CT时额外保留天数，默认保留3天，最小3天，最大30天
                     */
                    int64_t m_changeRetentionDay;
                    bool m_changeRetentionDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASECTREQUEST_H_
