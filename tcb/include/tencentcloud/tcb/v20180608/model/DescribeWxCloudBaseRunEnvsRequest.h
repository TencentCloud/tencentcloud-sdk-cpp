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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXCLOUDBASERUNENVSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXCLOUDBASERUNENVSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeWxCloudBaseRunEnvs请求参数结构体
                */
                class DescribeWxCloudBaseRunEnvsRequest : public AbstractModel
                {
                public:
                    DescribeWxCloudBaseRunEnvsRequest();
                    ~DescribeWxCloudBaseRunEnvsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取wx应用Id
                     * @return WxAppId wx应用Id
                     * 
                     */
                    std::string GetWxAppId() const;

                    /**
                     * 设置wx应用Id
                     * @param _wxAppId wx应用Id
                     * 
                     */
                    void SetWxAppId(const std::string& _wxAppId);

                    /**
                     * 判断参数 WxAppId 是否已赋值
                     * @return WxAppId 是否已赋值
                     * 
                     */
                    bool WxAppIdHasBeenSet() const;

                    /**
                     * 获取是否查询全地域
                     * @return AllRegions 是否查询全地域
                     * 
                     */
                    bool GetAllRegions() const;

                    /**
                     * 设置是否查询全地域
                     * @param _allRegions 是否查询全地域
                     * 
                     */
                    void SetAllRegions(const bool& _allRegions);

                    /**
                     * 判断参数 AllRegions 是否已赋值
                     * @return AllRegions 是否已赋值
                     * 
                     */
                    bool AllRegionsHasBeenSet() const;

                private:

                    /**
                     * wx应用Id
                     */
                    std::string m_wxAppId;
                    bool m_wxAppIdHasBeenSet;

                    /**
                     * 是否查询全地域
                     */
                    bool m_allRegions;
                    bool m_allRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXCLOUDBASERUNENVSREQUEST_H_
