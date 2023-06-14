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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONINFOSRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/ApplicationItem.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeApplicationInfos返回参数结构体
                */
                class DescribeApplicationInfosResponse : public AbstractModel
                {
                public:
                    DescribeApplicationInfosResponse();
                    ~DescribeApplicationInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用列表
                     * @return ApplicationInfos 应用列表
                     * 
                     */
                    std::vector<ApplicationItem> GetApplicationInfos() const;

                    /**
                     * 判断参数 ApplicationInfos 是否已赋值
                     * @return ApplicationInfos 是否已赋值
                     * 
                     */
                    bool ApplicationInfosHasBeenSet() const;

                    /**
                     * 获取是否包含所有的应用，0-不包含，1-包含
                     * @return AllOption 是否包含所有的应用，0-不包含，1-包含
                     * 
                     */
                    int64_t GetAllOption() const;

                    /**
                     * 判断参数 AllOption 是否已赋值
                     * @return AllOption 是否已赋值
                     * 
                     */
                    bool AllOptionHasBeenSet() const;

                private:

                    /**
                     * 应用列表
                     */
                    std::vector<ApplicationItem> m_applicationInfos;
                    bool m_applicationInfosHasBeenSet;

                    /**
                     * 是否包含所有的应用，0-不包含，1-包含
                     */
                    int64_t m_allOption;
                    bool m_allOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONINFOSRESPONSE_H_
