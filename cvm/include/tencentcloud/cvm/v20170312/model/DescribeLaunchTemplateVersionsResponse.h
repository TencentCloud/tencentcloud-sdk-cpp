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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/LaunchTemplateVersionInfo.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeLaunchTemplateVersions返回参数结构体
                */
                class DescribeLaunchTemplateVersionsResponse : public AbstractModel
                {
                public:
                    DescribeLaunchTemplateVersionsResponse();
                    ~DescribeLaunchTemplateVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例启动模板总数。
                     * @return TotalCount 实例启动模板总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取实例启动模板版本集合。
                     * @return LaunchTemplateVersionSet 实例启动模板版本集合。
                     * 
                     */
                    std::vector<LaunchTemplateVersionInfo> GetLaunchTemplateVersionSet() const;

                    /**
                     * 判断参数 LaunchTemplateVersionSet 是否已赋值
                     * @return LaunchTemplateVersionSet 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionSetHasBeenSet() const;

                private:

                    /**
                     * 实例启动模板总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例启动模板版本集合。
                     */
                    std::vector<LaunchTemplateVersionInfo> m_launchTemplateVersionSet;
                    bool m_launchTemplateVersionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_H_
