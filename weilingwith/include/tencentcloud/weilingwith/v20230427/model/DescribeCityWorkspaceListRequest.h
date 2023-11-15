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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBECITYWORKSPACELISTREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBECITYWORKSPACELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeCityWorkspaceList请求参数结构体
                */
                class DescribeCityWorkspaceListRequest : public AbstractModel
                {
                public:
                    DescribeCityWorkspaceListRequest();
                    ~DescribeCityWorkspaceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取行政区编码集合
                     * @return AdministrativeCodeSet 行政区编码集合
                     * 
                     */
                    std::vector<std::string> GetAdministrativeCodeSet() const;

                    /**
                     * 设置行政区编码集合
                     * @param _administrativeCodeSet 行政区编码集合
                     * 
                     */
                    void SetAdministrativeCodeSet(const std::vector<std::string>& _administrativeCodeSet);

                    /**
                     * 判断参数 AdministrativeCodeSet 是否已赋值
                     * @return AdministrativeCodeSet 是否已赋值
                     * 
                     */
                    bool AdministrativeCodeSetHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                private:

                    /**
                     * 行政区编码集合
                     */
                    std::vector<std::string> m_administrativeCodeSet;
                    bool m_administrativeCodeSetHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBECITYWORKSPACELISTREQUEST_H_
