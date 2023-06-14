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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEPAGEDLOGCONFIGLISTREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEPAGEDLOGCONFIGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribePagedLogConfigList请求参数结构体
                */
                class DescribePagedLogConfigListRequest : public AbstractModel
                {
                public:
                    DescribePagedLogConfigListRequest();
                    ~DescribePagedLogConfigListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 ID
                     * @return EnvironmentId 环境 ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境 ID
                     * @param _environmentId 环境 ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取应用 ID
                     * @return ApplicationId 应用 ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用 ID
                     * @param _applicationId 应用 ID
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
                     * 获取应用名
                     * @return ApplicationName 应用名
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名
                     * @param _applicationName 应用名
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取规则名
                     * @return Name 规则名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名
                     * @param _name 规则名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分页大小，默认 20
                     * @return Limit 分页大小，默认 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认 20
                     * @param _limit 分页大小，默认 20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取翻页游标
                     * @return ContinueToken 翻页游标
                     * 
                     */
                    std::string GetContinueToken() const;

                    /**
                     * 设置翻页游标
                     * @param _continueToken 翻页游标
                     * 
                     */
                    void SetContinueToken(const std::string& _continueToken);

                    /**
                     * 判断参数 ContinueToken 是否已赋值
                     * @return ContinueToken 是否已赋值
                     * 
                     */
                    bool ContinueTokenHasBeenSet() const;

                private:

                    /**
                     * 环境 ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 应用 ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 规则名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页大小，默认 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页游标
                     */
                    std::string m_continueToken;
                    bool m_continueTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEPAGEDLOGCONFIGLISTREQUEST_H_
