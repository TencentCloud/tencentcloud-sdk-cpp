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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETERUNTIMEREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETERUNTIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DeleteRuntime请求参数结构体
                */
                class DeleteRuntimeRequest : public AbstractModel
                {
                public:
                    DeleteRuntimeRequest();
                    ~DeleteRuntimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的Runtime名
                     * @return Runtime 要删除的Runtime名
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置要删除的Runtime名
                     * @param _runtime 要删除的Runtime名
                     * 
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                private:

                    /**
                     * 要删除的Runtime名
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETERUNTIMEREQUEST_H_
