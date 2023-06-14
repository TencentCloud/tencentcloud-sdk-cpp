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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEMONITORTYPESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEMONITORTYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeMonitorTypes请求参数结构体
                */
                class DescribeMonitorTypesRequest : public AbstractModel
                {
                public:
                    DescribeMonitorTypesRequest();
                    ~DescribeMonitorTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，固定值 monitor
                     * @return Module 模块名，固定值 monitor
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，固定值 monitor
                     * @param _module 模块名，固定值 monitor
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                private:

                    /**
                     * 模块名，固定值 monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEMONITORTYPESREQUEST_H_
