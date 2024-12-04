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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATETRIALLICENSEREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATETRIALLICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * CreateTrialLicense请求参数结构体
                */
                class CreateTrialLicenseRequest : public AbstractModel
                {
                public:
                    CreateTrialLicenseRequest();
                    ~CreateTrialLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取功能 ID 数组
                     * @return FeatureIds 功能 ID 数组
                     * 
                     */
                    std::vector<uint64_t> GetFeatureIds() const;

                    /**
                     * 设置功能 ID 数组
                     * @param _featureIds 功能 ID 数组
                     * 
                     */
                    void SetFeatureIds(const std::vector<uint64_t>& _featureIds);

                    /**
                     * 判断参数 FeatureIds 是否已赋值
                     * @return FeatureIds 是否已赋值
                     * 
                     */
                    bool FeatureIdsHasBeenSet() const;

                    /**
                     * 获取Url分组
                     * @return Group Url分组
                     * 
                     */
                    uint64_t GetGroup() const;

                    /**
                     * 设置Url分组
                     * @param _group Url分组
                     * 
                     */
                    void SetGroup(const uint64_t& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 功能 ID 数组
                     */
                    std::vector<uint64_t> m_featureIds;
                    bool m_featureIdsHasBeenSet;

                    /**
                     * Url分组
                     */
                    uint64_t m_group;
                    bool m_groupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATETRIALLICENSEREQUEST_H_
