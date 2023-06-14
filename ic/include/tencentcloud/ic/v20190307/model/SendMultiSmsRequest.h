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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_SENDMULTISMSREQUEST_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_SENDMULTISMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * SendMultiSms请求参数结构体
                */
                class SendMultiSmsRequest : public AbstractModel
                {
                public:
                    SendMultiSmsRequest();
                    ~SendMultiSmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return Sdkappid 应用ID
                     * 
                     */
                    std::string GetSdkappid() const;

                    /**
                     * 设置应用ID
                     * @param _sdkappid 应用ID
                     * 
                     */
                    void SetSdkappid(const std::string& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     * 
                     */
                    bool SdkappidHasBeenSet() const;

                    /**
                     * 获取卡片列表
                     * @return Iccids 卡片列表
                     * 
                     */
                    std::vector<std::string> GetIccids() const;

                    /**
                     * 设置卡片列表
                     * @param _iccids 卡片列表
                     * 
                     */
                    void SetIccids(const std::vector<std::string>& _iccids);

                    /**
                     * 判断参数 Iccids 是否已赋值
                     * @return Iccids 是否已赋值
                     * 
                     */
                    bool IccidsHasBeenSet() const;

                    /**
                     * 获取短信内容 长度限制 70
                     * @return Content 短信内容 长度限制 70
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置短信内容 长度限制 70
                     * @param _content 短信内容 长度限制 70
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                    /**
                     * 卡片列表
                     */
                    std::vector<std::string> m_iccids;
                    bool m_iccidsHasBeenSet;

                    /**
                     * 短信内容 长度限制 70
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_SENDMULTISMSREQUEST_H_
