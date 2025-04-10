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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYOPERATIONTASKREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYOPERATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyOperationTask请求参数结构体
                */
                class ModifyOperationTaskRequest : public AbstractModel
                {
                public:
                    ModifyOperationTaskRequest();
                    ~ModifyOperationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id
                     * @return Id 任务Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置任务Id
                     * @param _id 任务Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
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
                     * 获取任务类型, 1 - 手工执行, 2 - 周期性自动执行
                     * @return Type 任务类型, 1 - 手工执行, 2 - 周期性自动执行
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置任务类型, 1 - 手工执行, 2 - 周期性自动执行
                     * @param _type 任务类型, 1 - 手工执行, 2 - 周期性自动执行
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取执行账号
                     * @return Account 执行账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置执行账号
                     * @param _account 执行账号
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取超时时间,单位秒
                     * @return Timeout 超时时间,单位秒
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置超时时间,单位秒
                     * @param _timeout 超时时间,单位秒
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取执行脚本内容
                     * @return Script 执行脚本内容
                     * 
                     */
                    std::string GetScript() const;

                    /**
                     * 设置执行脚本内容
                     * @param _script 执行脚本内容
                     * 
                     */
                    void SetScript(const std::string& _script);

                    /**
                     * 判断参数 Script 是否已赋值
                     * @return Script 是否已赋值
                     * 
                     */
                    bool ScriptHasBeenSet() const;

                    /**
                     * 获取执行主机集合，满足条件以下三个条件：1. 资产绑定可用的专业版或国密版堡垒机服务；2、资产类型为linux资产；3、用户具有资产权限，且资产添加了指定执行账号
                     * @return DeviceIdSet 执行主机集合，满足条件以下三个条件：1. 资产绑定可用的专业版或国密版堡垒机服务；2、资产类型为linux资产；3、用户具有资产权限，且资产添加了指定执行账号
                     * 
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 设置执行主机集合，满足条件以下三个条件：1. 资产绑定可用的专业版或国密版堡垒机服务；2、资产类型为linux资产；3、用户具有资产权限，且资产添加了指定执行账号
                     * @param _deviceIdSet 执行主机集合，满足条件以下三个条件：1. 资产绑定可用的专业版或国密版堡垒机服务；2、资产类型为linux资产；3、用户具有资产权限，且资产添加了指定执行账号
                     * 
                     */
                    void SetDeviceIdSet(const std::vector<uint64_t>& _deviceIdSet);

                    /**
                     * 判断参数 DeviceIdSet 是否已赋值
                     * @return DeviceIdSet 是否已赋值
                     * 
                     */
                    bool DeviceIdSetHasBeenSet() const;

                    /**
                     * 获取执行间隔，单位天. 手工执行时无需传入
                     * @return Period 执行间隔，单位天. 手工执行时无需传入
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置执行间隔，单位天. 手工执行时无需传入
                     * @param _period 执行间隔，单位天. 手工执行时无需传入
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取首次执行日期，默认1970-01-01T08:00:01+08:00,手工执行时无需传入
                     * @return FirstTime 首次执行日期，默认1970-01-01T08:00:01+08:00,手工执行时无需传入
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次执行日期，默认1970-01-01T08:00:01+08:00,手工执行时无需传入
                     * @param _firstTime 首次执行日期，默认1970-01-01T08:00:01+08:00,手工执行时无需传入
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Script参数是否需要进行base64编码后传递，1-需要进行base64编码后传递，非1值-不需要进行base64编码后传递
                     * @return Encoding Script参数是否需要进行base64编码后传递，1-需要进行base64编码后传递，非1值-不需要进行base64编码后传递
                     * 
                     */
                    uint64_t GetEncoding() const;

                    /**
                     * 设置Script参数是否需要进行base64编码后传递，1-需要进行base64编码后传递，非1值-不需要进行base64编码后传递
                     * @param _encoding Script参数是否需要进行base64编码后传递，1-需要进行base64编码后传递，非1值-不需要进行base64编码后传递
                     * 
                     */
                    void SetEncoding(const uint64_t& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务类型, 1 - 手工执行, 2 - 周期性自动执行
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 执行账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 超时时间,单位秒
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 执行脚本内容
                     */
                    std::string m_script;
                    bool m_scriptHasBeenSet;

                    /**
                     * 执行主机集合，满足条件以下三个条件：1. 资产绑定可用的专业版或国密版堡垒机服务；2、资产类型为linux资产；3、用户具有资产权限，且资产添加了指定执行账号
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                    /**
                     * 执行间隔，单位天. 手工执行时无需传入
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 首次执行日期，默认1970-01-01T08:00:01+08:00,手工执行时无需传入
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Script参数是否需要进行base64编码后传递，1-需要进行base64编码后传递，非1值-不需要进行base64编码后传递
                     */
                    uint64_t m_encoding;
                    bool m_encodingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYOPERATIONTASKREQUEST_H_
