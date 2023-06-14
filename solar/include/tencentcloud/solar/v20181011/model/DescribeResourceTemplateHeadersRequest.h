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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBERESOURCETEMPLATEHEADERSREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBERESOURCETEMPLATEHEADERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * DescribeResourceTemplateHeaders请求参数结构体
                */
                class DescribeResourceTemplateHeadersRequest : public AbstractModel
                {
                public:
                    DescribeResourceTemplateHeadersRequest();
                    ~DescribeResourceTemplateHeadersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取微信公众号appId
                     * @return WxAppId 微信公众号appId
                     * 
                     */
                    std::string GetWxAppId() const;

                    /**
                     * 设置微信公众号appId
                     * @param _wxAppId 微信公众号appId
                     * 
                     */
                    void SetWxAppId(const std::string& _wxAppId);

                    /**
                     * 判断参数 WxAppId 是否已赋值
                     * @return WxAppId 是否已赋值
                     * 
                     */
                    bool WxAppIdHasBeenSet() const;

                private:

                    /**
                     * 微信公众号appId
                     */
                    std::string m_wxAppId;
                    bool m_wxAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_DESCRIBERESOURCETEMPLATEHEADERSREQUEST_H_
