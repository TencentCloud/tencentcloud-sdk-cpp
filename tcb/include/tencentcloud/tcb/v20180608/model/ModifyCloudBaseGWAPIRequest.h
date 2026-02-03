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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLOUDBASEGWAPIREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLOUDBASEGWAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseOption.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyCloudBaseGWAPI请求参数结构体
                */
                class ModifyCloudBaseGWAPIRequest : public AbstractModel
                {
                public:
                    ModifyCloudBaseGWAPIRequest();
                    ~ModifyCloudBaseGWAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service ID
                     * @return ServiceId Service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
                     * @param _serviceId Service ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取API ID
                     * @return APIId API ID
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置API ID
                     * @param _aPIId API ID
                     * 
                     */
                    void SetAPIId(const std::string& _aPIId);

                    /**
                     * 判断参数 APIId 是否已赋值
                     * @return APIId 是否已赋值
                     * 
                     */
                    bool APIIdHasBeenSet() const;

                    /**
                     * 获取选项列表，key取值：domain, path。
                     * @return Options 选项列表，key取值：domain, path。
                     * 
                     */
                    std::vector<CloudBaseOption> GetOptions() const;

                    /**
                     * 设置选项列表，key取值：domain, path。
                     * @param _options 选项列表，key取值：domain, path。
                     * 
                     */
                    void SetOptions(const std::vector<CloudBaseOption>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API ID
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * 选项列表，key取值：domain, path。
                     */
                    std::vector<CloudBaseOption> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYCLOUDBASEGWAPIREQUEST_H_
