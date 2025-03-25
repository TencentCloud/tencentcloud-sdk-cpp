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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDAPPSRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDAPPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidApp.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeAndroidApps返回参数结构体
                */
                class DescribeAndroidAppsResponse : public AbstractModel
                {
                public:
                    DescribeAndroidAppsResponse();
                    ~DescribeAndroidAppsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓应用列表
                     * @return Apps 安卓应用列表
                     * 
                     */
                    std::vector<AndroidApp> GetApps() const;

                    /**
                     * 判断参数 Apps 是否已赋值
                     * @return Apps 是否已赋值
                     * 
                     */
                    bool AppsHasBeenSet() const;

                    /**
                     * 获取安卓应用列表长度
                     * @return TotalCount 安卓应用列表长度
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 安卓应用列表
                     */
                    std::vector<AndroidApp> m_apps;
                    bool m_appsHasBeenSet;

                    /**
                     * 安卓应用列表长度
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDAPPSRESPONSE_H_
