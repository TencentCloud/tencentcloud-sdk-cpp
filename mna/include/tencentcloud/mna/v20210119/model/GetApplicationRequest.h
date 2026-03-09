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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetApplication请求参数结构体
                */
                class GetApplicationRequest : public AbstractModel
                {
                public:
                    GetApplicationRequest();
                    ~GetApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用id
                     * @return MpApplicationId 应用id
                     * 
                     */
                    std::string GetMpApplicationId() const;

                    /**
                     * 设置应用id
                     * @param _mpApplicationId 应用id
                     * 
                     */
                    void SetMpApplicationId(const std::string& _mpApplicationId);

                    /**
                     * 判断参数 MpApplicationId 是否已赋值
                     * @return MpApplicationId 是否已赋值
                     * 
                     */
                    bool MpApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 应用id
                     */
                    std::string m_mpApplicationId;
                    bool m_mpApplicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETAPPLICATIONREQUEST_H_
