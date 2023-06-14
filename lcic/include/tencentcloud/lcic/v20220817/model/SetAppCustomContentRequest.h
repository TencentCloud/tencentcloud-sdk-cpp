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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_SETAPPCUSTOMCONTENTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_SETAPPCUSTOMCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/AppCustomContent.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * SetAppCustomContent请求参数结构体
                */
                class SetAppCustomContentRequest : public AbstractModel
                {
                public:
                    SetAppCustomContentRequest();
                    ~SetAppCustomContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义内容。
                     * @return CustomContent 自定义内容。
                     * 
                     */
                    std::vector<AppCustomContent> GetCustomContent() const;

                    /**
                     * 设置自定义内容。
                     * @param _customContent 自定义内容。
                     * 
                     */
                    void SetCustomContent(const std::vector<AppCustomContent>& _customContent);

                    /**
                     * 判断参数 CustomContent 是否已赋值
                     * @return CustomContent 是否已赋值
                     * 
                     */
                    bool CustomContentHasBeenSet() const;

                    /**
                     * 获取应用ID。
                     * @return SdkAppId 应用ID。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID。
                     * @param _sdkAppId 应用ID。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * 自定义内容。
                     */
                    std::vector<AppCustomContent> m_customContent;
                    bool m_customContentHasBeenSet;

                    /**
                     * 应用ID。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_SETAPPCUSTOMCONTENTREQUEST_H_
