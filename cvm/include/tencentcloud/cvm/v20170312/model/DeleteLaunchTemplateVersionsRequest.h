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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DELETELAUNCHTEMPLATEVERSIONSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DELETELAUNCHTEMPLATEVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteLaunchTemplateVersions请求参数结构体
                */
                class DeleteLaunchTemplateVersionsRequest : public AbstractModel
                {
                public:
                    DeleteLaunchTemplateVersionsRequest();
                    ~DeleteLaunchTemplateVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取启动模板ID。可通过 [DescribeLaunchTemplates](https://cloud.tencent.com/document/api/213/66322) 接口返回值中的`LaunchTemplateId`获取。
                     * @return LaunchTemplateId 启动模板ID。可通过 [DescribeLaunchTemplates](https://cloud.tencent.com/document/api/213/66322) 接口返回值中的`LaunchTemplateId`获取。
                     * 
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置启动模板ID。可通过 [DescribeLaunchTemplates](https://cloud.tencent.com/document/api/213/66322) 接口返回值中的`LaunchTemplateId`获取。
                     * @param _launchTemplateId 启动模板ID。可通过 [DescribeLaunchTemplates](https://cloud.tencent.com/document/api/213/66322) 接口返回值中的`LaunchTemplateId`获取。
                     * 
                     */
                    void SetLaunchTemplateId(const std::string& _launchTemplateId);

                    /**
                     * 判断参数 LaunchTemplateId 是否已赋值
                     * @return LaunchTemplateId 是否已赋值
                     * 
                     */
                    bool LaunchTemplateIdHasBeenSet() const;

                    /**
                     * 获取实例启动模板版本列表。可通过 [DescribeLaunchTemplateVersions](https://cloud.tencent.com/document/api/213/66323) 接口返回值中的`LaunchTemplateVersion`获取。
                     * @return LaunchTemplateVersions 实例启动模板版本列表。可通过 [DescribeLaunchTemplateVersions](https://cloud.tencent.com/document/api/213/66323) 接口返回值中的`LaunchTemplateVersion`获取。
                     * 
                     */
                    std::vector<int64_t> GetLaunchTemplateVersions() const;

                    /**
                     * 设置实例启动模板版本列表。可通过 [DescribeLaunchTemplateVersions](https://cloud.tencent.com/document/api/213/66323) 接口返回值中的`LaunchTemplateVersion`获取。
                     * @param _launchTemplateVersions 实例启动模板版本列表。可通过 [DescribeLaunchTemplateVersions](https://cloud.tencent.com/document/api/213/66323) 接口返回值中的`LaunchTemplateVersion`获取。
                     * 
                     */
                    void SetLaunchTemplateVersions(const std::vector<int64_t>& _launchTemplateVersions);

                    /**
                     * 判断参数 LaunchTemplateVersions 是否已赋值
                     * @return LaunchTemplateVersions 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionsHasBeenSet() const;

                private:

                    /**
                     * 启动模板ID。可通过 [DescribeLaunchTemplates](https://cloud.tencent.com/document/api/213/66322) 接口返回值中的`LaunchTemplateId`获取。
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * 实例启动模板版本列表。可通过 [DescribeLaunchTemplateVersions](https://cloud.tencent.com/document/api/213/66323) 接口返回值中的`LaunchTemplateVersion`获取。
                     */
                    std::vector<int64_t> m_launchTemplateVersions;
                    bool m_launchTemplateVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DELETELAUNCHTEMPLATEVERSIONSREQUEST_H_
