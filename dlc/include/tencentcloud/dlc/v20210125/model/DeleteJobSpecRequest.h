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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETEJOBSPECREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETEJOBSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DeleteJobSpec请求参数结构体
                */
                class DeleteJobSpecRequest : public AbstractModel
                {
                public:
                    DeleteJobSpecRequest();
                    ~DeleteJobSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置ID
                     * @return SpecId 配置ID
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置配置ID
                     * @param _specId 配置ID
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                private:

                    /**
                     * 配置ID
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETEJOBSPECREQUEST_H_
