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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYAPPLICATIONBASICINFOREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYAPPLICATIONBASICINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/ApplicationBasicInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * ModifyApplicationBasicInfo请求参数结构体
                */
                class ModifyApplicationBasicInfoRequest : public AbstractModel
                {
                public:
                    ModifyApplicationBasicInfoRequest();
                    ~ModifyApplicationBasicInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用模板ID
                     * @return ApplicationId 应用模板ID
                     */
                    uint64_t GetApplicationId() const;

                    /**
                     * 设置应用模板ID
                     * @param ApplicationId 应用模板ID
                     */
                    void SetApplicationId(const uint64_t& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用模板基本信息
                     * @return BasicInfo 应用模板基本信息
                     */
                    ApplicationBasicInfo GetBasicInfo() const;

                    /**
                     * 设置应用模板基本信息
                     * @param BasicInfo 应用模板基本信息
                     */
                    void SetBasicInfo(const ApplicationBasicInfo& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     */
                    bool BasicInfoHasBeenSet() const;

                private:

                    /**
                     * 应用模板ID
                     */
                    uint64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用模板基本信息
                     */
                    ApplicationBasicInfo m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYAPPLICATIONBASICINFOREQUEST_H_
