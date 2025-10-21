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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLSTOPICREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLSTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyClsTopic请求参数结构体
                */
                class ModifyClsTopicRequest : public AbstractModel
                {
                public:
                    ModifyClsTopicRequest();
                    ~ModifyClsTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取日志生命周期，单位天，可取值范围1~3600，取值为3640时代表永久保存
                     * @return Period 日志生命周期，单位天，可取值范围1~3600，取值为3640时代表永久保存
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置日志生命周期，单位天，可取值范围1~3600，取值为3640时代表永久保存
                     * @param _period 日志生命周期，单位天，可取值范围1~3600，取值为3640时代表永久保存
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 日志生命周期，单位天，可取值范围1~3600，取值为3640时代表永久保存
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLSTOPICREQUEST_H_
