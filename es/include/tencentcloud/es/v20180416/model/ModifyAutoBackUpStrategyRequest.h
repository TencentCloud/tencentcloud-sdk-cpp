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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_MODIFYAUTOBACKUPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_MODIFYAUTOBACKUPSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/CosBackup.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ModifyAutoBackUpStrategy请求参数结构体
                */
                class ModifyAutoBackUpStrategyRequest : public AbstractModel
                {
                public:
                    ModifyAutoBackUpStrategyRequest();
                    ~ModifyAutoBackUpStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称
                     * @return InstanceId 实例名称
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例名称
                     * @param _instanceId 实例名称
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
                     * 获取当前策略名称
                     * @return StrategyName 当前策略名称
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置当前策略名称
                     * @param _strategyName 当前策略名称
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取策略信息
                     * @return CosBackup 策略信息
                     * 
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置策略信息
                     * @param _cosBackup 策略信息
                     * 
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     * 
                     */
                    bool CosBackupHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 当前策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 策略信息
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_MODIFYAUTOBACKUPSTRATEGYREQUEST_H_
