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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEJDKREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEJDKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateJdk请求参数结构体
                */
                class UpdateJdkRequest : public AbstractModel
                {
                public:
                    UpdateJdkRequest();
                    ~UpdateJdkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES实例ID
                     * @return InstanceId ES实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES实例ID
                     * @param _instanceId ES实例ID
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
                     * 获取Jdk类型，支持kona和oracle
                     * @return Jdk Jdk类型，支持kona和oracle
                     * 
                     */
                    std::string GetJdk() const;

                    /**
                     * 设置Jdk类型，支持kona和oracle
                     * @param _jdk Jdk类型，支持kona和oracle
                     * 
                     */
                    void SetJdk(const std::string& _jdk);

                    /**
                     * 判断参数 Jdk 是否已赋值
                     * @return Jdk 是否已赋值
                     * 
                     */
                    bool JdkHasBeenSet() const;

                    /**
                     * 获取Gc类型，支持g1和cms
                     * @return Gc Gc类型，支持g1和cms
                     * 
                     */
                    std::string GetGc() const;

                    /**
                     * 设置Gc类型，支持g1和cms
                     * @param _gc Gc类型，支持g1和cms
                     * 
                     */
                    void SetGc(const std::string& _gc);

                    /**
                     * 判断参数 Gc 是否已赋值
                     * @return Gc 是否已赋值
                     * 
                     */
                    bool GcHasBeenSet() const;

                    /**
                     * 获取是否强制重启
                     * @return ForceRestart 是否强制重启
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置是否强制重启
                     * @param _forceRestart 是否强制重启
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                private:

                    /**
                     * ES实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Jdk类型，支持kona和oracle
                     */
                    std::string m_jdk;
                    bool m_jdkHasBeenSet;

                    /**
                     * Gc类型，支持g1和cms
                     */
                    std::string m_gc;
                    bool m_gcHasBeenSet;

                    /**
                     * 是否强制重启
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEJDKREQUEST_H_
