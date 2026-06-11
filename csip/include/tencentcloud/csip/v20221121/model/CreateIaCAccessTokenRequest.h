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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIACACCESSTOKENREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIACACCESSTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateIaCAccessToken请求参数结构体
                */
                class CreateIaCAccessTokenRequest : public AbstractModel
                {
                public:
                    CreateIaCAccessTokenRequest();
                    ~CreateIaCAccessTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CI/CD名称</p>
                     * @return Name <p>CI/CD名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>CI/CD名称</p>
                     * @param _name <p>CI/CD名称</p>
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
                     * 获取<p>扫描结果存储时长(30/60/90/120/150/180天)</p>
                     * @return Period <p>扫描结果存储时长(30/60/90/120/150/180天)</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>扫描结果存储时长(30/60/90/120/150/180天)</p>
                     * @param _period <p>扫描结果存储时长(30/60/90/120/150/180天)</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * <p>CI/CD名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>扫描结果存储时长(30/60/90/120/150/180天)</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEIACACCESSTOKENREQUEST_H_
