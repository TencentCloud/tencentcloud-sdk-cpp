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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULEDETAILREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeModuleDetail请求参数结构体
                */
                class DescribeModuleDetailRequest : public AbstractModel
                {
                public:
                    DescribeModuleDetailRequest();
                    ~DescribeModuleDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块ID，如em-qn46snq8。
                     * @return ModuleId 模块ID，如em-qn46snq8。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置模块ID，如em-qn46snq8。
                     * @param _moduleId 模块ID，如em-qn46snq8。
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                private:

                    /**
                     * 模块ID，如em-qn46snq8。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULEDETAILREQUEST_H_
