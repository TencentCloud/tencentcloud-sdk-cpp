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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATECLSLOGSETREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATECLSLOGSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateClsLogSet请求参数结构体
                */
                class CreateClsLogSetRequest : public AbstractModel
                {
                public:
                    CreateClsLogSetRequest();
                    ~CreateClsLogSetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集的名字，不能和cls其他日志集重名。不填默认为clb_logset。
                     * @return LogsetName 日志集的名字，不能和cls其他日志集重名。不填默认为clb_logset。
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集的名字，不能和cls其他日志集重名。不填默认为clb_logset。
                     * @param _logsetName 日志集的名字，不能和cls其他日志集重名。不填默认为clb_logset。
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取日志集的保存周期，单位：天。
                     * @return Period 日志集的保存周期，单位：天。
                     * @deprecated
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置日志集的保存周期，单位：天。
                     * @param _period 日志集的保存周期，单位：天。
                     * @deprecated
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * @deprecated
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取日志集类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     * @return LogsetType 日志集类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     * 
                     */
                    std::string GetLogsetType() const;

                    /**
                     * 设置日志集类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     * @param _logsetType 日志集类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     * 
                     */
                    void SetLogsetType(const std::string& _logsetType);

                    /**
                     * 判断参数 LogsetType 是否已赋值
                     * @return LogsetType 是否已赋值
                     * 
                     */
                    bool LogsetTypeHasBeenSet() const;

                private:

                    /**
                     * 日志集的名字，不能和cls其他日志集重名。不填默认为clb_logset。
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 日志集的保存周期，单位：天。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 日志集类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     */
                    std::string m_logsetType;
                    bool m_logsetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATECLSLOGSETREQUEST_H_
