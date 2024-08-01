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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEFRONTENDREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEFRONTENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeFrontEnd请求参数结构体
                */
                class DescribeFrontEndRequest : public AbstractModel
                {
                public:
                    DescribeFrontEndRequest();
                    ~DescribeFrontEndRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取文件类型
                     * @return ConfigType 文件类型
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置文件类型
                     * @param _configType 文件类型
                     * 
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取参数1
                     * @return Param1 参数1
                     * 
                     */
                    std::string GetParam1() const;

                    /**
                     * 设置参数1
                     * @param _param1 参数1
                     * 
                     */
                    void SetParam1(const std::string& _param1);

                    /**
                     * 判断参数 Param1 是否已赋值
                     * @return Param1 是否已赋值
                     * 
                     */
                    bool Param1HasBeenSet() const;

                    /**
                     * 获取参数2
                     * @return Param2 参数2
                     * 
                     */
                    std::string GetParam2() const;

                    /**
                     * 设置参数2
                     * @param _param2 参数2
                     * 
                     */
                    void SetParam2(const std::string& _param2);

                    /**
                     * 判断参数 Param2 是否已赋值
                     * @return Param2 是否已赋值
                     * 
                     */
                    bool Param2HasBeenSet() const;

                    /**
                     * 获取参数3
                     * @return Param3 参数3
                     * 
                     */
                    std::string GetParam3() const;

                    /**
                     * 设置参数3
                     * @param _param3 参数3
                     * 
                     */
                    void SetParam3(const std::string& _param3);

                    /**
                     * 判断参数 Param3 是否已赋值
                     * @return Param3 是否已赋值
                     * 
                     */
                    bool Param3HasBeenSet() const;

                    /**
                     * 获取参数4
                     * @return Param4 参数4
                     * 
                     */
                    std::string GetParam4() const;

                    /**
                     * 设置参数4
                     * @param _param4 参数4
                     * 
                     */
                    void SetParam4(const std::string& _param4);

                    /**
                     * 判断参数 Param4 是否已赋值
                     * @return Param4 是否已赋值
                     * 
                     */
                    bool Param4HasBeenSet() const;

                    /**
                     * 获取参数5
                     * @return Param5 参数5
                     * 
                     */
                    std::string GetParam5() const;

                    /**
                     * 设置参数5
                     * @param _param5 参数5
                     * 
                     */
                    void SetParam5(const std::string& _param5);

                    /**
                     * 判断参数 Param5 是否已赋值
                     * @return Param5 是否已赋值
                     * 
                     */
                    bool Param5HasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * 参数1
                     */
                    std::string m_param1;
                    bool m_param1HasBeenSet;

                    /**
                     * 参数2
                     */
                    std::string m_param2;
                    bool m_param2HasBeenSet;

                    /**
                     * 参数3
                     */
                    std::string m_param3;
                    bool m_param3HasBeenSet;

                    /**
                     * 参数4
                     */
                    std::string m_param4;
                    bool m_param4HasBeenSet;

                    /**
                     * 参数5
                     */
                    std::string m_param5;
                    bool m_param5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEFRONTENDREQUEST_H_
